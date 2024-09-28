## C++ Basics: Variables, Constants, Data Types, Operators, and Conditionals

### Variables and Constants

* **Variables:** Are used to store data that can change during the execution of a program.
  * **Declaration:** `data_type variable_name;`
  * **Initialization:** `data_type variable_name = value;`
* **Constants:** Are used to store data that cannot change during the execution of a program.
  * **Declaration:** `const data_type constant_name = value;`

### Primitive Data Types

* **Integer:** Used to store whole numbers.
  * `int`: 4 bytes (32 bits)
  * `short`: 2 bytes (16 bits)
  * `long`: 4 bytes (32 bits) on 32-bit systems, 8 bytes (64 bits) on 64-bit systems
  * `long long`: 8 bytes (64 bits)
* **Floating-point:** Used to store decimal numbers.
  * `float`: 4 bytes (32 bits)
  * `double`: 8 bytes (64 bits)
* **Character:** Used to store a single character.
  * `char`: 1 byte (8 bits)
* **Boolean:** Used to store true or false values.
  * `bool`: 1 byte (8 bits)

### Operators

* **Arithmetic:**
  * `+`: Addition
  * `-`: Subtraction
  * `*`: Multiplication
  * `/`: Division
  * `%`: Modulus (remainder)
* **Comparison:**
  * `==`: Equal to
  * `!=`: Not equal to
  * `<`: Less than
  * `>`: Greater than
  * `<=`: Less than or equal to
  * `>=`: Greater than or equal to
* **Logical:**
  * `&&`: Logical AND
  * `||`: Logical OR
  * `!`: Logical NOT
* **Bitwise:**
  * `&`: Bitwise AND
  * `|`: Bitwise OR
  * `^`: Bitwise XOR
  * `~`: Bitwise NOT
  * `<<`: Left shift
  * `>>`: Right shift

### Conditionals

* **if statement:** Executes a block of code if a condition is true.
  ```cpp
  if (condition) {
      // code to be executed if condition is true
  }