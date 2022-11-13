#include <stdio.h>
//FarisRasyid
//50421483
int main(){
    int uts, uas, total;
    char nama[100];

    printf("Masukkan Nama      : ");
    gets(nama);
    printf("Masukkan Nilai UTS : ");
    scanf("%d", &uts);
    printf("Masukkan Nilai UAS : ");
    scanf("%d", &uas);
    total = (uts + uas)/2;

    printf("Biodat asyasbhdhjahs");
    if(total >= 90){
        printf("Nama : %s", nama);
        printf("\nBagus sekali ");
    }
   else if(total >= 80){
       printf("Nama : %s", nama);
       printf("\nHarus lebih giat ! ");
    }
   else if(total >= 60){
       printf("Nama : %s", nama);
       printf("\nAyo belajar !!!");
    }
   else {
       printf("\n%s bertemu lagi di semester depan", nama);
    }
}
