//Vittorio Ferrari

using namespace System;


#include <stdio.h>
#include <math.h>
#define mezzotempo 300
#define tempofull 600  //gli dico quanto vale un tempo

void main ()
	{
		int Tronco;  //Dichiaro tutte le variabili
		
		int Ix;
		int Nspazi;
		int CntTronco;
		int CntTronco1;
		int I;
		int Naster;
		int Altezza;
		int Color;
		int Foglie;
		int CntFoglie;


	printf ("Inserire l'altezza dell'albero : ");  //Chiedo l'altezza dell'albero
	scanf_s ("%d" , & Altezza);  //Scanno il valore inserito

	Foglie=Altezza*2/3; //Calcolo alcune variaili secondo il valore di altezza inserito
	Tronco=Altezza-Foglie;  
	Nspazi=Foglie-1; 

	printf("\n");  //vado a capo per distanziate l'albero dalla scritta
		
		for (I=0;I<=Nspazi;I++)
			
			{
				
				printf(" ");  //Stampo una serie di spazi prima della punta
				
			}
	
		Ix=I;
		
	Console::ForegroundColor=ConsoleColor::Yellow;
	printf ("%c",127);  //Stampo la prima punta dorata
	printf ("\n");  
	//Inizio con il disegnare le foglie di verde 
		
	for(CntFoglie=1;CntFoglie<=Foglie;CntFoglie++)
	{
		Nspazi=Foglie-CntFoglie;
		Naster=CntFoglie*4-1;  //Calcolo altre variabili


		for(I=0;I<Nspazi;I++)  //all'interno del ciclo stampo gli spazi necessari per allineare le foglie
			{
				printf(" ");
			}
		for(I=(Naster/2);I<Naster;I++) //all'interno del ciclo stampo le foglie dopo aver stampato gli asterischi
			{
				Console::ForegroundColor=ConsoleColor::Green;
					printf("%c",176);
			}

		Console::ForegroundColor=ConsoleColor::Green;
			printf("%c",176);  //dopo aver stampato l'ultimo asterisco della fila vado a capo e ricomincio il loop fino a che non raggiungo il 2/3 dell'altezza complessiva dell'albero
			printf("\n");
	}

	//Incomincio a disegnare il tronco di marrone
	
	Console::ForegroundColor=ConsoleColor::DarkRed;

	// Se <=11

	if(Altezza<=11)
	{
		for (CntTronco=0;CntTronco<Tronco;CntTronco++)
		
		{
			for(CntTronco1=0;CntTronco1<Ix;CntTronco1++)
				{
					
						printf(" ");  //Stampo una serie di spazi prima del tronco
				
				}	
		
		printf ("%c",178);
		
		printf ("\n");
		
		}
	
	}

	// Se <=18

	if ((Altezza <=18) && (Altezza>=12))
  
		for (CntTronco=0;CntTronco<Tronco;CntTronco++)
		
		{
			for(CntTronco1=0;CntTronco1<Ix-1;CntTronco1++)
				{
					
						printf(" ");  //Stampo una serie di spazi prima del tronco
				
				}	
		
		printf ("%c""%c""%c", 178, 178, 178);
		
		printf ("\n");
		
		}
	
	
	
	// Se >18

	if (Altezza >18)
	{
		for (CntTronco=0;CntTronco<Tronco;CntTronco++)
		
		{
			for(CntTronco1=0;CntTronco1<Ix-2;CntTronco1++)
				{
					
						printf(" ");  //Stampo una serie di spazi prima del tronco
				
				}	
		
		printf ("%c""%c""%c""%c""%c",178,178,178,178,178);
		
		printf ("\n");
		
		}
	
	}
	{
			Console::Beep( 659,mezzotempo );
			Console::Beep( 659,mezzotempo );
			Console::Beep( 659,tempofull );
			

			
			Console::Beep( 659,mezzotempo );
			Console::Beep( 659,mezzotempo );
			Console::Beep( 659,tempofull );
			
	
			
			Console::Beep( 659,mezzotempo );
			Console::Beep( 783,mezzotempo );
			Console::Beep( 523,mezzotempo );
			Console::Beep( 587,mezzotempo );
			Console::Beep( 659,mezzotempo );
			
			
			
			Console::Beep( 261,mezzotempo );
			Console::Beep( 293,mezzotempo );
			Console::Beep( 329,mezzotempo );
			
		
			
			Console::Beep( 698,mezzotempo );
			Console::Beep( 698,mezzotempo );
			Console::Beep( 698,tempofull );
			
	
			
			Console::Beep( 698,mezzotempo );
			Console::Beep( 659,mezzotempo );
			Console::Beep( 659,tempofull );
			
	
			
			Console::Beep( 659,mezzotempo );
			Console::Beep( 587,mezzotempo );
			Console::Beep( 587,mezzotempo );
			Console::Beep( 659,mezzotempo );
			Console::Beep( 587,tempofull );
			
	
			
			Console::Beep( 783,tempofull );





	}
	getchar();
    getchar();

}
					