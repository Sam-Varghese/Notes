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
- Variables can't be given arbitrarily any name. Here are the naming rules:

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

| Data Type | Size    |
| --------- | ------- |
| int       | 4 bytes |
| float     | 4 bytes |
| double    | 8 bytes |
| boolean   | 1 byte  |
| char      | 1 byte  |

<hr>

# Float Vs Double

<hr>

- Both of them are used to store floating point numbers, but the precision of _float_ is only 6 or 7 decimal digits, while _double_ variables have a precision of about 15 digits.

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

- Syntax: _variable = (condition) ? expressionTrue : expressionFalse;_

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

# Switch

<hr>

- Use the `switch` statement to select one of many code blocks to be executed.
- Prefer using `OR` operator instead of `switch` statement.

<hr>

```cpp
#include<iostream>

int main(void){

    int day = 4;

    switch(day){

        case 0: // Checks wether day is = 0

            std::cout << "Day detected to be equal to 0\n"; // Would run these lines is day = 0
            break; // Important to put in order to stop program from checking wether day is still = 2/3/4/5

        case 1:

            std::cout << "Day detected to be equal to 1\n";
            break;

        case 2:

            std::cout << "Day detected to be equal to 2\n";
            break;

        case 3:

            std::cout << "Day detected to be equal to 3\n";
            break;

        default: // For the case when day is none of the above switch statement value

            std::cout << "Day detected to be equal to 4\n";
            break;

    }

    std::cout << "Switch statement ended";

    return 0;
}
```

<hr>

# While Loop

<hr>

- Loops can execute a block of code as long as a specified condition is reached using `while`
- Syntax: `while(condition){//Code block}`

<hr>

```cpp
#include<iostream>

int main(void){

  int i=5;

  while(i > 0){

    std::cout << "Value of i is "<< i << "\n";
    i--;
  }

  return 0;
}
```

<hr>

Keep Scrolling bro, You can do this ❤️‍🔥🔥

<hr>

![Keep Going](Images/keepGoing1.gif)

<hr>

# Do While

<hr>

![Do While Loop Meme](Images/doWhile.jpg)

<hr>

- The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

<hr>

- Syntax:

<hr>

```cpp
do{

  // code block to be executed
} while (condition)
```

<hr>

- Example:

<hr>

```cpp
#include<iostream>

int main(void){

  int i=0;

  do {
    i++;
    std::cout << "Value of i=" << i << "\n";
  } while (i<10);
}
```

<hr>

# For Loop

<hr>

- When you know exactly how many times you want to loop through a block of code, use the `for` loop instead of a `while` loop

<hr>

```cpp
#include<iostream>

int main(void){

  for(int i = 0; i < 11; i++){ // We initialize i variable, set a condition at i, and tell how i would change during the loop

    std::cout << "\nValue of i is: "<<i<< "\n";
  }

  return 0;
}
```

<hr>

# Break Statement

<hr>

- `break` statement is used in order to jump out of loop.

<hr>

```cpp
#include<iostream>

int main(void){

  for(int i = 0; i < 11; i++){

    std::cout << "Value of i="<<i<<"\n";

    if(i==5){

      std::cout << "Breaking the loop\n";
      break;
    }
  }

  std::cout << "Loop ended\n";

  return 0;
}
```

<hr>

# Continue

<hr>

- The continue statement breaks the current iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

<hr>

```cpp
#include<iostream>

int main(void){

  for(int i=0; i < 11; i++){

    if(i == 5){

      std::cout << "\nValue of i is detected as 5, so continuing the loop\n\n";
      continue;
    }

    std::cout << "Value of i= "<< i<< "\n";
  }

  return 0;
}
```

<hr>

# Arrays

<hr>

- Used to store multiple values in a single variable, instead of declaring separate variables to store each of them.

<hr>

## Declaring An Array

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

  std::string cars[4]; // Here 4 is the the total number of string elements cars array can store at max
  int intArray[4]; // This array can store only 4 int's at max

  return 0;
}
```

<hr>

## Inserting Values

<hr>

```cpp
#include<iostream>

int main(void){

  int intArray[3] = {1, 2, 3};

  return 0;
}
```

<hr>

## Accessing Array Elements

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

    std::string stringArray = {"Sam", "Varghese", "Indore"};

    std::cout << "The second element of the array is: "<< stringArray[1];

    return 0;
}
```

