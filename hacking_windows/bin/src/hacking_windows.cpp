#include <windows.h>

int main()
{
	char shellcode[] = "\xcc\xcc\xcc\xcc\x41\x41\x41\x41";
	LPVOID adderssPointer = VirtualAlloc(NULL, sizeof(shellcode), 0x3000, 0x40);
	RtlMoveMemory(addressPointer, shellcode, sizeof(shellcode));
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)addressPoitner, NULL, 0, 0);

	Sleep(1000);
	return 0;
}