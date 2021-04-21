# C++

![Logo](https://avatars.githubusercontent.com/u/13841574?s=400&v=4)

- Made by **Bjarne Stroustrup**
- 1979
- AT & T's Bell Labs
- Also called **C with classes**.
- 1983
- C++ is a middle level language.
- C++ joins three separate programming traditions

* **Procedural Language** tradition represented by C
* The **Object Oriented** language tradition represented by class enhancements C++ adds to C;
* **Generic Programming** supported by C++ templates.

<hr>

## DIffrence Between C and C++

- C++ is the super set of C language.
- C++ programs can use existing C software libraries.
- C follows top down approach of programming.
- C++ follows bottom up approach of programming.
- C adopts Procedural Oriented Programming
- C++ adopts Object Oriented Programming

<hr>

## Object Oriented Programming

- OOPs is a programming approach which revolves around the concept of Object.
- Any entity in the system that can be defined as a set of properties and set of operations performed using entity's property set, is known as Object.

<hr>

## Concept Of Classes And Objects

- Class is a blueprint of an Object
- Class is a description of Object's property set and set of operations.
- Creating Class is as good as defining a new data type.
- Class is a means to achieve encapsulation.
- Object is a run time entity.
- Object is an instance of a class.

<hr>

## SOftware Devlopment In C++

<hr>

![Software_dev](Images\Soft_dev.png)

<hr>

## Types Of Constants

<hr>

### Primary Constants

<hr>

- Integer
- Real
- Character

<hr>

### Secondary Constants

<hr>

- Array
- String
- Pointer
- Union
- Structure
- Enumerator
- Class

<hr>

#### Integer Constant

<hr>

23, -341, 0, 5

<hr>

#### Real Constant

<hr>

3.4, **3.0**

<hr>

#### Character Constant

<hr>

- Length should be 1
- Should be enclosed with only single quotes.
- 'a', 'A', '+'

<hr>

#### Strings

<hr>

- Enclosed by double quotes.
- Can have any length.
- Ex "Sam Varghese"

<hr>

## Variables

<hr>

- Variables are the names of memory locations where we store data.
- Variable name is any combination of alphabet (a to z or A to Z), digit (0 to 9) and underscore(\_).
- Variables in C++ can start with only **alphabets, underscores**.

<hr>

## Keywords

<hr>

![Keywords](Images\keywords.png)

<hr>

## Data Types

<hr>

- int {int a, b=5;}
- char {char ch='a';}
- float {float k=3.45;}
- double {double d1;}

<hr>

- int takes 2 bytes
- char takes 1 byte
- float takes 4 bytes
- double takes 8 bytes

<hr>

## Declare Variable Anywhere

<hr>

- Unlike C, you can declare variables even after action statements.
- Ex

```c
{
    cirscr();
    int x=4;
}
```

<hr>

## Output Instruction

<hr>

- In C, standard output device is monitor and `printf()` is used to send data/message to monitor.
- `printf()` is a predefined function.
- In C++, we can use `cout` to send data/message to monitor.
- `cout` is a predefined object.
- The operator `<<` is called the **insertion** or put to operator

<hr>

## Output Instruction

<hr>

```c
printf("Printing in C");//C
cout<<"Printing in C++";//C++

printf("sum of %d and %d is %d",a,b,c);//C
cout<<"sum of "<<a<<" and "<<b<<" is "<<c;//C++
```

<hr>

## Input Instructions

<hr>

- In C, standard input device is keyboard and `scanf()` is used to receive data from keyboard.
- `scanf()` is predefined function.
- The identifier `cin` is a predefined object in C++
- The operator `>>` is known as **extraction** or get from operator.

<hr>

```c
scanf("%d",&a); //C
cin>>a;//C++

scanf("%d%d",&a,&b); //C
cin>>a>>b; //C++
```

<hr>

## Remember

<hr>

- According to the ANSI standards for C language, explicit declaration of function is recommended but not mandatory.
- ANSI standards for C++ language says explicit declaration of function is compulsory.

<hr>

## Header Files

<hr>

- Predefined functions are declared in header files, so whenever you are using any predefined function in your code, you have to include specific header file taht contains its declaration.
- We need to include header file `iostream.h`, it contains declarations for the identifier `cout` and the operator `<<`. And also for the identifier `cin` and `>>`.
- Header files contains declaration of identifiers.
- Identifiers can be function names, variables, objects, Macros etc.

<hr>

## endl

<hr>

- Inserting endl into the output stream causes the screen cursir to move to the begninning of the next line.
- `endl` is a manipulator and it is declared in iostream.h
- `'\n'` character also works as it works in C.

<hr>

