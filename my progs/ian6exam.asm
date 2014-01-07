.model small
.stack
.data
m1 db 10, "va rog introduceti nr", "$"
.code
main proc

    hello:
        
        mov ax,0
        mov ax, seg m1
        mov dx, ax
        lea dx, m1
        mov ah, 09h
        int 21h
        
    exit:
    
        mov ah, 4ch
        int 21h
        
        
main endp
end main