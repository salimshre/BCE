.model small
.stack 100h

.data
    aa1 db 01h,02h,03h,04h,05h
.code
main proc
    mov bl,00h
    lea si,aa1
    mov cl,05h
   abc:
    add bl,[si]
    inc si
    dec cl
    jnz abc
      
    .exit
    main endp
end main