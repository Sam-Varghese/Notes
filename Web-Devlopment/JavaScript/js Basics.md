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
    <h1>JavaScript Tutorial</h1>
    <script>
      alert("Hello World");
    </script>
  </body>
</html>
```

<hr>

![Output](Images/alert1.png)

<hr>

- If the JavaScript program is written in another js file, then we need not start coding js code inside `<script>`, `</script>`. Just put `<script src="path">`, `</script>`.

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
    <h1>JavaScript Tutorial</h1>
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
a = 5;
//Or
const a = 5; //Now value of a can be never changed as const==constant
alert(a);
```

<hr>

# Comments In JavaScript

- Single line comments in JavaScript starts with `//`.
- Multi line comments in JavaScript start with `/*` and ends with `*/`.

<hr>

**Note**

<hr>

- `let x;` is a correct JavaScript variable initialising process. Here if we dont assign x a value after putting this step, then on calling for x in console, we would get its value as `undefined`.
- In JavaScript, `x=x+y` can also be written as `x+=y` just like that in python.
- The output of the following code:-

```js
let x = 5;
let y = "5";
console.log(x + y);
```

- would be `'55'`, a feature of JavaScript.
- If we want to increase an int number by 1, then here are all he ways to do so:

```js
let x = 2;
x = x + 1;
//Or
x += 1;
//Or
x++;
```

- All pluses in above code can be replaced by `-` if we wanna subtract 1 from variable.
- In JavaScript, strings can be written inside either double quotes, or single quotes.
- Using backlash can tell browser to ignore the comming quote to recognise as the ending quote.

```js
str = "Sam's";
```

- Boolean variables can be sored in the following manner:

```js
x = 5 > 3;
alert(x);
```

- Bollean values:- `true`, `false`.

<hr>

# Getting Type

<hr>

In order to get the type of an object in javascript, we use `typeof` function.

<hr>

```js
let x = typeof 1;
console.log(x);
```

<hr>

# Printing Multiple type Data

<hr>

```js
x = 5;
console.log(`The value of x is ${x}`); //NO QUOTES USED!
alert(`The value of x is ${x}`);
```

<hr>

# = Operator

<hr>

- Firstly there is an `=` operator which is used to put the value of the RHS to LHS.
- Then we have an `==` operator which is used to check wether the value of RHS and LHS are same.(**Type can be diffrent**).

`5==5` -> `true`<br>
`6==5` -> `false`<br>
`5=="5"` -> **_true_**

-
