<h1 align="center">C++ Notes</h1>

<hr>

<p align="center"><img src="Images/cpp.png" alt="C++ logo"></p>

<hr>

![alt](Images/hello.gif)

<hr>

# Introduction

<hr>

- Created by **Bjarne Stroustrup**

<hr>

<img src="Images/2015_bjarne_straustroup.jpg" alt="C++ logo" height="500vh">

<hr>

# Hello World

<hr>

<img src="Images/HelloWorld.jpg">

<hr>

- Here is a sample hello world program in order to understand the syntax of a C++ program

<hr>

```cpp
#include<iostream> // Library which has standard standard input output definitions

int main(void){ // defining a function named main, with int return type. This function runs automatically without even calling

// Void keyword simply means that we are passing nothing as an argument in this function

    std::cout << "Hello World"; // cout is the function used in order to output something
    // std::cout actually stands for standard character output
    // Semicolons are very necessary to separate one line of code from the other

    return 0; // Any int except 0 can also be returned
}
```

<hr>

- Instead of writing `std::cout` always, we may also write the above code as follows:

<hr>

```
#include<iostream>

using namespace std;
//using namespace std means that we can use names for objects and variables from the standard library.

int main(void){

    cout << "Hello World";
    return 0;
}
```

<hr>

# New Line

<hr>

- To insert a blank line in C++, we may either use `\n` or the keyword `endl`.

<hr>

```cpp
#include<iostream>

int main(void){

    std::cout << "This is the first line\nAnd this is the second line";

    return 0;
}
```

<hr>

OR

```cpp

#include<iostream>

int main(void){

    std::cout << "This is the first line"<<endl << "This is the second line";

    return 0;
}
```

<hr>

# Comments

<hr>

- Comments are the lines which we include in our program for explanation, but are not executed by the compiler.
- There are 2 types of comments:

<hr>

- Single line comments
- Multiline comments

<hr>

## Single Line Comments

<hr>

- If we wanna comment out a single line, then putting `//` is enough.

<hr>

```cpp
#include<iostream>

int main(void){

    // This is a single line comment

    return 0;
}
```

<hr>

## Multi Line Comments

<hr>

- Used in order to comment out multiple lines

<hr>

```cpp
#include<iostream>

int main(void){

    /*
    This is the example of multiline comment
    Here I can comment multiple lines without putting // all the time
    */

    return 0;
}
```

<hr>

# C++ Variables

<hr>

- In C++ there are different types of variables

<hr>

- **int**: Used to store integers
- **double**: Stores floating point numbers
- **char**: Store single characters like 'A' or 'b'. **Chars are always surrounded by single quotes**
- **strings**: Stores text, such as "Hello world". **String values are surrounded by double quotes**
- **bool**: Stores values with 2 states: **true** or **false**.

<hr>

# Declaring Variables

<hr>

- Syntax: _type name = value;_, and this may also work: _type name;_

<hr>

```cpp
#include<iostream>

int main(void){

    int integer1 = 5;
    int integer2;

    integer2 = 10;
}
```

<hr>

# Display Variables

<hr>

- In order to print the variables, this is the way:

<hr>

```cpp
#include<iostream>

int main(void){

    int a=5;
    std::cout<<"Value of a variable: " << a;

    return 0;
}
```

<hr>

# Declaring Multiple Variables

<hr>

- We can also declare multiple variables at the same time, as follows:

<hr>

```cpp
#include<iostream>

int main(void){

    int integer1 = 1, integer2 = 2, integer3 = 3, integer4 = 4;

    return 0;
}
```

<hr>

# Identifiers

<hr>

- Variable names are what's known as identifiers.
- Variables can't be given arbitrarily any name. Here  are the naming rules:

<hr>

1. Names can contain only letters, digits, and underscores.
2. Names must begin only with a letter or an underscore.
3. Identifiers are case sensitive. (So abc, and Abc are different identifiers)
4. Names cannot contain whitespaces, or special characters like !, #, %, etc.
5. Reserved words like `int` can't be used as identifiers.

<hr>

# C++ Constants

<hr>

- In order to restrict the change of value of a variable, we may use `const`.

<hr>

```cpp
const int integer1 = 5;

integer1 = 10; // Would result in an error as integer1 should always be constant
```

<hr>

# C++ User Input

<hr>

- In order to get the user input, we use `std::cin` function.

<hr>

```cpp
#include<iostream>

int main(void){

    int integer1;

    std::cout << "Kindly enter the input: ";
    std::cin >> integer1;

    std::cout << "\nThe inputted integer is: "<<integer1;
}
```

<hr>

- **Note**: For `cin`, the delimiter is space(` `), so if you would input a string ex "Myself Sam", then the variable would only be storing "Myself"
- In order to avoid this problem, we use `getline`

