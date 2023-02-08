#include<stdio.h>
int main(){
int n;
printf("NxN'lik bir matris icin N sayisini giriniz: ");
scanf("%d",&n);
int matris[n][n];
//Matrisin her [row][column] elemani icin deger alir
for(int row=0;row<=n-1;row++){
    for(int column=0;column<=n-1;column++){
        printf("matris[%d][%d] icin deger giriniz: ",row,column);
        scanf("%d",&matris[row][column]);
    }
}
int taraf;
printf("Saga mi dondurulsun sola mi?: (Sol-> 1 Sag->2): ");
scanf("%d",&taraf);

//Alinan her degeri yazdirir
printf("\nMatrisiniz:\n");
for(int row=0;row<=n-1;row++){
    for(int column=0;column<=n-1;column++){
        printf("%d\t",matris[row][column]);
    }
    printf("\n");
}

printf("\n");

if(taraf==1){
//Sola yatşrma islemi
printf("\nSola dondurulmus hali:\n");
for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-1;j++){
        printf("%d\t",matris[j][n-1-i]);
    }
    printf("\n");
}
}
else{
   printf("\nSaga dondurulmus hali:\n");

//Saga yatirma islemi

for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-1;j++){
        printf("%d\t",matris[n-1-j][i]);
    }
    printf("\n");
} 
}

}