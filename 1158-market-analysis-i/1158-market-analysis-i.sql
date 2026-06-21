SELECT 
    U.user_id AS buyer_id, 
    U.join_date, 
    IFNULL(SUM(EXTRACT(YEAR FROM O.order_date) = 2019), 0) AS orders_in_2019
FROM Users U
LEFT JOIN Orders O 
    ON U.user_id = O.buyer_id
GROUP BY U.user_id;
