class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        for(int i=n;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
            }else{
              digits[i]=digits[i]+1;
               return digits;
            }
        }
        // if the loop completes withouth returning inside, it means all the element were 9.
        // In this case , it adds a new element 0 to the end of the digits vector and set the first element to 1( as a carry over)
        digits.insert(digits.begin(),1);
        return digits;
    }
};