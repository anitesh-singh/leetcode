// 1137. N-th tribonacci number
// https://leetcode.com/problems/n-th-tribonacci-number/description/
/*int tribonacci(int n){
    if(n==0) return n;
    if(n==1||n==2) return 1;
    int f1=0,f2=1,f3=1,temp;
    for(int i=3; i<=n;i++)
    {
        temp=f1+f2+f3;
        f1=f2;
        f2=f3;
        f3=temp;
    }
    return temp;
}*/