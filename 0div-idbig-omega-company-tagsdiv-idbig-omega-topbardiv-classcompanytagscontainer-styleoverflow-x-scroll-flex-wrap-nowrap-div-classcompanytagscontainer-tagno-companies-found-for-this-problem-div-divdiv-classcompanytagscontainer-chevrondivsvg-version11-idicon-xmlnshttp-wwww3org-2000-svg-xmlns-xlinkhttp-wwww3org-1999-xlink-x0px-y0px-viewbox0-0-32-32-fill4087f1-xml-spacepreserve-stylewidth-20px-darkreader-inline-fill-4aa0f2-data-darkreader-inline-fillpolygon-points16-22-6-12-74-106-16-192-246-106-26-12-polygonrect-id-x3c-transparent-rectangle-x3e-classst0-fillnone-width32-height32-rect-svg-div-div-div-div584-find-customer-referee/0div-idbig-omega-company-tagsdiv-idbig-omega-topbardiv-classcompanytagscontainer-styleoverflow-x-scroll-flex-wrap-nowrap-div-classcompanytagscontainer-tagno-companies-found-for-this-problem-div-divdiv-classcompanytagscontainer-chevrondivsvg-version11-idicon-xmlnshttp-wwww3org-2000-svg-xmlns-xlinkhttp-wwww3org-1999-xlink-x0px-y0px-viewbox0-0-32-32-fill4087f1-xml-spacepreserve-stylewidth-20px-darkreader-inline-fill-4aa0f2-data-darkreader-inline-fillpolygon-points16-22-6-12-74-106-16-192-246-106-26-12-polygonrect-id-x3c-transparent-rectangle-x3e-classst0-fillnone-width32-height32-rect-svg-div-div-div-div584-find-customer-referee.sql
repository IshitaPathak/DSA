# Write your MySQL query statement below

select name from customer as c1
where c1.referee_id<>2 or c1.referee_id IS NULL;