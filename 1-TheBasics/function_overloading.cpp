/**
 * 1.3 Functions
 * What happens if function has the same name but different argument type?
 * What happens if the compiler couldn't decide which to choose from?
 */
#include <cstdio>

void print(int, int);
void print(int, double);
void print(double, int);

void print(int first, double second) { printf("from print(int, double);\n"); }

void print(double first, int second) { printf("from print(double, int);\n"); }

void print(int first, int second) { printf("from print(int, int);\n"); }

int main() {
  print(1, 2);
  print(1, 1.0);
  print(1.0, 1);
  // the following line would result in compilation error as it is ambiguous
  // which function to call
  // print(1.0, 2.0); 
}