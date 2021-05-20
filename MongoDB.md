# MongoDB

<hr>

- MongoDB is an open-source document database and a leading NoSQL database. MongoDB is written in C++.

<hr>

# Important Terms

<hr>

## Database

<hr>

- Database is a physical container for collections. Each container gets its own set of files on the file system.

<hr>

## Collection

<hr>

- Collection is a group of MongoDB documents. It is the equivalent of RDBMS table. Collection dont enforce a schema.

<hr>

## Document

<hr>

- A document is a set of key-value pairs.

<hr>

![Comparision](Mongo_Images/Comparision1.PNG)

<hr>

# MongoDB Syntax

<hr>

## Show All Databases

<hr>

```
show dbs
```

<hr>

## Show Current Database

<hr>

```
db
```

<hr>

## Create Or Switch Database

<hr>

```
use database_name
```

<hr>

## Drop Database

<hr>

```
db.dropDatabase()
```

<hr>

## Create Collection

<hr>

```
db.createCollection('collection_name')
```

<hr>
