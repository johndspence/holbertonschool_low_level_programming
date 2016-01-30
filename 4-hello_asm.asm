global  _start

	        section .text
_start:
	;;  write(1, message, 13)
	        mov     eax, 1	; system call 1 is write
	        mov     edi, 1	; file handle 1 is stdout
	        mov     esi, message ; address of string to output
	        mov     edx, 13	     ; number of bytes
	        syscall		     ; invoke operating system to do the write

	;;  exit(0)
	        mov     eax, 60	; system call 60 is exit
	        xor     edi, edi ; exit code 0
	        syscall		 ; invoke operating system to exit
message:
	        db      "Hello, World", 10 ; note the newline at the end
