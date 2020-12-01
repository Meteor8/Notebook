#ifndef WAREHOUSE_H_INCLUDED
#define WAREHOUSE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct goods
{
    int quantity;
    int price;
}wupin={3,999};

void printContent(void);
void askUser(int,struct goods);

#endif // WAREHOUSE_H_INCLUDED
