# Variables

## Types

These are the fundamental data types supported by C++.

```
Data            Type Meaning            Size (in Bytes)
int             Integer	                2 or 4
float           Floating-point          4
double          Double Floating-point   8
char            Character               1
wchar_t         Wide Character          2
bool            Boolean                 1
void            Empty                   0
```

## Modifiers

```
Data Type           Size (in Bytes)     Meaning
signed  int         4                   used for integers (equivalent to int)
unsigned int        4                   can only store positive integers
short               2                   used for small integers (range -32768 to 32767)
unsigned short      2                   used for small positive integers (range 0 to 65,535)
long                at least 4          used for large integers (equivalent to long int)
unsigned long       4                   used for large positive integers or 0 (equivalent to unsigned long int)
long long           8                   used for very large integers (equivalent to long long int).
unsigned long long  8                   used for very large positive integers or 0 (equivalent to unsigned long long int)
long double         12                  used for large floating-point numbers
signed char         1                   used for characters (guaranteed range -127 to 127)
unsigned char       1                   used for characters (range 0 to 255)
```

## C++ Void

The `void` keyword indicates an absence of data. It means "nothing" or "no value". We will use void when we learn about functions and pointers.
**Note:** We cannot declare variables of the void type.
