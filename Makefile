all: gcc

gcc:
	@gcc -o phone-numbers phone-numbers.c
	# @gcc -o street-addresses street-addresses.c

clean:
	@rm -f phone-numbers # street-addresses
