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

`$(".well").addClass("animated shake");`