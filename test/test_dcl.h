/* Copyright (c) 2012, Heng.Wang. All rights reserved.

This program is aimed to audit the mysql database operations. 
If you have the more efficient method to audit the mysql database,
thanks for your sharing with the developers. It's pleasure for you
to contact me king_wangheng@163.com.  
*/

#include <my_sys.h>
#include <mysql.h>

extern my_bool check_grant(uint ,MYSQL* ,char* , char* );
extern my_bool check_revoke(uint ,MYSQL* ,char* ,char* );


