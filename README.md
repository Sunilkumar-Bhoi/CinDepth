# C in depth 

## 1 Introduction
    preprocessor(expanded code) -> compiler(assembly code) -> assembler(object code .o) -> linker(executable file)
## 2 Element of C
### **2.1 C Character Set**

All characters C understands →

* Letters (A–Z, a–z)
* Digits (0–9)
* Symbols (+, -, *, /, =, %, etc.)
* Whitespaces (space, tab, newline)

---

### **2.2 Escape Sequences**

Special characters written using backslash `\`
Examples:

* `\n` → new line
* `\t` → tab
* `\\` → backslash
* `\"` → double quote

---

### **2.3 Trigraph Characters**

Old-style 3-character combinations used when keyboard lacked symbols.
Example:

* `??=` → `#`
  (Not used now.)

---

### **2.4 Delimiters**

Characters that separate program parts:
`( )` , `{ }` , `[ ]` , `;`, `,`

---

### **2.5 Reserved Words / Keywords**

Words with special meaning.
Example:
`int`, `char`, `if`, `else`, `for`, `return`, `while`, `float`, `struct`, etc.

---

### **2.6 Identifiers**

Names you give to variables, functions, arrays, etc.
Example:
`age`, `sum`, `main`, `totalMarks`.
Rules: No space, no starting with digit, no keyword.

---

### **2.7 Data Types**

Type of data stored.

* Basic: `int`, `float`, `char`, `double`
* Derived: arrays, pointers, structures, unions
* Void: `void`

---

### **2.8 Constants**

Values that do not change.

#### **2.8.1 Numeric Constants**

Numbers → integer or floating.

#### **2.8.2 Integer Constants**

Whole numbers → `10`, `-5`, `200`

#### **2.8.3 Real (Floating Point) Constants**

Numbers with decimals → `3.14`, `0.003`, `-7.5`

#### **2.8.5 String Constants**

Text inside double quotes → `"Hello"`

#### **2.8.6 Symbolic Constants**

Defined using `#define`
Example:
`#define PI 3.14`

---

### **2.9 Variables**

Named storage locations that can change value.
Example: `int age;`

#### **2.9.1 Declaration**

Telling the compiler the variable type:
`int num;`

#### **2.9.2 Initialization**

Giving value for the first time:
`int num = 10;`

---

### **2.10 Expressions**

Combination of variables, constants, operators:
`a + b`, `x * 10`, `marks / 2`.

---

### **2.11 Statements**

Commands for the compiler.
Example:
`printf("Hello");`

---

### **2.12 Expression Statement**

An expression followed by semicolon:
`a = b + 2;`

---

### **2.13 Compound Statement**

Block of statements inside braces `{ }`

```
{
   int a = 10;
   printf("%d", a);
}
```

---

### **2.14 Comments**

Notes for the programmer.

* Single-line → `// This is a comment`
* Multi-line → `/* comment */`

---
## 3 Inout output in C
    conversion, formating
    scanf()
    printf()
    getchar()
    putchar()
    suppresion character * 
## 4 operator and expression
    type casting, order evaluation, diffrent operator and its precedence 
## 5. Control Statements

- **Selection (Decision) Statements**
  - `if`
  - `if...else`
  - Nested `if...else`
  - `else-if` ladder
  - `switch`

- **Iteration (Looping) Statements**
  - `for` loop
  - `while` loop
  - `do...while` loop
  - Nesting of loops
  - Infinite loops

- **Jump Statements**
  - `goto`
  - `break`
  - `continue`

- **Pattern Programs**
  - Pyramid patterns (30+ questions)

## 6. Functions

- A function is a block of code (subprogram) that performs a specific task.
- Types of functions:
  - User-defined functions: created by the user
  - Library (inbuilt) functions: provided in standard libraries  
    e.g., `printf()`, `scanf()` from `stdio.h`

- Three parts of a function:
  1. Function declaration
  2. Function definition
  3. Function call

- Return statement:
  - Returns a value from a function
  - Ends function execution

