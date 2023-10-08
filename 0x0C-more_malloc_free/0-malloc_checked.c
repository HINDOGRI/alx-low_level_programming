#include <stdlib.h>

/**
 * allocate_memory - Allocates memory using malloc and checks for errors.
 * @size: Size of memory to be allocated.
 *
 * Returns:
 *  - A pointer to the allocated memory.
 *  - If malloc fails, the program exits with an error code.
 */
void *allocate_memory(unsigned int size)
{
	void *memory_ptr = malloc(size);

	if (memory_ptr == NULL)
	{
		exit(98);
	}

	return (memory_ptr);
}
