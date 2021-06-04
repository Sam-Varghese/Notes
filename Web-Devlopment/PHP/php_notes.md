<h1 align="center">PHP Notes</h1>

<hr>

<p align="center"><img src="Web-Devlopment/../Logo.svg"></p>

<hr>

- PHP is an acronym for **Hypertext Preprocessor**.

<hr>

# Comments

<hr>

- Single line comments always starts with `//`
- Multiline comments starts with `/*` and ends with `*/`.

<hr>

# Declaring Variables

<hr>

- PHP is a **dynamically typed language**.
- PHP **is not case sensitive**.
- This means that here you are not required to specify data type before declaring variable.
- Variables in PHP are declared in following manner:

<hr>

```php
$variable1 = "Sam";
$variable2 = "Angel";
```

<hr>

# Operators In PHP

<hr>

- There are 5 types of operators in PHP:
- Arithmetic Operators
- Assignment Operators
- Comparision Operators
- Increment/ Decrement Operators
- Logical Operators

<hr>

## Arithmetic Operators

<hr>

- To add `variable1` with `variable2`, simply write `variable1+variable2`.
- To subtract `variable1` from `variable2`, we do `variable2-variable1`.
- In order to multiply, we use `*` sign.
- In order to divide, we use `/` sign.

<hr>

- PHP also supports `+=`, `-=`, `*=` and `-=` operator.

<hr>

## Comparision Operator

<hr>

- `==` sign is used in order to check for the equality of 2 variables.
- `var_dump()` function is used in order to  find the data type of a variable.

<hr>

```php
echo var_dump(2==3);
```

<hr>

- The above code would return `bool(false)`.
- We further have `!=` operator for checking unequality of two variable.
- Then we have `<=` and `>=` operator, which have their usual meaning.

<hr>

- **Remember**: If we do `echo variable++`, then the original earlier value of the variable would get printed, and then the variable would get incremented by 1.
- Similar is the case with `echo variable--`.
- Now if we wanna first increment variable, and then print it to the console, then we use `echo ++variable`.
- Similarly, `echo --variable` is used for the same.

<hr>