- Main function:
  - Only one `main()` function in a program
  - Returns `0` on successful execution
  - Non-zero return value indicates an error
  - `exit()` is equivalent to `return` in `main()`

- Function responsibility:
  - Declaration → handled by compiler
  - Definition → written by user
  - Call → by operating system

- Library functions:
  - Not part of core C language
  - Supplied with compiler as object code
  - Linked by the linker

- Parameters:
  - Formal parameters → in function definition
  - Actual parameters → in function call

- Calling method:
  - Call by value means value of actual parameter does not change

- Types of functions (based on arguments and return value):
  1. Without arguments and without return value
  2. With arguments and without return value
  3. Without arguments and with return value
  4. With arguments and with return value

- Variables:
  - Local
  - Global
  - Static
-notes
  - we can call function inside another functiom
  - type cast function explicitly (void)sum(a,b);
  - arimatic operation in function call posiible
  - type automatically cast between local and passed parameter
  - static variable can not used to store value in function declaration
## 7 recursion 
  - recursion is a process in which a problem is defined in term of it self
  - recursive function is a funtion that call itself.
    - void rec(){
        rec();
     }
    - work in two phase winding and unwinding.
  - undestanding the recursion through out various classic examples
  - implemantaion of recursion
  - ## 🔄 Recursion vs. Iteration: A Comparative Analysis

This document outlines the fundamental differences, advantages, and limitations of implementing repetitive logic using recursive and iterative approaches.

---

## 📊 Comparison Table

| Feature | Iteration (Loops) | Recursion (Self-Calling) |
| :--- | :--- | :--- |
| **Mechanism** | Code block repeats via `for`, `while`, or `do-while`. | Code block repeats via the function calling itself. |
| **Control Flow** | Repeat occurs after block finishes or `continue` is hit. | Repeat occurs at the point of the recursive call. |
| **State Management** | Variables are modified via update statements (e.g., `i++`). | New values are passed as arguments to the next call. |
| **Termination** | Terminating condition stops the loop. | **Base Case** stops the function from calling itself. |
| **Memory** | **Efficient:** Uses the same memory space. | **Expensive:** Uses stack space for each call. |
| **Speed** | **Faster:** No function call overhead. | **Slower:** Time spent pushing/popping stack records. |
| **Error Risk** | **Infinite Loop:** Program hangs/loops forever. | **Stack Overflow:** Program crashes when memory is exhausted. |

---

## 🧠 Key Conceptual Differences

### 1. Execution Overhead
Iteration is generally more efficient for the hardware. In contrast, recursion involves **Activation Records** (also known as stack frames). Every time a function calls itself, the system must push a record onto the run-time stack.
- **Iteration:** Low overhead; fast execution.
- **Recursion:** High overhead; potential for program crashes if recursion is too deep.



### 2. Code Elegance vs. Efficiency
The primary advantage of recursion is not speed, but **readability**. 
- **Compactness:** Recursive algorithms are often much shorter and "cleaner."
- **Logical Flow:** They are easier to understand and maintain when the problem itself is complex or mathematically recursive.

### 3. Data Structures
Recursion is the preferred tool when dealing with **Recursively Defined Data Structures**, such as:
* **Trees** (Directories, Organizational charts)
* **Graphs** (Social networks, Maps)



---

## 🚦 Decision Matrix: Which one to use?

| **Use Iteration When...** | **Use Recursion When...** |
| :--- | :--- |
| Performance and speed are critical. | The problem is inherently recursive (e.g., Factorials, Fibonacci). |
| Stack space/Memory is limited. | Operating on complex structures like Trees. |
| The problem is simple and linear. | Sacrificing efficiency for code readability and maintenance is acceptable. |
---
  - tail recursion & augmentive recursion
  - direct and indirect recursion(complex and rarely used)
