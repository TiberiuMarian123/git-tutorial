#include <stdio.h>
#include "espl_lib.h"

int main()
{
   	char x;
	int val ;
	
	do { 
			printf("Please enter a positive number  : \n");	
			scanf("%d", &val);

			char *result = num_to_words(val);
			printf("%s\n", result);

			printf("Would you like to continue (y/n) : ");
			scanf(" %c", &x);

		} while(x == 'y' || x=='Y');
			
	return 0;
}
