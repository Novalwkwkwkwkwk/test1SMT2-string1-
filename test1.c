#include <stdio.h>
#include <string.h>


struct Person {
  char name[50];
  int citNo;
  float salary;
  char alamat[50];
} person1;

int main() {

  
  strcpy(person1.name, "George Orwell");

  
  person1.citNo = 1984;
  person1. salary = 2500;
  strcpy(person1.alamat, "Pati");

  
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f\n", person1.salary);
  printf("alamat: %s\n", person1.alamat);

  return 0;
}
