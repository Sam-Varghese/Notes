# CSS3 Notes

<hr>

<img src="https://cdn.worldvectorlogo.com/logos/css3.svg" height="700" width="700">

<hr>

- CSS stands for **C**ascading **S**tyle **S**heets.
- CSS describes how HTML elements are to be displayed on screen, paper, or in other media.

<hr>

- **HTML**:- What to display.
- **CSS**:- How to display.

<hr>

# CSS Syntax

<hr>

```css
/*  Selector, selects HTML element to style */
p {
  color: blue;
  /* Property Name: Value */
}
```

<hr>

# Ways Of Adding CSS3

<hr>

## External CSS3

<hr>

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
    <link rel="stylesheet" type="text/css" href="relative path" />
    <!-- In place of relative path, provide path of the .CSS file -->
  </head>
  <body></body>
</html>
```

<hr>

- Suppose using above method, we attach multiple `.css` files, then in that case remember that the last css file would hold the maximum priority.

<hr>

## Internal CSS

<hr>

- We can also use CSS directly along with HTML code in the following way:

<hr>

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
    <style>
      p {
        color: blue;
      }
    </style>
  </head>
  <body></body>
</html>
```

<hr>

- Generally prefer to put internal css code under head tag and not under body tag, though using both methods would yield same output.

<hr>

## Inline CSS

<hr>

- You can also put style code directly near the particular element using following method:

<hr>

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
  </head>
  <body>
    <p style="color: red; font-size: 23px">This is due to inline CSS</p>
  </body>
</html>

<hr />
```

<hr>

## Priority Of Different Stylings

<hr>

- Suppose if we use all external, internal and inline CSS, then which would get the most priority?
- Answer is that first priority always goes to inline CSS, while second and third priority depends on the facor that among external and internal CSS, which has been put recently.
- If we put internal CSS after external, then second priority would go to internal, else external.

<hr>

# CSS Selector

<hr>

- There are mainly three types of selectors that are mainly used:-

<hr>

1. Element Selector
2. ID Selector
3. Class Selector

<hr>

## Element Selector

<hr>

- We just write the element tag followed by style we wanna apply on it:

<hr>

```css
p {
  color: red;
}
```

<hr>

## ID Selector

<hr>

- We can style a particular element of HTML page in .css file using followed method:

<hr>

```css
/* Assuming that there is an element in HTML file with id=p3 */
#p3 {
  color: red;
}
```

<hr>

## Class Selector

<hr>

- Class selector is very important because diffrent elements like headings, paragraphs can be assigned same CSS styles by mentioning style given in specified class.
- Here is the HTML syntax to use class:

<hr>

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
  </head>
  <body>
    <h1 class="Style-1">Class Selector</h1>
    <p class="Style-1">This is an example of class selector</p>
  </body>
</html>
```

<hr>

- Now here is the CSS file syntax for making the class named `Style-1`

<hr>

```css
.Style-1 {
  color: green;
  font-size: 25px;
}
```

<hr>

- Suppose if we ever use id selector and class selector css styling simultaneously, then that element would have properties mentioned in both. (Assuming that both have properties that aren't same/confilcting).

<hr>

- We can asiign two or more class styling to a particular element. Just do in following way:

<hr>

```html
<element class="class1 class2 .....">
  <!-- A space between classes is what's all required. --></element
>
```

<hr>

# Priority Order Of Selectors

<hr>

- Always the priority order goes as follows: `ID Selector`>`Class Selector`>`Element Selector`.

<hr>

# Comments In CSS3

<hr>

- In order to put both single line or multi line comments in CSS, we use `/*` and `*/`.

<hr>

# Background Styling

<hr>

## Background Color

<hr>

- In order to have a background color for a paragraph or something else, just enclose it in `<div>` element and give an id to that div element.

<hr>

```css
#id {
  background-color: yellow;
}
```

<hr>

- In order to have a background color for whole web page, do as follows:

<hr>

```css
body {
  background-color: red;
}
```

<hr>

## Background Image

<hr>

- In order to put a background image, use following method:

<hr>

```css
#bg {
  background-image: url("Add path/ URL");
  /* Mostly prefer downloading the image so that even if it gets removed from google, we would still have that */
}
```

<hr>

- But by the above method, we would notice that image repeats itself, hence in order to prevent image from repeating, use following method:

<hr>

```css
#bg {
  background-image: url("Add path/ URL");
  background-repeat: no-repeat;
}
```

<hr>

- If we wish to repeat the image in only x axis, then instead of `no-repeat`, just put `repeat-x`; and in order to have repetetion in only y axis, put `repeat-y`.

<hr>

- If we have enabled `no-repeat` property, then in order to set its position on screen, we can use following method:

<hr>

```css
#bg {
  background-image: url("Add path/ URL");
  background-position: center;
}
```

<hr>

- `background-position` can have following values"
- `left top`
- `left center`
- `left bottom`
- `right top`
- `right center`
- `right bottom`
- `center top`
- `center center`
- `center bottom`

<hr>

- Another way of setting background image position is by using pixels, which is as follows:

<hr>

```css
#bg {
  background-image: url("Add path/ URL");
  background-position: 50px 100px;
}
```

<hr>

- Position can also be mentioned in form of percentage it should take as compared to that of total screen size.

<hr>

```css
#bg {
  background-image: url("Add path/ URL");
  background-position: 5% 10%;
}
```

<hr>

- Now as the image on applying `no-repeat` property turned out to be small, hence we can increase /decrease the size using `background-size` property.

<hr>

```css
#bg {
  background-image: url("Add path/ URL");
  background-size: 500px 700px;
}
```

<hr>

- We can also use percentages in `background-size`.

```css
#bg {
  background-image: url("Add path/ URL");
  background-size: 100% 100%;
  /* We can also put cover to have image in full page, but small amout of it would automatically get cut. */
}
```

<hr>

- We can make only text move in place of background image also, using the following property:

<hr>

```css
#bg {
  background-image: url("Add path/ URL");
  background-attachment: fixed;
  /* By default its value comes as scroll */
}
```

<hr>

- If you want to use multiple background images, then we can just use them by putting comma after first image's URL and specifying next one just like `url(URL)`.

<hr>

# Borders

<hr>

- In CSS, we can also put borders around text using the following property:

<hr>

```css
p {
  border-style: dotted;
}
```

<hr>

- Border style can take following values:
- `dotted`
- `dashed`
- `solid`
- `double`
- `groove`
- `ridge`
- `inset`
- `outset`
- `none`
- `hidden`
