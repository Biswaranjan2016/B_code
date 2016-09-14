//C code for finding the greatest among numbers using relational operator.
#include<stdio.h>
int main(){
    int a,b,c,d,e,f,largest;
    a=10;
    b=20;
    c=5;
    d=25;
    e=35;
    f=77;
    //largest among 3
    largest=(a>b&&a>c)?a:((b>c)?b:c);
    printf("%d\n",largest);
    //largest among 4 numbers
    largest=(a>b&&a>c&&a>d)?a:((b>c&&b>d)?b:((c>d)?c:d));
    printf("%d\n",largest);
    //largest among 5 numbers
    largest=(a>b&&a>c&&a>d&&a>e)?a:((b>c&&b>d&&b>e)?b:((c>d&&c>e)?c:((d>e)?d:e)));
    printf("%d\n",largest);
}
