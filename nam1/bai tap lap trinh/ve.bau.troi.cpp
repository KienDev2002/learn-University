#include<stdio.h>


#include<conio.h>

#include<stdlib.h>

#include<math.h>

#include<dos.h>

struct point

{ int x,y,s,c,h;

};

void vediem(point,int);

void main(){


{point p[100];

int gdrv=DETECT,gmode,errorcode,mx,my,i;

initgraph(&gdrv,&gmode,"..\\BGI");

errorcode=graphresult();

if (errorcode!=grOk)

{printf("Graphics error : %s\n",grapherrormsg(errorcode));

printf("Press any key to halt ...");

getch();

exit(1);

}
}
mx=getmaxx();my=getmaxy();

randomize();

for (i=0;i<100;i++)

{p[i].x=random(mx);

p[i].y=random(my);

p[i].s=random(4);

p[i].c=random(16);

p[i].h=random(2);

}

while (!kbhit())

{for (i=0;i<100;i++) vediem(p[i],1);

delay(100);

for (i=0;i<100;i++) vediem(p[i],0);

for (i=0;i<100;i++)

{if (p[i].h)

{p[i].s++;

if (p[i].s>=3) p[i].h=0;

}

else

{p[i].s--;

if (p[i].s<=3) p[i].h=1;

}

}

}

closegraph();

}

void vediem(point p,int v)

{int mau;

if (v) mau=p.c;
}

