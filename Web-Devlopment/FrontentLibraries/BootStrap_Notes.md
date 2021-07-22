<h1 align="center">BootStrap</h1>

<hr>

- In order to include BootStrap in our code, put this link:

<hr>

`<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous"/>`

<hr>

- Firstly after all html skeleton tags, enclose all the rest of the contents inside `div` of class `.container-fluid`

<hr>

# Responsive Images

<hr>

- Just add `img-responsive` class to the img tag in order to make images responsive.

<hr>

# Centered Headings

<hr>

- In order to center the headings, we apply following class to the heading tag: `text-center`

<hr>

# Button

<hr>

- Add following classes to button, in order to beautify them: `btn` & `btn-default` ie `btn btn-default`.
- Bootstrap has another button class called btn-default.

<hr>

- We can make button element a block element by adding the following class `btn-block`. Still remember that `btn`class is necessary.

<hr>

## Call out Optional Actions with btn-info

<hr>

- Bootstrap comes with several pre-defined colors for buttons. The `btn-info` class is used to call attention to optional actions that the user can take.

<hr>

## Danger Button

<hr>

- In order to alert users of a button that performs a dangerous task, we use `btn-danger` class along with `btn`  and `btn-block`.

<hr>

# Grid Layout

<hr>

- We can align element in different columns using BootStrap.
- For this BootStrap has by default 12 column already there.
- Firstly enclose all elements inside `<div class="row">`
- Suppose if we are aiming to make element appear in column for laptops, then we use `col-md-*` where `md` means medium and * means number specifying with of element.
- So suppose we have 3 elements, then our * is going to take the value of 12/3 ie 4.
- Suppose if we are aiming for very small screens ie for mobiles, then we use `col-xs-*`.
- We can use div row to align radio buttons of forms evenly on a row.

# Text

- We can use `text-primary` class in order to beautify heading and texts in our web page.
- Use `text-danger` class in order to signify any dangerous text :)


# Input field

- In order to beautify input field in you application, use this class `form-control`

- Bootstrap has a class called well that can create a visual sense of depth for your columns.

Not every class needs to have corresponding CSS. Sometimes we create classes just for the purpose of selecting these elements more easily using jQuery.

Give each of your button elements the class target.

<hr>

# Looping Over An Array In CSS

<hr>

- Yes, we can even loop over an array using Sass. Here's how:

<hr>

```css
@each $color in blue, red, green {
    .#{$color}-text {color: $color;}
}
```

<hr>

- Alternaltively we can also do as follows:

<hr>

```css
$colors: (color1: blue, color2: red, color3: green);

@each $key, $color in $colors {
  .#{$color}-text {color: $color;}
}
```

<hr>

- Note that the $key variable is needed to reference the keys in the map. Otherwise, the compiled CSS would have color1, color2... in it. Both of the above code examples are converted into the following CSS:

<hr>

```css
.blue-text {
  color: blue;
}

.red-text {
  color: red;
}

.green-text {
  color: green;
}
```

<hr>

```css
$x: 1;
@while $x < 13 {
  .col-#{$x} { width: 100%/12 * $x;}
  $x: $x + 1;
}
```

<hr>

# Split Your Styles into Smaller Chunks with Partials

<hr>

` Partials in Sass are separate files that hold segments of CSS code. These are imported and used in other Sass files. This is a great way to group similar code into a module to keep it organized.

- Names for partials start with the underscore (_) character, which tells Sass it is a small segment of CSS and not to convert it into a CSS file. Also, Sass files end with the .scss file extension. To bring the code in the partial into another Sass file, use the @import directive.

- For example, if all your mixins are saved in a partial named "_mixins.scss", and they are needed in the "main.scss" file, this is how to use them in the main file:

`@import 'mixins'`

- Note that the underscore and file extension are not needed in the import statement - Sass understands it is a partial. Once a partial is imported into a file, all variables, mixins, and other code are available to use.

<hr>

# Extend One Set Of CSS Styles To Another

<hr>

Sass has a feature called extend that makes it easy to borrow the CSS rules from one element and build upon them in another.

For example, the below block of CSS rules style a .panel class. It has a background-color, height and border.

```css
.panel{
  background-color: red;
  height: 70px;
  border: 2px solid green;
}
```

Now you want another panel called .big-panel. It has the same base properties as .panel, but also needs a width and font-size. It's possible to copy and paste the initial CSS rules from .panel, but the code becomes repetitive as you add more types of panels. The extend directive is a simple way to reuse the rules written for one element, then add more for another:

```css
.big-panel{
  @extend .panel;
  width: 150px;
  font-size: 2em;
}
```

The .big-panel will have the same properties as .panel in addition to the new styles.

