COMMENT !
Shane Harmon
COS - 231 - OL
Student ID : 0498276
Prob1.asm Written assignment 4 problem 2
!
INCLUDE Irvine32.inc
PWORD TYPEDEF PTR WORD

.data
bnum1 DWORD 20d
lnum1 DWORD 5d
bnum2 DWORD 24d
lnum2 DWORD 18d
bnum3 DWORD 11d
lnum3 DWORD 7d
bnum4 DWORD 432d
lnum4 DWORD 226d
bnum5 DWORD 26d
lnum5 DWORD 13d


.code
main proc

mov esi, offset bnum1
add esi, TYPE DWORD
mov esi , offset lnum1
sub esi ,TYPE DWORD

call ELEMENTSofASSEMBLY

call crlf
mov eax ,[esi] 
call WriteDec
call crlf

mov esi, offset bnum2
add esi, TYPE DWORD
mov esi , offset lnum2
sub esi ,TYPE DWORD

call ELEMENTSofASSEMBLY

call crlf
mov eax ,[esi] 
call WriteDec
call crlf

mov esi, offset bnum3
add esi, TYPE DWORD
mov esi , offset lnum3
sub esi ,TYPE DWORD

call ELEMENTSofASSEMBLY

call crlf
mov eax ,[esi] 
call WriteDec
call crlf

mov esi, offset bnum4
add esi, TYPE DWORD
mov esi , offset lnum4
sub esi ,TYPE DWORD

call ELEMENTSofASSEMBLY

call crlf
mov eax ,[esi] 
call WriteDec
call crlf

mov esi, offset bnum5
add esi, TYPE DWORD
mov esi , offset lnum5
sub esi ,TYPE DWORD

call ELEMENTSofASSEMBLY

call crlf
mov eax ,[esi] 
call WriteDec
call crlf

invoke ExitProcess, 0

main endp


ELEMENTSofASSEMBLY PROC USES esi dx

cmp dx, 0
JZ L2
mov dx, 0
mov ax ,[esi]
add esi, type dword
mov cx, [esi]
div cx
sub esi, type dword
mov [esi], cx
add esi,type dword
mov [esi], dx
sub esi, type dword

call ELEMENTSofASSEMBLY
 
 L2: mov [esi ], cx
 ret
ELEMENTSofASSEMBLY ENDP
END main