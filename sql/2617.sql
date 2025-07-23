select p.name as name, pr.name as name from providers pr 
join products p ON p.id_providers = pr.id
where pr.name = 'Ajax SA'; 