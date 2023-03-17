#include <stdio.h>

struct item {
  int code;
  char name[50];
  int quantity;
};

int main() {
  struct item itm;
  
  // prompt user for input
  printf("Enter item code: ");
  scanf("%d", &itm.code);
  printf("Enter item name: ");
  scanf("%s", itm.name);
  printf("Enter item quantity: ");
  scanf("%d", &itm.quantity);
  
  // display inputted information in formatted way
  printf("\n");
  printf("Item code: %d\n", itm.code);
  printf("Item name: %s\n", itm.name);
  printf("Item quantity: %d\n", itm.quantity);
  
  return 0;
}
