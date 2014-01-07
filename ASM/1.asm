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
    int 21h
    mov dx, 0
  
    sub al, 30h ; scadem 30 ca sa ramanem cu numarul tastat
    mov dl, al
    
    mov vlad, 1;
    mov ax, vlad
    mul bx
    
    
afisare:
    

    mov ah,02h;
    int 21h   
    
    
    cmp cx,0
    je iesire;
    jmp afisare;
    
    
iesire:
    mov ah, 4ch
    int 21h

    
    
main endp
end main  
    