class Solution {
public:


    int diagonalSum(vector<vector<int>>& mat) {
        
        int row=mat.size(),col=mat[0].size();
        vector<vector<int>>ans(row,vector<int>(col,0));
        int sum = 0;
        int i=0,j=i;
        
        while(i<row && j<col){
            cout<<"loop1 ele: "<<mat[i][j]<<endl;
                sum+= mat[i][j];
                cout<<"this is sum"<<sum<<endl;
                ans[i][j]=1;
            i++;j++;
        }

        int k=0,l=mat[0].size()-1;
        while(k<row && l>=0){
            cout<<"loop2 ele: "<<mat[k][l]<<endl;
                sum+=mat[k][l];
                cout<<"This is sum inside 2nd loop"<<sum<<endl;
                ans[k][l]=1;
            k++;l--;

        }
        if(row%2!=0){
            int h = (row-1)/2;
            sum-= mat[h][h];
        }



        return sum;
        
    }
};