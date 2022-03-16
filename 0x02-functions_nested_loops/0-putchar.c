#include "main.h"
#include <unistd.h>
/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */
int _putchar(char c)

{
	return (write(1, &c, 1));

}

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for(i=0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return 0;
}