<hr>

## Change Array Element

<hr>

- Arrays are mutable.

<hr>

```cpp
#include<iostream>
#include<string>

int main(void){

    std::string stringArray[3] = {"Sam", "Varghese", "Indore"};

    // Altering the 3rd element of array

    stringArray[2] = "India";

    // Printing the array
    for(int i=0; i<3; i++>){

      std::cout << "\nThe next element of the array: "<< stringArray[i];
    }

    return 0;
}
```

<hr>

## Omit Array Size

<hr>

- We can initialize an array without even specifying it's size.

<hr>

```cpp
#include<iostream>

int main(void){

  int integerArray[] = {1, 2, 3, 4, 5};

  return 0;
}
```

<hr>

- **Note**: If you won't mention the array length, then you won't be able to add anymore elements later.
- Like in the following case, we are able to add extra elements:

<hr>

```cpp
#include<iostream>

int main(void){

  int integerArray[6] = {1, 2, 3, 4, 5};
  integerArray[5] = 6;
}
```

<hr>

# Char Arrays

<hr>

- Character arrays are simply arrays with all of it's elements of type `char`.

<hr>

## Initializing A Char Array

<hr>

```cpp
#include<iostream>
#include<string>
#include<cstring>

int main(void){

    char characterArray[] = {'a', 'b', 'c', 'd', '\0'};

    // Printing the characterArray

    for(int i=0; i< strlen(characterArray); i++){

      std::cout << "Element of array: "<<characterArray[i]<< "\n";
    }

    return 0;
}
```

<hr>

- **Reason For The \0:** If you now put some characters into str it will print str up to the last '\0'. Every string literal ends with '\0', you must make sure your array ends with '\0' too, if not, data will be read beyond your array (until '\0' is encountered) and possibly beyond your application's memory space in which case your app will crash.

<hr>

- Alternatively, we can also initialize an array with the help of strings, as follows:

<hr>

```cpp
#include<iostream>
#include<string>
#include<cstring>

int main(void){

    char characterArray = "Sam Varghese"; // With this method, we wont need to add \0 at the end

    // Printing the characterArray

    for(int i=0; i< strlen(characterArray); i++){

      std::cout << "Element of array: "<<characterArray[i]<< "\n";
    }

    return 0;
}
```

<hr>

# CString

<hr>

- This header file defines several functions to manipulate char arrays.

<hr>

## C++ memchr()

<hr>

- Used in order to check the presence of a character in a character array.
- **Note**: Search is case sensitive.

<hr>

```cpp
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(void){

  char array[] = "Myself Sam Varghese";

  char ele = 'e';

  if(memchr(array, ele, 4)){

    cout << "Found the element sir.";
  } else {

    cout << "Element not found.";
  }

  return 0;
}
```

<hr>

## strcat()

<hr>

- Concatenates 2 char arrays
- Returns a pointer to the destination array

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>
#include<cstring>

using namespace std;

int main(void){

    char a[] = "Sam ";
    char b[] = "Angel";

    strcat(a, b);

    cout << a;

    return 0;
}
```

<hr>

## strchr()

<hr>

```cpp
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(void){

    char array1[] = "Sam Varghese";

    if(strchr(array1, 'a')){

      cout << "Character found in the character array";
    } else {

      cout << "Character not found in the character array";
    }

    return 0;
}
```

<hr>

## strcmp()

<hr>

- Used in order to compare 2 char arrays
- It returns a positive value if the first differing character in `lhs` is greater than the corresponding character in `rhs`.
- It returns a negative value if the first differing character in `lhs` is smaller than the corresponding character in `rhs`.
- It returns 0 if `lhs` and `rhs` are equal.

<hr>

```cpp
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(void){

  char a[] = "Sam";
  char b[] = "Angel";

  cout << strcmp(a, b); // returns 1

  return 0;
}
```

<hr>

## strcpy

<hr>

- The following program will generate an error:

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>
#include<cstring>

using namespace std;

int main(void){

  char a[] = "Sam Varghese";
  char b[50];

  b = a;

  cout << b;

  return 0;
}
```

<hr>

![Destroying computer meme](Images/destroyComputer.gif)

<hr>

- Hence in order to copy the value of a char array to another, use the following function.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>
#include<cstring>

using namespace std;

