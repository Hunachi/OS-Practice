g_label_A:
.l_label:
    jmp .l_label ; 2行目にjmp

g_label_B:
    jmp .l_label ; 8行目にjmp
    jmp .g_label_A.l_label ; 2行目にjmp
.l_label: