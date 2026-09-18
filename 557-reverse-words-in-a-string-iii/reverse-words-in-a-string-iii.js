/**
 * @param {string} s
 * @return {string}
 */
 function reverse(value){
    
    let a=value.split('');
    let i=0;
    let j=value.length;
    while(i<j){
        let temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return a.join('');
 }
var reverseWords = function(s) {
    let ans=[];
    let str=s.split(' ');
    for(let item of str){
    ans.push(reverse(item));
}
ans=ans.join(' ');
return ans;
};

