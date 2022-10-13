_**David Weng**_ _\(Exercises from the textbook\)_

# Exercise 4.5

Determine the result of the following expressions:

\(a\) \-30 \* 3 \+ 21 / 5 

\(b\) \-30 \+ 3 \* 21 / 5

\(c\) 30 / 3 \* 21 % 5

\(d\) \-30 / 3 \* 21 % 4

**\(a\) \-90 \+ 4 =** _**\-86**_ 

**\(b\) \-30 \+ 63 / 5 =** _**\-18**_

**\(c\) 10 \* 21 \-&gt; 210, 210%5 =** _**0**_

**\(d\) \-10 \* 21 \-&gt; \-210, \-210%4 =** _**\-2**_

# Exercise 4.17

Explain the difference between prefix and postfix increment.

_**Prefix increment \(\+\+i\) returns the incremented value.**_

_**Postfix increment \(i\+\+\) returns the original value before incrementing.**_

_**Some good examples listed below:**_

_**Prefix increment \(\+\+i\)**_

```cpp
i = 1;
j = ++i;
(i is 2, j is 2)
```

_**Postfix increment \(i\+\+\)**_

```cpp
 i = 1;
 j = i++;
 (i is 2, j is 1)
```

# Exercise 4.34

Given the variable definitions in this section, explain what conversions take place in the following expressions:

```cpp
if (fval) // fval is converted to boolean
dval = fval + ival; // ival is converted to fval, then the result of fval add ival is converted to double.
dval + ival * cval; // cval is converted to int, then that int and ival is converted to double.
```

