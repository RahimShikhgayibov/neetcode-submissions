class Solution {
public:
    bool isAnagram(string s, string t) {
        //O(nlogn)
        // if(s.length() != t.length()){
        //     return false;
        // }

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());


        // return s==t;

        //Optimal Hashmap O(n)
        if(s.length()!=t.length()){
            return false;
        }

        unordered_map<char , int> SaygacS;
        unordered_map<char , int> SaygacT;

        for(int i=0;i<s.length();i++){
            SaygacS[s[i]]++;
            SaygacT[t[i]]++;
        }

        return SaygacS==SaygacT;

    }
};
