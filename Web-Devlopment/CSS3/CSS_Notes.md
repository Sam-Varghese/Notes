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