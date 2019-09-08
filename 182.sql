--# Write your MySQL query statement below
select distinct
    a.Email 
from 
    Person a,Person b 
where 
    (a.Email = b.Email) 
    and 
        (a.id != b.id);
/*
编写一个 SQL 查询，查找 Person 表中所有重复的电子邮箱。

示例：

+----+---------+
| Id | Email   |
+----+---------+
| 1  | a@b.com |
| 2  | c@d.com |
| 3  | a@b.com |
+----+---------+
根据以上输入，你的查询应返回以下结果：

+---------+
| Email   |
+---------+
| a@b.com |
+---------+
说明：所有电子邮箱都是小写字母。

执行结果：
通过
显示详情
执行用时 :
377 ms
, 在所有 MySQL 提交中击败了
60.85%
的用户
内存消耗 :N/A
*/