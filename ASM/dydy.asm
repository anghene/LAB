.model small
.stack
.data
nr1 dw ?
nr2 dw ?
nr3 dw ?
.code
main proc
        mov cx,0
            citire:
                mov ah,01h
                int 21h   ; pregatim pt citire caracter
                cmp al,13 ; daca e ENTER
                je iesire ; mergem la label iesire
                cmp al,30h ; daca e mai mic ca 0
                jl citire ; recitim
                cmp al,39h ; daca e mai mare ca 9
                jg citire ; recitim
                mov ah,0 ; initializam ah
                sub al,30h ; scadem 30 din al, ca sa ramanem cu valoarea nr.
                mov dx,0 ; intializam dx
                mov dl,al ; mutam valoarea in dl
                push dx ; impingem tot dx-ul in stiva
                inc cx ; incrementam contorul
                jmp citire ; repetam label citire
            
;            mov nr,cx ; punem contorul un nr
        
;            intoarcere:
;            pop dx ; scoatem ce-i in stiva in dx
;            mov bx,dx ; punem din dx in bx
;            push bx ; impingem bx inapoi in stiva
;            mov bx,0 ; initializam bx
;            loop intoarcere ; facem asta de cx ori
;            mov cx,nr ; cand se gata cx, punem nr in contor
       
            iesire:
            mov dl, 10
            mov ah, 02h ; dam un enter
            int 21h
            
            pop nr3 ; scoatem ce-avem in stiva in nr3
            add nr3, 30h ; adaugam 30 la valoarea nr3-ului ca sa fie cifra

;  Aici in mod normal era un loop care scotea tot ce-i in stiva
;
;           mov dx, 0;
;           mov dx,nr3 ; punem cifra noastra in dl
;           mov ah,02h ; ne pregatim sa afisam un caracter
;           int 21h ; afisam
;
;   In loc de loop-ul ala, am facut adrese de memorie si le-am declarat babeste in sens invers cum a zis Joldes ieri. 
;   Metoda este complet ineficienta pentru ca:
;       1. nu stim cate cifre vor fi introduse de la tastatura
;       2. nu putem folosi contorul, intrucat nu exista un loop, si tre sa facem babeste asta
;
;
;
;   Vom apela instructiunea pop in sens invers in valorile nr3, nr2, nr1

            pop nr2 ; scoatem ce-avem in stiva in nr2
            add nr2, 30h ; adaugam 30 la valoarea nr2-ului ca sa fie cifra
            pop nr1 ; scoatem ce-avem in stiva in nr1
            add nr1, 30h ; adaugam 30 la valoarea nr1-ului ca sa fie cifra

;   Incepem afisarile in sensul corect ca sa putem reda numarul asa cum a fost citit el

            mov dx, 0;
            mov ah,02h ; ne pregatim sa afisam un caracter, ah nu se mai modifica deci facem asta o singura data

            mov dx,nr1 ; punem in sens invers nr1 in dx
            int 21h ; afisam
            mov dx, 0;
            mov dx,nr2 ; punem apoi nr2
            int 21h ; afisam
            mov dx,nr3 ; punem ultimul numar nr3 (primul scos din stiva)
            int 21h ; afisam

;   Aici e o instructiune care nu mai foloseste in metoda de fata
;
;           loop iesire ; facem asta de cx ori
;

            mov ah,4ch ; iesim in dos
            int 21h

main endp
end main