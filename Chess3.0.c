#include <stdio.h>

int main(){
    int r, i=1;

    for (i=1;i<9;i++){
        r=i%2;
        printf("|------|------|------|------|------|------|------|------|\n");

        if (r==1){
            printf("|W     |B     |W     |B     |W     |B     |W     |B     |\n");

            switch(i){
                case 1:
                printf("|  RB  |  HB  |  BB  |  QB  |  KB  |  BB  |  HB  |  RB  |\n");
                break;

                case 3:
                printf("|      |      |      |      |      |      |      |      |\n");
                break;

                case 5:
                printf("|      |      |      |      |      |      |      |      |\n");
                break;

                case 7:
                printf("|  PW  |  PW  |  PW  |  PW  |  PW  |  PW  |  PW  |  PW  |\n");
                break;
            }
        }

        if(r==0){
            printf("|B     |W     |B     |W     |B     |W     |B     |W     |\n");

            switch(i){
                case 2:
                printf("|  PB  |  PB  |  PB  |  PB  |  PB  |  PB  |  PB  |  PB  |\n");
                break;

                case 4:
                printf("|      |      |      |      |      |      |      |      |\n");
                break;

                case 6:
                printf("|      |      |      |      |      |      |      |      |\n");
                break;

                case 8:
                printf("|  RW  |  HW  |  BW  |  KW  |  QW  |  BW  |  HW  |  RW  |\n");
                break;
            }
        }
        i=i++;
     }

    printf("|------|------|------|------|------|------|------|------|\n");

return 0;
}
