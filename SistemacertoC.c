#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include<conio.h>

/*
 * INGRESSOS PARA TEATRO
 *
 * By: Akau� lima
 *
 *
 *
 *
 *
 *
 *
 
*/
int main() {

         system("color 1F "); // cor fundo azul

        int  quantingresso = 0;
        int  caseteatro;
        int  horarioshow;
        int  pagamento = 0;  
        int  casocadeira, i, j, lin, col, condi, n, t, x, p;
     	int  poltrona[10] [10];
    	char ascii = 79;        // ocupado
	    char asciii = 157;      // livre        
         
  
        setlocale (LC_ALL, "portuguese");
  
        printf("\t======================================================================\n");
	   	printf("\t**********************************************************************\n"); 
        printf("\t=======      ===     ====  ==  ====        ===  ==  ======      ======\n");        
       	printf("\t*********   **** ********  **  *******   *****  *** ******      ******\n");
	   	printf("\t=========  =====     ====  ==  =======   =====  ===  =====  ==  ======\n"); 
        printf("\t*********  *****   ****    **   ******   *****  ****  ****      ******\n");
        printf("\t======================================================================\n");		
	  	printf("\t**********************************************************************\n");		
	   	printf("\t===========================TEATRO DAVINCI=============================\n");		
        printf("\t**********************************************************************\n");                                 		
	    printf("\t======================================================================\n");
         
         printf("\t \t \t \n      PARA ESTUDANTES, CRIAN�AS 02 A 12 ANOS, MAIORES DE 60 E PROFESSORES \n \n      DA REDE PUBLICA A MEIA ENTRADA � GARANTIDA. \n ");
		 printf(" \t \t \t \t\n      TER�A LIVRE!!! AS TER�AS, GRATUITO PARA CRIAN�AS CARENTES DA REDE PUBLICA \n\n ");        
		          
	                         
	                           do{      printf("\t \t   |----------------------------------|\n");			  
                                     	printf("\t \t \t   SELECiONE UMA OP��O  \n ");
                                        printf("\t \t   |----------------------------------|\n");
                                        printf ("\t\t\t    |PE�AS EM CARTAZ| \n \n");

                                        printf("\t \t \t| [1] A bela e a  fera| 23/11 \n ");
		
		                                printf("\t \t \t| [2] Romeu e Julieta | 24/11 \n \n");
				  
		                                printf("\t \t   |----------------------------------|\n");
		                                
		                             printf("\t\t\t   ESCOLHER POLTRONAS \n ");
										printf("\t\t   |----------------------------------|\n");
	                                    printf("\t\t\t [3] Ver cadeiras disponiveis \n ");
			                            printf("\t\t\t [4] Escolher Cadeira \n");		                     
			                            printf("\t\t   |----------------------------------|\n\n"); 
			                             
	    	                            
		                                
		                   
		                    	
 scanf("%i", & caseteatro);

 switch (caseteatro)   // bloco de escolhas 
{
       default:                               

               printf("Op��o inv�lida. \n");	
	
        case 1:
                 
				system("cls");
		                              
                printf("\t--------------------------------------\n");
				
				printf("\t sala 1: A bela e a  fera \n");
				
				printf("\t Sessao [1]: 10:30 \n");
				
				printf("\t Sessao [2]: 14:30 \n");
				
				printf("\t Sessao [3]: 18:30 \n");
				
				printf("\tComprar bilhete para qual sess�o ? \n\n");
				
				printf("\t--------------------------------------\n");
                
		                              
                        
                       scanf( "%i", &horarioshow);    // l� horario da pe�a
                      
                        if (horarioshow==1)
                            {

                        printf (" \tInforme Quantos Bilhetes ir� comprar : \n");


                        scanf("%i", & quantingresso);  // l� quantidade de ingressos

                        if ( quantingresso <= 10)
                             {

                       
                           printf("\t---------------------------------------\n");
							
                        	printf("\t FORMAS DE PAGAMENTO : : : \n\n");
                        	printf("\t [1]Inteira: 10,00 R$ \n");
                        	printf("\t [2]Meia: 5,00 R$ \n");
                        
						  	scanf("%i",& pagamento);
							
                            printf("\t---------------------------------------\n");
                              
          
                           if (pagamento ==1)
                             
							    {
                                     printf (" \t Forma de pagamento :: INTEIRA \n \n ");
                               
                                 }else
                                    {
                                       printf("\t Forma de pagamento :: MEIA ");
                                    }
                                      
                               
						      printf ("\t A Pe�a escolhida : | A Bela e a Fera |  23/11 �s 10:30  \n");
                              printf ("\t \n Seu ingresso foi adquirido com sucesso, prossiga para escolha da poltrona. \n \n \n ");
                                                  
                                               
                                     } 
						    	}

  
                        if  (horarioshow ==2)
                             {

                            printf (" \t Informe quantos ingressos ir� comprar : \n");

                            scanf ("%i" , & quantingresso);        

                        if (quantingresso <=10)

                                 {         
                                        printf("\t---------------------------------------\n");
						
		                                printf("\t FORMAS DE PAGAMENTO : : : \n\n");						
		                                printf("\t [1]Inteira: 10,00 R$ \n");			 			
		                                printf("\t [2]Meia: 5,00 R$ \n");
						 
		                                printf("\t---------------------------------------\n");
						
					               scanf("%i",& pagamento);	
                    						
		                        if (pagamento==1)
                                   {
								         printf("\tForma de Pagamento :: INTEIRA \n\n");						
		                           }else 
	                                   	{			
		                                 printf("\tForma de Pagamento :: MEIA \n\n");					
	                                    }
						
		                                 printf ("\t A Pe�a escolhida : | A Bela e a  Fera |  23/11 �s 14:30 \n");                                
                                         printf(" \t \n Seu ingresso foi adquirido com sucesso, prossiga para escolha da poltrona. \n \n \n ");				
		      

                                        } else                           
                                              {
                                                  printf("\t N�o h� mais ingressos para essa sess�o \n ");
                                               }

                               }

                 
				 
				        if (horarioshow==3)
                              
							     {
                             printf (" \t Informe quantos ingressos ir� comprar : \n");
                                      
                                        scanf("%i", & quantingresso);

                                          if (quantingresso <=10)
                                 {
 
                                    printf("\t---------------------------------------\n");						
                                	printf("\t FORMAS DE PAGAMENTO : : : \n\n");						
	                                printf("\t [1]Inteira: 10,00 R$ \n");						
                                	printf("\t [2]Meia: 5,00 R$ \n");
						
	                          		printf("\t---------------------------------------\n");
						
                            					
                                scanf("%i",& pagamento);                        
							 	
							   if (pagamento==1)                 
                                     {
                                            
											 printf("\t Forma de pagamento :: INTEIRA \n \n");    
                                     }else        
									    {

                                             printf("\t Forma de pagamento :: MEIA \n \n");
                                        }
                         
                                             printf("\t A Pe�a escolhida : | A Bela e a Fera |  23/11 �s 18:30  \n");
                                             printf("\n  Seu ingresso foi adquirido com sucesso, prossiga para escolha da poltrona. \n \n \n ");
	     
	                                   }else
                                        {
										         
											 printf ("\t Nao h� mais bilhetes \n ");
                                        }
 
                              }

  break;
;                        
                         
         case 2 : 
                             system("CLS"); // limpa tela anterior
                             
                               printf("\t--------------------------------------\n");
		
		                       printf("\t Romeu e Julieta \n");
		
		                       printf("\t Sessao[1]: 13:30 \n");
		
	                           printf("\t Sessao[2]: 16:15 \n");
		
		                       printf("\t Sessao[3]: 18:45 \n");
		 
		                       printf("\tComprar Bilhete para qual sess�o ? \n\n");
		
		                       printf("\t--------------------------------------\n");
                                 
                       
                        scanf("%i" , &horarioshow);     // recebe horario da pe�a

                        if (horarioshow ==1)
  
                             {
                    
                           printf("\t Informe quantos bilhetes ir� comprar:  \n");

                           scanf("%i", & quantingresso);
              
                        if(quantingresso <=10)
                            {


                          printf ("\t ---------------------------------------\n");

                          printf("\t FORMAS DE PAGAMENTO : : : \n \n");
 
                          printf("\t [1] Inteira: 10,00 R$ \n");

                          printf("\t [2] Meia:     5,00R$ \n");
 
                           
                         printf("\t ------------------------------------------\n");
                         
						    scanf ("%i" , &pagamento);

                             if (pagamento==1)

                           {
                             printf("\t forma de pagamento : : INTEIRA \n \n");
                            }

                                else
                            {
                                   printf("\tForma de pagamento : : MEIA \n \n");

                            }

                               printf ("\t A Pe�a escolhida : | Romeu e Julieta |  24/11 �s 13:30  \n");
                               printf(" \t \n Seu ingresso foi adquirido com suceso, prossiga para escolha da poltrona. \n \n \n ");	      
                             }
                                 else 
                             {

                                   printf("\t Nao h� mais ingressos \n ");
                           }

                       }

                        if (horarioshow==2)
                        {

                          printf("\t Informe a quantidade de ingressos : \n");
 
                         scanf("%i" , & quantingresso);

                         if  (quantingresso <=10)
                    {

                                   printf("\t ------------------------------------------\n");

                                   printf("\t FORMAS DE PAGAMENTO : : : \n \n");
 
                                   printf("\t [1] Inteira: 10,00 R$ \n");
  
                                   printf("\t [2] Meia: 5,00 R$ \n");

                                   printf("\t---------------------------------------\n");
                          
                       scanf ("%i" , &pagamento);
                        
                       if(pagamento==1)
                        {
                            printf("\t Forma de pagamento : : INTEIRA \n \n");
                        }
                         else

                        {  
                             printf("\t Forma de pagamento : : MEIA \n \n ");

                         }				
	             	        printf("\t A Pe�a escolhida : | Romeu e Julieta |  24/11 �s 16:15 \n");
				
	                        printf("\t \n Seu ingresso foi adquirido com sucesso, prossiga para escolha da poltrona. \n \n \n ");		
	                 

		                   	}
			             	else 
		                 	{			
			                  	printf("\tN�o h� mais ingressos para essa sess�o\n ");

                            }
                        }

                    
	                   if(horarioshow==3)
                           {
                             
				           printf("\t Informe quantos ingressos ir� comprar : \n");
     
                            scanf("%i" , & quantingresso);

                          if(quantingresso <=10)
                      
					     {
                   
                       printf("\t---------------------------------------\n");
						
                       printf("\t FORMAS DE PAGAMENTO : : : \n\n");
						
             	       printf("\t [1]Inteira: 10,00 R$ \n");
						
             	       printf("\t [2]Meia: 5,00 R$ \n");                
						
              	       printf("\t---------------------------------------\n");
					
				      	scanf("%i",&pagamento);	
                	
				     	if (pagamento==1)
                  
                           {
						           printf("\t Forma de pagamento :: INTEIRA \n \n");
    
                           } 
						      else
                            {
                                      printf("\t Forma de pagamento :: MEIA \n \n");

                    
                                printf("\t A Pe�a escolhida :| Romeu e Julieta |  24/11 �s 18:45 \n");
				
	                            printf("\t \n  Seu ingresso foi adquirido com sucesso, prossiga para escolha da poltrona. \n \n \n ");
                            }
                        }
                          

     
break;    



         case 3://ver caideiras
				    
			        
				    n = 0;
					printf("\tC\n\tO\n\tL\n\tU\n\tN\n\tA\n");
					printf("FILA");
					printf("\t   0 1 2 3 4 5 6 7 8 9\n");
						
						
							for(i=0 ; i<10; i++)
					{
									printf("\t ");
									n==1;
									printf("%d ",n);
									n++;
								
							for(j=0 ; j<10 ; j++)
							
								{
									if(poltrona[i] [j]==0)
									{
										printf("%c ",ascii);
									}	
									else
										printf("%c ",asciii);
								}
								
							printf("\n");
					}
		   	
			   	
           case 4: //Escolher Cadeira
	                    
				   			       
					printf("Fila: ");
					scanf("%d", &lin);
					printf("Coluna: ");
					scanf("%d",&col);
				
					if (lin<10 && col<10)
					{
						if (poltrona [lin] [col]==0)
						{
					         printf("\t\n | Cadeira escolhida com sucesso !| \n");
					        
						}
						else
						{
							printf("\n******ATENCAO CADEIRA OCUPADA******\n\n");
						}
				  	}
					    else
					 {
					     	printf("******CADEIRA INEXISTENTE******");
				     	}
				         
			         		printf("\n-------------------------------------------------------------------------------\n");
					break;		   	
				
			}
 
}
  }
  while(caseteatro!=0);
   
  system("pause");
  
   return 0;

} 








