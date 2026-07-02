class Solution {
    vector<int> nextSmallerLeft(vector<int>& height){
        int n=height.size();
        stack<pair<int,int>> st;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int elem=height[i];
            if(st.empty()){
                ans.push_back(-1);
            }else if(!st.empty()&&st.top().first<elem){
                ans.push_back(st.top().second);
            }else if(!st.empty()&& st.top().first>=elem){
                while(!st.empty()&&st.top().first>=elem){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(-1);
                }else{
                    ans.push_back(st.top().second);
                }
            }
            st.push({elem,i});
        }
        return ans;
    }
    
     vector<int> nextSmallerRight(vector<int>& height){
        int n=height.size();
        stack<pair<int,int>> st;
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            int elem=height[i];
            if(st.empty()){
                ans.push_back(n);
            }else if(!st.empty()&&st.top().first<elem){
                ans.push_back(st.top().second);
            }else if(!st.empty() && st.top().first>=elem){
                while(!st.empty() && st.top().first>=elem){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(n);
                }else{
                    ans.push_back(st.top().second);
                }
            }
            st.push({elem,i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    int maxAreaOfHistogram(vector<int> &height) {
        
        vector<int> nsl=nextSmallerLeft(height);
        vector<int> nsr=nextSmallerRight(height);
       
        int max_area=INT_MIN;
        for(int i=0;i<height.size();i++){
            int width=nsr[i]-nsl[i]-1;
            int ht=height[i];
            int area=width*ht;
            max_area=max(area,max_area);
        }
        return max_area;
    }
  public:
    int maxArea(vector<vector<int>> &mat) {
        int rows=mat.size();
        int cols=mat[0].size();
        
        vector<int> height(cols);
        
        for(int i=0;i<cols;i++){
            height[i]=mat[0][i];
        }
        
        //max area for 1st row
        int max_area=maxAreaOfHistogram(height);
        for(int i=1;i<rows;i++){
            for(int j=0;j<cols;j++){
                int elem=mat[i][j];
                if(elem==0) height[j]=0;
                else{
                    height[j]+=mat[i][j];
                }
            }
            int curr_area=maxAreaOfHistogram(height);
            max_area=max(max_area,curr_area);
        }
        return max_area;
    }
};