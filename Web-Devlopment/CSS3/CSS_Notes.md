<h1 align="center">CSS3 Notes</h1>

<hr>

<p align="center"><img src="https://cdn.worldvectorlogo.com/logos/css3.svg" height="700" width="700"></p>

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

- In order to have a background color for whole webpage, do as follows:

<hr>

```css
body {
  background-color: red;
}
```

<hr>

- We can also set the opacity of that color (or background image) as follows:

<hr>

```css
p {
  background-color: red;
  opacity: 0.5;
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

<hr>

- Now, if we ever wanna put borders on all side, which are different, then just put space between styles and start writing styles with first one being of top edge, and rest in clockwise direction.

<hr>

```css
p {
  border-style: solid ridge none ridge;
  /* border-style: top right bottom left */
}
```

<hr>

- We can also mention the border width as follows:

<hr>

````css
p {
  border-style: solid;
  border-width: 5px;
}
```

<hr>

- Similar to setting different borders on different side, we can set different widths of borders by as follows:

<hr>

```css
p {
  border-style: solid;
  border-width: 5px 10px 5px 10px;
}
````

<hr>

- If we wanna color the borders, then do this as follows:

<hr>

```css
p {
  border-style: solid;
  border-width: 5px 10px 5px 10px;
  border-color: red blue red blue;
  /* Put only one value if you have same color for all sides */
}
```

<hr>

- In order to have borders of a apsecified radius, use following property:

<hr>

```css
p {
  border-style: solid;
  border-radius: 5px;
  /* Put 4 different values in order to have different border radius in all corers. */
}
```

<hr>

# Height And Width

<hr>

- In CSS, in order to put height and width of a specific element, we use the property `height: value`, and `width: value`.
- The value can be either in percentage or in pixels.
- We can have borders of specific widths with contents automatically well fitted inside using the above property.

<hr>

# Padding

<hr>

- Padding means the space to leave between border and the main content, in order to make the document look better and not too congested.

<hr>

```css
p {
  border-style: solid;
  padding: 10px 15px 10px 15px;
}
```

<hr>

OR

<hr>

```css
p {
  border-style: solid;
  padding-top: 30px;
  padding-bottom: 25px;
  padding-rigth: 20px;
  padding-left: 20%;
}
```

<hr>

- Padding space can also be mentioned in percentage.

<hr>

# Margins

<hr>

- Margin is the empty space between border and elements outside the border.
- Padding on the other is the empty space between border and inner contents.

<hr>

```css
p {
  border-style: solid;
  margin: 10px 12px 10px 12px;
}
```

<hr>

- In margins, we can also give negative values.

<hr>

```css
p {
  border-style: solid;
  margin: -10px 12px -10px 12px;
}
```

<hr>

- In order to have border in center of small width:

<hr>

```css
p {
  border-style: solid;
  width: 200px;
  margin: auto;
}
```

<hr>

- **Remember**: Margins always collapse in top and bottom side. So if we have 2 borders with margins set to 20 and 30px respectively, then final margin between both would be 30px. On the other hand, margins add up in left right directions.

<hr>

# Text Manipulation

<hr>

## Text Color

<hr>

- In order to change the color o the text, we simply use the `color` property.

<hr>

```css
p {
  color: blue;
}
```

<hr>

## Text Align

<hr>

- In order to align the text, we simply use the property `text-align`.

<hr>

```css
p {
  text-align: right;
}
```

<hr>

- `Text-align` has the follwing values:

<hr>

- `left` --> By default
- `right`
- `justify` --> Text from right to read

<hr>

# Underlined Text

<hr>

- In order to have underlined text, we use `text-decoration` property.

<hr>

```css
p {
  text-decoration: underline;
  /* Put overline instead of underline in order to have line above text */
  /* Put line-through in order to have deleted effect on text */
}
```

<hr>

# Text Transform

<hr>

- In order to have text in uppercase, we use the property `text-transform`.

<hr>

```css
p {
  text-transform: uppercase;
  /* Can be lowercase, capitalize */
}
```

<hr>

# Line Height

<hr>

- In order to set the line height, ie space between lines; we use the property `line-height`.

<hr>

```css
p {
  line-height: 30px;
}
```

<hr>

# Text Indent

<hr>

- In order to write the first letter after some specified space, just as we do for writing paragraphs, we use the `text-indent` property.

<hr>

```css
p {
  text-indent: 50px;
}
```

<hr>

# Letter Spacing

<hr>

- In order to increase/ decrease the distance between letters, we use the property `letter-spacing`.

<hr>

```css
letter-spacing: 10px;
```

<hr>

# Word Spacing

<hr>

- In order to increase the distance between words, we use the property `word-spacing`.

<hr>

```css
p {
  word-spacing: 15px;
}
```

<hr>

# White Space

<hr>

- In HTML, we know that if we give extra white spaces in between our text, then it does not allow those extra white space to appear. SOin this case we use the property `white-space` and set its value to `pre`.

<hr>

```css
p {
  white-space: pre;
}
```

<hr>

# Word Wrap

<hr>

- If we have words of length more than the parent body width, then in this case we can give the following property in order to have words in line which can be broken and continued in the next line.

<hr>

```css
p {
  border-style: solid;
  border-width: 200px;
  word-wrap: break-word;
}
```

<hr>

# Text Shadow

<hr>

- Syntax is `text-shadow: horizontal-shift vertical-shift blur(px) color`

<hr>

# Styling Links

<hr>

- Links are always in any one of the below mentioned states:

<hr>

- `link`
- `visited`
- `hover`
- `active`

<hr>

```css
a:normal{
  custom_style;
};
a:visited{
  custom_style;
};
a:hover{
  custom_style;
};
a:active{
  custom_style;
};
```

<hr>

# Font Weight

<hr>

- This property defines appearance of font. Syntax is `font-weight: regular/ bold/ italic`. (Value can also be from 100-900).

<hr>

- There is one more property to make text italic, ie `font-style: italic;`.

<hr>

- There is a property in order to have capital words and small letter words of same size, ie `font-style: small-caps;`

<hr>

<table class="w3-table-all notranslate">
  <tr>
    <th style="width:12%">Unit</th>
    <th>Description</th>
    <th></th>
  </tr>
  <tr>
    <td>em</td>
    <td>Relative to the font-size of the element (2em means 2 times the size of the current font)</td>
  </tr>
  <tr>
    <td>ex</td>
    <td>Relative to the x-height of the current font (rarely used)</td>
  </tr>
  <tr>
    <td>ch</td>
    <td>Relative to the width of the &quot;0&quot; (zero)</td>
  </tr>
  <tr>
    <td>rem</td>
    <td>Relative to font-size of the root element</td>
  </tr>
  <tr>
    <td>vw</td>
    <td>Relative to 1% of the width of the viewport*</td>
  </tr>
  <tr>
    <td>vh</td>
    <td>Relative to 1% of the height of the viewport*</td>
  </tr>
  <tr>
    <td>vmin</td>
    <td>Relative to 1% of viewport's* smaller dimension</td>
  </tr>
  <tr>
    <td>vmax</td>
    <td>Relative to 1% of viewport's* larger dimension</td>
  </tr>
  <tr>
    <td>%</td>
    <td>Relative to the parent element</td>
  </tr>
    </table>

<hr>

# Cursors

<hr>

## Cursor List

<hr>

[Please click here](http://spragucm.com/web-css-cursor-pointers/)

<hr>

# CSS Filter

<hr>

- Through CSS, we can manipulate image properties directly, as follows:

<hr>

```css
img {
  filter: blur(10px);
  filter: brightness(50%);
  filter: contrast(70%);
  filter: drop-shadow(
    8px 8px 5px red
  ); /*Horizontal shift, vertical shift, blurness, color of shadow */
  filter: grayscale(20%); /* Used to make image appear in black and white*/
  filter: hue-rotate(90deg);
  filter: invert(50%);
  filter: opacity(30%);
  filter: saturate(30%);
  filter: sepia(30%);
}
```

<hr>

OR

<hr>

```css
img {
  filter: blur(10px), brightness(50%), contrast(70%), drop-shadow(
      8px 8px 5px red
    ), grayscale(20%), hue-rotate(90deg), invert(50%), opacity(30%), saturate(
      30%
    ), sepia(30%);
}
```

<hr>

# Gradients

<hr>

```css
p {
  background-image: linear-gradient(yellow, orange, blue);
}
```

<hr>

- In order to ave this gradient from left to right, do as follows:

<hr>

```css
p {
  background-image: linear-gradient(to right, yellow, orange, blue);
}
```

<hr>

- Insted of `to right`, we have one more position named `to bottom-right`.
- We can even specify angle at which gradient has to be made, as follows:

<hr>

```css
p {
  background-image: linear-gradient(120deg, green, blue, red);
}
```

<hr>

- Instead of linear-gradient, we can also have **radial-gradients**, on our webpage by just replacing `linear-gradient`, to `radial-gradient`.
- We can also specify the shape of the gradient manually as follows:

<hr>

```css
p {
  background-image: radial-gradient(circle, green, red, yellow);
}
```

<hr>

- We can also manually set the part occupied by each color as follows:

<hr>

```css
p {
  background-image: radial-gradient(circle, green 20%, blue 30%, red 50%);
}
```

<hr>

# Overflow

<hr>

- `overflow` property is used when when the size of the container is less than that of the content. So in this case we can set manually how the rest of the text should appear.

<hr>

- Assuming the the size of container is fixed manually so the content overflows, then the default value of overflow, ie `overflow: visible` is used where the content really flows out of the border.

<hr>

- If we wanna hide the content that flows out of the container, then we put the value of the overflow as hidden as `overflow: hidden`.

<hr>

- But now if we wanna use idden property and also let the viewers see the full content, the we use the scroll property of overflow as follows `overflow: scroll`.

<hr>

- The above way to add scroll bar also adds a scroll bar in x axis which is not required, then in order to prevent scroll bar from appearing in x axis, then we do as follows:

<hr>

```css
#container {
  overflow-x: hidden;
  overflow-y: scroll;
}
```

<hr>

- Now if we have a situation wherein we dont know the amount of space our text is going to occupy, but we want to have scrollbar if text overflows, else not. So in this case, we put `overflow: auto`. This one is the **BEST**.

<hr>

# CSS Resizable

<hr>

- This property is used to have any widget get resized by the viewer or to restrict resizing of the widget by the user.

<hr>

- Suppose if we want to restrict the user from resizing the textarea (widget we learnt in HTML), then we do as follows:

<hr>

```css
textarea {
  resize: none;
}
```

<hr>

- Now in order to make our widget container resizable, we put `resize: both`.
- Suppose if we wanna restrict user to resize container only horizontally/vertically, then we put that property as `resize: horizontal/ vertical`.
- **Remember**: `resize` property can be only applied in block element where overflow is not visible.

<hr>

# Styling Lists

<hr>

- We can style lists as follows:

<hr>

```css
ul {
  list-style-type: none/ disc/ circle/ square;
  list-style-image: url("path/ url");
  list-style-position: outside/ inside;
}
ol {
  list-style-type: lower-alpha/ upper-alpha/ lower-roman/ upper-roman/ decimal/
    decimal-leading-zero/;
  list-style-position: outside/ inside;
}
```

<hr>

- `list-style-position` is used when we put border in ul/ ol stylings. After putting border on each elements of list items, we notice that the index value of all list items comes outside the border. So in order to have index value of list items inside the borders of all list items, we use `list-style-position: inside` property.

<hr>

# Styling Tables

<hr>

```css
table {
  border: 1px solid black;
  border-collapse: separate/ collapse;
  border-spacing: 15px 20px; /*top/bottom left/right */
  empty-cells: hide; /*Used to hide empty celly insted of showing their block*/
  table-layout: auto/ fixed;
}
caption {
  border: 1px solid black;
  caption-side: top/ bottom;
}
th {
  border: 1px solid black;
  text-align: right/ left/ center;
  vertical-align: top/ bottom/ middle;
}
td {
  border: 1px solid black;
  text-align: right/ left/ center;
  vertical-align: top/ bottom/ middle;
}
```

<hr>

- Adding border to `tr` brings no change.
- Additionally we can also set `height`, `width`, `padding`
- `table-layout: fixed` is used in order to have equal width of every columns. If it is set to auto, then columns will of that much width as needed.
- `width` in table when set to 100% makes width of the table equal to width of the webpage.

<hr>

# CSS Functions

<hr>

- It is important to note that CSS also has functions. One example of this is the use of `rgb()`.
- Another way in which we can use CSS functions is by using `calc()` function. Ex: `width: calc(100%-200px)`.

<hr>

- We can also **DECLARE VARIABLES** in CSS.
- Names of variable in CSS always start by **--**.

<hr>

```css
:root {
  --variable: blue;
}
body {
  background-color: var(--variable);
}
```

<hr>

# Box-Sizing

<hr>

- Whenever we give padding or give borders to the webpage, then all these increases the size of the container. So if we ever want to have the continer of fixed size and have padding and margins come in that limited space instead of extending the size of the container, then we use the property `box-sizing: border-box;`.

<hr>

# Initial-Inherit Property

<hr>

- We have two more values (which we can give to preperties like `color`) in CSS named `initial`, `inherit`. `initial` is used to set the property value as defined by CSS by default. While the property `inherit` is used to specify the browser to give same property to that element as that of the container in which it is kept.

<hr>

# Object Fit Property

<hr>

- Whenevery we simply put an image inside a container of specified dimensions, then browsers change the dimension of the image in order to fit that image into that continer. In order to avoid this, we use the property `object-fit: contain` which may reduce the width of image, by would keep the dimensions of image same as that before.
- If we want to have image of same dimension as that of the container no matter if dimensions of image distorts, then we use property `object-fit: fit`.
- If we wanna get image displayed in same dimensions as that of the contaning body, but now without distorting its dimensions, then we use the property `object-fit: cover`. But in this case, in order to maintain the dimensions, only some part of the image would be visible.
- In case using the above property, we now want to set the positions of the part of the image that should compulsorily, then we use the property `object-position: top center` (Or specify the direction s you want).
- `object-position` propert can also be used with `object-fit: contain` in order to show image in specified direction insted of center which is set by default.

<hr>

**Trick**: In VSCode, if you wanna make 5 tags for suppose `p`, just type `p*5` and press enter.

<hr>

# Pseudo-Classes

<hr>

- We know about states like `hover`, `active`, etc. There are many more states/ classes that exist in CSS. You can learn these from W3 Schools directly.

<hr>

# Block Level

<hr>

- Block level elements have the following features:

<hr>

- A block-level element always starts on a new line.

- A block-level element always takes up the full width available (stretches out to the left and right as far as it can). ( Height and width can be set manually)

- A block level element has a top and a bottom margin, whereas an inline element does not.

<hr>

- Following elements comes under this category

<hr>

`<address>`<br>`<article>`<br>`<aside>`<br>`<blockquote>`<br>`<canvas>`<br>`<dd>`<br>`<div>`<br>`<dl>`<br>`<dt>`<br>`<fieldset>`<br>`<figcaption>`<br>`<figure>`<br>`<footer>`<br>`<form>`<br>`<h1>-<h6>`<br>`<header>`<br>`<hr>`<br>`<li>`<br>`<main>`<br>`<nav>`<br>`<noscript>`<br>`<ol>`<br>`<p>`<br>`<pre>`<br>`<section>`<br>`<table>`<br>`<tfoot>`<br>`<ul>`<br>`<video>`<br>

<hr>

# Inline Elements

<hr>

- An inline element does not start on a new line.

- An inline element only takes up as much width as necessary. ( height and width can't be set manually)

- This is a `<span>` element inside a paragraph.

<hr>

`<a>`<br>`<abbr>`<br>`<acronym>`<br>`<b>`<br>`<bdo>`<br>`<big>`<br>`<br>`<br>`<button>`<br>`<cite>`<br>`<code>`<br>`<dfn>`<br>`<em>`<br>`<i>`<br>`<img>`<br>`<input>`<br>`<kbd>`<br>`<label>`<br>`<map>`<br>`<object>`<br>`<output>`<br>`<q>`<br>`<samp>`<br>`<script>`<br>`<select>`<br>`<small>`<br>`<span>`<br>`<strong>`<br>`<sub>`<br>`<sup>`<br>`<textarea>`<br>`<time>`<br>`<tt>`<br>`<var>`<br>

<hr>

# Inline Block

<hr>

- No new start.
- Does not occupies full width.
- Height and width can be set manually.

<hr>

# Making Div Inline

<hr>

- Yes, we can make div element inline by adding the property `display: inline`.

<hr>

# Making Div Inline-Block

<hr>

- Just add the property `display: inline-block`.

<hr>

# Hiding Elements

<hr>

- If you want to hide elements, through CSS, then select the element by ID and just add the property `display: none`. This will remove the element from webpage, hence its space would also get occupied by some other element and would not be left idle.
- But, if you ever want to just hide the element, which means that you want the element's space to be kept idle, then put the property `visibility: hidden` instead.

<hr>

# CSS Positions

<hr>

- CSS has these four types of positions:

<hr>

1. Static ( default )
2. Relative
3. Fixed
4. Absolute

<hr>

- Further, if we are using anyone of relative, fixed or absolute positions on our webpage, then we can further take advantage of the following named positions:

<hr>

- top
- bottom
- left
- right

<hr>

**Tip**: In VSCode, in order to make an element with an ID, just write element#id, ex for writing `<div id="sam">`, just write `div#sam` and then press enter.

