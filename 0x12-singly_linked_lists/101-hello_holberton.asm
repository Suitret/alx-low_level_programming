include Irvine32.inc

.data
	myvar byte "Hello, Holberton\n",0

.code
main PROC
	mov edx, offset myvar
	call writestring
	exit
main ENDP

END main
