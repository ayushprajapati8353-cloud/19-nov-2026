#include<stdio.h>
int main()
{
    int marks[5] ={50,60,70,80,90};
    for(int i=4;i>=0;i--)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}