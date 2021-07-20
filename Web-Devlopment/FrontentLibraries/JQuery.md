# jQuery

<hr>

- In order to put jquery, firstly include this in your document

<hr>

```js
<script>
  $(document).ready(function(){})
</script>
```

<hr>

- We need to include the above function because we wanna run our jquery only after render HTML first, ie after our page's document is ready to avoid unexpected errors.

<hr>

# Animated Bounce

<hr>

- We can easily make all our HTML buttons bounce by using this snippet

<hr>

`$("button").addClass("animated bounce");`

<hr>

# Animated Shake

<hr>

- Include the following code in you script in order to include animated shake effect

<hr>

`$(".well").addClass("animated shake");` Here well is a class, and we can select an element by class like this

<hr>

# Animated Fadeout

<hr>

- To include animated fadeout effect, use following code:

<hr>

`$("#target3").addClass("animated fadeout");` here target3 is the id of a button

<hr>

# Remove Class

<hr>

- We can also remove a aclass using jquery in following way `$("button").removeClass("btn-default");`

<hr>

# Changing CSS

<hr>

- We can also change the CSS directly in the following way `$("#target1").css("color", "blue");`

<hr>

# Disabling Elements

<hr>

- We use `.prop` to disable elements.

<hr>

`$("button").prop("disabled", true);`

<hr>

# Change InnerHTML

<hr>

- We can also change the innerHTML of any tag by using folllowing code: `$("h3").html("<em>jQuery Playground</em>");`
- As you can notice, we can also add HTML tags using the above mentioned method.
- If you dont want HTML tags to be implemented in InnerHTML of any element, then use `.text()` instead of `.html()`

<hr>

# Remove An Element

<hr>

- Use following code to remove any element `$("#target4").remove()`

<hr>

# Move Elements

<hr>

- We can move elements from one div to another using following code: `$("#target4").appendTo("#left-well");`. ( #left-well is another div)