class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        for(int i=0;s[i]!='\0';i++){
            if(m.count(s[i])){
               m[s[i]]=-1;
            }
            else
            {
                m.insert({s[i],i});
            }
        }
        for(int i=0;s[i]!='\0';i++){
            if(m[s[i]]!=-1){
                return i;
            }
        }
        return -1;
    }
};
