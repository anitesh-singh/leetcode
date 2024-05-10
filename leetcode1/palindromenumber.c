// 9.palindrome number
// https://leetcode.com/problems/palindrome-number/description/
/*bool isPalindrome(int x) {
    long long int a=x,dig_sum=0;
    if(x<0){
        return false;
    }
    while(a){
        int temp;
        temp=a%10;
        a=a/10;
        dig_sum=(dig_sum*10)+temp;
    }
    if(x==dig_sum)
        return true;

    else
        return false;
    
}*/