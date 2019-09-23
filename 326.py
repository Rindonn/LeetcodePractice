'''
Created: 2019-09-23 12:12:08
Author : YukiMuraRindon
Email : rinndonn@outlook.com
-----
Description:给定一个整数，写一个函数来判断它是否是 3 的幂次方。
'''

class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n == 1:
            return True
        elif n  / 3 == 0 :
            return False
        else:
            while n % 3 == 0:
                n /= 3
                if n == 1:
                    return True
            return False
s=Solution()
print(s.isPowerOfThree(0))