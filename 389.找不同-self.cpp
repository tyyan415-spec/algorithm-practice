//给定两个字符串 s 和 t ，它们只包含小写字母。
//字符串 t 由字符串 s 随机重排，然后在随机位置添加一个字母。
//请找出在 t 中被添加的字母。
class Solution {
public:
    char findTheDifference(string s, string t) {
        int word1[26] = {0};
        int word2[26] = {0};
        int l = s.size();
        for(int i = 0; i < l; i++){
            word1[s[i]-'a']++;
        }
        for(int i = 0; i < l+1; i++){
            word2[t[i]-'a']++;
        }
        for(int i = 0; i<26; i++){
            if(word1[i]-word2[i]!=0)
            return 'a'+i;
        }
        return 0;
    }
};
