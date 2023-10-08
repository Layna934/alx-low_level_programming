#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_realloc - reallocates memory
  *@old_size: old size
  *@new_size: new size
  *
  *Return: nothing
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }
    else if (ptr == NULL)
    {
        return malloc(new_size);
    }
    else if (new_size == old_size)
    {
        return (ptr);
    }
    else
    {
        void *new_ptr = malloc(new_size);

        if (new_ptr != NULL)
	{
		size_t copy_size = (new_size < old_size) ? new_size : old_size;
            memcpy(new_ptr, ptr, copy_size);
            free(ptr);
        }

        return new_ptr;
    }
}
