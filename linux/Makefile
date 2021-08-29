binPath = bin

all: aslr stack_overflow heap_overflow

aslr:
	gcc -o $(binPath)/aslr aslr.c

stack_overflow:
	gcc -o $(binPath)/stack_overflow stack_overflow.c

heap_overflow:
	gcc -o $(binPath)/heap_overflow heap_overflow.c


clean:
	rm -rf $(binPath)/*  
