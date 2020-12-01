#include <stdio.h>
#include <stdlib.h>

struct sha
{
    char wo[11];
    char qu[11];
    char hai[11];
};

int main()
{
    struct sha wtf;
    strcpy(wtf.wo,"ÄÇ");
    strcpy(wtf.qu,"Äã");
    strcpy(wtf.hai,"¿´");
    printf("%s%s%s",wtf.wo,wtf.qu,wtf.hai);
    return 0;
}
