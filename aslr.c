#include <sdtio.h>

int main(void)
{
	register int i asm("esp");
	printf("$esp = %#020x\n", i);
	return 0;
}
