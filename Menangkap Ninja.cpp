#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int luas;
int pX = 1; 
int pY= 1;
char player;
char ular= 'O';
char makanan= 'X';
int a =0;
int mX;
int mY; 


void makan(){
	while(pX==mX && pY==mY) {
			printf ("Yey, Kamu Menang");
			break;
		}
}
	
		
void pindah()
{
	makan();
	player = getch();
    switch (player){
    	case 'w':
//			if (pX==mX && pY==mY)
			pX-=1;
		break;
		case 's':
//			if (pX==mX && pY==mY)
			pX+=1;		
		break;
		case 'a':
//			if (pX==mX && pY==mY)
			pY-=1;
		break;
		case 'd':
//			if (pX==mX && pY==mY)
			pY+=1;
		break;    	
	}
	system("cls");
}


void loadingArea(){
	int i; 
	char load;
	char l= '%';

	
	for (i=0; i<=100; i++){
		printf("Loading Area...\n");
		printf("%d""%c", i, l);
		system("cls");
	}
	
	getchar();
	printf("Press Enter to Continue");
	getchar();
	system("cls");
	
}


void arena()
{
  while (true){

  		srand(time(0)); 
		mX = (rand() % luas-1)+1; 
		mY = (rand() % luas-1)+1;
	

	 for (int i = 0; i <= luas; i++) {
    	for (int j = 0; j <= luas; j++) {
    		if (pX==0 || pY==0 || pX==luas || pY==luas){
					system ("cls");
     				printf ("Kamu Gugur");
     				exit(0);	
     		   }
     				
    		else if (i==0 || j==luas || i==luas || j==0){
    			printf("*");
			}
			
			else if(i==pX && j==pY){
					printf ("%c", ular);
					
			}	
				
			else if(i==mX && j==mY) {
				printf ("%c", makanan);	
			}
			
			else{
			printf (" "); 
			}     		 
    	}
    	printf("\n");
     }
  	 	
     pindah();
     //system("cls");
	 	 			
	}
	
	
}


int main(){
	
	int level;
	int load;
	int lm;
	
	
//   Pilihan level 
	printf ("Hai player, Game ini memiliki 5 tingkat kesulitan:\n");
	printf ("5. Sangat Mudah\n");
	printf ("4. Mudah\n");
	printf ("3. Sedang\n");
	printf ("2. Sulit\n");
	printf ("1. Sangat Sulit\n");
	printf("\n");
	printf("\n");
	
	printf ("Cara Bermain:\n");
	printf (" W : untuk geser ke atas\n");
	printf (" S : untuk geser ke bawah\n");
	printf (" A : untuk geser ke kiri\n");
	printf (" D : untuk geser ke kanan\n");
	

	printf("\n");
	
	printf ("Pilih tingkat kesulitan: "); scanf ("%d", &level); system("cls"); 
	
	
//	loading screen
	loadingArea(); 
	
// Pilih level	
	switch (level){
		case 1:
			luas = 50;
			arena();
			break;
			
		case 2:
			luas = 40;
			arena();
			break;
		case 3:
			luas = 20;
			arena();
			break;
		case 4:
			luas = 15;
			arena();
			break;
		case 5:
			luas =10;
			arena();
			break;
			
	}
	return 0;

}





