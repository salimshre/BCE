.model small           
.stack 100h            

.data
aaa db 01H,02H,03H,04H,05H   

bbb db 00H,00H,00H,00H,00H  
    
.code
main proc
    mov ax,@data
    mov ds,ax
    lea si,aaa
    lea di,bbb
    
    mov al,05h
    abc:
    mov bl,[si]
    mov [di],bl
    inc si
    inc di
    dec al
    jnz abc
         
    .exit
    main endp
end main