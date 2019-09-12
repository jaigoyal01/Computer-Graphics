#include<graphics.h>
#include<iostream>
using namespace std;

void ellipse()
{
    float rx,ry,x_centre=300,y_centre=300;
    rx=70;
    ry=50;
    float x,y,x2,y2;
    x=0;y=ry;

    putpixel(x+x_centre,y+y_centre,RED);

    float pk=(ry*ry)-(rx*rx)*ry+(rx*rx)/4;
    while(2*(ry*ry)*x <=2*(rx*rx)*y)
    {
        putpixel(x+x_centre,y+y_centre,RED);
        putpixel(-x+x_centre,y+y_centre,RED);
        putpixel(x+x_centre,-y+y_centre,RED);
        putpixel(-x+x_centre,-y+y_centre,RED);
        //Region 1
        if(pk<0)
        {
            x++;
            pk=pk+2*(ry*ry)*x+ ry*ry;
        }
        else
        {
            x++;
            y--;
            pk=pk+2*(ry*ry)*x-2*(rx*rx)*(y) + ry*ry;
        }
   
        
        // putpixel(y+x_centre,-x+y_centre,RED);
        // putpixel(-y+x_centre,x+y_centre,RED);

        

    }
    x2=x;y2=y;
    putpixel(x2+x_centre,y2+y_centre,YELLOW);
    float rx2=rx*rx,ry2=ry*ry;
    float pk2=ry2*(x2+0.5)*(x2+0.5)+rx2*(y2)*(y2)-rx2*ry2;
    while(y2>=0)
    {

        putpixel(x2+x_centre,y2+y_centre,YELLOW);
        putpixel(-x2+x_centre,y2+y_centre,YELLOW);
        putpixel(x2+x_centre,-y2+y_centre,YELLOW);
        putpixel(-x2+x_centre,-y2+y_centre,YELLOW);
        if(pk2<0)
        {
            y2--;
            pk2=pk2-2*rx2*y+rx2;
        }
        else
        {
            x2++;
            y2--;
            pk2=pk2+2*ry2*x-2*rx2*(y)+rx2;
        }
        

        // putpixel(y2+x_centre,-x2+y_centre,RED);
        // putpixel(-y2+x_centre,x2+y_centre,RED);

        
    }
      
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");


    ellipse();


    getch();
    closegraph();
return 0;
}