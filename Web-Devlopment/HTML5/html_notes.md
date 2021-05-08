# HTML Notes

https://www.youtube.com/watch?v=QXPWs00RD3A&t=7604s

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

- In order to give table a title, we use `<caption>`, `</caption>`.

<hr>

- Then there is another tag called `<thead>`, `</thead>` which are used to specify to the browser which row is the heading row; though using these tags would bring no distinction to that row.
- There are also tags like `<tbody>`, `</tbody>` which are used to specify to the browser which rows are the body rows.
- In order to make a distinction to heading and body rows using `<thead>` and `<tbody>`, we can also do CSS styling inside these tags.

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
      <thead>
        <tr>
          <td>R1C1</td>
          <td>R1C2</td>
          <td>R1C3</td>
        </tr>
      </thead>
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

# Types Of Structure Elements

<hr>

1. `<div>`: Block element
2. `<span>`: Inline element

<hr>

- A block element always starts on a new line and takes up the full width available. (Strches out to the left and right as much as it can).

<hr>

- An inline element does not start on a new line and only take up as much width as necessary.

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
    <div>This took full line</div>
    <!--You can alo apply CSS to cross check this fact-->
    <div>This took full line</div>
    <span>This didnt take full line</span>
    <span>This didnt take full line</span>
  </body>
</html>
```

<hr>

- So with the help of above code, we can indeed conclude that `<div>` occupies full line, which `<span>` does not.

<hr>

# Iframe

<hr>

- Iframes are used if we want to put one frame of some other website on our webpage.

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
    <iframe
      src="https://www.financialexpress.com/lifestyle/health/coronavirus-india-lockdown-live-news-may-5-live-updates-lockdown-live-oxygen-crisis-live-delhi-up-rajasthan-haryana-punjab-bihar-maharashtra-mumbai-bengaluru-corona-vaccine-live/2246001/"
    ></iframe>
  </body>
</html>
```

<hr>

# Audio

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
    <audio controls>
      <source src="audio.mp3" type="audio/mpeg" />
      Your browser does not supports audio files.<!--Message if browser does not support audio files-->
    </audio>
  </body>
</html>
```

<hr>

- Just put `<audio controls autoplay>` if you want audio to start automatically.
- Put `<audio autoplay>` if you dont want player to have control options.

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
    <video controls>
      <source src="vedio.mp4" type="video/mp4" />
      Your browser does not supports vedio files.<!--Message if browser does not support audio files-->
    </video>
  </body>
</html>
```

<hr>

- Just put `video controls autoplay>` if you want video to start automatically.
- Put `video autoplay>` if you dont want player to have control options.
- Just put `vedio controls width="500" height="500"` in order to set size of player.

<hr>

# PDF

<hr>

## Method 1

<hr>

- In order to show pdf's in web page, we have the following methods:

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
    <embed src="pdf.pdf" type="application/pdf" />
  </body>
</html>
```

<hr>

## Method 2

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
    <iframe src="pdf.pdf"></iframe>
  </body>
</html>
```

<hr>

## Method 3

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
    <object
      data="pdf.pdf"
      height="800"
      width="800"
      type="application/pdf"
    ></object>
  </body>
</html>
```

<hr>

# Youtube

<hr>

- In order to put YouTube vedios in your web page, we need to click on share option and then copy the embed code. Just put that link in your page and you are all done.

<hr>

# Google Maps

<hr>

- In order to put google maps iframe in our website, we just need to share the location and copy the embed code and put that code as it is on out HTML source code.

<hr>

# Semantic Elements

<hr>

- Elements with meaning.
- A semantic element clearly describes its meaning to both browser and the devloper.
- Ex `<form>`, `<table>`, `<article>`.
- Please refer https://www.w3schools.com/html/html5_semantic_elements.asp for more useful HTML semantic tags.
<hr>

# Non Sematic Elements

<hr>

- Non semantic elements are the elements which tells nothing about its content.
- Ex `<div>`, `<span>`.

<hr>

# Forms

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
    <form>
      Name:<input type="text" />
      <input type="submit" />
      <!-- Submit button, put value="" in order to have custom text in value button -->
    </form>
  </body>
</html>
```

<hr>

- For backend,we write as follows:

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
    <form method="GET/POST" action="file name">
      Name:<input type="text" />
      <input type="submit" />
      <!-- Submit button, put value="" in order to have custom text in value button -->
    </form>
  </body>
