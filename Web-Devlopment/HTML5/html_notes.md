# HTML Notes

<hr>

![](https://syntaxxx.com/wp-content/uploads/2014/08/html5-logo-600.jpg)

<hr>

# Starting code

<hr>

- If you want VSCode to automatically generate the starting code, just type `!` and press `Enter`.

<hr>

```html
<!DOCTYPE html>
<!-- Specifies that the document type is HTML -->
<html lang="en">
  <!-- To tell browser the language of our webpage -->
  <head>
    <!-- Under head tag, we have meta data, ie data about data for browser-->
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
    <!-- Used to specify name of this tab -->
  </head>
  <body>
    <!-- Under body tag, we data to be displayed in webpage. -->
  </body>
</html>
```

<hr>

- **Element**- Paragraphs, links, images, vedios, sc comes under element tag.
- **Attribute**- Additional information about element; like its height, width etc.

<hr>

# Headings

<hr>

- In HTML, we have 6 heading tags, ie `<h1>`, `<h2>`, `<h3>`, `<h4>`, `<h5>`, `<h6>`.
- Priority of headings reduces from `<h1>` to `<h6>`.

<hr>

# Paragraphs

<hr>

- in HTML we have a `<p>` tag used to insert paragraphs in web pages.

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
    <p>
      Nostrud id aute proident ipsum reprehenderit occaecat ad proident labore.
      Fugiat labore laboris eu culpa non. Est dolor nisi irure fugiat aliqua
      nostrud et enim non elit cillum cupidatat occaecat. Nostrud ea veniam
      cupidatat culpa. Ipsum duis mollit fugiat tempor ipsum exercitation
      laboris. Exercitation elit sit dolor sint duis exercitation.
    </p>
    ̥
  </body>
</html>
```

<hr>

# Line Break

<hr>

- In HTML, if we wanna leave a line blank, then we simplyuse `<br>` tag.

<hr>

# Customize Paragraph Indentation

<hr>

- Whenever we write poems or something like that where we want webpage to show the exact para wuth the style in which we wrote that, then we use `<pre>` tag.

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
    <pre>
Enim            dolore officia consequat incididunt proident deserunt fugiat. Irure ut amet pariatur voluptate ea duis sint nulla sit minim fugiat sit aliquip. Non ullamco elit dolore sit cupidatat. Excepteur minim dolor aute voluptate eu aute veniam ea quis eu dolore voluptate consectetur non. Reprehenderit deserunt et dolore deserunt ullamco ad. Consequat est dolore tempor anim eiusmod proident aliqua aute laboris.

Dolor exercitation ad           officia enim voluptate nisi. Esse elit deserunt ea Lorem nulla fugiat. Culpa ad id dolor reprehenderit ullamco.

Ullamco pariatur sint amet veniam culpa commodo ut. Deserunt et reprehenderit exercitation est commodo reprehenderit veniam officia exercitation ut mollit. Nulla cillum dolor anim culpa. Duis enim esse reprehenderit veniam exercitation voluptate ipsum est non ut aliqua anim laborum aute.</pre
    >
  </body>
</html>
```

<hr>

# Formatting

<hr>

## Bold

<hr>

- In order to make any text bold, we use `<b>`, `</b>` tag.
- In order to make a text bold and also tell browser that this word maks more importance thn other words( To facilitate searches), we use `<strong>`, `</strong>`.

<hr>

## Italics

<hr>

- If we wanna put text texts in italics, we ise `<i>`, `</i>` tag.
- If we wanna put texts in italics, and also signify the brwser, that this text marks greatervalue than rest of the tags, then we use `<em>`, `</em>` tag.

<hr>

## Small

<hr>

- In order to make a text small, we use `<small>`, `</small>`.

<hr>

## Mark

<hr>

- If we wanna highlight a particular set of line, then we use `<mark>`, `</mark>`.

<hr>

## Delete

<hr>

- In order to signify to the browser that a certain part of text has been deleted, we use `<del>`, `</del>` tag.

<hr>

## Insert

<hr>

- In order to show that some text has been inserted, we use `<ins>`, `</ins>` tag.
- This would make text underlined.

<hr>

## Subscript

<hr>

- In order to put anyt text in subscript, we use `<sub>`, `</sub>` tags.

<hr>

## Superscript

<hr>

- Similar to subscript tag, `<sup>`, `</sup>` are used to put text in superscripts.

<hr>

## Quotation

<hr>

- If we ever wanna put quotations in webpage, which are the word said by another person, then we use `<q>`, `</q>` tags.

<hr>

## Blockquotes

<hr>

- When we use quotation of some other author, then we use blockquotes, where tags `<blockquote cite="cite url from where this is taken">`, `</blockquote>` are used.

<hr>

## Abbreviation

<hr>

- Now if we ever wanna pu abbreviation in our text, then we use `<abbr title="Full Form of abbr">`, `</abbr>`.

<hr>

## Address

<hr>

- If we specify any address in our web page, then we are recommended to use `<address>`, `</address>` tags.

<hr>

## title

<hr>

- If we specify any kind of titles( book names etc), then we shoul use `<title>`, `</title>` tags.

<hr>

## Anchor

<hr>

- If we want some tet which should be clickable and should redirect us to another webpage, then we use `<a href="link">`, `</a>` tags.

<hr>

- Now if we ever wan to have this webpage opened in a separate tab, then we use `<a href="link" target="_blank">`, `</a>` tags.

<hr>

- If we also want to indicate the user where would clicking that text take him to after he hovers the cursor to that anchored text, the we use `<a href="link" title="Put title text">`, `</a>` tags.

<hr>

## Local Links

<hr>

- Now if we want our anchored text to open up another element of the same web page, then firstly give an id to that element, then inside href of anchor tag, put `#id` where id should be replace by the id we selected for element.

<hr>

## Email

<hr>

- If we ever want some text to directly open up our email whenever we click on it, then we use `<a href="mailto:emailid?put_subject">`, `</a>` tags. For this your default email program should be microsoft mail and not google.

<hr>

## Image

<hr>

- Now if we wanna put images on our web page, then we use `<img src="url/link" alt="text if image doesnt get loaded" height="300" width="300">`.

<hr>

## Marquee

<hr>

- If we want to have moving text, then we use `<marquee>`, `</marquee>` tags.
- This tsg is no more supported in the latest version, but as browsers still support older versions, hence this can still be used.
- If we wanna make the text move from left to right, the we use `<marquee direction="right">`, `</marquee>` tags.
- Now if we want the text to move from bottom to up, then we simply put `direction="up"`.
- Similarly if we want text to move from top to bottom, then we simply put `direction="down"`.

<hr>

# List

<hr>

## Ordered Lists

<hr>

- In order to put lists in HTML, we use `<li>`, `<ol>`, `</ol>`,`</li>` tags.

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
    <ol>
      <li>Milk</li>
      <li>Cream</li>
      <li>Bread</li>
      <li>Butter</li>
    </ol>
  </body>
</html>
```

<hr>

- If we want the numbering to start from any other digit than 1, then just put `<li start="digit">`.
- Now if we wanna put alphabets in place of number, then just put `<li type="A">` for capital letter alphabatical indexing and `<li type="a">` for small letters alphabatical indexing.
- Then in order to put roman numbers as our index, just use `<li type="I">`; and `<li type="i">` for small letters roman number indexing.

<hr>

## Unordered Lists

<hr>

- In order to have unordered lists in HTML, we use `<ul>`, `<li>`, `</li>`, `</ul>`.

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
    <ul>
      <li>Milk</li>
      <li>Cream</li>
      <li>Bread</li>
      <li>Butter</li>
    </ul>
  </body>
</html>
```

<hr>

## Description List

<hr>

- If we ever wanna put some terms and explain their meanings side by side, then we use description lists.

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
    <table>
      <tr>
        <td>R1C1</td>
        <td>R1C2</td>
        <td>R1C3</td>
      </tr>
      <tr>
        <td>R2C1</td>
        <td>R2C2</td>
        <td>R2C3</td>
      </tr>
    </table>
  </body>
</html>
```

<hr>

- But in the above table, we wont be able to see any borders in table. Hence to do so, just put `<table border="1">` where 1 is actually 1 pixel.
- If we wanna put heading in this table, then instead of `<td>`, `</td>` just use `<th>`, `</th>`.
- In cells of these tables, instead of texts, we can also use images.

<hr>

- If we wanna combine rows or columns, then we use `<rowspan>` and `<colspan>`.

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
    <table border="1">
      <tr>
        <td>R1C1</td>
        <td rowspan="2">R1C2</td>
        <td>R1C3</td>
      </tr>
      <tr>
        <td>R2C1</td>
        <td>R2C3</td>
      </tr>
    </table>
  </body>
</html>
```

<hr>
