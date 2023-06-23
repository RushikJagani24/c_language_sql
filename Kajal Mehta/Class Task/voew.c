#include<stdio.h>
main()
{
	char ch;
	printf("Enter Character:");
	scanf("%ch",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("Vowel..");
	}
	else
	{
		printf("Consol..");
	}
}