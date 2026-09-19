/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function(nums) {
    let j=0;
    let c=0;
    let s=0;
    for(let i=0;i<nums.length-1;i++){
        s=Math.max(i+nums[i],s);
        if(i==c){
            c=s;
            j++;
        }
        
    }
    return j;
};