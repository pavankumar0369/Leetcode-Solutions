/**
 * @param {number[]} asteroids
 * @return {number[]}
 */
var asteroidCollision = function(asteroids) {
    let st=[];
        for(let a of asteroids){
            if(a>0) st.push(a);
            else{
                while(st.length!=0 && st[st.length-1]<Math.abs(a) && st[st.length-1]>0) st.pop();
                if(st.length!=0 && st[st.length-1] == Math.abs(a) && st[st.length-1]>0){
                    st.pop();
                    continue;
                }
                else if(st.length!=0 && st[st.length-1] > Math.abs(a) && st[st.length-1]>0){
                    continue;
                }
                else{
                    st.push(a);
                }
            }
        }
        return st;
};