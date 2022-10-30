## Java Coding Tricks 

### To sort a Two dimensional array with inbuilt function

```

// to sort a two dimensional array based on starting value
Arrays.sort(twoDimensionArray, (a, b) -> Integer.compare(a[0], b[0]));

```

### To check if a number lies with the Integer range 2^31-1 

```
// they can be used to check number within the integer range
Integer.MAX_VALUE 
Integer.MIN_VALUE 
```