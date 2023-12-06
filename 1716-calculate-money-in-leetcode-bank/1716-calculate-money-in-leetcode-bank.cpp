class Solution {
public:
    int totalMoney(int n) {
        int result=0;
        int mon=1;
        int money;
        while(n>0){
            money=mon;
            for(int day=1;day<=min(n,7);day++){
                result+=money;
                money++;
            }
            mon++;
            n=n-7;
        }
        return result;
    }
};