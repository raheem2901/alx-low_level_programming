#include "main.h"
/**
 * _isalpha - checks for alphebetical letters
 * @c: a chatacter to be checked
 *  Return: return 1 and 0 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c  <= 'Z'));
}
