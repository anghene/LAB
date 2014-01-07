.model small
.stack
.data
message db "apasati o tasta: ", "$"
message2 db "ati tastat: ", "$"
.code
main proc
	mov ax,seg message 
	mov ds, ax
	
	mov ah, 09h ;
	lea dx, message
	int 21h  

	mov ah,01h
	int 21h 
	
	
	mov bl,al     ; salveaza valoarea in bl
	
	mov ah,02h
	mov dl,10
	int 21h

	mov ax,seg message2
	mov ds, ax
	mov ah, 09h
	lea dx, message2
	int 21h
	
	mov ah,02h
	mov dl, bl
	int 21h

	mov ax,4c00h
	int 21h
	
main endp
end main