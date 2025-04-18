all: gcc
gcc:
	@gcc -o callme callme.c
clean:
	@rm -f callme

