#include "stdio.h"

#include "./driver.h"
#include "./arg.h"
#include "./fmtgen.h"
#include "./analyzer.h"

#define SIZE 10000

void run(void);

char buf[SIZE];
char record[SIZE];

int main(int c, char *argv[])
{
  /*
  char sample[10];
  int d = malloc(8);
  //printf("12345%n", &d);
  snprintf(sample, 10, "12345%n", &d);
  printf("%d", d);
  exit(0);
  */

  printf("Printf vulnerability exploration program. (Ver. 1)\n");
  fmtgen_init(); /* Register fmtstr pointer to fmtgen module */
  //while(1)
    run();
}

/* Run snprintf with 5 arguments */
void run(void)
{
  char *fmtstr;
  int asdf;
  ARG var1, var2, var3, var4, var5;  /* pointer size variables(since pointer values may be assigned) */

  arg_setup(&var1, &var2, &var3, &var4, &var5);
  fmtstr = fmtgen_next();  /* Update fmtstr */
  printf(fmtstr, var5);
  printf("%d\n", *var5);
  exit(0);

  printf(fmtstr, var5);
  snprintf(buf, SIZE, fmtstr, var5);
  printf("%s", buf);

  arg_clean(&var1, &var2, &var3, &var4, &var5, record); /* Clean up args and get evaluation */
}