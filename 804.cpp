/*
国际摩尔斯密码定义一种标准编码方式，将每个字母对应于一个由一系列点和短线组成的字符串， 比如: "a" 对应 ".-", "b" 对应 "-...", "c" 对应 "-.-.", 等等。

为了方便，所有26个英文字母对应摩尔斯密码表如下：

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
给定一个单词列表，每个单词可以写成每个字母对应摩尔斯密码的组合。例如，"cab" 可以写成 "-.-..--..."，(即 "-.-." + "-..." + ".-"字符串的结合)。我们将这样一个连接过程称作单词翻译。

返回我们可以获得所有词不同单词翻译的数量。

例如:
输入: words = ["gin", "zen", "gig", "msg"]
输出: 2
解释: 
各单词翻译如下:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."

共有 2 种不同翻译, "--...-." 和 "--...--.".
 

注意:

单词列表words 的长度不会超过 100。
每个单词 words[i]的长度范围为 [1, 12]。
每个单词 words[i]只包含小写字母。
*/
#include <vector>
#include<iostream>
#include<set>

using namespace std;

class Solution {
        public:
        int uniqueMorseRepresentations(vector<string>& words) {
            //定义容器
            vector<string> cipher={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
            set<string> result;
            for(int i=0;i<words.size();i++)
            {
                string s="";
                for(int j=0;j<words[i].size();j++)
                {
                    s+=cipher[words[i][j]-'a'];//翻译并插入s
                }
                result.insert(s);//把翻译出来的单词插入result
            }
            return result.size();//返回result的长度
        }
    };

int main(){
    Solution s;
    vector<string> word = {"gin","zen","gig","msg"};
    int a = s.uniqueMorseRepresentations(word);
    cout<<a;
    return 0;
}
/*
利用set去重，参考题解https://leetcode-cn.com/problems/unique-morse-code-words/solution/cpu-tong-bian-li-jie-fa-by-ma-cheng-peng-2/

执行结果：
通过
显示详情
执行用时 :
4 ms
, 在所有 C++ 提交中击败了
94.97%
的用户
内存消耗 :
8.9 MB
, 在所有 C++ 提交中击败了
82.39%
的用户
*//