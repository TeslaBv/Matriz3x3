#include <stdio.h>


int main(int argc, char *argv[]) {
	float f1c1,f1c2,f1c3,f1c4,f2c1,f2c2,f2c3,f2c4,f3c1,f3c2,f3c3,f3c4;
	float A;
	float cofA1,cofA2,cofA3,cofA4,cofA5,cofA6,cofA7,cofA8,cofA9;
	float A11,A12,A13,A14,A15,A16,A17,A18,A19,X,Y,Z;
	printf("Ingrese los valores de la matriz\n");
	scanf("%f",&f1c1);scanf("%f",&f1c2);scanf("%f",&f1c3);scanf("%f",&f1c4);
	scanf("%f",&f2c1);scanf("%f",&f2c2);scanf("%f",&f2c3);scanf("%f",&f2c4);
	scanf("%f",&f3c1);scanf("%f",&f3c2);scanf("%f",&f3c3);scanf("%f",&f3c4);
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	printf("%.2f	%.2f	%.2f =	%.2f \n",f1c1,f1c2,f1c3,f1c4);
	printf("%.2f	%.2f	%.2f = 	%.2f \n",f2c1,f2c2,f2c3,f2c4);
	printf("%.2f	%.2f	%.2f =	%.2f \n",f3c1,f3c2,f3c3,f3c4);
	printf("\n");
	printf("		%.2f	%.2f	%.2f \n",f1c1,f1c2,f1c3);
	printf("Matriz(A)	%.2f	%.2f	%.2f \n",f2c1,f2c2,f2c3);
	printf("		%.2f	%.2f	%.2f \n",f3c1,f3c2,f3c3);
	printf("\n");
	printf("\n");
	printf("		%.2f \n",f1c4);
	printf("Matriz(B)	%.2f \n",f2c4);
	printf("		%.2f \n",f3c4);
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	//|A|
	printf("		%.2f	%.2f	%.2f\n",f1c1,f1c2,f1c3);
	printf("		%.2f	%.2f	%.2f\n",f2c1,f2c2,f2c3);
	printf("|A|	=	%.2f	%.2f	%.2f\n",f3c1,f3c2,f3c3);
	printf("		%.2f	%.2f	%.2f\n",f1c1,f1c2,f1c3);
	printf("		%.2f	%.2f	%.2f\n",f2c1,f2c2,f2c3);
	
	A=((f1c1*f2c2*f3c3)+(f2c1*f3c2*f1c3)+(f3c1*f1c2*f2c3))-((f3c1*f2c2*f1c3)+(f1c1*f3c2*f2c3)+(f2c1*f1c2*f3c3));
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	printf("|A| = %.2f",A);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	//cof (A)
	
	cofA1=((f2c2*f3c3)-(f3c2*f2c3));
	cofA2=(-1*((f2c1*f3c3)-(f3c1*f2c3)));
	cofA3=((f2c1*f3c2)-(f3c1*f2c2));
	
	cofA4=(-1*((f1c2*f3c3)-(f3c2*f1c3)));
	cofA5=((f1c1*f3c3)-(f3c1*f1c3));
	cofA6=(-1*((f1c1*f3c2)-(f3c1*f1c2)));
	
	cofA7=((f1c2*f2c3)-(f2c2*f1c3));
	cofA8=(-1*((f1c1*f2c3)-(f2c1*f1c3)));
	cofA9=((f1c1*f2c2)-(f2c1*f1c2));
	
	
	printf("			%.2f	%.2f	%.2f\n",cofA1,cofA2,cofA3);
	printf("cof (A)	=		%.2f	%.2f	%.2f\n",cofA4,cofA5,cofA6);
	printf("			%.2f	%.2f	%.2f\n",cofA7,cofA8,cofA9);
	
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	//adj (A)
	printf("			%.2f	%.2f	%.2f\n",cofA1,cofA4,cofA7);
	printf("adj (A)	=		%.2f	%.2f	%.2f\n",cofA2,cofA5,cofA8);
	printf("			%.2f	%.2f	%.2f\n",cofA3,cofA6,cofA9);
	
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	A11=cofA1;A12=cofA4;A13=cofA7;
	A14=cofA2;A15=cofA5;A16=cofA8;
	A17=cofA3;A18=cofA6;A19=cofA9;
	
	//Matriz inversa
	
	printf("				|%.2f	%.2f	%.2f|\n",A11,A12,A13);
	printf("A^-1	=	1/%.2f		|%.2f	%.2f	%.2f|\n",A ,A14,A15,A16);
	printf("				|%.2f	%.2f	%.2f|\n",A17,A18,A19);
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	A11=cofA1/A;A12=cofA4/A;A13=cofA7/A;
	A14=cofA2/A;A15=cofA5/A;A16=cofA8/A;
	A17=cofA3/A;A18=cofA6/A;A19=cofA9/A;
	
	//Simplicacion
	
	printf("		|%.2f	%.2f	%.2f|\n",A11,A12,A13);
	printf("A^-1	=	|%.2f	%.2f	%.2f |\n",A14,A15,A16);
	printf("		|%.2f	%.2f	%.2f |\n",A17,A18,A19);
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	printf("X		|%.2f|		|%.2f	%.2f	%.2f|\n",f1c4,A11,A12,A13);
	printf("Y	=	|%.2f|		|%.2f	%.2f	%.2f |\n",f2c4,A14,A15,A16);
	printf("Z		|%.2f |		|%.2f	%.2f	%.2f |\n",f3c4,A17,A18,A19);
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	X=((f1c4*A11)+(f2c4*A12)+(f3c4*A13));
	Y=((f1c4*A14)+(f2c4*A15)+(f3c4*A16));
	Z=((f1c4*A17)+(f2c4*A18)+(f3c4*A19));
	
	printf("X		|%.2f|	\n",X);
	printf("Y	=	|%.2f |	\n",Y);
	printf("Z		|%.2f |	\n",Z);
	
	return 0;
}
