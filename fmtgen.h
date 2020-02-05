#ifndef FMTGEN_H
#define FMTGEN_H

/* Should be called before using fmtgen module */
void fmtgen_init();

/* Generate next format string */
char *fmtgen_next();

#endif