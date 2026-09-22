class Solution {
public:
void merge(vector<int>& arr,int st,int mid,int end){
    int i=st;
    int j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
        temp.push_back(arr[i++]);
    }else{
        temp.push_back(arr[j++]);
    }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=end){
        temp.push_back(arr[j++]);
    }
    for(int k=0;k<temp.size();k++){
        arr[k+st]=temp[k];
    }
}
int mergeSort(vector<int>& arr,int st,int end){
    int count=0;
    if(st>=end) return 0;
    int mid=st+(end-st)/2;
    count+=mergeSort(arr,st,mid);
    count+=mergeSort(arr,mid+1,end);
    count+=countPairs(arr,st,mid,end);
    merge(arr,st,mid,end);
    return count;
}
int countPairs(vector<int>& arr, int st,int mid,int end){
    int count=0;
    int right=mid+1;
    for(int m=st;m<=mid;m++){
        while(right<=end && (long long)arr[m]>2LL*arr[right]){
            right++;
        }
        count+=(right-(mid+1));
    }
    return count;
}
    int reversePairs(vector<int>& arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};