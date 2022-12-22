#include "main.h"

/**
* _strlen - Strings fonction
* @s: Input
* Return: Allways 0
*/

int _strlen(char *s)
{
	int nombreDeCaracteres = 0;
	char caractereActuel = 0;

do {
	caractereActuel = s[nombreDeCaracteres];
	nombreDeCaracteres++;
}
	while (caractereActuel != '\0');
	nombreDeCaracteres--;
	return (nombreDeCaracteres);
}
