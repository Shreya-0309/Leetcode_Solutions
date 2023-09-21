SELECT DISTINCT num AS ConsecutiveNums
FROM Logs l1 
WHERE l1.num = (SELECT num FROM Logs WHERE id = l1.id + 1)
AND l1.num = (SELECT num FROM Logs WHERE id = l1.id + 2)
