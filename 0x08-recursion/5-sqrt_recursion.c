#include "main.h"

/**
 * sqtRecursive - able to compute a square root recursively doing binary search
 * @start: start number
 * @m: the number
 *
 * Return: 1 if not found sqrroot, else sqrroot
 */

int sqtRecursive(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;

		if (mid * mid == m)
			return (mid);

		if (mid * mid > m)
			return (sqtRecursive(start, mid - 1, m));
		if (mid * mid < m)
			return (sqtRecursive(mid + 1, end, m));

	}
	return (-1);
}