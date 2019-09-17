/*给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。

示例 1:

输入: [1,3,5,6], 5
输出: 2
示例 2:

输入: [1,3,5,6], 2
输出: 1
示例 3:

输入: [1,3,5,6], 7
输出: 4
示例 4:

输入: [1,3,5,6], 0
输出: 0
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0] || target == nums[0]){
            //cout<<target<<"-------"<<nums[0]<<endl;
            return 0;
        }
        if(target == nums[nums.size()-1]){
            //cout<<target<<"---0----"<<nums[nums.size()-1]<<endl;
            return nums.size()-1;
        }
        if(target > nums[nums.size()-1]){
            return nums.size();
        }
        for(int i=0;i<nums.size()-1;i++){
            if(target == nums[i]){
                return i;
            }
            else if(target>nums[i] && target<nums[i+1]){
                return i+1;
            }
        }
        return 998;
    }
};

int main(){
    Solution s;
    vector<int> num={1,3,5,6};
    cout<<s.searchInsert(num,2)<<endl;
    return 0;
}
/* 思路：先判断特殊情况，如果比第一个小或者就是第一个，再判断如果是最后一个，如果比最后一个大，最后判断中间的。
执行结果：
通过
显示详情
执行用时 :
8 ms
, 在所有 C++ 提交中击败了
83.01%
的用户
内存消耗 :
8.9 MB
, 在所有 C++ 提交中击败了
79.31%
的用户
