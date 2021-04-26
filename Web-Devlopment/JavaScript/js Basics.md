# JavaScript Notes

<hr>

![Logo](https://www.freepnglogos.com/uploads/javascript-png/javascript-logo-transparent-logo-javascript-images-3.png)

<hr>

# Hello World Program

<hr>

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

<hr>

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

<hr>

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

<hr>

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
- In VSCode, do `Ctrl`+`/` in order to comment line in fastest possible way.
- To put output in new line, we have `'\n'` while to put strings in new line in window, we have `<br>` in midst of string.

<hr>

# Getting Type

<hr>

In order to get the type of an object in JavaScript, we use `typeof` function.

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

# Equal to Operator

<hr>

- Firstly there is an `=` operator which is used to put the value of the RHS to LHS.
- Then we have an `==` operator which is used to check wether the value of RHS and LHS are same.(**Type can be diffrent**).

`5==5` -> `true`<br>
`6==5` -> `false`<br>
`5=="5"` -> **_true_**

- Now comes `===` operator which is used to check wether type and value of LHS and RHS are equal.

`5==5` -> `true`<br>
`'5'==5` -> `false`<br>

<hr>

# Not Equal to Operator

<hr>

- Here firsty comes the `!=` operator which is used to check wether the vale of LHS and RHS are unequal or not.

<hr>

`5!=5` -> `false`<br>
`5!='5'` -> `false`<br>
`6!=5` -> `true`

<hr>

- Now comes the `!==` operator which is used to check wether RHS and LHS have unequal value or unequal datatype. (**Are really diffrent or not**)

<hr>

`5!==5` -> `false`<br>
`5!=="5"` -> `true`<br>
5!=="6" -> `true`

<hr>

# AND Operator

<hr>

- In JavaScript, `&&` is the AND operator.

<hr>
# OR Operator

<hr>

- In JavaScript, `||` is used as an OR operator.

<hr>

# NOT Operator

<hr>

- In JavaScript, `!` is used as a NOT operator, ie, gives false if true comes, and vice-versa.

<hr>

# Conditionals

<hr>

```js
let age = 14;

if (age < 18) {
  alert("Sorry sir, but you are not allowed to have vaccine.");
} else if (age == 18) {
  //Multiple conditional
  alert("You are exactly 18, let me ask once about you.");
} else {
  alert("Sir, you are eligible to have vaccine.");
}
```

<hr>

# Switch Operator

<hr>

```js
let age = 18;
switch (age) {
  case 18: //if(age===18){}
    alert("You re exactly 18");
    break; //Compulsory
  case 17: //if(age===17){}
    alert("You are exactly 17");
    break;
  default:
    alert("Your age is neither 17 nor 18"); //Similar to else statement
}
```

<hr>

- We put break statement because if we wont put that, then switch statement has a prperty that it would directly execute all code line below that, which are under rest of switch statements, without noticing wether the switch statement has approved or disapproved the condition fulfillment.

<hr>

# While Loop

<hr>

```js
let counter = 0;
while (counter <= 10) {
  document.write("Sam");
  counter += 1;
}
```

<hr>

# Do-While

<hr>

- While loop has speciality that firstly it checks wether condition is satisfied or not, and if the condition gets satisfied, then only would it allow any iteration/looping.
- But suppose if we ever want to run loop once no matter if condition has been satisfied or not, and then after running loop once it should continue only if condition gets satisfied, then to achieve this, we use do-while statement.

<hr>

```js
document.write(
  "While loop running once even though it has not fulfilled condition<br>"
);
counter = 10;
do {
  document.write("Running");
} while (counter <= 5);
```

<hr>

# For Loop

<hr>

- For loop in JavaScript works a bit diffrently than other languages.
- Refer the below code and its explanation given below code:-

<hr>

```js
for (let counter = 1; counter <= 15; counter += 1) {
  document.write(`${counter})Running for loop<br>`);
}
```

<hr>

![Output](Images/for.png)

<hr>

- What for loop in JavaScript does is that it asks all variables that are needed to stop for loop and code related to that variable to be written inside for loop's parenthesis only.
- Now after this what JavaScript does is that in the first iteration, it reads only `let counter=1;` code and `counter<=15;` code and ignores the `counter+=1` code.
- Then on the subsequent iterations, it firstly reads `counter+=1` code followed by `counter<=15` code and ignores the `counter=1;` code for rest of ts iterations.

<hr>

# Break

<hr>

- `break` statemet in JavaScript is used in order to get out of the current loop when a certain condition is met.
- We use `break outer` (After naming 1st for as outer by: `outer: for(;;){}`) if we are in a for loop which is also in a for loop, and inside the 2nd for loop we write break in order to break the outer for loop , not the 2nd for.

<hr>

```js
for (counter = 1; counter <= 15; counter += 1) {
  document.write(`<br>${counter}) Running for loop`);
  if (counter === 5) {
    document.write("<br>Condition inside if is met, putting break statement");
    break;
  }
}
document.write("<br>Loop has ended.");
```

