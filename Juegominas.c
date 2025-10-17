int minas[5][5] = {0};
minas[1][3] = 9; minas[0][4] = 9; minas[3][1] = 9; minas[2][2] = 9; minas[4][0] = 9;

int fila, col, aciertos = 0;
for (int i=0; i<5; i++) {
    printf("Intento %d - Ingrese fila y columna: ", i+1);
    scanf("%d %d", &fila, &col);
    if (minas[fila][col] == 9) {
        printf("¡Boom! Encontraste una mina.\n");
        aciertos++;
    } else {
        printf("Seguro.\n");
    }
}
printf("Detectaste %d minas.\n", aciertos);
