# Matplotlib 

Matplotlib is a python library used for graphing things out.

![](https://matplotlib.org/2.1.1/_static/logo2.svg)

****

```py
import matplotlib.pyplot as plt
```

****

# Line Graph


```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.plot(x,y)
plt.show()
```

****

![](Figure_1.png)

****

## Adding Labels

****

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.plot(x,y)

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.show()
```

****

![](Figure_2.png)

****

## Adding Title

****

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.plot(x,y)

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.title('Graph')

plt.show()
```

****

![](Figure_3.png)

****

## Adding Legends

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.plot(x,y)

plt.legend(['First Graph'],title='Legend')

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.title('Graph')

plt.show()
```

![](Figure_4.png)

****

## Styling Graphs

****

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.style.use('dark_background')

plt.plot(x,y)

plt.legend(['First Graph'])

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.title('Graph')

plt.show()
```

![](Figure_5.png)


****

## List of Available Styles

****

```py
plt.style.available

#Output: ['Solarize_Light2', '_classic_test_patch', 'bmh', 'classic', 'dark_background', 'fast', 'fivethirtyeight', 'ggplot', 'grayscale', 'seaborn', 'seaborn-bright', 'seaborn-colorblind', 'seaborn-dark', 'seaborn-dark-palette', 'seaborn-darkgrid', 'seaborn-deep', 'seaborn-muted', 'seaborn-notebook', 'seaborn-paper', 'seaborn-pastel', 'seaborn-poster', 'seaborn-talk', 'seaborn-ticks', 'seaborn-white', 'seaborn-whitegrid', 'tableau-colorblind10']
```

****

## Setting Point Styles

****

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.style.use('dark_background')

plt.plot(x,y,'b-o')

plt.legend(['First Graph'])

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.title('Graph')

plt.show()
```

****

![](Figure_6.png)

****

## Adding Grids

****

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.style.use('dark_background')

plt.plot(x,y,'b-o')

plt.legend(['First Graph'])

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.title('Graph')

plt.grid()

plt.show()
```

![](Figure_7.png)

****

## Adding Limits

****

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.style.use('dark_background')

plt.plot(x,y,'b-o')

plt.legend(['First Graph'])

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.xlim(0,5)
plt.ylim(0,5)

plt.title('Graph')

plt.grid()

plt.show()
```

![](Figure_8.png)

****

## Tight Axis

****

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.style.use('dark_background')

plt.plot(x,y,'b-o')

plt.legend(['First Graph'])

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.title('Graph')

plt.axis('tight')

plt.grid()

plt.show()
```

****

![](Figure_9.png)

****

## Labelling Points

****

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.style.use('dark_background')

plt.plot(x,y,'b-o')

plt.legend(['First Graph'])

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.annotate('This is mid point',(5,5))

plt.title('Graph')

plt.axis('tight')

plt.grid()

plt.show()
```

****

![](Figure_10.png)

****

## Putting Arrows

**Syntax**
```py
plt.arrow(x,y,x_width,y_width)
```

Example:

```py
x=[i for i in range(10)]
y=[i for i in range(10)]

plt.plot(x,y,'b-o')

plt.legend(['First Graph'])

plt.xlabel('X Axis')
plt.ylabel('Y Axis')

plt.arrow(5,5,2,1,width=.09,color='cyan')

plt.annotate('This is mid point',(7,6.5),color='red')

plt.title('Graph')

plt.axis('tight')

plt.grid()

plt.show()
```

****

![](Figure_11.png)

****

# Bar Graph

```py
x=['Sam','Angel','Rahul']
y=[12,13,15]

plt.bar(x,y)

plt.xlabel('Students')
plt.ylabel('Marks')
plt.title('Class')

plt.show()
```
****

![](Figure_12.png)

****

## Horizontal Bar Graph

```py
plt.barh(x,y)
plt.show()
```

****

![](Figure_13.png)

****

# Pie Charts

```py
langs = ['C', 'C++', 'Java', 'Python', 'PHP']
students = [23,17,35,29,12]

plt.style.use('classic')

plt.pie(students,labels=langs,autopct='%1.2f%%')

plt.show()
```

****

![](Figure_14.png)

****

## Explode

****

```py
langs = ['C', 'C++', 'Java', 'Python', 'PHP']
students = [23,17,35,29,12]

plt.pie(students,labels=langs,autopct='%1.2f%%',explode=[.2,0,0,0,0])

plt.show()
```

****

![](Figure_15.png)

****

## Legends

****

```py
plt.style.use('classic')

langs = ['C', 'C++', 'Java', 'Python', 'PHP']
students = [23,17,35,29,12]

plt.pie(students,labels=langs,autopct='%1.2f%%',explode=[.2,0,0,0,0],shadow=True)

plt.legend()

plt.show()
```

****

![](Figure_16.png)

****

 ![](https://i.pinimg.com/originals/49/5c/ae/495caee200232eb478d2248f3fe07a2c.gif)