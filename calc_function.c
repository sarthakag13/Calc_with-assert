#include "calcheader.h"
int add(int x,int y){
return(x+y);
}
int sub(int x,int y){
return(x-y);
}
int mul(int x,int y){
return(x*y);
}
int div(int x,int y){
    if(y!=0)
       return(x/y);
       else{
       printf("Invalid Input/n");
       return (-1);
       }
}
int power(int x,int y){
    if(x==0 && y<=0)
    return(-1);
    else
    return(pow(x,y));
}