<hr>

## Relative Positioning

<hr>

- In order to specify to the browser, that now we would be setting positions **relative to its original previous position**, add property `position: relative`.
- This means that now we can also use properties `top`, `bottom`, `left`, `right`.
- In order to use these properties, do like this: `top: 5px`, `bottom: 10px`, `left: 5px`, `right: 10px`.
- One feature of this kind of positioning is that the displaced element wont leave its earlier position blank for other elements to occupy.
- It won't also displace other elements from thier respective positions.
- So if through relative positioning we put an element in other element's position, then the positioned element would overlap the element that was already there.

<hr>

## Absolute Positioning

<hr>

- In absolute positioning, **we position an element according to nearest positioned ancestor** ( _An element is said to be positioned, if its position is not static_).
- So if in case none of the parent body is positioned, then the element would try to position itself with respect to `body` instead of any parent body.
- Now we can also use properties `top`, `bottom`, `left`, `right`.
- The displaced element would unline in relative posiioning, would leave its space for other elements to occupy.

<hr>

## Fixed Positioning

<hr>

- In fixed positioning, element is positioned relative to the viewport.
- This means that it always stays in the same place even if the page is scrolled.
- Elements space would be free to occupy by other elements.

<hr>

# CSS Layers And Z-Index

<hr>

