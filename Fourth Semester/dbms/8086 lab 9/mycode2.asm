.model small
.stack 100h

.data
    aa1 dw 1001h,1002h,1003h,1004h,1005h
.code
main proc
    mov bx,00h
    lea si,aa1
    mov cl,05h
   abc:
    add bx,[si]
    inc si
    dec cl
    jnz abc
      
    .exit
    main endp
end main