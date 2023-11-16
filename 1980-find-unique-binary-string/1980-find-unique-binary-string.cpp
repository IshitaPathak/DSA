class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        // convert every binary number to integer and add it to set
        // now iterate through 0 to 2 to the power n-1 when n is length of string
        // if its not there in the set its the answer
        unordered_set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(stoi(nums[i],0,2));
        }
        int m=pow(2,n);
        for(int i=0;i<m;i++){
             if (s.find(i) == s.end()) {
            // If not in the set, it's the answer
            string binaryStr = bitset<32>(i).to_string().substr(32 - n);
            return binaryStr;
          }
        }
        return "";
    }
};