int main(void){

  char a[] = "Sam Varghese";
  char b[50];

  strcpy(b, a);

  cout << b;

  return 0;
}
```

<hr>

# C++ References

<hr>

- A reference variable is a reference to an existing variable, and is created with an `&` operator.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

  string a = "Sam ";
  string b = a;
  b += "Varghese";

  cout << a << "\n";
  cout << b << "\n";

  return 0;
}
```

<hr>

- In the above example, we can see that the variable `a` didn't change even when we did `b=a` and edited b as `b += "Varghese"`.
- In order to have the `a` variable automatically altered whenever we alter `b` variable, make `b` the reference of `a` instead of value of `a`

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

  string a = "Sam ";
  string &b = a;
  b += "Varghese";

  cout << a << "\n";
  cout << b << "\n";

  return 0;
}
```

<hr>

# Memory Address

<hr>

- We can get the memory address of a variable using `&` operator.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

  string a = "Sam";

  cout << &a;

  return 0;
}
```

<hr>

# C++ Pointers

<hr>

- A pointer is simply a variable that stores memory address as its value.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

  string a = "Sam";

  string* b = &a; // string because a is a string

  cout << &a << "  " << b;

  return 0;
}
```

<hr>

# C++ Dereference

<hr>

- In the previous example, we used the pointer variable to get the memory address of a variable (used together with the & reference operator)- However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator)

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

  string a = "Sam";

  string* b = &a;

  cout << b << " "<<*b;

  return 0;
}
```

<hr>

# C++ Modify Pointers

<hr>

- You can also change the pointer's value. But note that this will also change the value of the original variable:

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

  string a = "Sam";

  string* b = &a;

  cout << "\nMemory address of variable a=" << b << ", and the variable value is=" << *b;

  *b = "Varghese";

  cout << "\nNew value of variable a=" << a << ", and the memory address of a, ie b=" << b;

  return 0;
}
```

<hr>

# C++ Functions

<hr>

- A function is a block of code which only runs when it is called.

<hr>

```cpp
void myFunction() { // Void means that it returns nothing

  // Enter the code over here
}

int main(void){

  myFunction() // Call the function like this
}
```

<hr>

- If this functions gets called even before itd definition, like in the following case:

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

  printName("Sam Varghese");

  return 0;
}

void printName(string name){

  cout << name;
}
```

<hr>

- Then we get an error saying that the function `printName` was never defined.
- Hence in order to overcome this error, we may declare the function early, as following:

<hr>

```cpp

#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printName(string); // Just put the types as parameters

int main(void){

  printName("Sam Varghese");

  return 0;
}

void printName(string name){

  cout << name;
}
```

<hr>

## Inline Functions

<hr>

- There is too much overhead while switching from executing the main code, to executing the **SMALL** piece of code in the function.
- Hence, in order to optimize the program, we have the concept of `inline` functions.
- Inline functions simply copy paste the contents of function to the main function,  instead of redirecting the program execution to the code inside function.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

inline string checkEven(int number){

  return (number % 2 == 0) ? "true" : "false";
}

int main(void){

  cout<< checkEven(45);

  return 0;
}
```

<hr>

- It's just a suggestion to the compiler to consider our function as inline, and copy paste the code inside the place where it's called.
- Prefer making only small functions inline, not all.

<hr>

## Function Parameters

<hr>

- The values which we pass while **making** the function.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

inline int add (int num1, int num2){// num1 and num2 are parameter

  return num1 + num2;
}

int main(void){

  cout << add(12, 13); // 12, and 13 are arguments

  return 0;
}
```

<hr>

## Function Arguments

<hr>

- The actual values that we pass while calling a function.
- Like in the above example, 12, and 13 are arguments.

<hr>

## Default Parameters

<hr>

- If we want to set a default value to the parameter, then we can do so in the following manner:

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

inline int add(int num1, int num2=10, int num3=4){

  return num1+num2+num3;
}

int main(void){

    cout << add(1,2) // num1 = 1, num2 = 10, num3 = 4 because it has a default value of 4

    return 0;
}
```

<hr>

- **Note**: The parameters to the right of a default parameter should always be default parameters.

<hr>

## Pass By Reference

<hr>

- Take the following example which aims in swapping the values of `a`, and `b`

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void swap(int a, int b){

  int c;

  c = a;
  a = b;
  b = c;
}

int main(void){

  int a = 5;
  int b = 4;

  swap(a, b);

  cout << "\nValue of a = " << a << " Value of b=" << b << "\n";

  return 0;
}
```

