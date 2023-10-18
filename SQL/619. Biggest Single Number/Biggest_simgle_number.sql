SELECT MAX(num) AS num 
FROM (SELECT num from MyNumbers GROUP BY num HAVING COUNT(*) = 1) num
