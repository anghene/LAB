.model small
.stack
.data
.code
main proc
    mov cx,0
    mov bx,10

    
citire:
    mov ah, 01h ; citim cu echo
    int 21h
    mov dx, 0
  
    sub al, 30h
    mov dl, al
    
    push dx
    mov ax,dx
    
    mul bl
    pop dx
    
    add ax,dx
    mov cx, dx
  
    cmp al, 13
    je iesire
    jmp citire
  
iesire:
    mov ah, 4ch
    int 21h

main endp
end main  
    