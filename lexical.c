#include<stdio.h>
#include<stdlib.h>



int token_t(char palavra[],int passo){
	
		if(palavra[passo]=='r'&& passo ==1){
		return token_r(palavra,passo+1);
	}

	if(palavra[passo]=='r'&& passo ==2){
		return token_r(palavra,passo+1);
	}
	if(palavra[passo]== NULL && passo ==3){
		return 7;
	}
	if(palavra[passo]!= NULL && passo ==3){
		return 0;
	}
	
	if(palavra[passo] == NULL && passo == 5){
		
		if(palavra[0]=='p')return 1;
		if(palavra[0]=='f')return 8;
	}
	
	if(palavra[passo] == '#' && passo == 5 && palavra[0]=='p'){
		return 1;
	
	}else{
		return 0;
	}

}

int token_n(char palavra[],int passo){
	
	if(palavra[passo]=='g'&& passo==5){
		return token_g(palavra,passo+1);
	}

	if(palavra[passo] == 't' && passo ==4){

		return token_t(palavra,passo+1);
	}
	if(palavra[passo] == 't' && passo ==2){

		return token_t(palavra,passo+1);
	}
	if(palavra[passo]== NULL && passo ==4){
		if(palavra[0]=='s')return 2;
		if(palavra[0]=='m')return 13;
	}
		if(palavra[passo]== '#' && passo ==4){
			if(palavra[0]=='s')return 2;
		if(palavra[0]=='m')return 13;
	}else{
		return 0;
	}
	
	
}

int token_i(char palavra[],int passo){
	
	if(palavra[passo]=='n'&& passo ==4){
		return token_n(palavra,passo+1);
	}
	if(palavra[passo] == 'n' && passo == 3){
	
	return 	token_n(palavra,passo+1);
		
	}
	if(palavra[passo]=='n'&& passo ==1){
		return token_n(palavra,passo+1);
	}
		if(palavra[passo] == 'a' && passo == 4){
	
	return 	token_a(palavra,passo+1);
		
	}
	if(palavra[passo]=='f' && passo ==1){
		return token_f(palavra,passo+1);
	}
	if(palavra[passo]=='l'&& passo ==3){
		
		return token_l(palavra,passo+1);
	}

}

int token_r(char palavra[],int passo){
	
	if(palavra[passo]=='u' && passo ==2){
		return token_u(palavra,passo+1);
	}
	
	if(palavra[passo]=='i' && passo ==2){
	
	return 	token_i(palavra,passo+1);
	}
	if(palavra[passo]=='i' && passo ==3){

	return 	token_i(palavra,passo+1);
	}
	if(palavra[passo]==NULL && passo == 3){
		return 6;
	}
	if(palavra[passo]=='#' && passo == 3){
		return 6;
	}else{
		return 0;
	}
	
}

int token_p(char palavra[],int passo){
	
	if(palavra[passo] == 'r' && passo == 1){
	
	return 	token_r(palavra,passo+1);
	}
	
}


int token_s(char palavra[],int passo){
	
	if(palavra[passo]=='e'&& passo ==4){
		return token_e(palavra,passo+1);
	}
	
	if(palavra[passo]=='c'&& passo == 1){
		return token_c(palavra,passo+1);
	}
	if(palavra[passo]=='t'&& passo ==1){
		return token_t(palavra,passo+1);
	}
}

int token_c(char palavra[],int passo){
		if(palavra[passo]=='a' && passo ==2){
		return token_a(palavra,passo+1);
	}
}

int token_a(char palavra[],int passo){
	
		if(palavra[passo]=='l' && passo ==2){
			return token_l(palavra,passo+1);
		}
		if(palavra[passo]=='t'&& passo ==4){
			return token_t(palavra,passo+1);
		}
		if(palavra[passo]=='n' && passo == 3){
		return token_n(palavra,passo+1);
		}
		if(palavra[passo]=='i' && passo ==2){
		return	token_i(palavra,passo+1);
		}
		if(palavra[passo]=='r' && passo ==2){
		
		return	token_r(palavra,passo+1);
		}
		if(palavra[passo]=='b' && passo ==5){
	
		return	token_b(palavra,passo+1);
		}
}

int token_m(char palavra[],int passo){
		if(palavra[passo]=='a' && passo ==1){
			return token_a(palavra,passo+1);
		}
	}
int token_v(char palavra[],int passo){
	if(palavra[passo]=='a' && passo ==1){
		return token_a(palavra,passo+1);
	}
}

