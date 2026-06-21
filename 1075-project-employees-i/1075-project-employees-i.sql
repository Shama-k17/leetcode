# Write your MySQL query statement below

select P.project_id,Round(AVG(E.experience_years),2) as average_years
from Project P
JOIN
Employee E
on E.employee_id=P.employee_id
group by project_id;