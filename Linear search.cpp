#include<stdio.h>
int main()
{ int value,i,pos=-1,n;
    int num[5];

    for(i=0;i<5;i++)
        scanf("%d",& num[i]);


    printf("enter the value you want");
    scanf("%d",& value);
    for(i=0;i<5;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }

    }
    if(pos==-1)
    {
        printf("item is not found");

    }
    else
    {
        printf("item is found");
    }
}
