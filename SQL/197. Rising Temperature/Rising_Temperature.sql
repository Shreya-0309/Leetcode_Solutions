SELECT b.id FROM Weather a
INNER JOIN Weather b
ON b.recordDate-a.recordDate=1 AND a.temperature<b.temperature;
