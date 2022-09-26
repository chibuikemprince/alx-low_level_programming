#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */


void cat(int a[6])
{
	a = a+5;
printf("Size is %lu, value %d %s \n", sizeof( *a),*a++,(char)*a);

}	

int main(void){
int a[] = {1,2,3,4,5};
	cat(a);
return 0;
}



char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
