#include "main.h"
/**
*_abs - function that computes the value of an integer
*@ab: the value of an  integer
*Return: absolute value of ab
*/
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