## 8 array
  - array is collection of similar type data items. this data items are called element of array.
  - 1-D(vector), 2-D(matrix), multidimension array based on number of subscripts.
  - **One dimentional array**
    - *Declaration* : data_type array_name [size];
    - *Accessing* : array name followed by subscript in braces.
    - *Proccesing* : using loop.
    - After declaration, the elements of a local array have garbage value while the elements of global and static array are automatically initialized to zero.
    - *Initialization of 1D array*
      - data_type array_name[SIZE] = {1,2,3....};
  - **Array in functions**
    - we cam pass individual element of array and whole array.
    - When an array is passed as an actual argument, the called function actually gets access to the original array and works on it, so any changes made inside the function affect the original array
  - **Two dimensional array**
    - declaration and accessing the 2D array.
    - data_type array_name [rowSIZE][colSIZE] = {{1,2},{1,2}}.
    - processing using two nested loop.
    - initializing 2D array.
      - int arr[4][3] ={11,12,13,14,15,16,17,18,19,20,21,22};
      - it is optional to specify first dimension but secund is madnatory, arr[][3];
  - **multidimesion array**
    - 3d array has left most number of 2d array.int a[2][3][4] means two 3x4 array.
    - we can ommit only left most subscript,other all subscript are requireed to specify.
    - func(int a[],int b[][2],int c [][2][3]);   *valid*
  - **introduction to string**
    - strings is array of type char.
    - terminated by nulll character "\0".
    - initialization
      - char string[10]={'i','n','d','i','a','\n' };
      - char string[10]="india"; add automatic null character at end.
      - I/O using printf(), scanf().
      - I/O using gets(), puts().
  - **additional program**
    - 1. linear search
    - 2. binary search
    - 3. selection sort
    - 4. bubble sort
    - 5. insertion sort
    - 6. merge sort
    - 7. pascle triangle
    - 8. magic matrix
## 9 pointer
  - use of pointer make code more efficient and compact.
  #### **use of pointer**
    - simulating call by referance
    - return more than one variable in function.
    - accesing dynamically allocated memory.
    - implement dat structure like graph, tree, linked list.
    - improve efficiency
 - **about memory**
    - we declare before use. so compiler know how much space to reserve for variable.
    - the address of variable is a first byte address.
 - **address operator**
    - "&" is a address operator, which return address of variable when olaced before it.
    -  formate specifier %p is used to print address.
 - **pointer variable**
    - is a variable that store memory address.
    - it also take space & have name.
    - called pointer because it point particular location in memory by storing address of location.
 - **declaration of pointer variable**
    - data_type *pname
 - **assigning address to pointer variabble**
    - int age=30,*iptr=&age;
    - gloabl and static pointer conatin NULL and automatic pointer contain any location of memory if not assigned address.
 - **dereferancing pointer variable**
    - we can access indirect variable using indirection operator(*), placing before pointer variable.
    - size of all type of pointer is same but memory accessed while derefarencing is different
 - **pointer arithematic**
   - all type of arithematic operation are not possible with pointer.
   - possible operations are : 
      - addition of an integer to a pointer and increament.
      - subtraction of an integer to a pointer and decreament.
      - subtraction of pointer from snother pointer of same type.
 - **precedence of dereferancing operator and increament and decrement operator.**
    - precedance of bith of this is same and right to left. so we need to use it carefully.
 - **pointer comparision**
    - comparison happen between same type of pointer, null and null, null and any other type of pointer.
    - ==. != is used to compare two pointer for finding weather they contain same address or not.
    - <,>,<=,>= make sence for only when both pointer pointing same element of array.
 - **pointer to pointer**
    - syntax **ptr;
    - used when pass pointer to function.
 - **pointer and one dimension array**
    - array name in expression, value of name work as constant pointer(arr->&arr[0]).
    - increamenting the pointer gives address of next array element.
    - arr, &arr[0] base address of array.
    - *(arr+i),*(i+arr),i[arr] all are same and print value of arr[i];
 - **subscripting pointer variable**
    - arr will always point out base address or starting address of an array we can't assign another address, increament or adiition
    so we use pointer for do that.
 - **pointer to an array**
    - int (*ptr) [10]; point array of 10 integer.
    - it point whole array.
 - **pointer and two dimesional array**
    - arr point 0th 1d array.
    - *arr point 0th element of 0th 1d array
    - (arr+i) point ith 1d array.
    - *(arr+i) point 1st elemnt of ith 1d array.
    - *(arr+i)+j point jth elemnt of ith 1d array.
    - (*(*arr+i)+j) represent the value of jth element of ith 1D array.
    - 2D array is collection of one dimensional array placed one after another.
 - **Subscripting Pointer to an Array**
    - *(*(ptr+i)+j).
 - **pointer to three dimension array**
    - *(*(*(arr+i)+j)+k).
 - **pointer and function**
    - argument in function 1.call by referance 2.call by value.
    - call by referance help to return more than one value in function and also reduce overhead of making copy evrytime at function call.
 - **returning more than one value in function**
    - by passing the pointer in function we can return more than one value.
    - function call pass the address and in function defination use pointer for that.
