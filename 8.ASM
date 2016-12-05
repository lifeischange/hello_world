assume cs:code,ds:data,ss:stack,es:table

data segment
        db '1975','1976','1977','1978','1979','1980','1981','1982','1983'
        db '1984','1985','1986','1987','1988','1989','1990','1991','1992'
        db '1993','1994','1995'

        dd 16,22,382,1356,2390,8000,16000,24486,50065,97479,140417,197514
        dd 345980,590827,803530,1183000,1843000,2759000,3753000,4649000
        dd 5937000

        dw 3,7,9,13,28,38,130,220,476,778,1001,1442,2258,2793,4037,5635,8226
        dw 11542,14430,15257,17800


data ends

table segment
        db 21 dup ('year summ ne ?? ')
table ends

stack segment
        dw 0,0,0,0,0,0,0,0
stack ends

code segment
      start: mov ax,data
             mov ds,ax

             mov ax,table
             mov es,ax

             mov ax,stack
             mov ss,ax
             mov sp,10

             mov bp,0
             mov di,0a8h
             mov bx,0
             mov cx,21

          s0: push cx

              mov si,0
              mov cx,4
         s1:  mov al,[bx+si]
              mov es:[bp+si],al
              add si,1
              loop s1

             mov byte ptr es:[bp+4],20h
             mov ax,[bx+84]
             mov dx,[bx+86]
             mov es:[bp+7],dx
             mov es:[bp+5],ax
             mov byte ptr es:[bp+9],20h

             mov si,[di]
             mov word ptr es:[bp+10],si

             mov byte ptr es:[bp+12],20h
             
             div si
             mov es:[bp+13],ax
                          mov byte ptr es:[bp+15],20h
                           pop cx
              add bp,10h
              add di,2
              add bx,4
              loop s0
           mov ax,4c00h
           int 21h
code ends
end start
