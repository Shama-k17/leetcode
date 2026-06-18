# Write your MySQL query statement below
SELECT MAX(num) AS num
FROM (
    -- This inner query gathers the list: [1, 3, 5, 6]
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
) AS unique_numbers; 
-- The outer MAX() now looks at the whole list [1, 3, 5, 6] and picks just 6.
