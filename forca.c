#include <stdio.h>
#include <string.h>

void abertura(){
	printf("/****************************************\n");
    printf("	  / Jogo de Forca */				 \n");
    printf("/****************************************\n");
}

int parimpar(int numero){
	if(numero%2==0){
		return 1;
	}else{
		return 0;
	}
}
int main() {
  int ehpar=0,i,j,acertou=0,enforcou=0,ttentativas=10,tentativa=0,achou,cont=0;
  char palavrasecreta[20],chute;
  char chutes[tentativa];
  sprintf(palavrasecreta, "uber");
  abertura();
  int resultado = parimpar(25);
  printf("%d",resultado);
  do{
  	printf("\nQual e o seu palpite ?\n");
  	scanf(" %c",&chute);
  	chutes[tentativa]=chute;
  	tentativa++;
  		cont=0;
  		for(i=0;i<strlen(palavrasecreta);i++){
	  		achou = 0;
	  		for(j=0;j<=tentativa;j++){
	  			if(palavrasecreta[i]==chutes[j]){
	  				achou=1;
	  				break;
				} 
			}
			if(achou){
				printf("%c ", palavrasecreta[i]);
				cont++;
			}else{
				printf("_ ");
			}
			if(cont==strlen(palavrasecreta)){
				printf("\nVoce descobriu a palavra secreta!!");
				acertou=1;
			}
	    }
	    printf("\n");
  }while(!acertou && !enforcou);
  
  return 0;
}
