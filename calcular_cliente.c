#include "calcular.h"

int main (int argc, char **argv)
{
SumaArg argumentos;
 char *host;
 CLIENT *sv;
 SumaRes *res;
 if (argc!=2)
 printf("Uso: %s <host>\n", argv[0]);
 else
 {
 host = argv[1];
 sv = clnt_create(host, P_PROG, P_VERS, "tcp");
 if (sv != NULL)
 {
     int op;
  printf("ingrese el valor 1\n");
	scanf("%i",&argumentos.a);
	printf("ingrese el valor 2\n");
	scanf("%i",&argumentos.b);
	printf("ingrese el operando:");printf("\n");
	printf("1.Suma			+"); printf("\n");
	printf("2.Resta			-"); printf("\n");
	printf("3.multiplicar		*"); printf("\n");
	printf("4.Dividir		/"); printf("\n");
	scanf("%i",&op);
	printf("\n");
	//printf("\nse envia %d %d",a.dato1,a.dato2);

switch (op)
{
    case 1: res= suma_1(argumentos,sv);
        break;
    case 2: res= resta_1(argumentos,sv);
        break;
    case 3: res= multi_1(argumentos,sv);
        break;
    case 4: res= div_1(argumentos,sv);
        break;
    default:
        printf("error de opcion");
        break;
}
 if (res != NULL)
 {
 printf("%d + %d = %d\n",argumentos.a,argumentos.b,res->c);
 }
 else
 {
 clnt_perror(sv, "error en RPC");
 }
 clnt_destroy(sv);
 }
 else
 {
 clnt_pcreateerror(host);
 }
 }
 return(0);
} 