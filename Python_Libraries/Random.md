# Random Module 

This module is used to generate the pseudo-random variables. It can be used perform some action randomly such as to get a random number, selecting a random elements from a list, shuffle elements randomly, etc.

![](https://s7d2.scene7.com/is/image/TWCNews/ransom_jpg)

****

```py
import random
```

****

## Random Method

****

This method is used to generate random float numbers between 0 and 1 , including 0 and excluding 1.

****

```py
random_method_output=random.random()
# random_method_output format: 0.9642377492418813
```

****

## Randint Method

****

This method is used to generate a random number between 2 specified integers ,including both integers.

****

```py
random_int=random.randint(1,10)

#random_int format: 7
```

****

## Randrange Method

****

Returns a random integer between 2 integers ,including the first one and excluding the last one. Here we can also mention steps .

****

```py
rand_range=random.randrange(0,10,2)#(start,stop,step)
#rand_range format: 6
#Here as step was 2 , therefore even number was generated.
```

****

## Choice Method

****

This method is used to select a random element from a given list.

****

```py
lst=[i for i in range (10)]
random_element=random.choice(lst)
#random_element format: 7
```

****

## Choices Method

****

This method is used to generate a random list of specified length from a given list.

****

```py
parent_lst=[i for i in range(11)]
child_lst=random.choices(parent_lst,k=5)# k is the length of random list

#child_lst format: [9, 10, 5, 0, 10]
```

****

## Shuffle Method

****

This method is used to shuffle the elements of a given sequence from their places.

****

```py
lst=[i for i in range (11)]
random.shuffle(lst)

#lst format: [4, 6, 8, 10, 9, 0, 2, 5, 1, 3, 7]
```

****

![](https://media2.giphy.com/media/UrcXN0zTfzTPi/giphy.gif)