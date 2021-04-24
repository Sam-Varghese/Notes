# JavaScript Notes

![Logo](https://www.freepnglogos.com/uploads/javascript-png/javascript-logo-transparent-logo-javascript-images-3.png)

<hr>

# Hello World Program

```js
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
  </head>
  <body>
    <h1>Javascript Tutorial</h1>
    <script>
      alert("Hello World");
    </script>
  </body>
</html>
```

<hr>

![Output](Images/alert1.png)

<hr>

- If the javascript program is written in another js file, then we need not start coding js code inside `<script>`, `</script>`. Just put `<script src="path">`, `</script>`.

<hr>

# Async And Defer

- Now, when we use `<script src="path">`, `</script>`, then there are two ways in which we can ask browser to load our html file.

- **Async**: Async is the default method for browsers. In this method, browsers firstly try reading code line by line and when it reaches script tag, then it downloads that js file and reads through that. So if our js file calls an element that is below `<script></script>`, then browser gives error saying that ie does not know about existence of this element.
- _Syntax_: `<script src="path"></script>`

- **Defer**: Now suppose if we want browsers to read through full code and then run, in this case we use defer.
- _Syntax_: `<script defer src="path"></script>`

<hr>

# Printing In Console

- Firstly go to the google browser, ``Inspect>Console``.

<hr>

```js
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
  </head>
  <body>
    <h1>Javascript Tutorial</h1>
    <script>
      alert("Hello World");
      console.log("Written hello world sir");
    </script>
  </body>
</html>
```

<hr>

![Output](Images/console1.png)

<hr>

# Defining Variables In JavaScript

<hr>

