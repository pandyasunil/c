#include<stdio.h>
struct one
{
char ch;
int i;
float f;
};

void main()
{
struct one st={'a',10,23.5};
//st.ch='a';
//st.i=10;
//st.f=23.5;
//scanf("%c%d%f",&st.ch,&st.i,&st.f);

printf("%c %d %f \n",st.ch,st.i,st.f);
}

