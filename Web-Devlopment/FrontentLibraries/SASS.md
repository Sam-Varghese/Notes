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

```sass
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

```sass
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