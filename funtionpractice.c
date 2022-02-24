//no arguments(input) & no return values (output)
/*#include <stdio.h>
void add(void);
int main()
{
    add();
    return 0;
}

void add(void)
{
    int a,b,result;
    printf("enter the a and  b valuse: ");
    scanf("%d %d",&a,&b);
    result=a+b;
    printf("result:%d",result);
}

//with aruguments (input) & no return values (ouput)

#include <stdio.h>
void add(int,int);
int main()
{
    int a,b;
    printf("enter the a and  b valuse: ");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}

void add(int a,int b)
{
    int result;
    result=a+b;
    printf("result:%d",result);
}

//with arguments (input) & with return values (output)

#include <stdio.h>
int add(int a,int b);
int main()
{
    int a,b,result;
    printf("enter the a and  b valuse: ");
    scanf("%d %d",&a,&b);
    result=add(a,b);
    printf("result:%d",result);
    return 0;
}

int add(int a,int b)
{
    int result;
    result=a+b;
    return result;
}*/

//no arguments (input) & with return values (output)

#include <stdio.h>
int add(void);
int main()
{
    int result;
    result=add();
    printf("result:%d",result);
    return 0;
}

int add(void)
{
    int a,b,result;
    printf("enter the a and  b valuse: ");
    scanf("%d %d",&a,&b);
    result=a+b;
    //printf("result:%d",result);
    return result;
}

