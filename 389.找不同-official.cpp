class Solution {
public:
    char findTheDifference(string s, string t) {//对两个字符串中所有字符的ascii码值进行求和，然后相减，即可得出新增的字母
        int as = 0, at = 0;
        for (char ch: s) {//范围for写法，这两行是在用 范围 for 循环，把字符串 s 里的每个字符依次加到变量 as 上
            as += ch;
        }
        for (char ch: t) {
            at += ch;
        }
        return at - as;
    }
};
