# MongoDB

<hr>

![](Mongo_Images/logo.jpeg)

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

## Show Collections

<hr>

```
show collections
```

<hr>

## Insert Row

<hr>

```
db.collection_name.insert({title: 'Post One',
  body: 'Body of post one',
  category: 'News',
  tags: ['news', 'events'],
  user: {
    name: 'John Doe',
    status: 'author'
  },
  date: Date()})
```

<hr>

## Insert Multiple Rows

<hr>

```
db.collection_name.insertMany([
  {
    title: 'Post Two',
    body: 'Body of post two',
    category: 'Technology',
    date: Date()
  },
  {
    title: 'Post Three',
    body: 'Body of post three',
    category: 'News',
    date: Date()
  },
  {
    title: 'Post Four',
    body: 'Body of post three',
    category: 'Entertainment',
    date: Date()
  }
])
```

<hr>

## Get All Rows

<hr>

```
db.collection_name.find()
```

<hr>

## Get All Rows Formatted

<hr>

```
db.collection_name.find()pretty()
```

<hr>

## Find Rows

<hr>

```
db.collection_name.find({key: value})
```

<hr>

- The above searching technique would search all rows for the key value pair.

<hr>

## Sort Rows

<hr>

### Ascending Order

<hr>

```
db.collection_name.find().sort({ key_name: 1 }).pretty()
```

<hr>

### Descending Order

<hr>

```
db.collection_name.find().sort({ key_name: -1}).pretty()
```

<hr>

## Count Rows

<hr>

```
db.collection_name.find().count()
```

<hr>

- In order to count rows with a specific key value pair:

<hr>

```
db.collection_name.find({ key_name: value }).count()
```

<hr>

## Limit Rows

<hr>

- In order to get only first n rows of database, use following command:

<hr>

```
db.collection_name.find().limit(n).pretty()
```

<hr>

## Chaining

<hr>

- In order to get first n sorted rows, use the below code:

<hr>

```
db.collection_name
```

<hr>

## Foreach

<hr>

- In order to iterate over all the rows, and to achieve a specific output through this, we use following method:

<hr>

```
db.collection_name.find().forEach(function(row){
  print("First entry: "+row.key)
})
```

<hr>

## Find One Row

<hr>

- In order to find first specific row, with a particular key-value pair, we use following code:

<hr>

```
db.collection_name.findOne({key: value})
```

<hr>

## Find Specific Fields

<hr>

```
db.collection_name.find({ key1: value1}, {key2: value2, key3: valeu3})
```

<hr>

