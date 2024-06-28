select customer_id,count(*)-count(transaction_id) as count_no_trans
from Visits as V
left join Transactions as T on V.visit_id=T.visit_id
group by customer_id
having count_no_trans>0;