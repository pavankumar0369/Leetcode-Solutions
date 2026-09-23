class Solution {
public:
    int n;
    bool solve(vector<int>& arr,int i){
        if(i<0||i>=n) return false;
        if(arr[i]==0) return true;
        if(arr[i]<0) return false;
        arr[i]*=-1;
        bool left = solve(arr,i-arr[i]);
        bool right = solve(arr,i+arr[i]);
        return left || right;
    }
    bool canReach(vector<int>& arr, int start) {
        n=arr.size();
        return solve(arr,start);
    }
};