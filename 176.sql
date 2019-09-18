/*
 * Created: 2019-09-18 10:49:31
 * Author : YukiMuraRindon
 * Email : rinndonn@outlook.com
 * -----
 * Description: 
 */

select (SELECT DISTINCT Salary  FROM   Employee  ORDER BY Salary DESC LIMIT 1 OFFSET 1) as SecondHighestSalary