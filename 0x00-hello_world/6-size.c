#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)

{
	printf("Size of a char: %zu byte(s)\n",sizeof(char));
	printf("Size of a int: %zu byte(s)\n",sizeof(int));
	printf("size of long int: %zu byte(s)\n",sizeof(long int));
        printf("Size of a char: %zu byte(s)\n",sizeof (char));
        printf("Size of a float: %zu byte(s)\n", sizeof(float));
        return (0);

}	
