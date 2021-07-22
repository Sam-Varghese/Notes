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