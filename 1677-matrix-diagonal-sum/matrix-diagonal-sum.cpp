class Solution {
public:

    bool isSafe(vector<vector<int>>& mat,vector<vector<int>> &ans, int& i, int& j ){
        cout<<"inside the safe function "<<ans[i][j]<<endl;

        if(i==j && ans[i][j]==0){
            return true;
        }
        if(ans[i][j]==0){
            return true;
        }
        return false;
    }

    int diagonalSum(vector<vector<int>>& mat) {
        
        int row=mat.size(),col=mat[0].size();
        vector<vector<int>>ans(row,vector<int>(col,0));
        int sum = 0;
        int i=0,j=i;
        
        while(i<row && j<col){
            cout<<"loop1 ele: "<<mat[i][j]<<endl;
            if(isSafe(mat,ans,i,j)){
                sum+= mat[i][j];
                cout<<"this is sum"<<sum<<endl;
                ans[i][j]=1;
            }
            i++;j++;
        }

        int k=0,l=mat[0].size()-1;
        while(k<row && l>=0){
            cout<<"loop2 ele: "<<mat[k][l]<<endl;

            if(isSafe(mat,ans,k,l)){
                sum+=mat[k][l];
                cout<<"This is sum inside 2nd loop"<<sum<<endl;
                ans[k][l]=1;
            }
            k++;l--;

        }


        return sum;
        
    }
};