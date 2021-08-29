#include <sdtio.h>

int main(void)
{
	register int i asm("esp");
	printf("$esp = %#020x\n", i);
	return 0;
}

//enable ASLR on linux: echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
//disable ASLR on linux: echo 2 | sudo tee /proc/sys/kernel/randomize_va_space