</html>
```

<hr>

- In place of `<input type="text">`, we can also use `color`, `date`, `emai`, `hidden`, `number`, `password`, `reset`, `time`, `url`, `"range" min="500" max="500"`, `file`, `"file" multiple`.
- In order to have some default value in input, just use `value=""`.
- In order to have a readonly input box, just put `readonly`.
- We can also use `disabled` in input widget.
- In order to increase the size of the input widget box, just put `size="50"` where the number is actually number of characters.
- Put `maxlength="20"` in order to have only specific number of characters in input.
- If type is `number`, then we can use `min=""` and `max=""` in order to have some min and max constraint in input.
- In order to have a pre text in input in order to give hint to the user of what is to be written in that input, we use `placeholder=""`.
- Just put `required` if we want to have that field compulsorily filled.
- If we have number type input field, then in order to have number increased by specific steps, we use `step="2"`.
- In order to have the cursor automatically come in that input field, we use `autofocus`.
- In order to give permission to the browser to have autocomplete enabled/ disabled in our input filed, we use `autocomplete="on/off"`.
- For backend, if we wanna specify which data comes from which input field, we put `name=""`.

<hr>

# Text Area

<hr>

- If we want to some blank space for user in order to put some big texts, we use text area.

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
    <textarea rows="20" cols="20" placeholder="Desscription please">
Put some description here</textarea
    >
  </body>
</html>
```

<hr>

# DropDown

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
    <form>
      <select>
        <option>Sam</option>
        <option>Angel</option>
        <option selected>Rahul</option>
        <!--Rahul selected as default-->
      </select>
    </form>
  </body>
</html>
```

<hr>

- In the presently codeed drop-down box, we can see just 1 value at a time. In order to see selected number of options, we use `<select size="2">`.
- In this drop down box, we can select only one value at a time. If we wanna select multiple options at a time, we use `<select multiple>`.
- In order to group options on basis of a title, we use `<optgroup>`.

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
    <form>
      <select>
        <optgroup label="School">
          <option>Sam</option>
          <option>Angel</option>
          <option>Rahul</option>
        </optgroup>
        <optgroup label="Tuition">
          <option>A</option>
          <option>B</option>
          <option>C</option>
        </optgroup>
      </select>
    </form>
  </body>
</html>
```

<hr>

# Radio Buttons

<hr>

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form>
      <!-- Put same name for one set of radiobutton -->
      <input type="radio" name="gender">Male
      <!-- To make an option already checked -->
      <input type="radio" name="gender" checked>Female
      <input type="radio" name="gender">Other
</body>
</html>
```

<hr>

# Checkbox

<hr>

- The main diffrence between a radiobutton and a checkbox is hat in checkox we select only one option for a name.
- While in checkbox we can select multiple values for a single name.

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
    <form>
      <!-- Put same name for one set of radiobutton -->
      <input type="checkbox" name="gender" />Male
      <!-- To make an option already checked -->
      <input type="checkbox" name="gender" checked />Female
      <input type="checkbox" name="gender" />Other
    </form>
  </body>
</html>
```

<hr>

# Searchbox

<hr>

- In order to make a datalist, we just connect a list with our regular input box.

<hr>

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form>
      Search <input type="text" list="search">
      <datalist id="search">
        <!-- Option tag has no end tag. Remember! -->
        <option value="Mango">
        <option value="Orange">
        <option value="PineApple">
      </datalist>
</body>
</html>
```

<hr>

# Label

<hr>

- In order to put a text before input in order to specify what is to be inputted, we have a special tag `<label for="input id">text</label>`.
- Advantage of using this tag is that it directs us to input widget whenever we click the label text.

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
    <form>
      <label for="a">Enter name: </label>
      <input id="a" />
    </form>
  </body>
</html>
```

<hr>

# Frames

<hr>

- In order to enclose widgets inside frames, we use `<fieldset>`, `</fieldset>`. In order to labal the frame, we use `<legend>`, `</legend>`.

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
    <form>
      <fieldset>
        <legend>Name</legend>
        <label for="a">Enter first name: </label>
        <input id="a" /><br />
        <label for="b">Enter last name: </label>
        <input id="b" /><br />
      </fieldset>
      <fieldset>
        <legend>School</legend>
        <label for="c">Enter school name: </label>
        <input id="c" /><br />
        <label for="d">Enter school address: </label>
        <input id="d" /><br />
      </fieldset>
    </form>
  </body>
</html>
```

<hr>

# SEO Tags

<hr>

- Apart from the introductory tag I wrote in all above HTML code snippets, here are few more HTML snippets you should merge with your code in order to get you website at better ranks.

<hr>

- In order to describe what your website is for, use following code inside the head tag.

<hr>

```html
<meta name="description" content="write description" />
```

<hr>

- In earlier days, website programmers also used to mention the important keywords of their website, in order to have their website at higher ranks (It is not much useful in present days). But still we can also mention important keywords use following line of code:

<hr>

```html
<meta name="keywords" content="word1, word2, ..." />
```

<hr>

- In order to specify Google wether this web page has to be a part of searches or not, we use the following code:

<hr>

```html
<meta name="robots" content="noindex, nofollow" />
<!-- No index means dont put this page in search results
No follow means dont follow the links given in this page
Use index, follow in order to have all opposite to what I mentioned above -->
```

<hr>
