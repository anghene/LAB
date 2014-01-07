.model small
.stack 
.data
message db "ati apasat  0 ", "$"
message1 db "Ati apasat tasta 1", "$"
message2 db "Nu ati apasat nici 0 nici 1 va rog reincercati", "$"
.code
 main proc
citire:  
  mov ah,01h
  int 21h
Cmp al,48
 jne mesaj1
       mov ax, seg message
     mov ds,ax
     mov ah,09
     lea dx,message
     int 21h
     JMP exit
  
   mesaj1:
    cmp al,49
    jne mesaj2
       mov ax, seg message1
     mov ds,ax
     mov ah,09
     lea dx,message1
     int 21h
     JMP exit  

mesaj2:
      mov ax, seg message2
     mov ds,ax
     mov ah,09
     lea dx,message2    
  
     int 21h
 JMP citire
exit:
     mov ax,4c00h
     int 21h
main endp
end main
