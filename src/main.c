int main()
{
   	char x = 'y', result;
	int val;
	while(x == 'y')
		{ 
			scanf("Please enter a number %d \n", &val);
			result = num_to_words(val);
			printf("%c", result);
			scanf("Would you like to continue (y/n) : %c", x);
		}
}
