class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int rowno, oneCount=INT_MIN, i;
        int n = mat.size();
 
        vector<int> ans;

        for( i=0 ;i<n;i++){
            int count = 0;

            for(int j =0; j<mat[i].size();j++){

                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>oneCount){
                oneCount = count;
                rowno = i;
            }
        }

        ans.push_back(rowno);
        ans.push_back(oneCount);

        return ans;
    }
};