- **function returning pointer**
    - int *func(int x, int y...)
    - this will return address from this function
    - int *ptr=func();
 - **passing one dimesion array to function**
    - a whole array os never copied insted function get pointer of first element of array.
 - **pssinf two dimension array to function**
    - when 2d array is passed in function, function actually got pointer of 1-D array.
    - left most dimension is option, func(int [][4]),func(int (*a)[4]).
- **array of pointer(pointer array)**
    - it can hold address of any variable of appropriate type. 
    - data_type *Array_name[size];
    - 2d array we store address of 0th element of ith 1d array in array pointer. it also allow to create ragged array,arr[i][j] to access element of array.
- **void pointer**
    - void pointer is a generic pointer that can point any type of data.
    - a void pointer cant directly dereferenced, before dereferancing, it should be cast in appropriate pointer data type. i.e *(int *)pa.
    -(float *)vp is calculation not a variable so cant store any value in it.
- **dynamic memory allocation**
  - until now all allocation was static mean we are could not allocate or deallocate it
  - two problem arise while static memory
      1. wastage of memory if we use less than allocated memory.
      2. program fail if we use more than declare memory.
  - the process of allocating memory at the time of execution is call DMA.
  - done using stdlib.h library. function from this allocate memory from area called heap and deallocate when not required.
  - pointer play important role in DMA,because we can access DMA using pointers only.
- **malloc()**
  - declaration : void *malloc(size_r,size);
  - size is used to determine the number of bytes to allocate amf size_t is define in stdlib.h
  - malloc() is used to allocate memory.
  - it return first address of allocated byte, if insufficient space return null.
  - explicitly cast in required data type ex.
    - int *ptr;
      ptr=(int *)malloc(12);
 - **calloc()**
  - declaration void *calloc(size_t, size_t,size);
  - allocate different block of number in memory.
  - two value passed number of block and size of each block 5,4 means 5 block each of 4bytes.
  - first diff two value and secund allocate memory initialize with zero.
- **realloc**
  - void realloc(int *ptr,size_t,newsize);
  - used to change the size of memory block without loosing the data.
  - this is known as reallocation of memory.
  - takes two argument first one is previously allocated pointer address and secund is new size.
  - if newsize is large than old then no data lost.
  - realloc work as malloc if ptr is NULL pointer and undefine if ptr is not return by malloc, realloc,calloc.
- **free()**
  - declaration void free(int *p);
  - used to deallocate memory manually so problems like memory leakage not happen and we can use that space for other work.
- **dynamic array**
  - arrays whose size can vary during run time.
  - we can use subscript notaion for pointer and pointer for susbscript notation.
  - 1d,2d array creation using pointer.
- **23. pointer to function**
  - every function resides inside memory so every function has its own address. we can obtain by simply writing name without paranthesis.
- **23.1 declaring a pointer to function**
  - we have seen that function has a address,so we can have pointer that can store address and hence point to them.
  - declaration of pointer to function : return_type (*ptr_name)(type1, type2...);
  - **float (\*fp)(int a, int b);** declaring a function pointer
  - **float func(int a, int b)** declaring a function
  - **fp=func;** assign address of function to pointer*
