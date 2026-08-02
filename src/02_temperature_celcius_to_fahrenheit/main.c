// Program to convert temperature from Celsius to Fahrenheit.
// Author -> Sahil Gour

#include <stdio.h>

int main(void) {
  // Declared a variable named temp_celcius for storing temperature in celcius
  float temp_celcius;
  // Declared variable to store value of temperature in fahrenheit
  float temp_fahrenheit;

  // Taking input and storing value in temp_celcius
  printf("Enter temperature in celcius >>> ");
  scanf("%f", &temp_celcius);

  // Calculating temperature in fahrenheit
  temp_fahrenheit = ((9.0f / 5.0f) * temp_celcius) + 32;

  // Printing the temperature in fahrenheit
  printf("Temperature in Fahrenheit is %.2f deg F\n", temp_fahrenheit);

  return 0;
}
