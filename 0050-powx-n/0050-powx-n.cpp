class Solution {
public:    
    double myPow(double x, int n) {
//         int res=1;
//         while(n>0){
//              if(n%2!=0){
//             res=res*x;
//             }
//             x=x*x;
//             n=n/2;
//         }
        
//         return res;
       
    return solve(x, n, 1);
}

double solve(double x, int n, double res){
    if (n == 0) return res;
    
    // if (n%2 != 0){
    if (n&1 !=0){
        if (n>0) res = res*x;
        else res = res/x;
    }
    
    return solve(x*x, n/2, res);
  }
};