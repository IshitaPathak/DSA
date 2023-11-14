class Solution {
public:
  
long long m = 1e9+7;
    long long power(long long x, long long n){
        if(n==0) return 1;
        if(n==1) return x;
        
        long long ans = power(x,n/2);
        if(n%2==0)
            return ans*ans%m;
        
        return x*ans*ans%m;
    }
    int countGoodNumbers(long long n) {
        if(n==1) return 5;
        
        long long odd = n/2;
        long long even = n - odd;
        
        return (power(5,even)%m * power(4,odd)%m)%m;
    }
};