SELECT p.product_id, p.product_name
FROM Product p
WHERE p.product_id IN (
    SELECT product_id
    FROM Sales
    GROUP BY product_id
    HAVING 
        SUM(sale_date BETWEEN '2019-01-01' AND '2019-03-31') > 0
        AND
        SUM(sale_date NOT BETWEEN '2019-01-01' AND '2019-03-31') = 0
);
