#include "main.h"



/**
 *
 *  * print_sign - prints the sign of a number
 *
 *   * @n: number to check the sign
 *
 *    *
 *
 *     * Return: 1 if n is +ve, 0 if n is 0, -1 if n is -ve
 *
 *      */

int print_sign(int n)

{

		if (n > 0)

				{

							_putchar('+');

									return (1);

										}

			else if (n < 0)

					{

								_putchar('-');

										return (-1);

											}



				_putchar('0');

					return (0);

}



