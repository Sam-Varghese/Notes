# Rust

![Rust logo](https://miqh.gallerycdn.vsassets.io/extensions/miqh/vscode-language-rust/0.14.0/1536151476041/Microsoft.VisualStudio.Services.Icons.Default)

[Rust Playground](https://play.rust-lang.org/)

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

## Dealing With Variables

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

## Explicitly Making Variables Mutable

<hr>

```rs
fn main(){
    let mut name="Sam Varghese";
    name="Angel Varghese";
    println!("Hi, myself {}",name);
}
```

<hr>

* Note that the above code wont produce an error but would warn us that the first value of variable name is unused.

<hr>

## Dealing With Constants

<hr>

```rs
fn main(){
    const ID: i32=20;
    println!("My ID number is {}",ID);
}
```

<hr>

* Note that in rust constant are in upper case only else a warning would be given by compiler.

<hr>

## Declaring Value Of Multiple Variables In A Single Go

<hr>

```rs
fn main(){
    let (my_name, my_age, my_status)=("Sam", 18, "happy");
    println!("Hi, myself {}, I am {}, and I am a {} person", my_name, my_age, my_status);
}
```

<hr>

## Datatypes In Rust

<hr>

**Primitive Datatypes**

* Integers: u8 (unsigned 8 bit int), i8 (signed int), u16, i16, u32, i32, u64, i64, u128, i128
* Floats: f32, f64
* Boolean (bool): true, false
* Arrays
* Characters (char)
* Tuples

<hr>

* **Note**: Rust is a statically typed language, which means that it must know types of all variables at compile type, however, the compiler can usually infer what type we want to use based on the value and how we use use it.

<hr>

```rs
fn main(){
    let a=1; //default is i32
    let b=1.54321; //default is f64

    //Adding type explicitly
    let c: i64=23432423;

    //Finding max int possible for a type
    println!("Max int in i32={}", std::i32::MAX);
    println!("Max int in i64={}", std::i64::MAX);

    //Boolean type
    let d=true;
    //or use
    let d: bool=true;
    //or use
    let d=10<5;

    println!("{:?}",(a,b,c,d));

}
```

<hr>

* Note that when you run these programmes in suppose rust playground, then compiler gives warning such as ```#[warn(unused_variables)]` on by default``` which simply signifies that there is a variable which is unused throughout execution. If we want to avoid popping out of this warning, simply put ``_`` before variable name. Ex make variable named ``a`` to ``_a``.

<hr>

## Char Type

<hr>

* Has only a single character

* Diffrent from string datatype

<hr>

```rs
fn main(){
    let a='a';
    let b='b';
    println!("{:?}",(a,b));
}
```

<hr>

## Strings in Rust

* Rust has two types of string data structure.
* **Primitive str**: Immutable fixed length string somewhere in the memory.
* **String**: Growable (possible to append it as if it were an array), heap-allocated data structure- Use when you need to modify or own string data.

<hr>

```rs
fn main(){
    let a="Hi this is a primitive string";
    let b = String::from("Hello");
    println!("{:?}",(a,b));
}
```

<hr>

## Length Function In Rust

<hr>

* In order to find length of any item in rust, the following command:

<hr>

```rs
fn main(){
    let a="Myself Sam";
    println!("Length of a is={}",a.len());
}
```

<hr>

## Pushing In String Datatype

<hr>

```rs
fn main(){
    let mut a=String::from("Hello"); //Works only with this datatype
    
    //Pushing a character
    a.push('W');

    println!("Pushing a character: {}",a);

    //Pushing a string
    a.push_str("orld!");

    println!("Pushing a string: {}",a);
}
```

<hr>

## Finding Capacity

<hr>

```rs
fn main(){
    let a=String::from("Hellomoto");
    println!("Capacity of this string: {}",a.capacity());
}
```

<hr>

## Is Empty Condition

<hr>

```rs
fn main(){
    let s=String::from("Hello");
    println!("Is this string s empty? {}",s.is_empty());
}
```

<hr>

