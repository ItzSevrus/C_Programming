# 📘 C Programming Practicals

A collection of C programming practicals and additional programs written while learning the C programming language.

---

## 📂 Practicals

| No. | Program                                        |                             Source                             |
| :-: | ---------------------------------------------- | :------------------------------------------------------------: |
|  01 | ASCII Value of a Variable                      | [`01_ascii_value_of_variable.c`](01_ascii_value_of_variable.c) |
|  02 | Celsius to Fahrenheit Conversion               |    [`02_celcius_to_farenheit.c`](02_celcius_to_farenheit.c)    |
|  03 | Sum and Average of Three Numbers               |        [`03_sum_and_avg_3num.c`](03_sum_and_avg_3num.c)        |
|  04 | Simple Interest & Compound Interest Calculator |        [`04_si_ci_calculator.c`](04_si_ci_calculator.c)        |
|  05 | Swap Two Numbers                               |           [`05_swap_two_nums.c`](05_swap_two_nums.c)           |
|  06 | Area of Different Shapes                       |          [`06_area_of_shapes.c`](06_area_of_shapes.c)          |
|  07 | Sum of Digits                                  |           [`07_sum_of_digits.c`](07_sum_of_digits.c)           |
|  08 | Roots of a Quadratic Equation                  |       [`08_roots_of_quad_eqn.c`](08_roots_of_quad_eqn.c)       |
|  09 | Largest of Two Numbers                         |          [`09_largest_of_two.c`](09_largest_of_two.c)          |
|  10 | Prime Numbers Between 1 and N                  |   [`10_prime_nos_between_1_n.c`](10_prime_nos_between_1_n.c)   |

---

## 💡 Additional Programs

| Program                       |                           Source                           |
| ----------------------------- | :--------------------------------------------------------: |
| ASCII Number to Character     |        [`ascii_num_to_char.c`](ascii_num_to_char.c)        |
| Input Numbers & Sort an Array | [`input_num_and_sort_array.c`](input_num_and_sort_array.c) |
| Loop Examples                 |                    [`loops.c`](loops.c)                    |
| Right Triangle Pattern        |           [`right_triangle.c`](right_triangle.c)           |

---

# 🛠️ Build Tools

This repository includes helper scripts to simplify compilation.

## Requirements

Before using the build scripts, ensure that **GCC is installed** and available in your system's `PATH`.

You can verify the installation by running:

```bash
gcc --version
```

If a version number is displayed, GCC is installed correctly.

---

## Linux / macOS

Use the provided Bash build script:

```bash
./build.sh <source_file.c>
```

Example:

```bash
./build.sh 03_sum_and_avg_3num.c
```

---

## Windows

Use the provided Batch script:

```cmd
build.bat <source_file.c>
```

Example:

```cmd
build.bat 03_sum_and_avg_3num.c
```

---

## Output

The compiled executable will be placed inside the `outputs/` directory.

For example:

```text
outputs/
├── 03_sum_and_avg_3num
├── right_triangle
└── loops
```

(On Windows, executables will have the `.exe` extension.)

---

## 📜 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

