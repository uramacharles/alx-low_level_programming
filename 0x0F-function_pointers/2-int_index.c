/**
  *int_index - searches for an integer.
  *@array: array of integers.
  *@size: number of elements in array.
  *@cmp: pointer to function used to compare values.
  *
  *Return: index of first element.
  *-1 if no element is found or siz <= 0.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j, ret;

	ret = -1;
	if (array && cmp)
	{

		if (size <= 0)
		{
			return (ret);
		}
		for (j = 0; j < size; j++)
		{
			cmp(array[j]);
			if (cmp(array[j]) > 0)
			{
				ret = j;
				break;
			}
			if ((cmp(array[j]) == (-1)))
			{
				return (ret);
			}
		}

	}
	return (ret);
}
