class Solution {
public:    
    double myPow(double x, int n) {
    return solve(x, n, 1);
}

double solve(double x, int n, double res){
    if (n == 0) return res;
    
    if (n%2 != 0){
        if (n>0) res *= x;
        else res /= x;
    }
    
    return solve(x*x, n/2, res);
}
};