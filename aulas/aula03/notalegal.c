#include <stdio.h>

int main() {
  printf("\x1b[32m----------------------------\n");
  printf("     N O T A   L E G A L    \n");
  printf("----------------------------\x1b[0m\n");
  printf("ITEM              QTD VALOR \n");
  printf("%-17s %3i %6.2f\n", "Banana nanica", 1, 15.00);
  printf("%-17s %3i %6.2f\n", "Maca fuji", 10, 50.00);
  printf("%-17s %3i %6.2f\n", "Uva Globo", 5, 26.00);

 // printf("Banana nanica      1  15.00 \n");
 // printf("Maca Fuji         10  50.00 \n");
 // printf("Uva Globo          5  26.00 \n");
 printf("----------------------------\n");
 printf("\x1b[34mTOTAL............: R$ %6.2f\x1b[0m\n", 91.00);
  
  return 0;
}