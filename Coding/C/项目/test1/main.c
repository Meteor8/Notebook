#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

typedef struct _list
{
    int *base;
    int size;
    int length;
}List;

List inputlist(int);

List inputlist(int n)
{
    int i;
    List listing={.size=SIZE,.length=n};
    listing.base=(int*)malloc(SIZE);
    printf("请输入%d个数字:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&listing.base[i]);
    }
    return listing;
}

void outputlist(List);

void outputlist(List listing)
{
    int i;
    printf("您输入的数字为：\n");
    for(i=0;i<listing.length;i++)
    {
        printf("%d\t",listing.base[i]);
    }
}

void main(void)
{
    int i;
    List mylist;
    printf("请输入您要输入的数字个数：");
    scanf("%d",&i);
    mylist=inputlist(i);
    outputlist(mylist);
}

