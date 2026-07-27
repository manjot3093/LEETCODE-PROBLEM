class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.empty()){
            return 0;
        }
        unordered_set<char>window;

        int j=0;
        int maxx=0;

        for(int i=0;i<s.size();i++)
        {
            while(window.find(s[i]) != window.end())
            {
                window.erase(s[j]);
                j++;
            }
            window.insert(s[i]);

            maxx=max(maxx,i-j+1);
        }
        return maxx;
    }
};