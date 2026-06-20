# Write your MySQL query statement below
update Salary
set sex=Case
when sex='f' Then 'm'
else 'f'
END;