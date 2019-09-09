/*
实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
示例 1：

输入: "Hello"
输出: "hello"
示例 2：

输入: "here"
输出: "here"
示例 3：

输入: "LOVELY"
输出: "lovely"
*/

#include<iostream>
using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;i<str.length();i++){
            if (str[i]>64 && str[i]<91){
                str[i] +=32;
            }
        }
        return str;
    }
};

int main(){
    Solution s ;
    string a = s.toLowerCase("HHedhdHDWOJhj");
    cout<<a;
    return 0;
}
/* 入门级别、
执行结果：
通过
显示详情
执行用时 :
4 ms
, 在所有 C++ 提交中击败了
71.20%
的用户
内存消耗 :
8.2 MB
, 在所有 C++ 提交中击败了
40.10%
的用户
*/