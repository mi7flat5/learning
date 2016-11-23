COMMENT !
Shane Harmon 
COS-231-OL
Student ID: 0498276
Prob1.asm Written assignment 2 problem 1

INCLUDE Irvine32.inc


.data
Num WORD 5000h
Num2 WORD 1000h
Num3 WORD 2000h
Num4 WORD 100h

.code
main proc

mov	EAX, 0
mov	AX, Num   ; 20480 in decimal
call DumpRegs

sub	AX, Num2  ; 20480 - 4096 = 16384 in hex 4000
call DumpRegs

sub AX, Num3      ; 16384 - 8192 = 8192 in hex 2000
call DumpRegs

sub	AX, Num4  ; 8192 - 256 = 7936 in hex 1F00
call DumpRegs

invoke ExitProcess, 0

main endp
end main!
