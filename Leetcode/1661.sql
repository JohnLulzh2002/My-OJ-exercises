select A1.machine_id,round(avg(A2.timestamp-A1.timestamp),3) as processing_time
from Activity as A1,Activity as A2
where A1.activity_type='start'
and A2.activity_type = 'end'
and A1.machine_id=a2.machine_id
and A1.process_id=a2.process_id
group by A1.machine_id;