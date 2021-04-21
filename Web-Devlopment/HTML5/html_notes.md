# HTML Notes

<hr>

![logo](https://syntaxxx.com/wp-content/uploads/2014/08/html5-logo-600.jpg)

<hr>

# HTML5 Basics

<hr>

- All html documents start with `<!DOCTYPE html>`.
- Used to tell browsers that this is an HTML document.
- Then HTML document itself begins with `<html>` and end with `</html>`
- HTML is not case sensitive

<hr>

```html
<!DOCTYPE html>
<html>
  <body>
    <h1></h1>
    <p></p>
  </body>
</html>
```

<hr>

# Headings

<hr>

- To put headings in html file, we use `<h1>`, `</h1>`.
- In HTML we have 6 heading tags, from `<h1>` till `<h6>`.
- As we go on from `<h1>` till `<h6>`, the size of headings keep on reducing.

<hr>

```html
<!DOCTYPE hml>
<html>
  <body>
    <h1>HTML Notes</h1>
  </body>
</html>
```

<hr>

![headings](Images\headings.png)

<hr>

# Paragraphs

<hr>

- Paragraphs are written in HTML with the help of `<p>`, `</p>`.

<hr>

```html
<!DOCTYPE html>
<html>
  <body>
    <h1>HTML Notes</html>
    <p>These are my html notes</p>
  </body>
</html>
```

<hr>

# Links

<hr>

- We put links in html with the help of anchor tag, ie `<a>`,`</a>`

<hr>

```html
<!DOCTYPE html>
<html>
  <body>
    <h1>HTML Notes</h1>
    <p>These are my html notes</p>
    <a href="https://www.w3schools.com">This is a link</a>
  </body>
</html>
```

<hr>

![links](Images\links.png)

<hr>

# Images

<hr>

- In order to insert images, we use `<img src="Img URL" alt="text if img is not shown" width="img width" height="img height">`.
- Instead of URL, we xan also put relative pah of images that sre on the working directory.

<hr>

```html
<!DOCTYPE html>
<html>
  <body>
    <h1>HTML Images</h1>
    <p>Here is an html logo</p>
    <img
      src="https://syntaxxx.com/wp-content/uploads/2014/08/html5-logo-600.jpg"
      height="500"
      width="500"
      alt="HTML logo"
    />
  </body>
</html>
```

<hr>

![output image](Images/img.png)

<hr>

## Break Line

<hr>

- To jump to next line, we use break tag, ie `<br>`.

<hr>

```html
<!DOCTYPE html>
<html>
  <body>
    <h1>HTML Images</h1>
    <p>Here is an html logo</p>
    <br /><br /><br />
    <img
      src="https://syntaxxx.com/wp-content/uploads/2014/08/html5-logo-600.jpg"
      height="500"
      width="500"
      alt="HTML logo"
    />
  </body>
</html>
```

<hr>

![outpur of br tag](Images/br.png)

## Empty HTML Tags

<hr>

- HTML tags with only opening tag (no closing tag)

<hr>
