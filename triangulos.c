#include <math.h>
#include <stdio.h>
#include <assert.h>

int main() {
    int a, b, c;
    assert(scanf("%d%d%d", &a, &b, &c)==3);
     double perimetro = (a+b+c);
     double p = (perimetro)/2;
     double area = sqrt(p*(p-a)*(p-b)*(p-c));

    if (( (a+b) <= c) || ( (a+c) <= b) || ( (b+c) <= a)) {
        
        printf("INVALIDO\n");
        return 0;
    }
    if(((a*a)+(b*b)==(c*c)) || ((a*a)+(c*c)==(b*b)) || ((c*c)+(b*b)==(a*a))){

        printf("RETANGULO %.0f %.2f\n", perimetro, area);
        
        return 0;
    }
    if (a==b && a==c && b==c){
        
        printf("EQUILATERO %.0f %.2f\n", perimetro, area);

        return 0;
    }
    if (a==b || b==c || a==c){

        printf("ISOSCELES %.0f %.2f\n", perimetro, area);

        return 0;
    }
    if (a!=b && a!=c && b!=c){
        printf("ESCALENO %.0f %.2f\n", perimetro, area);

        return 0;
    }
    
    return 0;
}