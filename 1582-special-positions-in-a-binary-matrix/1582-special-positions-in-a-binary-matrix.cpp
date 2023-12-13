class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n= mat.size(); //row
        int m=mat[0].size(); //column
        int count=0;
       
        for( int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  int flag1=0,flag2=0;
                if(mat[i][j]==1){
                   
                    for(int a=0;a<n;a++){
                        if(mat[a][j]==1)   flag1+=1;
                    }
                    for(int b=0;b<m;b++){
                       if(mat[i][b]==1)    flag2+=1;
                    }   
                    
                    if(flag1 ==1 && flag2 ==1){
                     count+=1;
                    }

                 }
            }
        }
         return count;
    }
};

       