<hr>

- After running the program, what we notice is that no change occurred to the variables `a`, and `b`

<hr>

![Frustrated gif](Images/frustrated.gif)

<hr>

- Hence the way out to this problem is store the reference of the variables in parameters instead of values

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void swap(int &a, int &b){

  int c;

  c = a;
  a = b;
  b = c;
}

int main(void){

  int a = 5;
  int b = 4;

  swap(a, b);

  cout << "\nValue of a = " << a << " Value of b=" << b << "\n";

  return 0;
}
```

<hr>

![Party GIF](Images/party.gif)

<hr>

- **Note**: Arrays when passed  

<hr>

## Function Overloading

<hr>

- In C++, multiple functions can have the same name with different parameters.
- Take the following example which brings the need for function overload:

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

inline int sum(int a, int b){

  return a + b;
}

int main(void){

  int sum1 = sum(5, 5);
  float sum2 = sum(0.5, 0.5);

  cout << "The sum of integers, which should be 10 is=" << sum1 << ", and the sum of floats, which should 1.0 is="<< sum2;

  return 0;
}
```

<hr>

- The sum of integers 5 and 5 is 10, which is correct.
- But it gives the sum of 0.5, and 0.5 as 0, which is incorrect.
- Happened because C++ converted 0.5 to int 0 so sum appeared to be 0.
- Here's a way out to this problem

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

inline int sum(int a, int b){

  return a + b;
}

inline double sum(double a, double b){

  return a + b;
}

int main(void){

  int sum1 = sum(5, 5);
  float sum2 = sum(0.5, 0.5);

  cout << "The sum of integers, which should be 10 is=" << sum1 << ", and the sum of floats, which should 1.0 is="<< sum2;

  return 0;
}
```

<hr>

- So in the above program, integer calculations will go to `int sum`, and the double calculations will go to `double sum`.

<hr>

- **Note**: The above program would have resulted in an error if we would have used `float` instead of `double`
- Happened because C++ again converts `float` to `int`, and thus gets confused wether to use the float function, or int function.
- Here's a way out to that problem:

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

inline int sum(int a, int b){

  return a + b;
}

inline float sum(float a, float b){

  return a + b;
}

int main(void){

  int sum1 = sum(5, 5);
  float sum2 = sum(0.5f, 0.5f); // Write f in order to restrict the type of argument as only float

  cout << "The sum of integers, which should be 10 is=" << sum1 << ", and the sum of floats, which should 1.0 is="<< sum2;

  return 0;
}
```

<hr>

- Just want to congratulate for having learnt so much 🎉🎉🥳
- Now you are going to master advanced C++

<hr>

![Advance GIF](Images/adv.jpg)

<hr>

- So whatever we studied till yet comes under procedural programming, which includes only functions and procedures.
- Now lets start a new journey to OOP's

<hr>

![OOPs meme](Images/OOP.jpg)

<hr>

# OOP

<hr>

- OOP stands for **O**bject **O**riented **P**rogramming
- Here we are concerned about creating objects

<hr>

## Advantages:

<hr>

- OOPs is faster and easier to execute
- Provides a clear structure for the programs
- Helps to keep the C++ Code **DRY** **D**on't **R**epeat **Y**ourself

<hr>

# Creating A Class

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Student {

  public:
    string name;
    string className;
    string behavior;
};

int main(void){

  Student Sam;

  Sam.name = "Sam Varghese";
  Sam.className = "Class 12";
  Sam.behavior = "Good boy";

  cout << "\nInformation about Sam: Name: " << Sam.name << " class name: " << Sam.className << " behavior: " << Sam.behavior << "\n";

  return 0;
}
```

<hr>

- In the above example, we created just one object `Sam`. We may create any number of objects.

<hr>

# Adding Functions To Classes

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class students {

  public:

    int addClass(int &classNo){ // Adding functions just as we add objects.

      classNo++;

      return classNo;
    };

    int classNo;
};

int main(void){

  students Sam;

  Sam.classNo = 10;

  cout << Sam.addClass(Sam.classNo) << "\n";
  cout << Sam.classNo;

  return 0;
}
```

<hr>

- We can also define functions of a class outside the class

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class sicaClass{

  public:

    string className;
    int strength;
    string teacherName;
    void addFourty(int &strength);
};

