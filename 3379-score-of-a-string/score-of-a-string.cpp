class Solution {
public:
    int scoreOfString(string& s) {
            int diff = 0;
            int sum =0;
        for(int i=0;i<s.size()-1;i++){

            int a= '0'+s[i];
            cout<<"the value of ia: "<<a<<endl;
            int b = '0'+s[i+1];
            cout<<"the value of ib: "<<b<<endl;
            diff=abs(a-b);
            cout<<"the diff is "<<diff<<endl;
            sum+=diff;
            cout<<"the sum is "<<sum<<endl;
        }
        return sum;
}
};