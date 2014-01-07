; Cerinta: Se citeste un numar binar, sa se afiseze corespondentul lui zecimal
; 1. citim numarul - cifrele lui 1 0 0 
; 2. obtinem direct valoarea numarului
; 3. afisam nr gata calculat
; Nu e obligatoriu sa fie validat numarul
; dupa enter afisam numarul zecimal - trebuie sa citim pe rand si sa introducem in stiva, altfel nu avem unde salva

.model small
.stack
.data
m1 db 10, "Introduceti o valoare binara:", "$"
m2 db 10, "Programul dvs. a rulat cu succes !", "$"
m3 db 10, "Valoarea numarului dvs. binar in zecimal este: ", "$"

.code

main proc
    mov cx, 0 ; init pe contor

    mov ax, seg m1 ; afisam m1
    mov ds, ax
    mov ah, 09h
    lea dx, m1
    int 21h

citire:
    
    mov ah,01h ; citim nr binar cu echo
    int 21h
    cmp al, 13 ; iese daca e enter
    je iesire
    cmp al,30h ; sa ramana cifra
    jl citire
    cmp al,39h ; repeta citirea daca e cifra
    jg citire
    
    
    
    
iesire:
    
        


    mov ah, 4ch
    int 21h

end main
endp
    
    