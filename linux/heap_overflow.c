#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(void)
{
	char *stack_pointer;
	stack_pointer = (char*) malloc(sizeof(char) * 4);
	
	strcpy("A heap overflow", stack_pointer);
	return 0;
}
