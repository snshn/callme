# callme

Phone number wordlist generator.
Intended for use in conjunction with pentesting tools.

Total size of the generated text file for all US phone numbers is 26.2 GB (2,383,999,702 phone numbers).


## Information

"NANP (North American Numbering Plan) numbers are ten digits in
length, and they are in the format: NXX-NXX-XXXX Where N is any
digit 2-9 and X is any digit 0-9.
The first three digits are called the numbering plan area (NPA)
code, often called simply the area code. The second three digits
are called the central office code or prefix. The final four digits
are called the line number.


## Building

```console
make clean all
```


## Usage

```console
./callme > us-phone-numbers.txt
```


## Legal

Authors of this software bear no responsibility for the numbers this program generates
(and specifically for how people will use those numbers).


## License

This software is released into the public domain.

