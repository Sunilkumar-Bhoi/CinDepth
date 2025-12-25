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
## 10 string
## 11 structure union 
## 12 files
## 13 the C preprocessor
## 14 operation on bits
## 15 miscellaneous feature
## 16 building project and creation of - libraries
## 17 code optimisation in c
## 18 c and assembly interaction
## 19 library function