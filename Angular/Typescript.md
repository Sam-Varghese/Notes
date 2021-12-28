`tsc fileName.ts` -> to compile it to javaScript

var make the variables available to just one outer block, while let only to that block

# Type annotation

if we wanna tell ts the type a variable is going to inherit during its declaration, then syntax is `let variableName : type`

```ts
let a : number;

a = 5;
a = "Sam";
```

Type can be the following:

`let variableName : number;`
`let variableName : boolean;`
`let variableName : string;`
`let variableName : any;`
`let variableName : number[] = [1,2,3];`
`let variableName : any[] = [1, true, 'a'];`

# Enum

```ts
enum colorList { Red, Blue, Green };
console.log(colorList.Red);
```

this code is very equivalent to 

```ts
enum colorList{Red = 0, Blue = 1, Green = 2};
console.log(colorList.Red);
```

You'll be literally amazed to see the JavaScript code generated while compiling this ts code

```javascript
var colorList;
(function (colorList) {
    colorList[colorList["Red"] = 0] = "Red";
    colorList[colorList["Blue"] = 1] = "Blue";
    colorList[colorList["Green"] = 2] = "Green";
})(colorList || (colorList = {}));
;
console.log(colorList.Red);

```

Now if we write the following code:

```javascript
let message = 'abc';

console.log(message.endsWith('c'));
```

Note that after putting the `.` we get all the functions that are there in ts for string.

Whereas, if we write the following code:

```ts
let message;
message = "Hello there";

console.log(message.endsWith('c'));
```

Then here after pressing `.`, we don't get 

This happened because message wasn't declared as a string in the first line, so it didn't give any suggestions

Hence in order to tell ts inside the console.log that message is not `any`, but `string`, here's what we do

```ts
let message;
message = "Hello there";

console.log((<string>message).endsWith("c"));
```

or

```ts
let message;
message = "Hello there";

console.log((message as string).endsWith("c"));
```

# Arrow functions

```ts
let myFunction = () => {

    console.log("Hey there!");
}

myFunction();
```

If the function code is of just one line, then we can also write a following:

```ts
let myFunction = () => console.log("Hey there!");


myFunction();
```

If we have only one argument in the function, then we may also skip th bracket

```ts
let printMessage = message => console.log(message);

printMessage("Hello Angel");

```

