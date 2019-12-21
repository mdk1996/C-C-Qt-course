#include <stdio.h>
#include<locale.h>
#define MAX_SIZE 10000
     
int main (){
    setlocale(LC_ALL,"");
    FILE * fp;
    fp = fopen("Gogol.txt", "r");
    if (fp == NULL)
        printf("Файл невозможно открыть для чтения");
    else{
        printf("Частоты появления символов: \n");
        
        for (int i = 32; i < (255 + 1); i++){
	    int count = 0;                               
            int k = 0;

            while ((k = fgetc(fp)) != EOF){
                if (i == k)
                    count++;            
                if(k==MAX_SIZE)
                {
                    break;
                }
        }
            printf("Символ %c : %d раз \n", i, count);
            fseek (fp, 0, SEEK_SET);                   
        }
        fclose(fp);
        printf("Файл закрыт, подсчёт символов окончен. \n");
    } 
    return 0;
}