<hr>

![Output](Images/break.png)

<hr>

# Continue

<hr>

- If we ever wanna jump onto next iteration stopping the currently going iteration, then we use `continue` statement.
- - We use `continue outer` (After naming 1st for as outer by: `outer: for(;;){}`) if we are in a for loop which is also in a for loop, and inside the 2nd for loop we write continue in order to continue the outer for loop , not the 2nd for.

<hr>

```js
for (let counter = 1; counter <= 15; counter += 1) {
  if (counter === 5) {
    document.write("<br>Condition met, executing continue statement");
    continue;
  }
  document.write(`<br>Present iteration=${counter}`);
}
```

<hr>

# Alert, Prompt, Confirm

<hr>

- In order to interact with the user, we use `alert`, `prompt`, `confirm`.

<hr>

- `alert()`:- Shows a message.
- `prompt()`:- Shows a message, input text. It return a text if Ok is pressed, and null if Cancel button or Esc is clicked.
- `confirm()`:- Shows a message, confirm with `Ok` or `Cancel`. Returns `true` or `false` ('false` with Esc or Cancel).

<hr>

**Note**: Unless and until the user does not interacts and give required response to these popups, he won't be able to interact with the rest of the window.

<hr>

# Alert

<hr>

```js
alert("Welcome to Paul Classes");
document.write("<h1>Paul Classes</h1>");
```

<hr>

# Prompt

<hr>

```js
name = prompt("Please enter your name: ", "Sam Varghese"); //prompt(question, default value)
document.write(`Welcome Master ${name}`);
```

<hr>

# Confirm

<hr>

```js
response = confirm("Are you sure you wanna load this malacious website?");
if (response) {
  document.write("Congrats, you are brave");
} else {
  document.write("You loser, timid person");
}
```

<hr>

# Automatic Exception Handling

<hr>

- JavaScript has this added feature that it can handle small logicall errors automatically.

<hr>

```js
document.write(5 + null); //Took null to be=0
```

<hr>

![Output](Images/eh1.png)

<hr>

```js
document.write("Sam+" + null); //Took null as a string
```

<hr>

![Output](Images/eh2.png)

<hr>

```js
document.write(5 + "5"); //Converted variable to a string datatype
```

<hr>

![Output](Images/eh3.png)

<hr>

```js
document.write(5 - 2); //Now variable's datatype would get converted to number
```

<hr>

![Output](Images/eh4.png)

<hr>

```js
document.write("5" * "2"); //Converted both strings to numbers
```

<hr>

![Output](Images/eh5.png)

<hr>

# NaN Error

<hr>

- NaN is an error in JavaScript which stands for `Not A Number` and occurs when we mistakenly code smething like `document.write('5'*'yes')`.
- This happened because JavaScript while handling this error tried to convert `'yes'` to number datatype, which was unsuccessfull and hence resulted in this error.

<hr>

# Datatypes

<hr>

- There are basically 3 datatypes in JavaScript:-
- `String`
- `Number`
- `Boolean`

<hr>

# Type Conversion

<hr>

- There are basically these three functions in order to convert one type to another.
- `String()`
- `Number()`
- `Boolean()`
- If you ever do `Number("Sam")` which is obviously incorrect, then it returns `NaN` whose type is `Number`.
- `Number` of `true` is `1` while that of `false` is `0`.
- `Boolean` of `0` and `""`(Empty String) is `false` while that of all numbers except `0`, and all strings except empty string is `true`.

<hr>

# String Manipulation

<hr>

- To find length of string in JavaScript, we use `word.length` where word is the string.
- To get he character at a specified position of a string, we use `word[index]` where word is the string and index is the index value of character we want to access. (Index of first character is 0).
- Addittion of strings is directly possible.
- String concatenation can also be done using following method:

```js
str1 = "Sam";
str2 = "Varghese";
fin_str = str1.concat(" ", str2); //Means fin_str=str1+" "+str2
document.write(fin_str);
```

- String Slicing in JavaScript is done using `word.substr(starting_index, word_length)`.
- String slicing can also be done using `word.substring(start_index, end_index)`.** Remember** that slicing like this would give string slice from start_index character till end_index-1 character.
- To get the starting index of a slice of string, we use `word.indexOf(slice)`.
- Now suppose if the slice exists multiple times in the string, then in order to specify to brwser, from which index we want it to begin the search for the slice, then the syntax is `word.indexOf(slice, index)` where index is simply the index after which we want browser to start the search for the slice.
- Now if we want browser to start search for the slice from end of string, then we use `word.lastIndexOf(slice)`.
- Now if the slice does not exists in word, then output is `-1`, similar to python.
- If we ever have a string with space at its begning and end, and if we wanna remove those(only start and end space, hence not exactly same as capwords), then we use `word.trim()`.
- Now if we just want to remove the extra spaces from start (& not from the end), then we use `word.trimStart()`.
- Similarly