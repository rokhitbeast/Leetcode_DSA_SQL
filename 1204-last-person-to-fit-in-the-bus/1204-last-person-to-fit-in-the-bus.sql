# Write your MySQL query statement below

SELECT DISTINCT LAST_VALUE(person_name) OVER (ROWS BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING) as person_name FROM (
    SELECT person_name
    FROM (SELECT person_name,
            SUM(weight) OVER (ORDER BY turn) AS Total_Weight
            FROM Queue
            ORDER BY turn) as Weights
    WHERE Total_Weight<=1000) as ans;

