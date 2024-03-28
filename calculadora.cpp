#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int c = 1, p = 1, i = 0, pe = 0, t = 0;
    float n, s = 0, e, se;

    printf("Essa é uma calculadora\n\nDigite: \n+:1 \n-:2 \nX:3 \n/:4 \nExpoente:5 \nRaiz:6 \nExit:7 \n\n");

    while (c == 1) {
        if (i != 0) {
            printf("\n\nEscolha uma opção: ");
            scanf("%d", &p);
        }

        if (p >= 1 && p <= 7) {
            if (p != 7) {
                printf("\nDigite um número: ");
                scanf("%f", &n);
                i = 1;
            }

            switch (p) {
                case 1:
                    s = s + n;
                    break;
                case 2:
                    s = s - n;
                    break;
                case 3:
                    s = s * n;
                    break;
                case 4:
                    s = s / n;
                    break;
                case 5:
                    printf("\nDetermine o expoente: ");
                    scanf("%f", &e);
                    se = pow(n, e);

                    printf("\n+:1 \n-:2 \nX:3 \n/:4 \n\nEscolha qual operação irá fazer após o cálculo do expoente: ");
                    scanf("%d", &pe);

                    switch (pe) {
                        case 1:
                            s = se + s;
                            break;
                        case 2:
                            s = se - s;
                            break;
                        case 3:
                            s = se * s;
                            break;
                        case 4:
                            s = se / s;
                            break;
                        default:
                            printf("\nDigite uma opção válida (1 a 4).");
                            break;
                    }
                    break;
                case 6:
                    se = sqrt(n);
                    printf("\n+:1 \n-:2 \nX:3 \n/:4 \n\nEscolha qual operação irá fazer após o cálculo da raiz: ");
                    scanf("%d", &pe);

                    switch (pe) {
                        case 1:
                            s = se + s;
                            break;
                        case 2:
                            s = se - s;
                            break;
                        case 3:
                            s = se * s;
                            break;
                        case 4:
                            s = se / s;
                            break;
                        default:
                            printf("\nDigite uma opção válida (1 a 4).");
                            break;
                    }
                    break;
                case 7:
                    c = 0;
                    break;
                default:
                    printf("\nDigite uma opção válida (1 a 7).");
                    break;
            }
            printf("\n\n%.2f", s);
        } else {
            printf("\nDigite uma opção válida (1 a 7).");
        }
    }
}
