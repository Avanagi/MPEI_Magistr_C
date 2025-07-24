select name, email
from customers
where city = 'Москва';

select p.product_name, sum(o.quantity)
from products p
left join order_items o
on p.product_id = o.product_id
group by p.product_name
order by sum(o.quantity) desc;

select order_id, order_date
from orders
where order_date between '2023-01-01' and '2023-03-31';

select c.name, c.email, sum(o.total_amount)
from customers c
left join orders o
on c.customer_id = o.customer_id
group by c.name, c.email;

select name, email, city
from customers;

select order_id, order_date, total_amount
from orders
where order_date > '2023-06-01';

select c.name, count(o.order_id)
from customers c
left join orders o
on c.customer_id = o.customer_id
group by c.name;

select name
from customers
left join orders
on customers.customer_id = orders.customer_id
where orders.order_id is null;

select product_name
from products
order by price desc;

select c.name, c.email, COALESCE(sum(o.total_amount), 0)
from customers c
left join orders o
on c.customer_id = o.customer_id
group by c.name, c.email;

select product_name
from products
order by price desc
limit 5;
