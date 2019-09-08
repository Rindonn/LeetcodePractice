/*
编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。

现有一个链表 -- head = [4,5,1,9]，它可以表示为:
示例 1:

输入: head = [4,5,1,9], node = 5
输出: [4,1,9]
解释: 给定你链表中值为 5 的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.
示例 2:

输入: head = [4,5,1,9], node = 1
输出: [4,5,9]
解释: 给定你链表中值为 1 的第三个节点，那么在调用了你的函数之后，该链表应变为 4 -> 5 -> 9.
说明:

链表至少包含两个节点。
链表中所有节点的值都是唯一的。
给定的节点为非末尾节点并且一定是链表中的一个有效节点。
不要从你的函数中返回任何结果。
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}//构造函数
};

void add(int n,ListNode *p){
    ListNode *node;
    node->val = n;
    node->next = 0;
    p->next=node;
    p=node;
}
void print(ListNode *head){
    while(head->next!=0)
    {
        cout<<head->next->val;
        head = head ->next;
    }
    cout<<"NULL!!!!!!!"<<endl;
}

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};


int main(){
    ListNode *head = 0;
    ListNode *p = head;
    add(4,p);
    add(5,p);
    add(6,p);
    print(head);
    cout<<"done"<<endl;
    return 0;
}
/*
思路：要写的是删除节点的方法，传入了当前节点，一般思路是更改上一个节点的next指针，既然这里找不到上一个节点，
考虑把之后那个节点的值复制过来，然后修改当前节点的指针
 
 执行结果：
通过
显示详情
执行用时 :
16 ms
, 在所有 C++ 提交中击败了
93.13%
的用户
内存消耗 :
9.2 MB
, 在所有 C++ 提交中击败了
51.88%
的用户*/