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

## Is Empty Function

<hr>

```rs
fn main(){
    let s=String::from("Hello");
    println!("Is this string s empty? {}",s.is_empty());
}
```

<hr>

## Contains Function

<hr>

```rs
fn main(){
    let a="Sam";
    println!("{}",a.contains("am"));
}
```

<hr>

## Replace

<hr>

```rs
fn main(){
    let a="I am bad";
    println!("After replacing={}",a.replace("bad","good"));
}
```

<hr>

## Loop Through String By White Spaces

<hr>

```rs
fn main(){
    let statement="Hi, myself Sam";
    for word in statement.split_whitespace(){
        println!("{}",word);
    }
}
```

<hr>

## Create String Of Specified Capacity

<hr>

```rs
fn main(){
    let mut s=String::with_capacity(10);
    s.push('s');
    s.push('a');
    println!("String with specified capacity is {}",s);
}
```

<hr>

## Assertion Testing In Rust

<hr>

```rs
fn main(){
    assert_eq!("sam","sam");//prog will stop id I write unequal string
}
```

<hr>

## Tuples In Rust

<hr>

* Tuples group together values of diffrent types
* **Max 12 Elements Possible**.

<hr>

```rs
fn main(){
    let tup=(1,"Sam",true,false);
    println!("{:?}",tup);
}
```

<hr>

OR

<hr>

```rs
fn main(){
    let tup: (&str, &str, i8)=("Sam", "Angel", 1);
    println!("Tuple is {:?}",tup);
}
```

<hr>

## Selecting Specific Element Of Tuple

<hr>

```rs
fn main(){
    let tup=(1, true, false, "Sam");
    println!("First element is {}, Second {}, Third {}, Fourth {}",tup.0, tup.1, tup.2, tup.3);
}
```

<hr>

## Arrays In Rust

<hr>

* **Arrays in rust are fixed list where elements are of same datatypes**

<hr>

```rs
fn main(){
    let arr=[1,2,3,4,5];
    println!("Array is={:?}",arr);
}
```

<hr>

OR

<hr>

```rs
fn main(){
    let arr: [i32; 5]=[1,2,3,4,5]; //[type, len of array]
    println!("Array is={:?}",arr);
}
```

<hr>

## Getting Single Element From Array

<hr>

```rs
fn main(){
    let a=[1,2,3,4,5];
    println!("The second element of this array is={}",a[1]);
}
```

<hr>

## Replacing An Element

<hr>

```rs
fn main(){
    let mut a=[1,2,3,4,5];
    a[2]=10;
    println!("The third element of a is={}",a[2]);
}
```

<hr>

## Getting Length Of Arrays

<hr>

```rs
fn main(){
    let a=[1,2,3,4,5];
    println!("The length of array a={}",a.len());
}
```

<hr>

## Getting Amount Of Memory Occupied By Array

<hr>

```rs
fn main(){
    let a=[1,2,3,4,5];
    println!("The memory occupied by a is={}", std::mem::size_of_val(&a));
}
```

<hr>

## Getting Slice Of An Array

<hr>

```rs
fn main(){
    let arr=[1,2,3,4,5];
    let slice=&arr[1..4];
    println!("Sliced array is ={:?}",slice);
}
```

<hr>

## Vectors

<hr>

* In rust programming language, vectors are resizable arrays.

<hr>

```rs
fn main(){
    let v=vec![1,2,3,4];
    println!("Value of vector={:?}",v);
}
```

<hr>

## Getting An Element Of An Array

<hr>

```rs
fn main(){
    let v=vec![1,2,3,4,5];
    println!("Second element={}",v[1]);
}
```

<hr>

## Getting Vector Length

<hr>

```rs
fn main(){
    let v=vec![1,2,3,4,5,6];
    println!("Length of vector v is={}",v.len());
}
```

<hr>

## Replacing An Element In Vector

<hr>

```rs
fn main(){
    let mut v=vec![1,2,3,4,5];
    v[1]=10;
    println!("The value of vector={:?}",v);
}
```

<hr>

## Slicing Vectors

<hr>

