#include <stdio.h>

int main() {
  float currentSalary;
  int percentage;

  scanf("%f", &currentSalary);

  if (currentSalary >= 0 && currentSalary <= 400.00)
    percentage = 15;
  else if (currentSalary >= 400.01 && currentSalary <= 800.00)
    percentage = 12;
  else if (currentSalary >= 800.01 && currentSalary <= 1200.00)
    percentage = 10;
  else if (currentSalary >= 1200.01 && currentSalary <= 2000.00)
    percentage = 7;
  else if (currentSalary > 2000.00)
    percentage = 4;

  float newSalary = ((currentSalary / 100) * percentage) + currentSalary;
  float readjustmentSalary = newSalary - currentSalary;

  printf("Novo salario: %.2f\n", newSalary);
  printf("Reajuste ganho: %.2f\n", readjustmentSalary);
  printf("Em percentual: %d %\n", percentage);

  return 0;
}