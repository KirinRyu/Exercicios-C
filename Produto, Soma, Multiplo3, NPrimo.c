#include <stdio.h>
#include <locale.h>
#include <Windows.h>
int k;

soma()
{
    int a, b, s;
    printf("\nDigite dois números quaisquer:\n");
    scanf("%d %d", &a, &b);
    s = a + b;
    printf("\nA soma entre os dois números é de: %d\n", s);
    system("Pause");
    system("cls");
}


produto()
{
    int c, d, e, p;
    printf("\nDigite três números:\n");
    scanf("%d %d %d", &c, &d, &e);
    p = c * d * e;
    printf("O produto desses dois números é %d\n", p);
    system("Pause");
    system("cls");
}

media()
{
    float b, u, m, mt;
    int num, n, nt, mc;
    printf("\nQuantos números serão digitados?\n");
    scanf("%d", &n);
    b = 0;
    u = 0;
    nt=0;
    mc=0;
    for(k=0; k<n; k=k+1)
    {
        printf("Digite o número:\n");
        scanf("%d", &num);
        b = b + num;
        if(num % 3 == 0)
        {
            u = u + num;
            nt = nt + 1;
        }
        if(num>100)
        {
            mc = mc + 1;
        }
    }
    m = b / n;
    mt = u / nt;
    printf("A média total desses números é %f\n", m);
    printf("A média dos múltiplos de três é %f\n", mt);
    printf("A quantidade de números maiores que cem é %i\n", mc);
    system("Pause");
    system("cls");
}

primo()
{
    int n, num;
    printf("\nQuantos números serão digitados?\n");
    scanf("%d", &n);
    for(k=0; k<n; k=k+1)
    {
        printf("Digite o número:\n");
        scanf("%d", &num);
        if (num != 2 && num % 2 == 0 || num != 3 && num % 3 == 0 || num != 5 && num % 5 == 0 || num != 7 && num % 7 == 0)
        {
            printf("\nO número não é primo\n");
        }
        else
        {
            printf("\nO número é primo\n");
        }
    }

    system("Pause");
    system("cls");

}


main()
{
    setlocale(LC_ALL, "Portuguese");
    primo();
    soma();
    produto();
    media();
}

