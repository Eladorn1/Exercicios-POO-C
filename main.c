#include <stdio.h>
#include <stdlib.h>
#include <string.h>



    //exercicio 1----------------------------------------------------------------------------------------------------------------------------------------------------------
    /*
    int main()
    {
	    int A,
	        i,
	        B;
	    scanf("%d %d", &A, &B);
	   
	    while(A>B)
	    {
	        printf("insira primeiro o menor numero\n");
	        scanf("%d%d", &A, &B);
	    }

	    for(i = A ; i <= B ; i++)
	    {
	        if(i%2)
	            printf("%d\n",i);
	    }
	    return 0;
    }*/
    //Exercicio 1----------------------------------------------------------------------------------------------------------------------------------------------------------

    //exercicio 2----------------------------------------------------------------------------------------------------------------------------------------------------------
    /*
    int main()
    {
	    int i;
	    float salario, salario2, salarios=0;
	    char nome[60];

	    printf("Digite seu nome: ");
	    scanf("%s", &nome);

	    while(strcmp (nome, "fim") != 0)
	    {
	        printf("Digite seu salario : ");
	        scanf("%f", &salario);

	        if(salario <= 150)
	            salario2 = salario * 1.25;

	        else if(salario > 150 && salario <= 300)
	            salario2 = salario * 1.20;

	        else if(salario > 300 && salario <= 600)
	            salario2 = salario * 1.15;

	        else if(salario>600)
	            salario2 = salario * 1.10;

	        salarios = salario2 + salarios;

	        printf("Seu nome eh : %s, seu salario eh : %f, seu novo salario eh : %f\n", nome, salario, salario2);

	        printf("Digite seu nome: ");
	        scanf("%s", &nome);
	    }
	    printf("A soma dos salarios eh: %f",salarios);
	    return 0;
    }*/
	//Exercicio 2----------------------------------------------------------------------------------------------------------------------------------------------------------

	//Exercicio 3----------------------------------------------------------------------------------------------------------------------------------------------------------
	/*	#include <stdio.h>
		#include <stdlib.h>
		#include<string.h>

		void main()
			{
			int numero, i, resultado[80], resto[80];
			i=0;
			printf("Digite o numero decimal que sera passado para binario:\n");
			scanf("%d", &numero);
			printf("%d em binarios: ",numero);



			    while (numero > 1)
			        {
			       resultado[i]= numero / 2;
			       resto[i] = numero % 2;
			       numero=resultado[i];
			       i++;
			        }

				i--;

			    while (i>=0)
			    {
			        printf("%d",resto[i]);
			        i--;
			    }
			printf("\n");
			}
*/

	//Exercicio 3----------------------------------------------------------------------------------------------------------------------------------------------------------


	//Exercicio 4----------------------------------------------------------------------------------------------------------------------------------------------------------

			/*	#include <stdio.h>
				#include <stdlib.h>

			void fibonacci(int n);

			int main()
			{
			    int n;
			    printf("Entre o numero que deseja saber\n");
			    scanf("%d",&n);

			    fibonacci(n);

			return 0;
			}

			void fibonacci(int n)
				{
					int i=1,
						j=0,
						k,
						t,
						aux=0;

					while(aux!=1)
					{
						t=i+j;
						i=j;
						j=t;

						if(n==t)
						{
							printf("O numero %d faz parte da sequencia.",n);
							aux=1;
						}
						else if(t>n)
						{
			                printf ("O numero %d nao faz parte da sequencia.",n);
			                aux=1;
						}
					}
			    }
			    */
	//Exercicio 4----------------------------------------------------------------------------------------------------------------------------------------------------------

	//Exercicio 5----------------------------------------------------------------------------------------------------------------------------------------------------------

	/*	#include <stdio.h>
	  	#include <stdlib.h>

			int main()
			{
			    float emprestimo=0,
			          A=0,
			          juros=0,
			          somai=0,
			          total=0;

			        printf("O emprestimo eh de quanto? Quantos reais deveraum ser pagos por mes? De quanto seraum os juros aplicados?\n");
			        scanf("%f%f%f",&emprestimo,&A,&juros);
			        while(juros<1 || juros>2)
			        {
			            printf("insira um numero maior que 1 e menor que 2\n");
			            scanf("%f",&juros);
			        }
			        while( apagar>0 )
			        {
			            total = jurospmes(juros,emprestimo)*cont1;
			        }


			return 0;
			}


			float jurospmes(float juros, float apagar)//questão a
			{
			    float i;
			    i=(juros.apagar);
			    printf("%f",i);
			    return i;
			}

			float valormes(float apagar, float juros, float A)//questao c
			{
			    float valor;
			    valor = apagar-(A+(apagar.juros));
			    printf("%f",valor);
			}
			*/


	//Exercicio 5----------------------------------------------------------------------------------------------------------------------------------------------------------

	//Exercicio 6----------------------------------------------------------------------------------------------------------------------------------------------------------
	
	/*char palavra[50], inversa[50];
	int i, j, palindromo;
	palindromo = "0";

	main()
	{
	    printf("Informe uma palavra: ");
	    scanf("%s",&palavra);
	    j=strlen(palavra)-1;
	    for (i=0 ; i<strlen(palavra) ;i++ )
	        {	
	        inversa[j] = palavra[i];
	        j--;
	        }
	        for (i=0 , j=0 ; i<strlen(palavra) ; i++ , j++)
	            {
	                if ( palavra[i]! = inversa[j] )
	                palindromo="0";	
	                else
	                palindromo="1";
	            }
	            if (palindromo=="1")
	                printf("\nEh um Palindromo");
	            else   
	            	printf("\nNao um Palindromo");
	            
	            printf("\n\n");
	            system("pause");
	}*/



	//Exercicio 6----------------------------------------------------------------------------------------------------------------------------------------------------------

	//Exercicio 7----------------------------------------------------------------------------------------------------------------------------------------------------------
	/*#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
    #include<string.h>


struct raizes calculo(float a, float b, float c);

struct raizes
{
    int status;
    float x1;
    float x2;
};

void main ()
{
	float a, b, c;

		printf ("\n\n\nInforme o valor de A: ");
		scanf ("%f", &a);
		printf ("Informe o valor de B: ");
		scanf ("%f", &b);
		printf ("Informe o valor de C: ");
		scanf ("%f", &c);
     struct raizes resposta = calculo(a,b,c);
     printf("status : %d, x1: %f , x2: %f\n", resposta.status, resposta.x1, resposta.x2);
}


struct raizes calculo(float a, float b, float c)
{
	float delta, x1, x2;
	int status;
    struct raizes resposta;

	delta=pow(b,2)-4*a*c;
	printf ("\nDelta e igual a %.2f\n", delta);

    if (delta<0)
	{
        resposta.status=0;
        resposta.x1=0;
        resposta.x2=0;
		return resposta;
	}
	else if(delta==0)
	{

		x1=((-b)+sqrt(delta))/(2*a);
		x2=((-b)-sqrt(delta))/(2*a);
		printf ("\nO x1=%.2f e o x2=%.2f\n\n", x1, x2);
	    resposta.status=1;
	    resposta.x1=x1;
	    resposta.x2=x2;
		return resposta;
	}
	else
	{
		x1=((-b)+sqrt(delta))/(2*a);
		x2=((-b)-sqrt(delta))/(2*a);
		printf ("\nO x1=%.2f e o x2=%.2f\n\n", x1, x2);
	    resposta.status=2;
	    resposta.x1=x1;
	    resposta.x2=x2;
		return resposta;
	}
}*/
	//Exercicio 7----------------------------------------------------------------------------------------------------------------------------------------------------------

