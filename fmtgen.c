#include <string.h>
#include <stdlib.h>

#include "./fmtgen.h"

#define FMTSTR_DFT_SIZE 10000
char *fmtstr;

/* Should be called before using fmtgen module */
void fmtgen_init()
{
  fmtstr = malloc(FMTSTR_DFT_SIZE);
}

/* Generate next format string */
char *fmtgen_next()
{
  static int count=0;
  /* snprintf(fmtstr, 1000, "Hello World %d\n", count++); */
  //strcpy(fmtstr, "%*d%*d%n");
  strcpy(fmtstr, "12345%n\n\n");
  return fmtstr;
}