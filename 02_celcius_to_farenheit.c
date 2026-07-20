// Program to convert temperature to farenheit from celcius
// Author - Sahil Gour

#include <stdio.h>

int main() {
  float temp_celcius = 60.0;
  float temp_farenheit;
  temp_farenheit = (temp_celcius * 9 / 5) + 32;
  printf("Temperature in Celcius is %.2f\n", temp_celcius);
  printf("Temperature in farenheit is %.2f\n", temp_farenheit);
  return 0;
}
