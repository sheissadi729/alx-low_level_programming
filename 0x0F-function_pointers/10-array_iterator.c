/**
 * array_iterator - executes action on each element of array
 * @array: array to print its elements
 * @size: size of the array
 * @action: pointer to the function we execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
