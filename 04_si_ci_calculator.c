// Program to calculate Simple and compound intrest
// Author - Sahil Gour

#include <stdio.h>
#include <math.h>

// Initializing variables
int principal = 5000;
float rate = 5.0f;
int time = 5; // Time in years
int n_compounded = 2; // How many times intrest is compounded 

void simple_interest(void) {
  printf("* Calculating simple interest...\n");
  float si = (principal * rate * time) / 100;
  printf("  - Principal Amount - Rs.%d\n", principal);
  printf("  - Rate             - %.2f%%\n", rate);
  printf("  - Time Period      - %d years\n", time);
  printf("=> Calculated simple interest is Rs.%.2f\n", si);
  printf("=> Final Amount is Rs.%.2f\n", si + principal);
}

void compound_interest(void){
    // Assuming that interest is compounded anually
    printf("* Calculating compound interest...\n");
    float final_amount = principal * pow(1 + (rate / (100 * n_compounded)), n_compounded * time);
    float ci = final_amount - principal;
    printf("  - Principal Amount        - Rs.%d\n", principal);
    printf("  - Rate                    - %.2f%%\n", rate);
    printf("  - Time Period             - %d years\n", time);
    printf("  - No. of times Compounded - %d times/year\n", n_compounded);
    printf("=> Calculated compound interest is Rs.%.2f\n", ci);
    printf("=> Final Amount is Rs.%.2f\n", final_amount);

}

int main(void) {
    simple_interest(); // Calculating Simple Interest
    printf("\n");
    compound_interest(); // Calculating Compound Interest
    return 0;
}
