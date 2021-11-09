<h1 align="center">C++ Notes</h1>

<hr>

<p align="center"><img src="Images/cpp.png" alt="C++ logo"></p>

<hr>

- Created by **Bjarne Stroustrup**

<hr>

<img src="Images/2015_bjarne_straustroup.jpg" alt="C++ logo">

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

