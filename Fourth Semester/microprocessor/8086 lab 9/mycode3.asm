;wap to add the element of array1 with 
;the corresponding elements of array2 and 
;store the results. 

.model small
.stack 100h

.data
aaa db 01h,02h,03h,04h,05h
bbb db 05h,04h,03h,02h,01h
ccc db 00h,00h,00h,00h,00h

.code
main proc
    mov ax, @data
    mov ds, ax

    lea si, aaa    ; pointer to array1
    lea di, bbb    ; pointer to array2
    lea bx, ccc    ; pointer to array3

    mov cl, 05h    ; loop counter = 5 elements

abc:
    mov al, [si]   ; AL = aaa[i]
    add al, [di]   ; AL = aaa[i] + bbb[i]
    mov [bx], al   ; store result into ccc[i]

    inc si         ; next element in aaa
    inc di         ; next element in bbb
    inc bx         ; next element in ccc

    dec cl         ; reduce counter
    jnz abc        ; loop until CL = 0

    mov ax, 4c00h
    int 21h

main endp
end main
