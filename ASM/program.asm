.model small
.stack
.data
m0 db "ati apasat 0", "$"
m1 db "ati apasat 1", "$"
mgeneral db "nu ati apasat nici 0 nici 1", "$"
.code
main proc
	mov ah,08h
	int 21h
	CMP al,48
	JE afisare00
	CMP al,49
	JE afisare01
	JMP afisaregeneral
afisaregeneral:
	mov ax, seg mgeneral
	mov ds, ax
	mov ah, 09h
	lea dx, mgeneral
	int 21h
	JMP exit
afisare00:
	mov ax, seg m0
	mov ds, ax
	mov ah, 09h
	lea dx, m0
	int 21h
	JMP exit
afisare01:
	mov ax, seg m1
	mov ds, ax
	mov ah, 09h
	lea dx, m1
	int 21h
	JMP exit
exit:
	mov ax,4c00h
	int 21h
main endp
end main