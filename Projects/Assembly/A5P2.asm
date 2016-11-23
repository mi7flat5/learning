COMMENT !
Shane Harmon
COS - 231 - OL
Student ID : 0498276
Prob1.asm Written assignment 5 problem 2
!
INCLUDE Irvine32.inc

mMult32 MACRO n1, n2
mov eax, n1
mul n2
mov product, eax
ENDM

.data

num1 DWORD 1000h
num2 DWORD 200h
product DWORD ?
.code
main proc

mMult32 num1, num2
call writehex




invoke ExitProcess, 0

main endp



END main

