#ifndef ARG_H
#define ARG_H

#include "./driver.h"

/* Setup arguments: argument can be an integer or a pointer to valid address */
void arg_setup(ARG*, ARG*, ARG*, ARG*, ARG*);

/* Clean up arguments and record differences */
void arg_clean(ARG*, ARG*, ARG*, ARG*, ARG*, char *);

#endif