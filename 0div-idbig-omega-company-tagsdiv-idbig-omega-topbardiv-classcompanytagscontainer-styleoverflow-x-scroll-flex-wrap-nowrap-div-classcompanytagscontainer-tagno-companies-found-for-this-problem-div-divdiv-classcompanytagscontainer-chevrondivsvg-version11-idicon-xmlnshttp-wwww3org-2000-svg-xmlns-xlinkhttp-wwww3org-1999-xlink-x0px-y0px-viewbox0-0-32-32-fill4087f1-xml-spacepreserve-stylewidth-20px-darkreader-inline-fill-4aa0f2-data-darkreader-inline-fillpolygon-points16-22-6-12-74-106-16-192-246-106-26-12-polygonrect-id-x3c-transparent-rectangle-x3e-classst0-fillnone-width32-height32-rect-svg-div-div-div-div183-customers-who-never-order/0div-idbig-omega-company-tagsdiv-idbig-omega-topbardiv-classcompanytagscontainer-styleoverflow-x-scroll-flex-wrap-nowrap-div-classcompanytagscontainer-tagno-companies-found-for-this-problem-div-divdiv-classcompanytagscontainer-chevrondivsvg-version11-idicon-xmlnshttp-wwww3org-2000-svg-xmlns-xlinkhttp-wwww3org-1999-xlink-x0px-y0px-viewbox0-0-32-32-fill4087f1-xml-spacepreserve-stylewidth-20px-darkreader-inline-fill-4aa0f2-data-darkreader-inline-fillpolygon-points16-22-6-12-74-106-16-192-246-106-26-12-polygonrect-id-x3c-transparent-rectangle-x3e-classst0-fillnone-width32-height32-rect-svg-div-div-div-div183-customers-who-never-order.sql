# Write your MySQL query statement below

# select name as Customers from customers 
# where customers.id<>orders.customerId;


# In SQL, when you want to reference columns from another table, you need to ensure that you either join the tables together using appropriate join statements (e.g., JOIN, INNER JOIN, LEFT JOIN, etc.) or use subqueries to fetch the necessary data.

select name as customers
from customers
where customers.id not in (select customerId from orders);