- **23.2 calling function through function pointer**
  - r= func(a,b); -> usual way of calling function
  - r= (*fp)(a,b); -> using function pointer.
  - r= (fp)(a,b); -> indirection operator can be ommited.
- **23.3 Passing a function's address as an argument to other function**
  - we can call function using its refference.
- **23.4 function pointer**
  - Function pointer can be used in applications where we don't know in advance which function will be called. in that case we can take the addresses of different functions in an array and then call the appropriate function depending on some index number.
## 10 Strings
  - **introduction**
    - there is no specific data type for string in c. it is treated as array of character ending with "\0". "\0" is different from ASCII 0.
    - used to store and manupulate data in form like word or sentance.
  - **10.1 string constant(string literals)**
    - is a sequence of chcaracter enclosed with double quoutes. char c[]="sunil";
    - string constant are stored in memory and the literal itself contain the address of first character and automatically ter inated by \0.
    - "software[4]" = *(software+4) = w
    - char *p = "deep", space is allocated for pointer and deep is stored in memory somewhere.
    - "red" "fort" -> "red fort"
  - **10.2 string variable**
    - is 1D array of ASCII character includeing \0.
    - to create a string variable declare a array of string.
    - char str[10]={'s','t',...} or "str..";
    - str here store first address of 's'.
    - gets(), puts() for i/o but gets overwrite the array when large string is entered.
  - **10.3 string libraries**
    -string.h
    - **10.3.1 strlen()** -> return length of string excluding null character.
    - **10.3.2 strcmp()** -> return 0 if equal and non zero if two string are not equal s1>s2, s1<2 inly shows which one is large.
    - **10.3.3 strcpy()** -> copy str2 int str1 including '\0'.
    - **10.3.4 strcat()** -> append secund string after first string.
  - **10.4 string pointer**
    - char *str="sunil"
    - point first charcter address of string constant.
  - **10.5 array of string or two dimesional array of character**
    -  str[5][10];
    - first subscript denotes number of strings and secund denotes maximum length that each string can have.
    - we cant assign without inialization.
    - to assign value use scanf or strcpy.
  - **10.6 array of pointer to string**
    - char *arrp[]={"sunil","....",..}
    - we can asign value like a[0],a[1] becase each one is now pointer variable.
  - **10.7 string library function**
    -**10.7.1 strncpy()** -> copy n number of character and remaining null, return value of str1, add remaining char as null.
    -**10.7.2 strncat()** -> same as strcat() but concatenates only  portion of string to another string. return value of str1.
    - **10.7.3 strncmp()** -> same as strcmp(), but it compare character of a string of a specific length.
    - **10.7.4 strchr(), strrchr()** ->strchr() return pointer to leftmost occurance of character if present else return null.
    strrchr() return pointer to rightmost ocurrance of character in string else retun null.
    - **10.7.5 strpbrk()** -> return pointer to first character of string 1 that matches with ant character of string 2. and null if nothing is common.
    - **10.7.6 strspn(), strcspn()** -> strspn() return number of character in the beggining of string 1 that matches with any character of string 2.
    strncspn() return number of character in beggining of string one that doest matches with any character of string 2.
    - **10.7.7 strstr()** -> used to locate the first occurance of substring in another.
    first argument is pointer to string in which substring is to be searched. retun pointer to the beggining of first occurance of substring.
    - **10.7.8 strtok()** -> this function is used to extract tokens from a string based on some separator characters. A sequence of calls to
strtok ( ) breaks the string s1 into tokens, where each token is delimited by a character from the string s2. 
- **10.7.9 sprintf()** -> similar to printf() exept it store the formated output in array, help to convert any data type into string, appednd null at end. return number of characters output to the string excluding null character.
- **10.7.10 sscanf()** -> This function is same as the scan () function except that data is read from a string rather than the standard input. We can read the formatted text from a string and convert it into variables of different data types.
## 11 structure union 
## 12 files
## 13 the C preprocessor
## 14 operation on bits
## 15 miscellaneous feature
## 16 building project and creation of - libraries
## 17 code optimisation in c
## 18 c and assembly interaction
## 19 library function