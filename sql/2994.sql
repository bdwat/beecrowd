select d.name, 
        ROUND(SUM(a.hours * 150 * (1 + w.bonus / 100.0)), 1) AS salary
from doctors d
join attendances a on a.id_doctor = d.id
join work_shifts w on w.id = a.id_work_shift
group by d.name
order by salary desc;