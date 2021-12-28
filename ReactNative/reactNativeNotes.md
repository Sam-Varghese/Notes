# Hello World

<hr>

```jsx
import React from 'react';
import {Text} from 'react-native';

const HelloWorld = () => {

    const name = "Sam";

    return (<Text>Hello world from {name}.</Text>); // Using variables inside return. We may also use functions
}

export default HelloWorld;
```

<hr>

- **Text** is a component in React native to output text.
- Here are the [rest of the components](https://reactnative.dev/docs/intro-react-native-components)

<hr>

# Applying CSS

<hr>

```jsx
import React from "react";
import { Text, TextInput, View } from "react-native";

const helloWorld = () => {
  return (
    <View>
      <Text>Hello, I'm...</Text>
      <TextInput style={{ borderColor: "gray", borderWidth: "1px" }} />
    </View>
  );
};

export default helloWorld;
```

<hr>

# Rendering Component Multiple Times

<hr>

```jsx
import React from "react";
import { View, Text } from "react-native";

const Comp1 = () => {
  return (
    <View>
      <Text>Hello again</Text>
    </View>
  );
};

const comp2 = () => {
  return (
    <View>
      <Text>Going to say hello</Text>
      <Comp1 />
      <Comp1 />
      <Comp1 />
      <Comp1 />
    </View>
  );
};

export default comp2;
```

<hr>

- **Note**: The name of the react component that is to get rendered should always start with a capital letter.

<hr>

# Props

<hr>

- Similar to parameters of a function

<hr>

```jsx
import React from 'react'
import { View, Text } from 'react-native';

const Comp1 = (props) => {

  return (

    <Text>Hello { props.name}</Text>
  )
}

const Comp2 = (props) => {

  return (
    <View>
      <Text>Starting to say hello</Text>
      <Comp1 name="Sam"/>
      <Comp1 name="Angel"/>
      <Comp1 name="Rahul"/>
    </View>
  );
}

export default Comp2;
```

<hr>

# User States

<hr>

- User states stores the state of a prop.
- So we may change the state whenever required.
- Like refer the following program where I change the state 