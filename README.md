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
  - undestanding the recursion through out various classic example
## 8 array
## 9 pointer
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