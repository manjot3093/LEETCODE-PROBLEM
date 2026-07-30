class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        int maxcount=0;
        int count=0;
        int m=n;
        while(m>0)
        {
            int temp=m%10;
            arr.push_back(temp);
            count++;
            m=m/10;
        }

        sort(arr.begin(),arr.end());

        return arr[count-1]*arr[count-2];
    }
};