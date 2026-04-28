class Solution {
  public:
    int trap(vector<int> & height) {
        
        int i=0;
        int j=height.size()-1;
        int leftmax = INT_MIN, rightmax = INT_MIN;
        int water=0;
        
        while(i<j){
            
            leftmax = max(leftmax, height[i]);
            rightmax= max(rightmax, height[j]);
            
            if(height[i] < height[j]){
                i++;
                if(height[i]<leftmax){
                    water += leftmax-height[i];
                }
            }else{
                j--;
                if(height[j]<rightmax){
                    water += rightmax - height[j];
                }
                
            }
            
        }
        return water;
        
        
    }
};