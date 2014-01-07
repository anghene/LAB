;cerinta1:se citesc doua caractere, determinati care caracter are codul ascii mai mare, afisati caracterul si mesajele ajutatoare corespunzatoare

.model small
.stack
.data 
m db 10, "wow e 0", "$"
.code
    main proc

        mov ah,01h ;citim tasta
        int 21h
        
        mov bl,al ; pastram caracterul in bl

        cmp bl,30h ; il comparam cu cifra 0 (ca e cam pe la mijlocul ascii)
        je ezero
        jg comparare
        jl mesaj

    ezero:
        mov ah,09h ;citim tasta
        mov dx, seg m
        lea ds, m
        int 21h
        
        mov ax, 0 ; reset ax
        
        mov ah, 02h
        mov al, bl 
        int 21h
        
    exit:
        mov ax, 4C00h
        int 21h
    main endp
end main