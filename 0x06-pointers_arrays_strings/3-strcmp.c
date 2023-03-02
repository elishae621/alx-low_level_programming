#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string srg
 * @s2: second string arg
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
		return (1);
	else if (s1 < s2)
		return (-1);
	else
		return (0);
}
