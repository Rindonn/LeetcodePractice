/*
 * Created: 2019-09-18 10:35:17
 * Author : YukiMuraRindon
 * Email : rinndonn@outlook.com
 * -----
 * Description: 
 * 你总共有 n 枚硬币，你需要将它们摆成一个阶梯形状，第 k 行就必须正好有 k 枚硬币。

给定一个数字 n，找出可形成完整阶梯行的总行数。

n 是一个非负整数，并且在32位有符号整型的范围内。

示例 1:

n = 5

硬币可排列成以下几行:
¤
¤ ¤
¤ ¤

因为第三行不完整，所以返回2.
示例 2:

n = 8

硬币可排列成以下几行:
¤
¤ ¤
¤ ¤ ¤
¤ ¤

因为第四行不完整，所以返回3.
 */
#include<iostream>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0){
            return 0;
        }
        int i=0;
        for(i=1;n>0;i++){
            if(n-i<0){
                return i-1;
            }
            n = n-i;
        }
        return i-1;
    }
};
int main(){
    Solution s;
    cout<<s.arrangeCoins(11)<<endl;
    return 0;
}
/*执行结果：
通过
显示详情
执行用时 :
24 ms
, 在所有 C++ 提交中击败了
26.39%
的用户
内存消耗 :
8.1 MB
, 在所有 C++ 提交中击败了
93.33%
的用户*/
