.model small
.stack 100h

.data
aaa db 01h,02h,03h,04h,05h
bbb db 05h,04h,03h,02h,01h
ccc db 00h,00h,00h,00h,00h

.code
main proc
    mov bl,00h
    lea si,aaa ;p1
    lea di,