```rs
fn main(){
    let v=vec![1,2,3,4,5];
    let sl=&v[1..3];
    println!("Value of the sliced vector={:?}",sl);
}
```

<hr>

## Adding Elements To A Vector

<hr>

```rs
fn main(){
    let mut v=vec![1,2,3,4,5];
    v.push(6);
    println!("Value of the vector={:?}",v);
}
```

<hr>

## Popping An Element Out From A Vector

<hr>

```rs
fn main(){
    let mut v=vec![1,2,3,4,5];
    v.pop();
    println!("The value of v after popping={:?}",v);
}
```

<hr>

## Iteration In Vector

<hr>

```rs
fn main(){
    let v=vec![1,2,3,4,5];
    for i in v.iter(){
        println!("{}",i);
    }
}
```

<hr>

## Looping And Mutating Values Of A Vector

<hr>

```rs
fn main(){
    let mut v=vec![1,2,3,4,5];
    for i in v.iter_mut(){
        *i *=2;
    }
    println!("Vector after doubling every element={:?}",v)
}
```

<hr>

## Conditionals In Rust

<hr>

```rs
fn main(){
    let age=22;
    if age>20{
        println!("You are above 20");
    }
    else{
        println!("You are below 20");
    }
}
```

<hr>

## Using AND Operator (&&)

<hr>

```rs
fn main(){
    let age=16;
    let confirm=true;

    if age>20 && confirm{
        println!("You are really above 20");
    }
    else if age<20 && confirm{
        println!("You are really below 20");
    }
    else{
        println!("You are not confirm about your age");
    }
}
```

<hr>

## Using OR Operator (||)

<hr>

```rs
fn main(){
    let age=18;
    let has_id=false;
    let already_know=true;

    if (age>20 && has_id) || (age>20 && already_know){
        println!("Your age is really above 20");
    }
    else if (age<20 && has_id) || (already_know && age<20){
        println!("Your age is really below 20");
    }
    else if has_id==false && already_know==false{
        println!("Sorry but neither you have has_id nor do we know you");
    }

}
```

<hr>

## Shorthand If Else

<hr>

```rs
fn main(){
    let age=18;
    let checked=if age >=20 {false} else {true};
    println!("Statement customer has been checked is {}",checked);
}
```

<hr>

## Loops In Rust

<hr>

```rs
fn main(){
    let mut count=0;
    loop{
        count += 1;
        println!("Value of count presently={}",count);
        if count==20{
            break;
        }
    }
}
```

<hr>

## FizzBuzz Program

<hr>

* It is a kind of challenging problem wherein we are given numbers belonging to a range, and if the number is deivisible by 15, outut should be fizzbuzz, if the number is divisible by 3, out should be only fizz, else if the number is divisible by 5, output should be buzz only.

<hr>

```rs
fn main(){
    let mut count=0;
    while count<=100{
        if count%15==0{
            println!("Fizz Buzz for number {}",count);
        }
        else if count%5==0{
            println!("Fizz (Divisible by 5) for number {}",count);
        }
        else if count%3==0{
            println!("Buzz for number {}",count);
        }
        count+=1;
    }
}
```

<hr>

OR

<hr>

```rs
fn main(){
    for count in 0..100{
        if count%15==0{
            println!("Fizz Buzz for number {}",count);
        }
        else if count%5==0{
            println!("Fizz (Divisible by 5) for number {}",count);
        }
        else if count%3==0{
            println!("Buzz for number {}",count);
        }
    }
}
```

<hr>

## Functions In Rust

<hr>

```rs
fn main(){
    fn greeting(name: &str,greeting: &str){
        println!("{} {}, nice to have you here.",greeting, name);
    }
    greeting("Sam Varghese", "Hi");
}
```

<hr>

## Functions Returning Some Value

<hr>

```rs
fn main(){
    fn add(num1: &str, num2: &str) -> i32 {
        num1+num2 //No ';' required
    }
    println!("Sum of  2 and 3={}",add("2","3"));
}
```

<hr>

## Shorthand Functions (Closure)

<hr>

```rs
fn main(){
    let add = |n1: i32, n2:i32|n1+n2;
    println!("Sum of numbers 2 and 3 is={}",add(2,3));
}
```

<hr>