/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
    let l=0;
    let r=height.length-1;
    let lb=height[l];
    let rb=height[r];
    let sum=0;
    while(l<r){
        if(lb<=rb){
            l++;
            lb=Math.max(lb,height[l]);
            sum=sum+lb-height[l];
        }
        else{
            r--;
            rb=Math.max(rb,height[r]);
            sum=sum+rb-height[r];
        }
    }
    return sum;
};