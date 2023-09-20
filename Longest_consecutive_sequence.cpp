int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n=a.size();
    if(n==0) return 0;
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    
    // now we need to iterate the set
    for(auto it:st){
        // if its the first element your previous one will not be in the set
        // so means you are the part of sequence that I'm trying to count, so count will equal to 1
        if(st.find(it-1)==st.end()){
            int count =1;
            int x=it; // x is the first element
            
            //now lets look if we have next x+1
            while(st.find(x+1)!=st.end()){
                x=x+1;
                count=count+1;
            }
            longest=max(count,longest);
        }
    }
    return longest;
}
