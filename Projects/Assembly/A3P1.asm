COMMENT !
Shane Harmon
COS - 231 - OL
Student ID : 0498276
Prob1.asm Written assignment 3 problem 1
!
INCLUDE Irvine32.inc

.data
rows1 byte 1
cols1 byte 24
rows2 byte 3
cols2 byte 24
rows3 byte 5
cols3 byte 24
hold sdword ?
prompt1 byte "Enter an integer:     ",0
prompt2 byte "Enter second integer: ",0
prompt3 byte "The sum equals:      ",0  

.code
main proc

mov dh, rows1
mov dl, cols1
call clrscr
call gotoxy 
mov edx,OFFSET prompt1
call WriteString
call readint
mov hold ,eax

mov dh, rows2
mov dl, cols2
call gotoxy


mov edx, OFFSET prompt2
call WriteString
call readint
add eax,hold

mov dh, rows3
mov dl, cols3
call gotoxy

mov edx, OFFSET prompt3
call WriteString
call writeint

call crlf
call crlf



invoke ExitProcess, 0

main endp
end main
