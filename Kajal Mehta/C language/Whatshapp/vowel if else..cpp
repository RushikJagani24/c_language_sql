#include<stdio.h>
main()
{
	char ch;
	printf("Enter character:");
	scanf("%ch",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='a'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("Vowel...");
	}
	else
	{
		printf("consonant..");
	}
}