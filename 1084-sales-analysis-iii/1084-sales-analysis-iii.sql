# Write your MySQL query statement below
select P.product_id,P.product_name
from Product P
JOIN Sales S
on P.product_id=S.product_id
group by product_id
Having MIN(sale_date)>='2019-01-01'
AND MAX(sale_date)<='2019-03-31'