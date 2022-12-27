USE shop;
SELECT singer, sum(sale) AS sale
FROM artists
GROUP BY singer
HAVING SUM(sale) >= 2000000;