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
- Headings are important because browsers look onto this headings in order to index our webpage in websites.

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

# Custom Heading Size

<hr>

- In order to make bigger/smaller headings as per your needs, we use `font-size` attribute inside `style`.
- It is convenient to mention size in pixels, so we use pixels.

<hr>

```html
<!DOCTYPE html>
<html>
  <body>
    <h1 style="font-size: 60px">Custom Heading Size</h1>
  </body>
</html>
```

<hr>

![Output image](Images/heading_size.png)

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

# Custom Paragraph Structure

<hr>

- In HTML, suppose if we break line, without `<br>` tag, or put more than 1 space between words, then browsers, by default would ignore all the extra spaces or line breaks.
- Hence in order to over this problem, we use `<pre>` tag.

<hr>

```html
<!DOCTYPE html>
<html>
  <body>
    <h1>My Poem</h1>
    <pre>
I am a poet
I write poem
This is my poem
Hope you liked
    </pre>
  </body>
</html>
```

<hr>

![output](Images/pre.png)

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

# Break Line

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

# Empty HTML Tags

<hr>

- HTML tags with only opening tag (no closing tag)

<hr>

# Style Attribute

<hr>

- Style attribute is used to add styles to an element such as color, size, fonts etc.
- It's format is like:- `<tagname style="property:value">`.

<hr>

```html
<!DOCTYPE html>
<html>
  <body>
    <h1>Styles in HTML</h1>
    <p style="color:red">This is my red colored paragraph</p>
  </body>
</html>
```

<hr>

# Language And Country Code

<hr>

- In order to assist search engine to figure out the language of out website, there is a lang attribute to specify language, and to specify country, we have country attribute. Example of syntaxes of these are shown below.

<hr>

```html
<!DOCTYPE html>
<html lang="en-In">
  <!--en is the language and In is to specify India-->
</html>
```

<hr>

# Title Attribute

<hr>

- Title attribute is used to give some extra detail to an element while cursor is hovered over there.

<hr>

```html
<!DOCTYPE html>
<html>
  <body>
    <h1 title="This is heading title">Heading</h1>
    <p title="This is para title">
      Please hover the mouse over to h1 as well as this para to notice
      functioning of the title attribute.
    </p>
  </body>
</html>
```

<hr>
