# JavaScript Notes

![Logo](https://www.freepnglogos.com/uploads/javascript-png/javascript-logo-transparent-logo-javascript-images-3.png)

<hr>

# Hello World Program

```js
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
  </head>
  <body>
    <h1>Javascript Tutorial</h1>
    <script>
      alert("Hello World");
    </script>
  </body>
</html>
```

<hr>

![Output](Images/alert1.png)

<hr>

- If the javascript program is written in another js file, then we need not start coding js code inside `<script>`, `</script>`. Just put `<script src="path">`, `</script>`.

<hr>

# Async And Defer

- Now, when we use `<script src="path">`, `</script>`, then there are two ways in which we can ask browser to load our html file.

- **Async**: Async is the default method for browsers. In this method, browsers firstly try reading code line by line and when it reaches script tag, then it downloads that js file and reads through that. So if our js file calls an element that is below `<script></script>`, then browser gives error saying that ie does not know about existence of this element.
- _Syntax_: `<script src="path"></script>`

- **Defer**: Now suppose if we want browsers to read through full code and then run, in this case we use defer.
- _Syntax_: `<script defer src="path"></script>`

<hr>

# Printing In Console

- Firstly go to the google browser, `Inspect>Console`.

<hr>

```js
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
  </head>
  <body>
    <h1>Javascript Tutorial</h1>
    <script>
      alert("Hello World");
      console.log("Written hello world sir");
    </script>
  </body>
</html>
```

<hr>

![Output](Images/console1.png)

<hr>

# Defining Variables In JavaScript

```js
var a;
a = 5;
//Or
let a = 5;
//Or
let a;
a=5;
//Or
const a = 5; //Now value of a can be never changed as const==constant
alert(a);
```

<hr>

# Comments In JavaScript

- Single line comments in javascript starts with `//`.
- Multi line comments in javascript start with `/*` and ends with `*/`.

<hr>

**Note**

<hr>

- ``let x;`` is a correct javascript variable initialising process. Here if we dont assign x a value after putting this step, then on calling for x in console, we would get its value as ``undefined``.
- In JavaScript, ``x=x+y`` can also be written as ``x+=y`` just like that in python.
- The output of the following code:-

```js
let x=5;
let y='5';
console.log(x+y);
```

- would be `'55'`, a feature of JavaScript.

<hr>
