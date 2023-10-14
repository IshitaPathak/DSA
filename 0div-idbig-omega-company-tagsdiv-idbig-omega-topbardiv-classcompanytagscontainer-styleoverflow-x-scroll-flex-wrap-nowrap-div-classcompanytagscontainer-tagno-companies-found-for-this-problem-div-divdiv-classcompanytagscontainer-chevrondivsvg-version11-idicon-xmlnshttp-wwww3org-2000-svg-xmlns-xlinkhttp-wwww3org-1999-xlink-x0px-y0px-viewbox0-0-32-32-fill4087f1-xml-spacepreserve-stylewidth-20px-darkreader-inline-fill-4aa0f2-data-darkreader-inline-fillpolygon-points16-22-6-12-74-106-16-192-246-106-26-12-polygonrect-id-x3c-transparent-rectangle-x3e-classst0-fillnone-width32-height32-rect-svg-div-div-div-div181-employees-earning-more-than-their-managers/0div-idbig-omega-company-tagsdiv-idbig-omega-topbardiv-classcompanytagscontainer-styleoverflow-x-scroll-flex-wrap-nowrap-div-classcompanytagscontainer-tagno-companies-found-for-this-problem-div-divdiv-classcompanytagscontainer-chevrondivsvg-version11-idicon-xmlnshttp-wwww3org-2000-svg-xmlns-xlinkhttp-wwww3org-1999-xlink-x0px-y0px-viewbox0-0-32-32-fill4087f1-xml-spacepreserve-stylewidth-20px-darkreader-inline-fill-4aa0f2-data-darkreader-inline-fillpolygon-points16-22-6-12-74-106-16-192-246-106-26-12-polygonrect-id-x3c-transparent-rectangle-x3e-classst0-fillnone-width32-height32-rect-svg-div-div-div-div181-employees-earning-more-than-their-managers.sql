# Write your MySQL query statement below


# select name as Employee  
# from Employee e
# where salary > (select salary from Employee where id=e.managerId)


select e1.name AS Employee
from Employee as e1, Employee as e2
where e1.managerId = e2.id
and e1.salary > e2.salary

