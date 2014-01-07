.model small
.stack
.data
vlad DW ?
.code
main proc
    mov cx,0
    mov bx,10

    
citire:
    mov ah, 01h ; citim cu echo
    mov bx, 19h
    
    int 21h
    mov dx, 0
  
    sub al, 30h ; scadem 30 ca sa ramanem cu numarul tastat
    mov dl, al
    
    mov vlad, 1;
    
    
    push dx
    mov ax, 0;`
    mov ax,dx
    
    mul bl
    pop dx
    
    add ax,dx ; ?
    mov cx, dx
  
    cmp al, 10h
    je iesire
    jmp citire
  
afisare:
    mov ah,02h;
    int 21h   
    
    
    
iesire:
    mov ah, 4ch
    int 21h

    
    
main endp
end main  
    