/*判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

示例 1:

输入: 121
输出: true
示例 2:

输入: -121
输出: false
解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
示例 3:

输入: 10
输出: false
解释: 从右向左读, 为 01 。因此它不是一个回文数。
进阶:

你能不将整数转为字符串来解决这个问题吗？*/
#include<iostream>
using namespace std;
class Solution{
    public:
    int pow(int x,int y){
        int z=x;
        if(y==0){
            return 1;
        }
        for(int i=1;i<y;i++){
            x *= z;
        }
        return x;
    }
    bool isPalindrome(int x){
        if(x<0){//负数直接错
            return false;
        }
        int i=0;int y=x;
        for(i=1;y>9;i++){
            y /= 10;
        }
        if(i%2 == 0){//判断奇偶性
        cout<<i/2;
            for(int k=0;k<i/2;k++){
                if(x / pow(10,k) % 10 == x / pow(10,i-k-1) %10){
                    //cout<<x / pow(10,k) % 10<<"-------"<<pow(10,k)<<"--------"<<x<<"--------"<<pow(10,i-k-1)<<"-------"<< x / pow(10,i-k-1) %10 <<endl;
                }
                else{
                    //cout<<x / pow(10,k) % 10<<"-------"<<pow(10,k)<<"--------"<<x<<"--------"<<pow(10,i-k-1)<<"-------"<< x / pow(10,i-k-1) %10 <<endl;
                    return false;
                }
            }
            return true;
        }
        else{//是奇数 15 24 3
            for(int k=0;k<(i-1)/2;k++){
                if(x / pow(10,k) % 10 == x / pow(10,i-k-1) %10){
                    //cout<<x / pow(10,k) % 10<<"-------"<<pow(10,k)<<"--------"<<x<<"--------"<<pow(10,i-k-1)<<"-------"<< x / pow(10,i-k-1) %10 <<endl;
                }
                else{
                    //cout<<x / pow(10,k) % 10<<"-------"<<pow(10,k)<<"--------"<<x<<"--------"<<pow(10,i-k-1)<<"-------"<< x / pow(10,i-k-1) %10 <<endl;
                    return false;
                }
            }
            return true;
        }
    }
};

int main(){
    Solution s;
    bool flag;
    flag = s.isPalindrome(10);
    cout<<flag<<endl;
    return 0;
}


/*思路：先判断数字位数，如果是3位数则判断1和3位，4位数判断1和4，2和3，5位数判断1和5，2和4.
错误记录：判断位数时y>10错，应为y>9
        pow函数得到的值是double，不知道为什么，重载一下
        10的几次方参数有错
        pow循环时x *=x错
        执行结果：
通过
显示详情
执行用时 :
36 ms
, 在所有 C++ 提交中击败了
16.86%
的用户
内存消耗 :
8.1 MB
, 在所有 C++ 提交中击败了
84.89%
的用户
*/