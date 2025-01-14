#include<Stdio.h>
#include<math.h>

int main() {
    int N;
    printf("Enter the Number of Points : ");
    scanf("%d",&N);
    if(N<=0){
        printf("Invalid number of points \n");
        return 1;
    }
    float *xr,*xi,*yr,*yi;
    xr = (float *)malloc(N * sizeof(float));
    xi = (float *)malloc(N * sizeof(float));
    yr = (float *)malloc(N * sizeof(float));
    yi = (float *)malloc(N * sizeof(float));
    if(xr==NULL || xi==NULL || yr==NULL || yi==NULL){
        printf("Memory Allocation failed\n");
        free(xr);
        free(xi);
        free(yr);
        free(yi);
        return 1;
    }
    printf("Enter Input Signal : (real and imag)");
    for(int i=0;i<N;i++){
     scanf("%f%f",&xr[i],&xi[i]);
    }

    //calculation start from here
    for(int k=0;k<N;k++){
        
         for(int n=0;n<N;n++){
            int angle = (-2*3.14*k*n)/N;
             yr[k] += xr[n] * cos(angle);
             yi[k] -= xi[n] *sin(angle);
         }
         printf("Output Signal is : \n");
          for(int i=0;i<N;i++){
            printf("%.2f + j(.2%f)\n",yr[i],yi[i]);
          }
    }
    free(xr);
    free(xi);
    free(yr);
    free(yi);
}
