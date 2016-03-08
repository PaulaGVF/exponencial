#include <stdio.h>

int potenciaint(int base, int expoente)
{int c, resp=1;
for(c=1;c<=expoente;c++)
resp=resp*base;
return resp;
}
 int main()
 {int a,b,resp;
 printf("Digite a base e o expoente separados por virgula\n");
 scanf("%d,%d",&a,&b);
 resp=potenciaint(a,b);
 printf("A resposta de %d elevado a %d = %d",a,b,resp);
 return 0;
 }
