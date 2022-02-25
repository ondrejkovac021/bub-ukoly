#include <stdio.h>
#include <math.h>

float DegToRad(float st){
    st = st * 0.0174532925;
    return st; 
}

float RadToDeg(float rd){
    rd = rd / 0.0174532925;
    return rd;
}

int main(){
    printf("deg; \trad; \tsin; \tcos;\n");
    for(int i = 0; i<=360;i += 30){
        printf("%i; %f; %f; %f;\n",i, DegToRad(i), sin(DegToRad(i)), cos(DegToRad(i)) );
    }

    return 0;
}