int token_b(char palavra[],int passo){
	
	if(palavra[passo]=='l'&& passo ==6){
		return token_l(palavra,passo+1);
	}
	if(palavra[passo]=='o'&& passo ==1){
		return token_o(palavra,passo+1);
	}
}

int token_l(char palavra[],int passo){
	if(palavra[passo]=='s' && passo ==3){
		return token_s(palavra,passo+1);
	}
	
	if(palavra[passo]== NULL && passo ==4){
		return 9;
	}
	if(palavra[passo]!= NULL && passo ==4){
		return 0;
	}
	if(palavra[passo]=='o'&& passo ==2){
		return token_o(palavra,passo+1);
	}
	
	if(palavra[passo]=='e' && passo == 7){
		return token_e(palavra,passo+1);
	}
	if(palavra[passo]=='e' && passo ==4){
			
		return token_e(palavra,passo+1);
	}
}

int token_e(char palavra[],int passo){
	

	if(palavra[passo]==NULL && passo ==4){
		return 11;

	}
	
	if(palavra[passo]== NULL && passo ==5){
		if(palavra[0]=='w')return 5;
		if(palavra[0]=='f')return 12;
	}
	if(palavra[passo]=='#'&& passo==5 && palavra[0]=='w'){
		return 5;
	}
	
	if(palavra[passo] == NULL && passo == 8){
		return 3;
	}
	if(palavra[passo] == '#' && passo ==8){
		return 3;
	}else{
		return 0;
	}
}

int token_f(char palavra[],int passo){
	
	if(palavra[passo]=='a'&& passo ==1){
		return token_a(palavra,passo+1);
	}
	if(palavra[passo]=='l'&& passo ==1){
		return token_l(palavra,passo+1);
	}
	if(palavra[passo]=='o' && passo ==1){
		return token_o(palavra,passo+1);
	}
	if(palavra[passo]==NULL && passo ==2){
		return 4;
	}
	if(palavra[passo]=='#' && passo ==2){
		return 4;
	}else{
		return 0;
	}
}

int token_o(char palavra[],int passo){
	if(palavra[passo]=='a' && passo ==3){
		return token_a(palavra,passo+1);
	}
	if(palavra[passo]=='r'&& passo ==2){
		return token_r(palavra,passo+1);
	}
	if(palavra[passo] =='o'&& passo ==2){
		return token_o(palavra,passo+1);
	}
	if(palavra[passo]=='l' && passo == 3){
		return token_l(palavra,passo+1);
	}
}

int token_w(char palavra[],int passo){
	if(palavra[passo]=='h'&& passo==1){
	
		return token_h(palavra,passo+1);
	}
}
int token_h(char palavra[],int passo){
	if(palavra[passo]=='i'&& passo ==2){
		
		return token_i(palavra,passo+1);
	}
}
int token_g(char palavra[],int passo){
	if(palavra[passo]== NULL && passo ==6){
		return 10;
		
	}
		if(palavra[passo]!= NULL && passo ==6){
		return 0;
		
	}
}

int token_u(char palavra[],int passo){
	if(palavra[passo]=='e' && passo ==3){
		return token_e(palavra,passo+1);
	}
}
int estado_inicial(char palavra[]){
	
//	printf("estou aqui");

	int passo;
	
	passo =0;
	
	if(palavra[0] == 'p'){
		
	
	return 	token_p(palavra,passo+1);
		
	}
	if(palavra[0] =='s'){

		return token_s(palavra,passo+1);
	}

	if(palavra[0]=='m'){
		return token_m(palavra,passo+1);
	}
	if(palavra[0]=='v'){
		return token_v(palavra,passo+1);
	}
	if(palavra[0]=='i'){
		return token_i(palavra,passo+1);
	}
	if(palavra[0]=='w'){
		return token_w(palavra,passo+1);
	}
	if(palavra[0]=='f'){
		return token_f(palavra,passo+1);
	}
	if(palavra[0]=='b'){
		return token_b(palavra,passo+1);
	}
	if(palavra[0]=='t'){
		return token_t(palavra,passo+1);
	}
}





int main(){
	
	
	char word[30];
	int retorno;
	char rec;
	
	printf("Digite a palavra \n");
	gets(word);
	

 
	
	retorno =estado_inicial(word);
	
	printf("\n %d",retorno);
	
	getchar();
}
