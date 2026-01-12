//给你两个字符串 word1 和 word2 。请你从 word1 开始，通过交替添加字母来合并字符串。如果一个字符串比另一个字符串长，就将多出来的字母追加到合并后字符串的末尾。
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;//定义result来存储信字符串
        int n1 = word1.size(), n2 = word2.size();//统计两个字符串长度
        int l1 = 0, l2 = 0;//记录当前合并的字符串位置
        int i = 0;
        while (l1 < n1 && l2 < n2) {//交替合并，直至一个字符串合并完毕
            result += word1[l1++];
            result += word2[l2++];
        }
        if (l1 == n1 && l2 != n2) {//剩下未合并的字符串直接合并
            for (int i = l2; i < n2; i++)
                result += word2[i];
        }
        if (l2 == n2 && l1 != n1) {
            for (int i = l1; i < n1; i++)
                result += word1[i];
        }
        return result;
    }
};
