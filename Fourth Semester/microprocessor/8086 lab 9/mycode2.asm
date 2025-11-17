; WAP to add 5 words of data from the given array

.model small
.stack 100h

.data
    aa1 dw 1001h,1002h,1003h,1004h,1005h   ; word array (5 elements)

.code
main proc
    mov ax, @data      ; initialize data segment
    mov ds, ax

    mov bx, 0000h      ; accumulator (sum = 0)
    lea si, aa1        ; SI points to the first word
    mov cl, 05h        ; loop counter = 5 words

abc:
    add bx, [si]       ; add word at SI into BX
    add si, 2          ; move to next WORD (2 bytes)
    dec cl             ; decrease loop counter
    jnz abc            ; repeat until done

    ; result now in BX

    mov ax, 4c00h
    int 21h

main endp
end main
