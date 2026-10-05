# Write your MySQL query statement below
select 
Product.product_name,
Sales.year,price
from Sales
left join Product
on Sales.Product_id = Product.Product_id