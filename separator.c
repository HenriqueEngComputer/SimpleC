#include<stdio.h>
#include<stdlib.h>


void tamanho(char palavra[]){

int k;
k=0;

while(isalpha(palavra[k]) !=0){
printf("%c",palavra[k]);
k++;

}
//printf("\n O valor de K %d",k);
}


void main(int argc, char *argv[]){

FILE *fp;
char ch;
char bloco[100];

if(argc!=2){
printf("Falta o nome do arquivo!");
exit(1);
}

if((fp=fopen(argv[1],"r+")) == NULL){
printf("Arquivo não pode ser aberto. \n");
exit(1);
}

ch =getc(fp);

int i =0;
while(ch!=EOF){

if(ch == '{'){

ch='#';

}


if(isalpha(ch) != 0){

bloco[i]=ch;
i++;

printf("\n %d",i);


}
if(isalpha(ch) ==0){


i=0;

tamanho(bloco);
// faz chamada

int z;
for(z=0;z<100;z++){
bloco[z]='*';
}
}


putchar(ch);//imprime na tela
ch = getc(fp);
}
fclose(fp);
}
