/*
1108. IP 地址无效化
给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。

所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。

 

示例 1：

输入：address = "1.1.1.1"
输出："1[.]1[.]1[.]1"
示例 2：

输入：address = "255.100.50.0"
输出："255[.]100[.]50[.]0"
 

提示：

给出的 address 是一个有效的 IPv4 地址
*/
#include <iostream>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string a;
        for(int i=0;i<address.length();i++){
            if(address[i] == '.'){
                a=a+"[.]";
            }
            else{
                a=a+address[i];
            }
        }
        return a;
    }
};

int main(){
    Solution s;
    string a = s.defangIPaddr("123.123.123.123");
    cout<<a;
    return 0;
}
/*
思路是拼接字符串，貌似replace方法可以通过替换字符实现。
*/
/*
执行结果：
通过
显示详情
执行用时 :
8 ms
, 在所有 C++ 提交中击败了
22.65%
的用户
内存消耗 :
8.1 MB
, 在所有 C++ 提交中击败了
100.00%
的用户
*/