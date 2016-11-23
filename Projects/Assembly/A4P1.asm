COMMENT !
Shane Harmon
COS - 231 - OL
Student ID : 0498276
Prob1.asm Written assignment 4 problem 1
!
INCLUDE Irvine32.inc
PDWORD TYPEDEF PTR DWORD
PBYTE tYPEDEF PTR BYTE
.data

packdec DWORD 12345678h
packdec2 DWORD 00001234h
packdec3 DWORD 10025132h
packdec4 DWORD 62345878h

string BYTE 9 dup (?)
pString PBYTE string


.code
main proc


mov esi, pString

mov eax, packdec
call PackedToAsc

mov edx, pString
call WriteString
call crlf

mov eax, packdec2
call PackedToAsc

mov edx,pString
call WriteString
call crlf

mov eax, packdec3
call PackedToAsc

mov edx, pString
call WriteString
call crlf

mov eax, packdec4
call PackedToAsc

mov edx, pString
call WriteString
call crlf
invoke ExitProcess, 0

main endp


PackedToAsc PROC USES esi 

call Crlf

    mov ecx, 4
L1:          
    rol eax, 8    ; I've discovered an application for ROL!    
    mov [ebx], eax          
    mov al, BYTE PTR [ebx]
    mov dl, BYTE PTR [ebx]  
    shr al, 4   
    add al, 48 
    mov [esi] , al
    add esi, TYPE BYTE
    shl dl, 4          ;may be more efficient to and 00001111b 
    shr dl, 4     
    add dl, 48 
    mov [esi] , dl
    add esi, TYPE BYTE        
             
    loop L1
     
ret
PackedToAsc ENDP
END main