#include <stdint.h>

int a[8][4];
int b[8][4];
int c[8][4];

int main() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 4; j++) {
      a[i][j] = 1;
      b[i][j] = 1;
    }
  }

  uint32_t x1 = &a;
  uint32_t x2 = &b;
  uint32_t x3 = &c;

  asm volatile("sysarray %0, %1, %2":"=r"(x3):"r"(x1),"r"(x2):);
  return 0;
}
