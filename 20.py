'''
Created: 2019-09-21 13:35:07
Author : YukiMuraRindon
Email : rinndonn@outlook.com
-----
Description: 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。
'''

class Solution:
    def isValid(self, s):
        while '{}' in s or '()' in s or '[]' in s:
            s = s.replace('{}', '')
            s = s.replace('[]', '')
            s = s.replace('()', '')
        return s == ''

s=Solution()
print (s.isValid("{}{}{}{}()()[}][]"))
'''
执行结果：
通过
显示详情
执行用时 :
76 ms
, 在所有 Python3 提交中击败了
21.85%
的用户
内存消耗 :
13.8 MB
, 在所有 Python3 提交中击败了
5.51%
的用户'''