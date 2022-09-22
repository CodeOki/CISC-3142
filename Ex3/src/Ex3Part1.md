<span style='color:#e91e63'>**David Weng**</span>

**Exercise 2.1** = _int is 32 bits in width/long is 64 bits in width/short is 16 bits in width_
_long long MUST contain at least 64 bits/long MUST contain at least 32 bits_  
_Minimum size for short and int is 16 bits._
_Unsigned type can ONLY hold positive values while signed type can hold negative/positive values._

_Float takes less memory of storage and is for lesser decimal places. Double is more precise and used for more decimal places while using more memory space._

**Exercise 2.2** = _I would use double or float due to calculating numbers that are in decimals and not whole numbers._  
_Ex\) Rate is percentage %, payment/principal will be in decimals to the_  
_hundredths place \$0.00_

**Exercise 2.3** =  


```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;

```

*Output:*
32
4294967264
32
-32
0
0

**Exercise 2.10** = _global\_str is a global variable that has a value of an empty string. global\_int is a global variable that has a value of zero._
_local\_int is a local variable which is uninitialized, so it has an undefined value. local\_str is also a local variable which is uninitialized,_
_but it has a value that is defined by the class. So it is empty string._

**Exercise 2.12** =  
\(a\) int double = 3.14;

\(b\) int \_;

\(c\) int catch\-22;  
\(d\) int 1\_or\_2 = 1;

\(e\) double Double = 3.14;

_a, c, d are invalid_

**Exercise 2.13** =

```cpp
int i = 42;
int main()
{
    int i = 100;
    int j = i;
}
```

_The value of j would be 100. Program takes the local variable instead of the global variable._

**Exercise 2.14** =

```cpp
int i = 100, sum = 0;

for (int i = 0; i != 10; ++i)

sum += i;

std::cout << i << " " << sum << std::endl;
```

_It is legal and the output would be: 100 45_

**Exercise 2.17** =   

```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;

```

_The code prints: 10 10_

**Exercise 2.27** =  
int i = \-1, &r = 0;            _a\) This is illegal because r must refer to an object_  
int \*const p2 = &i2;        _b\) This is legal_  
const int i = \-1, &r = 0;   _c\) This is legal_  

const int \*const p3 = &i2;  _d\) This is legal_  

const int \*p1 = &i2;    _e\) This is legal_  

const int &const r2;    _f\) This is illegal because r2 is a reference that cannot be const_  

const int i2 = i, &r = i;   _g\) This is legal_

**Exercise 2.28** =  

int i, \*const cp;       _a\) This is illegal because cp is not initialized_

int \*p1, \*const p2;     _b\) This is illegal because p2 is not initialized_

const int ic, &r = ic;  _c\) This is illegal because ic is not initialized_

const int \*const p3;  _d\) This is illegal because p3 is not initialized_

const int \*p;           _e\) This is legal because it means a pointer is pointing to const int_

