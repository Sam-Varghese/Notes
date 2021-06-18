<div style='text-align:center'><span style='color:gold;font-family:georgia;font-size:2em'>My SQL Notes</span></div>

****

<p align='center'>
<img src='http://pngimg.com/uploads/mysql/mysql_PNG23.png' width='200' hieght='200'>
</p>

*******

<div style='text-align:center'><span style='color:yellow;font-family=Georgia;font-size:2em;'>Connectivity Part</span></div>

****

<div><span style='color:orange; font-size:2em;'>Connecting to SQL>>>> </span></div>

* Firstly start with [this.](https://youtu.be//HZU0JRwv6AE)

****


```python
import mysql.connector
import random
con=mysql.connector.connect(host='localhost',user='root',password='root')
```

****

<div><span style='color:orange; font-size:2em;'>Checking for successful connection>>> </div></span>

****


```python
if con.is_connected():
    print('Successful connection sir.')
else:
    print('Connection failed sir.')
```

****

<div><span style='color:orange; font-size:2em;'>Creating a cursor object>>> </div></span>

****


```python
cur=con.cursor(buffered=True)#You dont use buffered
```

****

<div style='text-align:center'><span style='color:yellow; font-size:2em;font-family:Georgia;'>SQL Queries</span></div>

****

<span style='color:orange;font-size:2em;'>Creating a database>>> </span>

****


```python
try:
    cur.execute('drop database sql_notes')
except Exception:
    pass

cur.execute('create database if not exists sql_notes')
```

****

<div><span style='color:orange;font-size:2em;'>Making a table>>> </span></div>

****


```python
cur.execute('use sql_notes')
```


```python
cur.execute('Create table if not exists sql_note\
    (Name varchar(20),\
        Class int)')
```

****

</div><span style='color:orange;font-size:2em'>Inserting values>>> </div></span>

****


```python
count=0

def random_names():
    l=random.randint(5,10)
    name=''
    while len(name)<l:
        l1=random.randint(97,122)
        name=name+chr(l1)
    return name

def random_class():
    return random.randint(1,12)

while count<100:
    query="insert into sql_note(Name,Class) values('{}',{})".format(random_names(),random_class())
    cur.execute(query)
    print(query)
    count+=1
    con.commit()#Very Important
```

****

<div><span style='color:orange;font-size:2em;'>Accessing all data from table>>> </span></span>

****


```python
cur.execute('select * from sql_note')
```

****

* <div><span style='color:orange;font-size:1.5em'>fetchall Method>>> </div></span><br>
Used in fetching all of the data.

****


```python
data=cur.fetchall()
```


```python
len(data)
```

****

* <div><span style='color:orange;font-size:1.5em'>fetchone method>>> </div></span><br>
Used to fetch the first record.

****


```python
cur.execute('select * from sql_note')
data=cur.fetchone()
```


```python
print(data)
```

****

* <div><span style='color:orange;font-size:1.5em'>fetchmany Function>>> </div></span><br>This function enables us to extract as many rows as we want to fetch.

****


```python
cur.execute('select * from sql_note')

data=cur.fetchmany(2)

data
```

****

* <div><span style='color:orange;font-size:1.5em'>rowcount Function>>> </div></span><br>
This function enables us to count number of rows in cur object.

****


```python
cur.execute('select * from sql_note')
data=cur.rowcount
```


```python
data
```

******

<div style='text-align:center'><span style='color:yellow;font-size:2em;font-family:Georgia;'>ADVANCE  SQL</div></span>

<p align='center'>
<img src='https://gscollectibles.gr/wp-content/uploads/2017/10/x_ss300172_a.jpg'width='600'hieght='300'>
</p>

****

<div><span style='color:orange;font-size:2em'>Types of Queries>>> </div></span>

****

Queries are of mainly 2 types:-<br><br>

* DDL Commands
* DML Commands

<div style='text-align:center;'><span style='color:gold;'>DDL Commands</div></span>

* Stands for **D**ata **D**efinition **L**anguage
* These are those commands that have the ability to change the structure of the table.
* All commands under this category are auto comiited.

Commands that fall under this category:-

* CREATE
* ALTER
* DROP

<div style='text-align:center'><span style='color:gold;'>DML Commands</div></span>

* Stands for **D**ata **M**anipulation **L**anguage
* All commands that have the ability to modify the database comes under these category.
* These commands dont get auto commited so we need to commit them personally.

Commands that fall under this category:-

* INSERT
* UPDATE
* DELETE

****

<div><span style='color:orange;font-size:2em'>Some Important Terms>>> </div></span>

****

<div style='text-align:center;'><span style='color:gold;'>Some Important Terms</div></span>

* <div><span style='color:gold;'>Realtion</div></span>A table containing logically related data wherein all the rows are distinct and ordering of rows and columns is immaterialistic.

* <div><span style='color:gold;'>Domain</div></span>This is a pool of values from which the actual values appearing in a given column are drawn.

* <div><span style='color:gold;'>Tuple</div></span>Row of a relation.

* <div><span style='color:gold;'>Attribute</div></span>A column of a relation.

* <div><span style='color:gold;'>Degree</div></span>Number of attributes in a relation.

* <div><span style='color:gold;'>Cardinality</div></span>Number of tuples in a relation.

* <div><span style='color:gold;'>View</div></span>Virtual table that does not exist in its own right but is insted derived from one or more underlying base tables.

* <div><span style='color:gold;'>Primary Key</div></span>Set of one or more attributes that can uniquely identify the tuples within the relation.

* <div><span style='color:gold;'>Candidate Key</div></span>All attribute combinations inside a relation that can serve as candidate keys as these are the candidates for primary key position.

* <div><span style='color:gold;'>Alternate Key</div></span>A candidate key that is not primary key is called an alternate key.

* <div><span style='color:gold;'>Foreign Key</div></span>A non key attribute whose value is derived from the primary key of of some other table is known as foreign key.


****

My SQL is an Open Source 
<div><span style='color:gold'> R </div></span>elational
<div><span style='color:gold'> D </div></span>atabase
<div><span style='color:gold'> M </div></span>anagement
<div><span style='color:gold'> S </div></span>ystem

****

<div><span style='color:orange;font-size:2em;'>Creating Database in SQL if it doesnt exists>>> </div></span>

****


```python
cur.execute('Create database if not exists sql_notes')
```

****

<div><span style='color:orange;font-size:2em;'>Selecting a database>>> </div></span>

****


```python
cur.execute('use sql_notes')
```

****

<div><span style='color:orange;font-size:2em;'>Creating a table if it doesnt exists>></div></span>

****


```python
cur.execute('Create table if not exists sql_note\
    (Name varchar(20),\
        Class int)')
```

****

<div><span style='color:orange;font-size:2em;'>Inserting values in table>>> </div></span>

****


```python
count=0

def random_names():
    l=random.randint(5,10)
    name=''
    while len(name)<l:
        l1=random.randint(97,122)
        name=name+chr(l1)
    return name

def random_class():
    return random.randint(1,12)

while count<50:
    query="insert into sql_note(Name,Class) values('{}',{})".format(random_names(),random_class())
    cur.execute(query)
    print(query)
    count+=1
    con.commit()#Very Important
```

****

<div><span style='color:orange;font-size:2em;'>Conditional Selection from table>>> </div></span>

****


```python
cur.execute("select * from sql_note where Class=12")

data=cur.fetchall()
data
```

****

<div><span style='color:orange;font-size:2em;'>Selecting particular columns from table>>> </div></span>

****

cur.execute('select Name from sql_note')

data=cur.fetchall()
data

****

<div><span style='color:orange;font-size:2em;'>Accessing distinct values from a column>>> </div></span>

****


```python
cur.execute('select distinct Class from sql_note')

data=cur.fetchall()
data
```

****

<div><span style='color:orange;font-size:2em;'>Getting the description of the table>>> </div></span>

****


```python
cur.execute('desc sql_note')

data=cur.fetchall()
data
```

****

<div><span style='color:orange;font-size:2em;'>Performing simple calculations>>> </div></span>

****


```python
cur.execute('select 3*12')

cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Using table aliases>>> </div></span>

****


```python
cur.execute('select Name as N from sql_note')

cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>BETWEEN keyword >>> </div></span>

****


```python
cur.execute('select * from sql_note where Class between 1 and 5')

cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Pattern matching in SQL>>> </div></span>

****


```python
cur.execute("select * from sql_note where Name like 's%'")

cur.fetchall()
```


```python
cur.execute("select * from sql_note where Name like 's____'")

cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Searching for NULL Values >>> </div></span>

****


```python
cur.execute('select * from sql_note where Name is NULL')

cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>NOT NULL Condition in table creation >>> </div></span>

****


```python
cur.execute('Create table if not exists not_null_table \
    (Name varchar(20) NOT NULL,\
        Class int)')
```

****

<div><span style='color:orange;font-size:2em;'>Setting a default value during table creation>>> </div></span>

****


```python
cur.execute('Create table if not exists default_table \
    (Name varchar(20),\
        Class int default 12)')
```

****

<div><span style='color:orange;font-size:2em;'>Setting unique value constraint in table creation >>> </div></span>

****


```python
cur.execute('Create table if not exists unique_table \
    (Name varchar(20) unique,\
        Class int)')
```

****

<div><span style='color:orange;font-size:2em;'>CHECK function during table creation>>> </div></span>

****


```python
cur.execute('Create table if not exists check_table \
    (Name varchar(20),\
        Class int check(Class>0 and Class<12))')
```

****

<div><span style='color:orange;font-size:2em;'>Setting primary key during table creation>>> </div></span>

****


```python
cur.execute('Create table if not exists primary_table \
    (Name varchar(20) primary key,\
        Class int)')
```


```python
cur.execute('Create table if not exists primary1_table \
    (Name varchar(20),\
        Class int)')

cur.execute('alter table primary1_table \
    add primary key (Class)')
```

****

<div><span style='color:orange;font-size:2em;'>Inserting specific values from one table to another>>> </div></span>


```python
cur.execute("insert into primary_table \
    select * from sql_note where Name like 's%'")
con.commit()
```

****

<div><span style='color:orange;font-size:2em;'>Updating values of table>>> </div></span>

****


```python
cur.execute("update primary_table\
    set Class=0 \
        where Name like '_____'")

con.commit()
```


```python
cur.execute('select *from primary_table where Class=0')

cur.fetchall()
```

<div><span style='color:orange;font-size:2em;'>Deletion of rows in SQL >>> </div></span>


```python
cur.execute("delete from primary_table \
    where Class=0")

con.commit()
```

****

<div><span style='color:orange;font-size:2em;'>Altering tables >>> </div></span><br><br>

Used to:-<br>

1)**Add a column**<br>2)**Add integrity constant**<br>3)**Redefine a column (datatype,size,default value)**

****

* <div><span style='color:orange;font-size:1.5em;'>Adding a column>>> </div></span>

****


```python
cur.execute("alter table primary_table\
    add (Section varchar(2))")

con.commit()
```

****

* <div><span style='color:orange;font-size:1.5em;'>Modifying existing columns>>> </div></span>

****


```python
cur.execute("alter table primary_table \
    modify Name varchar(25)")

con.commit()
```

****

* <div><span style='color:orange;font-size:1.5em;'>Changing the names of column>>>

****


```python
cur.execute('alter table primary_table \
    change Section Sections varchar(3)')

con.commit()
```

****

<div><span style='color:orange;font-size:2em;'>Dropping table>>> </div></span>

****


```python
cur.execute('drop table if exists unique_table')

con.commit()
```

****

<div><span style='color:orange;font-size:2em;'>Joining Tables>>> </div></span>

****

<div><span style='color:orange;font-size:2em;'>Equi Join>>> </div></span><br><br>
This functions gives a table with a column value same in both and given 2 times in output table(unlike Natural join)

****


```python
cur.execute('select * from sql_note a,\
    primary_table b where a.Name=b.Name')#Used table aliases a,b

cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Natural Join>>> </div></span><br><br>
This function works same as equi join but the only diffrence is that ki it wont give 2 diffrent column of names with same values in it.

****


```python
cur.execute('select * from sql_note natural join primary_table')

cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Ordering of table>>> </div></span>

****


```python
cur.execute('select * from sql_note order by Class,Name')#First ordering by Class then by Name
cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Ordering on the basis of expression>>> </div></span>

****


```python
cur.execute('select Name,Class+.16 from sql_note order by Class*.16')
cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Ordering by a field in custom way>>> </div></span>

****


```python
cur.execute('select * from sql_note order by field(Class,10,11,12,1,2,3,4,5,6,7,8,9)')
cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Aggregate Functions</div></span><br><br>

These are the functions which performs a calculation on a set of values, and returns a single value. Following fuctions come under this category:-<br><br>

* AVG
* COUNT
* MAX
* MIN
* SUM

****

<div><span style='color:orange;font-size:2em;'>Average function>>> </div></span>

****


```python
cur.execute('select avg(Class) "Average Class" from sql_note')
cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Count function>>> </div></span>

****


```python
cur.execute("select count(Name) from sql_note where Class=12")
cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Max function>>> </div></span>

****


```python
cur.execute("select max(Class) 'Maximum' from sql_note where Name like 's%'")
cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Sum fuction>>> </div></span>

****


```python
cur.execute("select sum(Class) from sql_note")
cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>Group by SQL function>>> </div></span><br><br>

The SQL GROUP BY clause is used in collaboration with the SELECT statement to arrange identical data into groups.

****


```python
cur.execute("select * from sql_note group by Name")
cur.fetchall()
```

****

<div><span style='color:orange;font-size:2em;'>HAVING Function SQL>>> </div></span><br>

The HAVING clause was added to SQL because the WHERE keyword could not be used with aggregate functions.<br><br>

<div><span style='color:gold;font-size:1.5em;'>Syntax>>> </div></span><br>

SELECT column_name(s)<br>
FROM table_name<br>
WHERE condition<br>
GROUP BY column_name(s)<br>
HAVING condition<br>
ORDER BY column_name(s);<br>


****


```python
cur.execute("select * from sql_note group by Class having count(*)>10")

cur.fetchall()

```

<hr>

<br>

![Namaste](https://img.etimg.com/thumb/msid-79427694,width-1200,height-900/news/politics-and-nation/pm-modi-pays-tribute-to-victims-of-26/11-mumbai-terror-attacks.jpg)

****
****
