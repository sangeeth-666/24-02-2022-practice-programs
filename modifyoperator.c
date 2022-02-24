#include <stdio.h>

int main()
{
    int x=6,y=5;
    printf("%d %d\n",x,y);
    x=x++ * --y;
     printf("%d %d\n",x,y);
    y=x-- + ++y;
     printf("%d %d\n",x,y);
    x=++x + y++;
    printf("%d %d ",x,y);

    return 0;
}

