#include<stdio.h>
int main() {
float x[] = {1.0,0.0,-1.0,2.0};
int n = sizeof(x)/sizeof(x[n]);


float y[n];
y[0] = 0;
y[1] = 0;

for(int i =0;i<n;i++){
    float x_n = x[i];
    float x_n_1 = 0,x_n_2 = 0,y_n_1 =0,y_n_2 = 0;
    if(i>0){
        x_n_1 = x[i-1];
        y_n_1 = y[n-1];
      }
      if(i>1){
          x_n_2 = x[i-2];
          y_n_2 = y[n-2];
        }
        y[i] = 1.5*x_n + 2.0*x_n_1 + 2.5*x_n_2 + 0.5*y_n_1 + 1.5*y_n_2;


  }
printf("Output signal y(n) : \n");
for(int i=0;i<n;i++){
printf("y[%d] = %f \n",i,y[i]);
}
return 0;
}

