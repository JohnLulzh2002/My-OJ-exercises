select W1.id from Weather as W1,Weather as W2
where date_sub(W1.recordDate,interval 1 day)=W2.recordDate
and W1.Temperature>W2.Temperature;