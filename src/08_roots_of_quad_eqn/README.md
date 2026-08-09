# Quadratic Equation Roots Finder

A simple C program to find the **real roots** of a quadratic equation using the **Quadratic Formula**.

## Formula

A quadratic equation is written as:

```
ax² + bx + c = 0
```

where:

- **a** is the coefficient of x²
- **b** is the coefficient of x
- **c** is the constant term

The roots of the equation are calculated using:

```
          -b ± √(b² - 4ac)
x = -------------------------
              2a
```

---

## How the Program Works

### 1. Include Required Header Files

```c
#include <math.h>
#include <stdio.h>
```

- **stdio.h** provides functions like `printf()` and `scanf()` for input and output.
- **math.h** provides the `sqrt()` function which is required to calculate the square root.

---

### 2. Read the Coefficients

```c
int a, b, c;

printf("Enter value for a,b and c >>> ");
scanf("%d %d %d", &a, &b, &c);
```

The program asks the user to enter the three coefficients of the quadratic equation.

For example:

```
a = 2
b = 5
c = -3
```

This represents:

```
2x² + 5x - 3 = 0
```

---

### 3. Display the Equation

```c
printf("Equation is %dx^2 + %dx + %d\n", a, b, c);
```

This simply prints the equation entered by the user so they can verify the input.

Example:

```
Equation is 2x² + 5x + -3
```

---

### 4. Calculate the Discriminant

```c
float d = (b * b) - (4 * a * c);
```

The discriminant is the value inside the square root:

```
d = b² - 4ac
```

The discriminant determines the nature of the roots.

| Discriminant | Meaning |
|--------------|---------|
| d > 0 | Two distinct real roots |
| d = 0 | Two equal real roots |
| d < 0 | No real roots (imaginary roots) |

Instead of using:

```c
pow(b, 2)
```

the program uses:

```c
b * b
```

because multiplication is simpler and faster for squaring an integer.

---

### 5. Check for Real Roots

```c
if (d < 0) {
    printf("NO Real Roots Exists!\n");
    return 1;
}
```

If the discriminant is negative, the square root cannot be calculated using real numbers.

Therefore, the program stops and informs the user that no real roots exist.

---

### 6. Calculate the Roots

```c
float x1 = ((-1 * b) + sqrt(d)) / (2 * a);
float x2 = ((-1 * b) - sqrt(d)) / (2 * a);
```

The program directly applies the quadratic formula.

The `+` sign gives the first root.

The `-` sign gives the second root.

`sqrt(d)` computes the square root of the discriminant.

---

### 7. Print the Result

```c
printf("Roots are %.2f and %.2f\n", x1, x2);
```

The roots are printed with two digits after the decimal point.

Example:

```
Roots are 0.50 and -3.00
```

---

## Example Run

### Input

```
Enter value for a,b and c >>> 1 -5 6
```

### Output

```
Equation is 1x² + -5x + 6
Roots are 3.00 and 2.00
```

---

## Time Complexity

```
O(1)
```

The program performs a fixed number of arithmetic operations regardless of the input values.

---

## Space Complexity

```
O(1)
```

Only a few variables are used, so the memory usage remains constant.

---

## Notes

- This program only calculates **real roots**.
- If the discriminant is negative, the program terminates because imaginary roots are not handled.
- The coefficient `a` should not be zero, otherwise the equation is no longer quadratic.

---

## Author

**Sahil Gour**
