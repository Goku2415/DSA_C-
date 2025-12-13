class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>num;

        double a = celsius + 273.15;
        double b = (celsius*1.8)+ 32;

        num.push_back(a);
        num.push_back(b);

        // cout<<num[i];
        return num;
        
    }
};