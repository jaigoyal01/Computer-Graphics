#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void bres(int x0, int y0, int x1, int y1) 
{
    int dx=x1-x0,dy=y1-y0;
    int pk=2*dy-dx;
    putpixel(x0,y0,RED);
    for(int v=0;v<dx;v++)
    {
        if(pk<0)
        {
            x0++;
            putpixel(x0,y0,RED);
            pk=pk+2*dy;
        }
        if(pk>0)
        {
            pk=pk+2*dy-2*dx;
            x0++;y0++;
            putpixel(x0,y0,RED);
        }
    }
}
int main()
{
    int gd = DETECT, gm; 
    initgraph (&gd, &gm, "");
    int a,b,c,d;
    cout<<"Enter two points\n";
    cin>>a>>b>>c>>d;

    bres(a,b,c,d); 
    getch();
    return 0; 
}
