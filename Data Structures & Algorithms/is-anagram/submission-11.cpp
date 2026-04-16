class Solution {
public:
    bool isAnagram(string s, string t) {

        //hashmap solution
        // if(s.size()!=t.size()){
        //     return false;
        // }

        // unordered_map<int,int> mp1;
        // unordered_map<int,int> mp2;

        // for(int i=0;i<s.size();i++){
        //     mp1[s[i]]++;
        //     mp2[t[i]]++;
        // }

        // if(mp1==mp2){
        //     return true;
        // }
        // return false;

        //sort then check

        if(s.size()!=t.size()){
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t){
            return true;
        }
        return false;
    }
};
