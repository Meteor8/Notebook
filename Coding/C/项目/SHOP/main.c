#include <stdio.h>
#include <stdlib.h>
#include "Warehouse.h"

int main()
{
    int choice;
    printContent();
    scanf("%d",&choice);
    askUser(choice,wupin);
    return 0;
}