<hr>

# Getline

<hr>

- Used to get inputs where space is also present

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

    std::string stringA;

    std::cout <<"\nKindly enter your name: ";
    std::getline (std::cin, stringA);
}
```

<hr>

# Byte Size Of Data Types

<hr>

| Data Type | Size |
| -------- | ------- |
|int| 4 bytes |
|float| 4 bytes |
|double| 8 bytes |
|boolean| 1 byte |
|char| 1 byte |

<hr>

# Float Vs Double

<hr>

- Both of them are used to store floating point numbers, but the precision of *float* is only 6 or 7 decimal digits, while *double* variables have a precision of about 15 digits.

<hr>

- A floating point number can also be a scientific number with an `e` to indicate the power of 10.

<hr>

```cpp
#include<iostream>

int main(void){

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1;
    cout << d1;

    return 0;
}
```

<hr>

# C++ Booleans

<hr>

- `true` is 1, while `false` is 0

<hr>

```cpp
#include<iostream>

int main(void){

    bool trueVariable = true;
    bool falseVariable = false;

    std::cout << "The true variable is: "<< trueVariable<<" The false variable is: "<< falseVariable;
    // Output is The true variable is: 1 The false variable is: 0
}
```

<hr>

# C++ Chars

<hr>

- This datatype is used to store only a single character, enclosed within single quotes.
- **Note**: We can use ASCII values to display certain characters.

<hr>

```cpp
#include<iostream>

int main(void){

    char value1 = 65, value2 = 70;
    std::cout<<"The value of value1 variable: "<<value1<< " Value of value1 variable: "<<value2;
}
```

# C++ Strings

<hr>

- This is not a built-in datatype in C++
- To use it we need to include the string header file

<hr>

```cpp
#include<string>
```

<hr>

## Creating A String

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

    std::string stringA = "Sam Varghese";
    std::cout << "Value of stringA: "<<stringA;
}
```

<hr>

**Note**: Comparison operators always return 1(true) and 0(false) as output.

<hr>

```cpp
#include<iostream>

int main(void){

    std::cout << (5>6); // Ouput is 0
}
```

<hr>

# String Concatenation

<hr>

- In order to add a string with another, here is the way:

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

    std::string stringA = "Sam";
    std::string stringB = "Varghese";

    std::string resultingString = stringA + stringB;

    std::cout << "The resulting string is: "<< resultingString;
}
```

<hr>

# Append

<hr>

- String concatenation can also be done in the following way:

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

    std::string stringA = "Sam";
    std::string stringB = "Varghese";

    std::string resultingString = stringA.append(stringB); // Adds stringB after stringA

    std::cout << "The resulting string is: "<< resultingString;
}
```

<hr>

# String Length

<hr>

- In order to find the length of a string, `string.length()` is the function that comes into use.

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

    std::string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    std::cout<< "Length of alphabets string: "<< alphabets.length(); // alphabets.size() also works in C++

    return 0;
}
```

<hr>

- **Note**: Instead of `.length()`, `.size()` can also be used.

<hr>

# C++ Access Strings

<hr>

- We can access any character of the string, as follows:

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

    std::string stringA = "Hello World";

    std::cout << "The 5th character of the string is: " << stringA[4];

    return 0;
}
```

<hr>

# Change String Characters

<hr>

- We can change the string characters as follows

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

    std::string stringA = "Hello World";

    stringA[0] = 'J';

    std::cout << "The new value of the string is: "<< stringA;

    return 0;
}
```

<hr>

- **Note**: Always use `getline` in order to get a string as input, instead of `cin`, reason in the [explanation of getline](https://github.com/Sam-Varghese/Notes/blob/main/C%2B%2B/CPP.md#getline)

<hr>

![Keep going gif](Images/keepGoing.gif)

<hr>

# C++ Math

<hr>

![Math GIF](Images/math.gif)

<hr>

# Max

<hr>

- Yeah, there is a built in function in C++ to figure out the max value out of 2 numbers

<hr>

```cpp
#include<iostream>

int main(void){

    std::cout << "The max of 5 and 6 is: "<<std::max(5, 6);

    return 0;
}
```

<hr>

# Min

<hr>

- We also have a `min` function in order to calculate the minimum of 2 numbers.

<hr>

```cpp
#include<iostream>

