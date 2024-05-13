// 231. Power of two
// https://leetcode.com/problems/power-of-two/
/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){
            int ans = pow(2,i);
            if(ans==n){
                return true;
            }
        }
        return false;
    }
};*/

//other way
/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;
        for(int i=0;i<=30;i++){     
            if(ans==n){
                return true;
            }
            if (ans<INT_MAX/2){ // as we have initialized ans =1 i.e 2^0 above so loop will run till 2^31 which will exceed integer value
             ans = ans*2;}
            
        }
        return false;
    }
};*/

//other way(bitwise)
/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        //edge case if number is negative (the power of two is positive)
        if(n<0){
            return false;
        }
        //calculating the numbers of 1 as in power of 2 only one 1 is there
        while(n!=0){
            if (n&1){
                count++;
            }
            n=n>>1;
        }
        //checking and returning
        if (count==1) 
            return true;
        else
            return false;
        
    }
};*/
