#include<stdio.h>
#include<math.h>
void computeDFT(float real_in[],float imag_in[],float real_out[],float imag_out[],int N){
    for(int k=0;k<N;k++){
        real_out[k] = 0;
        imag_out[k] = 0;
        for(int n=0;n<N;n++){
            float angle = (-2*3.141*k*n)/N;
            real_out[k] += real_in[n] * cos(angle) - imag_in[n] * sin (angle );
            imag_out[k] += real_in[n] * sin(angle) + imag_in[n] * cos(angle);
        }
    }
}



void computeIDFT(float real_in[],float imag_in[],float real_out[],float imag_out[],int N){
    for(int k=0;k<N;k++){
        real_out[k] = 0;
        imag_out[k] = 0;
        for(int n=0;n<N;n++){
            float angle = (-2*3.141*k*n)/N;
            real_out[k] += real_in[n] * cos(angle) - imag_in[n] * sin (angle );
            imag_out[k] += real_in[n] * sin(angle) + imag_in[n] * cos(angle);
        }
        real_out[k] /= N;
        imag_out[k] /= N;
    }
}

int main() {

    int choice;
    printf("Enter Your Choice : \n");
    printf("1.DFT\n2.IDFT\n");
    scanf("%d",&choice);

    printf("--------------------------------------\n");
     int N;
         printf("Enter N : ");
         scanf("%d",&N);
         float ri[N],ii[N],ro[N],io[N];
         printf("Enter the Input Signal : \n");
         for(int i=0;i<N;i++){
         scanf("%f%f",&ri[i],&ii[i]);
         }


switch(choice){
    case 1:
         
         computeDFT(ri,ii,ro,io,N);
         printf("--------------------------------------\n");
         printf("Result of DFT is :\n");
         printf("--------------------------------------\n");
         for(int j=0;j<N;j++) {
          printf("x[%d] = %.2f + %.2f(j)\n",j,ro[j],io[j]);
         }
          printf("--------------------------------------\n");
         break;

    case 2:
         computeIDFT(ri,ii,ro,io,N);
         printf("--------------------------------------\n");
         printf("The result of IDFT is :\n");
         for(int j=0;j<N;j++) {
          printf("x[%d] is : %f + %f(j)\n",j,ro[j],io[j]);
        }
        printf("--------------------------------------\n");
         break;
    
    default :
     printf("you Entered Wrong Input");
     break;
}


}