- As we can see while working with the positioned elements that they can many a times overlap over each other.
- So in this case, we assign a random number (can be negative) in their CSS style through which browsers decide which element should superimpose other elements.
- Do as follows in order to put z-index: `z-index: 5`
- Larger the number, the more it is preffered to superimpose the elements with lesser `z-index`.

<hr>

# CSS Floats

<hr>

- The float property is used for positioning and formatting content e.g. let an image float left to the text in a container.
- Float property can take following values:
- `left` - The element floats to the left of its container
- `right` - The element floats to the right of its container
- `none` - The element does not float (will be displayed just where it occurs in the text). This is default
- `inherit` - The element inherits the float value of its parent

<hr>

- Put float property like `float: right`.

<hr>

# CSS Navigation Bar

<hr>

- Firstly write all navigation bar value as list items inside an unordered list.
- Suppose if id of ul is `ul1`, and id of list items are `lists`, then do as follows in CSS:

<hr>

```css
#ul1 {
  background-color: green;
  list-style-type: none; /* In order to remove bullets */
  overflow: auto; /* When we use float, then list items gets out of ul, in order to avoid this, use float: auto*/
  }
#lists {
    color: white;
    padding: 10px 15px;
    float: left;
  }
}
```

<hr>

- **Remember**: Many a time you would face situations where the element where we applied float gets out of the container. So in this situation, in the container put the property `overflow: auto`.

<hr>
