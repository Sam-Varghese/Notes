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

module.exports = dict1; //dict1 can also be the name of a function if we wanna have it so
```

<hr>

```js
const sam = require("./module_name.js");
```

<hr>

- Suppose if we have more than 1 dicts or functions that needs to be exported, the we do as follows:

<hr>

```js
a="object1";
b="object2";
c="object3";

module.exports.a=function(){console.log("Hi Sam...")};
module.exports.b=b;
module.exports.c=c;
```

<hr>

- The require method syntax is as follows:

<hr>

```js
const objects = require("./a.js");

console.log(objects.a);
console.log(objects.b);
console.log(objects.c);
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
});
```

<hr>

- One worth noting thing is that if we execute the following code:

<hr>

```js
const fs = require("fs");
fs.readFile("a.txt", "utf8", (err, data) => {
  console.log(err, data);
});
console.log("Contents read");
```

<hr>

- Then the output of this program is going to be:

<hr>

```none
Contents read
null Hello myself Sam Varghese
```

<hr>

- This happened because node js works on non blocking system.
- Hence by the time node js was reading this file, it worked on performing rest of the tasks.
- We can also mention to nodejs not to run further commands if it has not read the file till yet using following code:

<hr>

```js
const fs = require("fs);
const a = fs.readFileSync("File.txt");

console.log(a.toString());

console.log("Finished reading the file.");
```

<hr>

# Writing To A File

<hr>

- In order to write data to a file, we use `writeFile` function.
- We also have to mention a callback function inside `writeFile` function which is to specify what happens after new content has been written.

<hr>

```js
const fs = require("fs");
fs.writeFile("a.txt", "This is the new content", () => {
  console.log("Written to the file");
});
console.log("Sir this content has been written");
```

<hr>

- Similar to `readFileSync`, we can also use `writeFileSync` in order to execute rest of the commands only after the new contents have been written.

<hr>

```js
const fs = require("fs");
b = fs.writeFileSync("File.txt", "This is now the new content");
console.log(b); //This is going to be undefined
```

<hr>



<hr>

https://youtu.be/BLl32FvcdVM?t=4721