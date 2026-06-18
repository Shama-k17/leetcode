# Write your MySQL query statement below
SELECT id, visit_date, people
FROM (
    SELECT 
        id,
        visit_date,
        people,
        LAG(people, 2) OVER (ORDER BY id) as prev_2,
        LAG(people, 1) OVER (ORDER BY id) as prev_1,
        LEAD(people, 1) OVER (ORDER BY id) as next_1,
        LEAD(people, 2) OVER (ORDER BY id) as next_2
    FROM Stadium
) subquery
WHERE people >= 100 AND (
    (prev_2 >= 100 AND prev_1 >= 100) -- Current row is the 3rd row in the sequence
    OR 
    (prev_1 >= 100 AND next_1 >= 100) -- Current row is the 2nd (middle) row in the sequence
    OR 
    (next_1 >= 100 AND next_2 >= 100) -- Current row is the 1st row in the sequence
)
ORDER BY visit_date ASC;
