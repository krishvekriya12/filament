#include<stdio.h>
#include<string.h>
main()
{
	char username[3];
	char password[3];

	printf("Enter the username: ");
	gets(username);

	printf("\nEnter the password: ");
	gets(password);

	if(strcmp(username, "user") == 0)
	{

		if(strcmp(password, "default") == 0)
		{
			
			printf("\nUser successfully login");
		}else
		{
			
			printf("\nPassword entered is valid");
		}
	}else
	{
		
		printf("\nUsername entered is valid");
	}

}
