/* Write a program to count digits in a given number */

#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter a number ");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Count of this digit is %d ",count);
}