Task 3.txt

Who has access

A

System properties

Type

Text

Size

265 bytes

Storage used

265 bytes

Location

0x02. C - Functions, nested loops

Owner

Antony Bahati

Modified

14:10 by Antony Bahati

Opened

23:39 by me

Created

14:13

No description

Viewers can download

#include "main.h"

/**

 * _islower - function to check for lowercase character

 * @c:  is the int that will use for the argument of the function

 * Return: 0

 */

int _islower(int c)

{

	if (c >= 'a' && c <= 'z')

	{

		return (1);

	}

	else

		return (0);

