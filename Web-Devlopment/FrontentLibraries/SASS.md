<h1 align="center">SASS</h1>

<hr>

# Declaring Variables

<hr>

- In order to declare variables, we firstly put `$` followed by variable name then `: ` and then its value
- Ex: `$main-fonts: Arial, sans-serif;`
- Use these variables like this: 

<hr>

```css
h1 {
  font-family: $main-fonts;
}
```

<hr>

- Enclose all your CSS and SCSS inside `<style type='text/scss'>`, `</style>`

<hr>

# Nest CSS With Sass

<hr>

- Normally, each element is targeted on a different line to style it, like so:

<hr>

```css
nav {
  background-color: red;
}

nav ul {
  list-style: none;
}

nav ul li {
  display: inline-block;
}
```

<hr>

- For a large project, the CSS file will have many lines and rules. This is where nesting can help organize your code by placing child style rules within the respective parent elements:

<hr>

```css
nav {
  background-color: red;

  ul {
    list-style: none;

    li {
      display: inline-block;
    }
  }
}
```

<hr>

# Making Function In CSS

<hr>

- With the help of Sass, we can also made reusable functions.
- Suppose we have following code for box-shadow

<hr>

```css
div {
  -webkit-box-shadow: 0px 0px 4px #fff;
  -moz-box-shadow: 0px 0px 4px #fff;
  -ms-box-shadow: 0px 0px 4px #fff;
  box-shadow: 0px 0px 4px #fff;
}
```

<hr>

- Now it would become a very tedious job if we wanna have this box shdow for multiple elements.
- Hence here is how we declare a function in Sass

<hr>

```css
@mixin box-shadow($x, $y, $blur, $c){ 
  -webkit-box-shadow: $x $y $blur $c;
  -moz-box-shadow: $x $y $blur $c;
  -ms-box-shadow: $x $y $blur $c;
  box-shadow: $x $y $blur $c;
}
```

<hr>

- Here `$x`, `$y`, `$blur` and `$c` are parameters which you can set while using this function.
- `@mixin` is just a way to tell browsers that we are defining a function.
- In order to use `box-shadow` function, do as follows:

<hr>

```css
div {
  @include box-shadow(0px, 0px, 4px, #fff);
}
```

<hr>

# Conditionals In CSS

<hr>

- Using Sass, we can also put conditions like this:

<hr>

```css
@mixin text-effect($val) {
  @if $val == danger {
    color: red;
  }
  @else if $val == alert {
    color: yellow;
  }
  @else if $val == success {
    color: green;
  }
  @else {
    color: black;
  }
}
```

<hr>

# For Loop In CSS

<hr>

- `@for` is used in two ways: "start through end" or "start to end". The main difference is that the "start to end" excludes the end number as part of the count, and "start through end" includes the end number as part of the count.
- Yes, we can even have a for loop in CSS like this:

<hr>

```css
@for $i from 1 through 12 {
  .col-#{$i} { width: 100%/12 * $i; }
}
```

<hr>

- The #{$i} part is the syntax to combine a variable (i) with text to make a string. When the Sass file is converted to CSS, it looks like this:

<hr>

```css
.col-1 {
  width: 8.33333%;
}

.col-2 {
  width: 16.66667%;
}

...

.col-12 {
  width: 100%;
}
```

<hr>

