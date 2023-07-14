#include<stdio.h>
int pal(int n);

int main()
{
    int palindrome,n;
    printf("Enter a number to check for Palindrome: ");
    scanf("%d", &n);
    palindrome = pal(n);
    if(palindrome == 1)
        printf("%d is palindrome", n);
    else
        printf("%d is not palindrome", n);


}

int pal(int n1)
{
	int n;
    static int sum = 0;
    if(n1 != 0)
    {
        sum = sum *10 + n1%10;
        pal(n1/10);   
    }
    else if(sum == n)
        return 1;
    else
        return 0;
}