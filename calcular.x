/* Operación sumar */
struct SumaArg { /* argumentos */
 int a ;
 int b ;
} ;
struct SumaRes { /* resultados */
 int c ; /* c = a + b */
} ;

/* sección de especificación de programa y operaciones (RPC) */

program P_PROG {
 version P_VERS {

 SumaRes SUMA( SumaArg ) = 1 ;
 SumaRes Resta( SumaArg ) = 2 ;
 SumaRes Multi( SumaArg ) = 3 ;
 SumaRes Div( SumaArg ) = 4 ;

 } = 1 ;
} = 0x2001;