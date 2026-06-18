# Write your MySQL query statement below

With all_ids AS(

    select requester_id AS id
    From RequestAccepted
    UNION ALL
    select accepter_id AS id
    From RequestAccepted)
    select id,
    Count(id) AS num
    From all_ids
    group by id
    order by count(id) DESC
    Limit 1

