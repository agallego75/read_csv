#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
int main(void) {
float x[4];
float y[4];
char  z[4][20];
int i;
int nx = 3;

/*Read csv file*/
FILE* stream;
stream = fopen("test.csv", "r");
for(i = 0;i < nx; ++i){
fscanf(stream,"%f , %f, %s" , &x[i],&y[i],&z[i]);
printf("%f %f %s \n",x[i],y[i],z[i]);
printf("%i %i %i \n", sizeof(x[i]), sizeof(y[i]), strlen(z[i]));
}

/*Write csv file in binary format*/
FILE * file = fopen("data", "wb");

    fwrite(x, sizeof(x), 1, file);
    fwrite(y,sizeof(y),1,file);
    fclose(file);

/*Open csv binary file*/
file = fopen("data", "rb");
fread(x, sizeof(x), 1, file );
for(i = 0;i < nx; ++i){
printf("%f  \n",x[i]);
}
fclose(file);

return 0;
}
