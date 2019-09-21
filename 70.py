'''
Created: 2019-09-21 13:39:49
Author : YukiMuraRindon
Email : rinndonn@outlook.com
-----
Description: 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

注意：给定 n 是一个正整数。
'''
class Solution:
    def climbStairs(self, n: int) -> int:
        a=0
        b=1
        c=0
        while n>0:
            c=a+b
            a=b
            b=c
            n-=1
        return c

s=Solution()
print(s.climbStairs(3))
'''
执行结果：
通过
显示详情
执行用时 :
40 ms
, 在所有 Python3 提交中击败了
95.27%
的用户
内存消耗 :
13.7 MB
, 在所有 Python3 提交中击败了
5.14%
的用户'''