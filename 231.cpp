/*
 * Created: 2019-09-18 10:17:42
 * Author : YukiMuraRindon
 * Email : rinndonn@outlook.com
 * -----
 * Description: 
 */

/*给定一个整数，编写一个函数来判断它是否是 2 的幂次方。

示例 1:

输入: 1
输出: true
解释: 20 = 1
示例 2:

输入: 16
输出: true
解释: 24 = 16
示例 3:

输入: 218
输出: false
*/
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        for(;n>0;){
            //cout<<"test"<<endl;
            if(n==1){
                return 1;
            }
            else if(n%2==0){
                n=n/2;
                //cout<<n<<endl;
            }
            else{
                //cout<<n<<"----------"<<endl;
                return false;
            }
            //cout<<"test2"<<endl;
        }
        return false;
    }
};
int main(){
    Solution s;
    cout<<s.isPowerOfTwo(3)<<endl;
    return 0;
}
/*
执行结果：
通过
显示详情
执行用时 :
4 ms
, 在所有 C++ 提交中击败了
78.22%
的用户
内存消耗 :
8.1 MB
, 在所有 C++ 提交中击败了
14.38%
的用户
附上一个牛逼解答
if(n<=0) return false; if((n&n-1)==0) return true; return false;
*/