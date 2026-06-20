class NumMatrix {
public:
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();

        prefix.resize(n,vector<int>(m,0));
        prefix[0][0]=matrix[0][0];

        for(int j=1;j<m;j++){
            prefix[0][j]=prefix[0][j-1]+matrix[0][j];
        }
        for(int i=1;i<n;i++){
            prefix[i][0]=prefix[i-1][0]+matrix[i][0];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                int top=prefix[i-1][j];
                int left=prefix[i][j-1];
                int top_left=prefix[i-1][j-1];
                int curr=matrix[i][j];
                prefix[i][j]=curr+top+left-top_left;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        

        int curr_val=prefix[row2][col2];
        int left_val=0;
        if(col1>0){
            left_val=prefix[row2][col1-1];
        }

        int top_val=0;
        if(row1>0){
            top_val=prefix[row1-1][col2];
        }
        int top_left=0;
        if(row1>0&&col1>0){
            top_left=prefix[row1-1][col1-1];
        }
        long long sum=curr_val-left_val-top_val+top_left;
        return sum;
    }
    
};

