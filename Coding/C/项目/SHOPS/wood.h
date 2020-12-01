#ifndef WOOD_H_INCLUDED
#define WOOD_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct _wood
{
    int *quantity;
    int price;
}Wood;

void pContent(void);

void buy(char);

#endif // WOOD_H_INCLUDED
