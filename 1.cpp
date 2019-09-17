/*
 * @Author: YukiMuraRindon 
 * @Date: 2019-09-17 13:34:46 
 * @Last Modified by:   YukiMuraRindon 
 * @Last Modified time: 2019-09-17 13:34:46 
 */
/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

示例:

给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        for(i=0;i<nums.size()-1;i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                   return {i,j};
                }
            }
        }
        return {i,j};
    };
};
int main(){
    Solution s;
    vector<int> b = {2,7,11,15};
    vector<int> a=s.twoSum(b,17);
    for (int i=0; i<a.size(); i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
//暴力，两遍循环
/*执行结果：
通过
显示详情
执行用时 :
204 ms
, 在所有 C++ 提交中击败了
45.51%
的用户
内存消耗 :
9 MB
, 在所有 C++ 提交中击败了
98.40%
的用户*/