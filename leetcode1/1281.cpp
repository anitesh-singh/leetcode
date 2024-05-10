// 1281. substract the product and sum of digit of an integer
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
/*class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem,mul=1,sum=0;
        
        while(n){
            rem=n%10;
            mul=mul*rem;
            sum=sum+rem;
            n=n/10;
        }
        return (mul-sum);
    }
};*/