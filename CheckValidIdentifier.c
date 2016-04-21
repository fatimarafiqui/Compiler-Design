#include <stdio.h> 
#include <ctype.h> 
int main()
{
	char a[10];
	int flag, i=1;
	printf("\n Enter an identifier:\n"); 
	gets(a);
	if(isalpha(a[0])) 
		flag=1;
	else
		printf("\n Not a valid identifier\n");
	while(a[i]!='\0') 
	{
		if(!isdigit(a[i])&&!isalpha(a[i])) 
		{
			flag=0; 
			break;
		}
		i++; 
	}
	if(flag==1)
		printf("Valid identifier\n"); 
    return 0;
}
