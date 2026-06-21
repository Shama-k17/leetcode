# Write your MySQL query statement below
select activity_date as day, count(*) as active_users from
(select activity_date,user_id
from Activity
group by activity_date,user_id
) D
where
DATEDIFF('2019-07-27', activity_date) < 30 
    AND DATEDIFF('2019-07-27', activity_date) >= 0
group by (activity_date);
