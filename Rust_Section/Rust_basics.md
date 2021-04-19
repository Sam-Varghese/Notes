# Rust

![Rust logo](https://miqh.gallerycdn.vsassets.io/extensions/miqh/vscode-language-rust/0.14.0/1536151476041/Microsoft.VisualStudio.Services.Icons.Default)

* Grew out of personal project of **Graydon Hoare** who worked at **Mozilla Research** . Soon **Bredan Eich** (Creator of Javascript) started contributing to this project.

<hr>

* Codes in rust start with `fn main(){program}`
* Semocolon is necessary after every line.
* Only double quotes applicable.

<hr>

## Hello World Program

<hr>

```rs
fn main(){
    println!("Hello World");
}
```

<hr>

## Printing Constants

<hr>

```rs
fn main(){
    println!("{}",1);
}
```

<hr>

## Printing Tuples

<hr>

```rs
fn main(){
    println!("{:?}",("Sam","Angel",true))
}
```

<hr>

* Note that boolean true hear is written as true and not True as used in Python.

<hr>

## Having Multiple Placeholders

<hr>

```rs
fn main(){
    println!("Hi {} name is {}","my","Sam");
}
```

<hr>

## Named Parameters

<hr>

```rs
fn main(){
    println!("{a}, this is {b}; and {b}, this is {a}",a="Sam",b="Angel");
}
```

<hr>

The same result can also be received from the following code:-

<hr>

## Positional Parameters

<hr>

```rs
fn main(){
    println!("{0}, this is {1}; and {1}, this is {0}",a="Sam",b="Angel");
}
```

<hr>

## Placeholder Traits

<hr>

```rs
fn main(){
    println!("Binary Number: {:b}, Hexadecimal Number: {:x}, Octal Number: {:o}",10,10,10);
}
```

* Execution of above code gives binary form of number 10, hexadecimal form of number 10, octal form of number 10.

<hr>

## Placeholder For Debug Traits

<hr>

* Used for printing tuples..

```rs
fn main(){
    println!("{:?}",(12,true,false,"Sam"));
}
```

<hr>

## Dealing Wirh Variables

<hr>

* Variables hold primitive data or references to data
* Variables are **immutable by default**.
* Rust is a block scoped language.

<hr>

```rs
fn main(){
    let name="Sam Varghese";
    println!("Hi, myself {}",name);
}
```

<hr>

**Code to check if variables are really immutable**:

<hr>

```rs
fn main(){
    let name="Sam Varghese";
    name="Angel Varghese";
    println!("Hi, myself {}",name);
}
```

<hr>

* This code will produce an error that would verify that strings are immutable.

<hr>
