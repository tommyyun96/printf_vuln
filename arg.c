#include <stdio.h>
#include <stdlib.h>

#include "./arg.h"
#include "./driver.h"


/* Setup arguments: argument can be an integer or a pointer to valid address */
void arg_setup(ARG* var1ptr, ARG* var2ptr, ARG* var3ptr, ARG* var4ptr, ARG* var5ptr)
{
  *var1ptr = (ARG)4;
  *var2ptr = (ARG)0;
  *var3ptr = (ARG)3;
  *var4ptr = (ARG)0;
  *var5ptr = (void **)0;
  *var5ptr = (ARG)malloc(8);
  **var5ptr = (void *)1000;
  printf("\n%lu\n", *var5ptr);
  return;
}

/* Clean up arguments and record differences */
void arg_clean(ARG* var1ptr, ARG* var2ptr, ARG* var3ptr, ARG* var4ptr, ARG* var5ptr, char *report)
{
  printf("Evaluation: value at address %p is %d\n", **var5ptr, (int)**var5ptr);
  return;
}