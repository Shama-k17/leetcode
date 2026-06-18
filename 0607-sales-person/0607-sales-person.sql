# Write your MySQL query statement below
select name from SalesPerson
where sales_id 
NOT IN
(select sales_id
from Company C
join Orders O
on C.com_id=O.com_id
where C.name='RED');