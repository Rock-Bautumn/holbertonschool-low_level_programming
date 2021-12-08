#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

typedef struct dlistint_struct
{
    int n;
    struct dlistint_struct *prev;
    struct dlistint_struct *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);


#endif
