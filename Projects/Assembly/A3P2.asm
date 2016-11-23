COMMENT !
Shane Harmon
COS - 231 - OL
Student ID : 0498276
Prob1.asm Written assignment 3 problem 2
!
INCLUDE Irvine32.inc

.data
intArray SWORD  0,0,0,0,-12,66,4,0
;intArray SWORD  1,0,0,0
;intArray SWORD  0,0,0,0
;intArray SWORD  0,0,0,1
noneMsg  BYTE "A non-zero value was not found",0
foundMsg BYTE "First occurance of non zero integer is: ",0

.code
main PROC
	mov   ebx,OFFSET intArray		; point to the array
	mov   ecx,LENGTHOF intArray		; loop counter

L1:
	cmp   WORD PTR [ebx],0		; compare value to zero
	jnz   found			; found a value
	test WORD PTR [ebx],0		; set ZF = 1
	pushfd				; save flag info on stack
	call dumpregs			; for debugging, helped me figure out what was going on with ZF
	call waitmsg
	call crlf				
	add   ebx,2			; point to next
	popfd				; restore flag state from stack
	loopz  L1			; continue the loop if ZF =1 
	jmp   notFound			; none found

found:
	
	call crlf
	mov edx, OFFSET foundMsg
	call writestring
	movsx eax,WORD PTR [ebx]		; otherwise, display it
	call  WriteInt
	jmp   quit

notFound:
	mov   edx,OFFSET noneMsg		; display "not found" message
	call  WriteString

quit:
	call  crlf
	exit
main ENDP
END main