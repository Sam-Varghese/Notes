# Datetime Module

In python ,to do operations on dates and times , we use the datetime module.

![](https://cdn.mos.cms.futurecdn.net/VWqaoBhS2y7mBm7ss3bUTT.jpg)


****

## Getting Current Datetime

****

```py
import datetime
time_stamp=datetime.datetime.now()
#time_stamp format: 2021-03-16 23:49:13.544541
```

****

## Getting Current Date

****

```py
from datetime import time
date=datetime.date()
#date format: 2019-10-25
```

****

## Getting Current Time

****

```py
from datetime import datetime
time=datetime.now().time()
# time format: 23:57:40.799113
```

****

## Datetime Format Codes

****

|Directive|Description|Output Format|
|-|-|-|
%a|Weekday, short version|Wed	
%A|Weekday, full version|Wednesday	
%w|Weekday as a number 0-6, 0 is Sunday|3	
%d|Day of month 01-31|31	
%b|Month name, short version|Dec	
%B|Month name, full version|December	
%m|Month as a number 01-12|12	
%y|Year, short version, without century|18	
%Y|Year, full version|2018	
%H|Hour 00-23|17	
%I|Hour 00-12|05	
%p|AM/PM|PM	
%M|Minute 00-59|41	
%S|Second 00-59|08	
%f|Microsecond 000000-999999|548513	
%z|UTC offset|+0100	
%Z|Timezone|CST	
%j|Day number of year 001-366|365	
%U|Week number of year, Sunday as the first day of week, 00-53|52	
%W|Week number of year, Monday as the first day of week, 00-53|52	
%c|Local version of date and time|Mon Dec 31 17:41:00 2018	
%x|Local version of date|12/31/18	
%X|Local version of time|17:41:00	
%%|A % character|%	
%G|ISO 8601 year|2018	
%u|ISO 8601 weekday (1-7)|1	
%V|ISO 8601 weeknumber (01-53)|01

****

## Custom Timestamp

****

```py
import datetime
# To have time stamp like dd-mm-yyyy
custom_timestamp=datetime.datetime.now().strftime('%d-%m-%Y')
#custom_timestamp format: '17-03-2021'
```

****

## Getting Difference Between Two Time Stamps

****

```py
from datetime import datetime

time1=datetime.now().time()
time2=datetime.now().time()

time_diff=time2-time1

#time format: 0:00:09.103108
```

****

## Getting Future Or Past Timestamp

****

Syntax of timedelta:

```py
timedelta(days=0, seconds=0, microseconds=0, milliseconds=0, minutes=0, hours=0, weeks=0)
```

****

Example:

```py
from datetime import datetime,timedelta

present_timestamp=datetime.now()

time_interval=timedelta(days=360)

after_one_year_timestamp=present_timestamp+time_interval

# present_timestamp=2021-03-17 07:59:44.475851
#after_one_year_timestamp=2022-03-12 07:59:44.475851
```

## Getting Total Seconds In timedelta

****

```py
from datetime import timedelta

time_delta=timedelta(days=365)

print(time_delta.total_seconds())
```

****

![](https://media.tenor.com/images/4d5c4fbeb0835fa40ad6d1e98878cef2/tenor.gif)