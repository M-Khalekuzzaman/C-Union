//Like structure,union is a user defined data type.In union, all members share the same memory location.
//why use union in c programming?
//=Union can be useful in many situations where we want to use same memory location share two or more members;
#include<stdio.h>
union test{
int x,y ;

};
int main()
{
    union test t1;
    t1.x = 10;

    printf(" X value is : %d\n",t1.x);
    printf(" Y value is : %d\n",t1.y);
    t1.y = 20;
    printf(" X value is : %d\n",t1.x);
    printf(" Y value is : %d\n",t1.y);

    getch();
}
