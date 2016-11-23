COMMENT !
Shane Harmon
COS - 231 - OL
Student ID : 0498276
Prob1.asm Written assignment 5 problem 1
!
INCLUDE Irvine32.inc

.data

str1 byte "A string ",0
str2 byte "plus a string",0 

.code
main proc


mov esi, offset str1
mov edi, offset str2

call Str_concat

mov edx, offset str1
call writestring


invoke ExitProcess, 0

main endp


Str_concat PROC USES esi edi

invoke str_length, esi
add esi, eax
invoke str_copy, edi, esi

ret
Str_concat ENDP
END main

end main
