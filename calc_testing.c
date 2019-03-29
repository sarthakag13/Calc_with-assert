#include "calcheader.h"
void add_testing(){
assert(10==add(8,2));
printf("both positive value sum is correct\n");
assert(6==add(8,-2));
printf("1st positive 2nd negative value sum is correct\n");
assert(-6==add(-8,2));
printf("1st negative 2nd positive value sum is correct\n");
assert(-10==add(-8,-2));
printf("both negative value sum is correct\n");
}

void sub_testing(){
assert(6==sub(8,2));
printf("both positive value sub is correct\n");
assert(10==sub(8,-2));
printf("1st positive 2nd negative value sub is correct\n");
assert(-10==sub(-8,2));
printf("1st negative 2nd positive value sub is correct\n");
assert(-6==sub(-8,-2));
printf("both negative value sub is correct\n");
}

void mul_testing(){
assert(16==mul(8,2));
printf("both positive value multiplication is correct\n");
assert(-16==mul(8,-2));
printf("1st positive 2nd negative value multiplication is correct\n");
assert(-16==mul(-8,2));
printf("1st negative 2nd positive value multiplication is correct\n");
assert(16==mul(-8,-2));
printf("both negative value multiplication is correct\n");
assert(0==mul(0,-2));
printf("one zero value multiplication is correct\n");
}

void div_testing(){
assert(4==div(8,2));
printf("both positive value division is correct\n");
assert(-4==div(8,-2));
printf("nume positive deno negative value division is correct\n");
assert(-4==div(-8,2));
printf("nume negative deno positive value division is correct\n");
assert(4==div(-8,-2));
printf("both negative value division is correct\n");
assert(0==div(0,-2));
printf("num zero value division is correct\n");
assert(-1==div(8,0));
printf("deno zero value division is correct\n");
}

void power_testing(){
assert(4==power(2,2));
printf("both positive value power output is correct\n");
assert(0==power(2,-2));
printf("1st positive 2nd negative value power output is correct\n");
assert(64==power(-8,2));
printf("1st negative 2nd positive value power output is correct\n");
assert(0==power(-8,-2));
printf("both negative value power output is correct\n");
assert(-1==power(0,-2));
printf("1st zero value 2nd negative power output is correct\n");
assert(0==power(0,5));
printf("1st zero value 2nd positive power output is correct\n");
assert(1==power(5,0));
printf("1st positive value 2nd zero power output is correct\n");
assert(1==power(-2,0));
printf("2nd zero value power output is correct\n");
}
