class Solution {
    vector<int> nextSmallerLeft(vector<int>& arr){
        int n=arr.size();
        stack<pair<int,int>> st;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int elem=arr[i];
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
     vector<int> nextSmallerRight(vector<int>& arr){
        int n=arr.size();
        stack<pair<int,int>> st;
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            int elem=arr[i];
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
  public:
    int getMaxArea(vector<int> &arr) {
        int n=arr.size();
        
        vector<int> nsl=nextSmallerLeft(arr);
        vector<int> nsr=nextSmallerRight(arr);
        
        /*vector<int> width(n);
        for(int i=0;i<n;i++){
            width[i]=nsr[i]-nsl[i]-1;
        }
        
        vector<int> area(n);
        for(int i=0;i<n;i++){
            area[i]=arr[i]*width[i];
        }
        
        int max_area=INT_MIN;
        for(int i=0;i<n;i++){
            int curr=area[i];
            if(curr>max_area){
                max_area=curr;
            }
        }*/
        int max_area=INT_MIN;
        for(int i=0;i<n;i++){
            int width=nsr[i]-nsl[i]-1;
            int height=arr[i];
            int area=width*height;
            max_area=max(area,max_area);
        }
        return max_area;
    }
};
