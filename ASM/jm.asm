.model small
.stack
.data
m d 10, "merge frate!", "$"
.code
main proc
    
        
    mov ax, seg message
    mov dx, ax
    lea ds, message
    
    mov ah, 09h
    int 21h    
    
    mov ah, 4ch
    int 21h
main endp
end main