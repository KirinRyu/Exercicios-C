#include <stdio.h>
#include <locale.h>
#define ex02

sequencia3()
{
  int q,k, num3 = 0, num3m = 0;
  printf("digite a quantidade de termos\n");
  scanf("%i", &q);
  while(q<=0)  {
        printf("numero invalido. digite outro\n");
        scanf("%i",&q);
  }

  for (k=0;k<q;k++)
    {
      num3 = num3 + 3;
      printf("a sequência é: %i\n", num3);

      num3m = num3m + num3;

    }
    printf("a média é: %i\n", num3m/q);
    system("Pause");
    system("cls");

}

sequenciaf()
{
    int n=0,d=0,l,r,a,z;
    a = 1;
    z = 1;
    printf("digite a quantidade de termos\n");
  scanf("%d", &l);
  while(l<=0)  {
        printf("número inválido. digite outro\n");
        scanf("%d",&l);
  }

  for (r=0;r<l;r++)
    {
        n = n + 2;
        d = d + 5;
        printf("A sequência é %d/ %d \n", n, d);
        a = a * n;
        z = z * d;
    }
    printf("o produto é: %d/%d \n", a, z);
    system("Pause");
    system("cls");

}

sequenciaS()
{
    int nu=0,den=0,la,ra,ar,za, con, ajustea, ajustez;
    ar = 1;
    za = 1;
    con = 0;
    printf("digite a quantidade de termos\n");
  scanf("%d", &la);
  while(la<=0)  {
        printf("número inválido. digite outro\n");
        scanf("%d",&la);
  }

  for (ra=0;ra<la;ra++)
    {
        con++;
        nu = 4*(con*con);
        den = den + 8;
        printf("A sequência é %d/%d \n", nu, den);
        ar = ar + nu;
        za = za + den;
    }
    ajustea = ar -1;
    ajustez = za -1;
    printf("a soma é: %d/%d \n", ajustea, ajustez);
    system("Pause");
    system("cls");

}

#ifdef ex01
main(){

  setlocale(LC_ALL, "Portuguese");
  sequencia3();
  sequenciaf();
  sequenciaS();
}
#endif // ex01

#ifdef ex02
pesopessoas(int A)
{
    if (A<=0){
        printf("O número de pessoas devem ser maiores do que zero:\n");
        return 0;
    }
    return 1;
}

MediaPesos (int npes, float Peso[])
{
    float media = 0;
    float soma = 0;
    int k;
    for (k=0;k<npes;k++){
        soma += Peso[k];
    }
    media = soma/npes;
    return media; //manda o resultado pro main*

}

MaiorPeso (int npes, float Peso[])
{
    float maior = Peso[0]; //inicializa variavel maior
    int k;
    for (k=1;k<npes;k++){
        if (Peso[k]>maior){
            maior = Peso[k];
        }
    }
    return maior;
}

main (){
    setlocale(LC_ALL, "Portuguese");

    int npes;
    do{
            printf("Digite o número de pessoas:\n");
            scanf("%d", &npes);
    }while(!pesopessoas(npes));

    int k;
    float Peso[npes];
    for (k=0;k<npes;k++){
        printf("O peso da pessoa %d\n", k+1);
        scanf("%f", &Peso[k]);
    }
    float media;
    float maior;
    maior = MaiorPeso(npes, Peso);
    media = MediaPesos(npes, Peso);

    printf("A média dos pesos é: %.2f\n", media);
    printf("O maior peso é: %.2f\n", maior);
}
#endif // ex02
