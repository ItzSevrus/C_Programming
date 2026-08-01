# ASCII value of a given character
This program helps us finding the ASCII(American Standard Code for Information Interchange) Value of a character.

- **C** Internally stores characters as ASCII values so its simple to see those values.
- You can see the ASCII value of a character using **printf** but using **%d** format specifier instead of **%c**.

> You will find **Source Code** [here!](main.c)

## Compilation Instructions
    ### Using gcc
    1. use command to compile the [main.c](main.c)
        ```bash
        gcc main.c -o main
        ```
    2. Now an **executable** will be created, you can run it by
        ```bash
        ./main
        ```

## OUTPUT
```bash
sahil@aether {~/Workspace/C_Programming/src/01_ascii_value_of_char} ❯ ./main
Enter a character >>> 5
ASCII Value of 5 is 53

sahil@aether {~/Workspace/C_Programming/src/01_ascii_value_of_char} ❯ ./main
Enter a character >>> a
ASCII Value of a is 97

sahil@aether {~/Workspace/C_Programming/src/01_ascii_value_of_char} ❯ ./main
Enter a character >>> A
ASCII Value of A is 65

sahil@aether {~/Workspace/C_Programming/src/01_ascii_value_of_char} ❯ ./main
Enter a character >>> \t
ASCII Value of \ is 92

```
