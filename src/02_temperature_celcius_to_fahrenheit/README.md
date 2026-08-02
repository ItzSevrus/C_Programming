# Temperature conversion from Celcius to Fahrenheit
This program helps us converting temperature from **deg. celcius** to **deg. fahrenheit**.
- Keep in mind that using **divide** in C works like -
    ```C
    int a = 13; // integer a
    int b = 5; // integer b

    // performing
    a / b; -> this results in value integer, no decimal values comes.
    //result of instruction above is 2

    // Now
    float a = 13f; // Float or real number a
    int b = 5; // integer b

    // performing
    a / b; -> this results in value float, decimal part comes.
    // result of instruction above is 2.6
    ```
    > The code above is just for explaination!
- Also if you specified resulting number **float** but having both values during division are **integers** then answer will be **float** BUT **won't include decimal values from division instead of it uses .000**, See example below -
    ```C
    int a = 13;
    int b = 6;
    float c; // resulting number

    c = a / b;
    // Here c is a floating number, but doesn't include value from decimal result of a / b.
    // Answer will be 2 not 2.17
    // To get 2.5, either a or b must be float.
    ```
- Here's the result of thing I'm explaining
    - **Code 1**
    ```C
    #include <stdio.h>

    int main(void) {
    int a = 13;
    int b = 6;
    float c;
    c = a / b;
    printf("%.2f\n", c);
    }
    ```
    - Output
    ```C
    sahil@aether {~/Workspace/C_Programming/src/02_temperature_celcius_to_fahrenheit} ❯ gcc test.c -o test

    sahil@aether {~/Workspace/C_Programming/src/02_temperature_celcius_to_fahrenheit} ❯ ./test
    2.00
    ```

    - **Code 2**
    ```C
    #include <stdio.h>

    int main(void) {
    float a = 13.0f;
    int b = 6;
    float c;
    c = a / b;
    printf("%.2f\n", c);
    }
    ```

    - Output
    ```C
    sahil@aether {~/Workspace/C_Programming/src/02_temperature_celcius_to_fahrenheit} ❯ gcc test.c -o test

    sahil@aether {~/Workspace/C_Programming/src/02_temperature_celcius_to_fahrenheit} ❯ ./test
    2.17
    ```

> You will find **Source Code** [here!](main.c)

## Compilation Instructions
### using gcc
1. Use command to compile the [main.c](main.c)
    ```bash
    gcc main.c -o main
    ```
2. Now an **executable** will be created, you can run it by
    ```bash
    ./main
    ```

## Output
```bash
sahil@aether {~/Workspace/C_Programming/src/02_temperature_celcius_to_fahrenheit} ❯ ./main
Enter temperature in celcius >>> 35
Temperature in Fahrenheit is 95.00 deg F

sahil@aether {~/Workspace/C_Programming/src/02_temperature_celcius_to_fahrenheit} ❯ ./main
Enter temperature in celcius >>> 37
Temperature in Fahrenheit is 98.60 deg F

sahil@aether {~/Workspace/C_Programming/src/02_temperature_celcius_to_fahrenheit} ❯ ./main
Enter temperature in celcius >>> 0
Temperature in Fahrenheit is 32.00 deg F

sahil@aether {~/Workspace/C_Programming/src/02_temperature_celcius_to_fahrenheit} ❯ ./main
Enter temperature in celcius >>> 1
Temperature in Fahrenheit is 33.80 deg F
```

<hr>
