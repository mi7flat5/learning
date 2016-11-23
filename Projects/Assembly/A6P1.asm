COMMENT !
Shane Harmon
COS - 231 - OL
Student ID : 0498276
Prob1.asm Written assignment 6 
!
INCLUDE Irvine32.inc

.data

radius REAL8 ?
prompt1 byte "Enter a radius: ",0
prompt2 byte "The area is: ",0

.code
main proc
call crlf

mov edx,OFFSET prompt1
call writestring
call readfloat
FMUL ST(0),ST(0)
FLDPI
FMUL ST(0),ST(1)
mov edx,OFFSET prompt2
call writestring
call writefloat



call crlf


invoke ExitProcess, 0

main endp
end main