int main(void){

    std::cout << "The max of 5 and 6 is: "<<std::min(5, 6);

    return 0;
}
```

<hr>

# Other Math Functions

<hr>

<table class="ws-table-all notranslate" style="margin:0">
  <tbody><tr>
    <th style="width:23%">Function</th>
    <th style="width:77%">Description</th>
  </tr>
  <tr>
    <td>abs(x)</td>
    <td>Returns the absolute value of x</td>
  </tr>
  <tr>
    <td>acos(x)</td>
    <td>Returns the arccosine of x</td>
  </tr>
  <tr>
    <td>asin(x)</td>
    <td>Returns the arcsine of x</td>
  </tr>
  <tr>
    <td>atan(x)</td>
    <td>Returns the arctangent of x</td>
  </tr>
  <tr>
    <td>cbrt(x)</td>
    <td>Returns the cube root of x</td>
 </tr>
  <tr>
    <td>ceil(x)</td>
    <td>Returns the value of x rounded up to its nearest integer</td>
  </tr>
  <tr>
    <td>cos(x)</td>
    <td>Returns the cosine of x</td>
  </tr>
  <tr>
    <td>cosh(x)</td>
    <td>Returns the hyperbolic cosine of x</td>
 </tr>
  <tr>
    <td>exp(x)</td>
    <td>Returns the value of E<sup>x</sup></td>
 </tr>
  <tr>
    <td>expm1(x)</td>
    <td>Returns e<sup>x</sup> -1</td>
 </tr>
  <tr>
    <td>fabs(x)</td>
    <td>Returns the absolute value of a floating x</td>
  </tr>
  <tr>
    <td>fdim(x, y)</td>
    <td>Returns the positive difference between x and y</td>
  </tr>
  <tr>
    <td>floor(x)</td>
    <td>Returns the value of x rounded down to its nearest integer</td>
  </tr>
  <tr>
    <td>hypot(x, y)</td>
    <td>Returns sqrt(x<sup>2</sup> +y<sup>2</sup>) without intermediate overflow or underflow</td>
 </tr>
  <tr>
    <td>fma(x, y, z)</td>
    <td>Returns x*y+z without losing precision</td>
 </tr>
  <tr>
    <td>fmax(x, y)</td>
    <td>Returns the highest value of a floating x and y</td>
 </tr>
  <tr>
    <td>fmin(x, y)</td>
    <td>Returns the lowest value of a floating x and y</td>
 </tr>
  <tr>
    <td>fmod(x, y)</td>
    <td>Returns the floating point remainder of x/y</td>
 </tr>
 <tr>
    <td>log(x)</td>
    <td>Returns the natural log of x</td>
  </tr>
  <tr>
    <td>pow(x, y)</td>
    <td>Returns the value of x to the power of y</td>
  </tr>
  <tr>
    <td>round(x)</td>
    <td>Returns the int greater than or eq to x</td>
  </tr>
  <tr>
    <td>sqr(x)</td>
    <td>Returns the square root of x</td>
  </tr>
  <tr>
    <td>sin(x)</td>
    <td>Returns the sine of x (x is in radians)</td>
 </tr>
  <tr>
    <td>sinh(x)</td>
   <td>Returns the hyperbolic sine of a double value</td>
 </tr>
  <tr>
    <td>tan(x)</td>
    <td>Returns the tangent of an angle</td>
  </tr>
  <tr>
    <td>tanh(x)</td>
    <td>Returns the hyperbolic tangent of a double value</td>
 </tr>
</tbody>
</table>

<hr>

# C++ Conditionals

<hr>

C++ has the following conditional statements:

<hr>

- Use `if` to specify a block of code to be executed, if a specified condition is true
- Use `else` to specify a block of code to be executed, if the same condition is false
- Use `else if` to specify a new condition to test, if the first condition is false
- Use `switch` to specify many alternative blocks of code to be executed

<hr>

# If Statement

<hr>

- Use `if` to specify a block of code to be executed, if a specified condition is true

<hr>

```cpp
#include<iostream>

int main(void){

    if(20 > 18){

    std::cout << "20 is greater sir";
    }

    return 0;
}
```

<hr>

# Else

<hr>

- Use `else` to specify a block of code to be executed, if the same condition is false

<hr>

```cpp
#include<iostream>

int main(void){

    if(3>4){

        std::cout << "3 is greater";
    } else {

        std::cout << "4 is greater";
    }

    return 0;
}
```

<hr>

# Else If

<hr>

- Use `else if` to specify a new condition to test, if the first condition is false

<hr>

```cpp
#include<iostream>

int main(void){

    if(4>4){

        std::cout << "Yes, 4 is greater than 4";
    } else if (4 == 4){

        std::cout << "Yes, 4 is equal to 4";
    } else {

        std::cout << "No, 4 is less than 4";
    }

    return 0;
}
```

<hr>

# ShortHand If Else

<hr>

- *variable = (condition) ? expressionTrue : expressionFalse;*

<hr>

```cpp
#include<iostream>

int main(void){

    int maxValue;

    maxValue = (5>6) ? 5 : 6;

    std::cout << "The max out of 5, and 6 is: " << maxValue;

    return 0;
}
```

<hr>

