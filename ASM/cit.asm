.model small
.stack
.data
m0 db 10, "ati apasat 0", "$"
m1 db 10, "ati apasat 1", "$"
mgeneral db 10, "nu ati apasat nici 0 nici 1, mai incercati o data", "$"
.code
main proc
 
citire:
    mov ah,08h ; citeste fara echo si return pe al
    int 21h
 
    CMP al,48
    JNE Nu0   ; daca nu e zero, sare la bucata de cod Nu0, altfel continua neintrerupt
 
    mov ax, seg m0 ; afiseaza mesajul m0, adica compararea de mai sus a rezultat 0 si scriem asta
    mov ds, ax
    mov ah, 09h
    lea dx, m0
    int 21h
    JMP exit
 
Nu0:
    CMP al, 49 ; nefiind 0, ne mai intereseaza daca nu e nici 1
    JNE Nu ; daca e 1, continua neintrerupt, daca nu e nici unu, sare la mesajul general
    mov ax, seg m1
    mov ds, ax
    mov ah, 09h
    lea dx, m1
    int 21h
    JMP exit ; putem sari la exit, pentru ca a fost ori 1 ori 0
 
Nu:
    mov ax, seg mgeneral ; afiseaza mesajul ca nu e nici 1 nici 0
    mov ds, ax
    mov ah, 09h
    lea dx, mgeneral
    int 21h
    JMP citire ; nu sarim la exit, dar sarim la citire sa reluam tot codul, pana e ori 1 ori 0
 
exit:
    mov ax,4c00h
    int 21h
main endp
end main