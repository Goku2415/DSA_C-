class Solution {
  public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int maxi = 0;
        int Hvalue;
        int n= citations.size();
        for(int i=0;i<citations.size();i++){
            Hvalue = n-i;
            if( citations[i]>=Hvalue){
                maxi = max(maxi, Hvalue);
            }
        }
        return maxi;
    }
};