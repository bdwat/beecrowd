select id, 
       password, 
       MD5(password) as md5 
from account;