# NodeJS Notes

<hr>

<img src="Images/Node.js_logo.svg">

<hr>

# Introduction

<hr>

- NodeJS is an environment to run JS outside the Browser.
- Built on Chrome's V8 JS Engine.
- Big community
- Full-Stack

<hr>

# Node Exports

<hr>

- In order to use variables and functions of a .js file in another file, we need to export those variables and functions, like this:

<hr>

```js
dict1 = {
    name: "Sam Varghese",
    developer: "true",
    caste: "Christian"
};

module.exports=dict1;
```

<hr>

```js
const sam=require("./module_name.js");
```

<hr>

# Reading Files

<hr>

- In order to read files in JavaScript, we use `fs` module.

<hr>

```js
const fs = require("fs");
fs.readFile("a.txt", "utf8", (err, data) => {
    console.log(err, data);
})
```