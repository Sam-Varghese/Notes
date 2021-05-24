# Express JS

<hr>

![](ExpreeImages/logo.png)

<hr>

## What Is Express

<hr>

- Express is a fast, unopiniated and minimalistic web framework for Node.js
- Express is a "server-side" or "back-end" framework. It is not comparable to client-side framework like React, Angular & Vue. It can be used in combination with those frameworks to build full-stack applications.

<hr>

## Why Use Express

<hr>

- Makes building web apps with Node.js MUCH easier.
- Used for both server rendered apps as well as API/ Microservices.
- Extremely light, fast and free.
- Full control of request and response.
- By far, the most popular Node framework.
- Great to use with client side frameworks as it's all JavaScript.

<hr>

## Basic Server Syntax

<hr>

```js
const express = require('express');

// Init Express
const app = express();

// Create your endpoints/route handlers
app.get('/', function(req, res){
    res.send('Hello world');
});

// Listen on a port
app.listen(5000);
```

<hr>

## 