void sicaClass::addFourty(int &strength){

  strength += 40;
}

int main(void){

  sicaClass class12;

  class12.className = "Class 12th";
  class12.strength = 40;
  class12.teacherName = "Rajini Uperati";

  class12.addFourty(class12.strength);

  cout << "Strength of the class+40: " << class12.strength;

  return 0;
}
```

<hr>

# Constructor

<hr>

## Constructors

<hr>

- A constructor in C++ is a special C++ method that is automatically called when an object of the class is created.
- To create a constructor, use the same name as of the class, followed by parenthesis.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}
```

<hr>

## Constructor Parameters

<hr>

- Constructors can also take parameters which can be useful for setting initial values for attributes.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class sicaClasses{

  public:
    string name;
    int strength;
    string classTeacher;

    sicaClasses(string Name, int Strength, string ClassTeacher){

      name = Name;
      strength = Strength;
      classTeacher = ClassTeacher;
    }
};

int main(void){

  sicaClasses class12("Class 12", 40, "Rajini Upareti");

  cout << "\nName of the class: " << class12.name << " strength of the class: " << class12.strength << " name of class teacher: " << class12.classTeacher;

  return 0;
}
```

<hr>

## Constructors Outside Class

<hr>

- Very similar to as we define functions outside classes.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class sicaClass{

  public:

    string className;
    int strength;
    string teacherName;
    void addFourty(int &strength);
};

void sicaClass::addFourty(int &strength){

  strength += 40;
}

int main(void){

  sicaClass class12;

  class12.className = "Class 12th";
  class12.strength = 40;
  class12.teacherName = "Rajini Uperati";

  class12.addFourty(class12.strength);

  cout << "Strength of the class+40: " << class12.strength;

  return 0;
}
```

<hr>

# Access Specifiers

<hr>

- The `public` keyword that appears inside the class is an access specifier.
- Access specifiers define how the members (attributes and methods) of a class can be accessed.
- `public` means that they can be accessed and modified from outside the code

<hr>

- In C++ there are 3 types of access specifiers: 

<hr>

- `public`: Members are accessed from outside the class.
- `private`: Members can't be accessed from outside the class.
- `protected`: Members can't be accessed from outside the class, however they can be accessed in inherited classes.

<hr>

- Here's an example demonstrating the difference between `public` and `private` members.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class myClass {

    public:
        string behaviour;

    private:
        string bestFriend;
};

int main(void){

    myClass Sam;

    Sam.behaviour = "Good";
    Sam.bestFriend = "Tejas";

    return 0;
}
```

<hr>

- **Note**: By default all the members of a class are `private` if you don't specify the access specifier.

<hr>

```cpp
class MyClass {
  int x;   // Private attribute
  int y;   // Private attribute
};
```

<hr>

# Encapsulation

<hr>

- Encapsulation means to hide the sensitive data from users.
- To access a private attribute, use the public `get` & `set` method.

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class MySchool{

  public:
    string studentName;
    string studentBehaviour;

    // A function to get the value of private object

    long getID(){

      return ID;
    }

    // A function to change the value of a private object

    void setID(long IDValue){

      ID = IDValue;
    }

  private:
    long ID;
    int result;
};

int main(void){

  MySchool Sam;

  Sam.setID(1234);

  cout << Sam.getID();

  return 0;
}
```

<hr>

# Inheritance

<hr>

- In C++ it is possible to inherit attributes and methods from one class another.
- This inheritance concept is categorized in 2 categories

<hr>

- **Derived Classes** (child): The class that inherits from another class
- **Base Class**(parent): The class being inherited from

<hr>

```cpp
#include<iostream>
#include<string>

using namespace std;

// Base Class

class student {

  public:
    string name;

    void printName(){

      cout << "\nMy name is Sam";
    }
};

// Derived class

class class12: public student {

  public:
    int class12ID = 1221;
};

int main(void){

  class12 Sam;
  Sam.printName();

  return 0;
}
```

<hr>

## Multilevel Inheritance

<hr>

```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class School {

  public:
    string schoolsRegion;
};

class SicaSchool : public School {

  public:
    string schoolName;
};

class classes : public SicaSchool {

  public:
    string className;
};

int main(void){

  classes class12;
  class12.schoolName = "SICA";

  cout << class12.schoolName;

  return 0;
}
```