.model large
.stack
.data 
.code
main proc
mov cx,0
citire:
mov ah,01h
int 21h
cmp al,13
je iesire
cmp al,30h
jl citire
cmp al,39h
jg citire
mov ah,0
sub al,30h
mov dx,0
mov dl,al
push dx
inc cx
jmp citire
iesire:
pop dx
add dl, 30
mov ah,02h
int 21h
loop iesire
mov ah,4ch
int 21h
end main
endp
