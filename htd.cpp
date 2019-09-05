#include<iostream>
#include<graphics.h> 
using namespace std;
void DDA(int X0, int Y0, int X1, int Y1) 
{ 
    int dx = X1 - X0; 
    int dy = Y1 - Y0; 
  
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy); 
  
    
    float Xinc = dx / (float) steps; 
    float Yinc = dy / (float) steps; 
  

    float X = X0; 
    float Y = Y0; 
    for (int i = 0; i <= steps; i++) 
    {
        putpixel (X,Y,RED);
        X += Xinc;    
        Y += Yinc;  
        delay(2);            
    } 
} 
void midPointCircleDraw(int x_centre, int y_centre, int r) 
{ 
    //First Pint
    int x=0,y=r;
    putpixel(x+x_centre,y+y_centre,RED);
    int p = 1-r;
    while(x<=y)
    {
        if(p<0)
        {
           x++;
       

            putpixel(x + x_centre ,-y + y_centre,RED);
            putpixel(y + x_centre ,x + y_centre,RED);
            // putpixel(-y + x_centre ,x + y_centre,RED);

            putpixel(x + x_centre,y + y_centre,RED);
            // putpixel(-x + x_centre,y + y_centre,RED);
            putpixel(x + x_centre,-y + y_centre,RED);
            // putpixel(-x + x_centre,-y + y_centre,RED);

            putpixel(y + x_centre, x + y_centre,RED);
            // putpixel(-y + x_centre, x + y_centre,RED);
            putpixel(y + x_centre, -x + y_centre,RED);
            // putpixel(-y + x_centre, -x + y_centre,RED);

           
           p=p+2*x+1;
        }
        else
        {
            x++;
            y--;

            putpixel(x + x_centre ,-y + y_centre,RED);
            putpixel(y + x_centre ,x + y_centre,RED);
            // putpixel(-y + x_centre ,x + y_centre,RED);

            putpixel(x + x_centre,y + y_centre,RED);
            // putpixel(-x + x_centre,y + y_centre,RED);
            putpixel(x + x_centre,-y + y_centre,RED);
            // putpixel(-x + x_centre,-y + y_centre,RED);

            putpixel(y + x_centre, x + y_centre,RED);
            // putpixel(-y + x_centre, x + y_centre,RED);
            putpixel(y + x_centre, -x + y_centre,RED);
            // putpixel(-y + x_centre, -x + y_centre,RED);

        
            p=p+2*x+1-2*y;
        }
    }

}
void flood(int x,int y)
{
    putpixel(x,y,BLUE);
    if(getpixel(x+1,y)== BLACK)
        flood(x+1,y);
    if(getpixel(x-1,y)== BLACK)
        flood(x-1,y);
    if(getpixel(x,y+1)== BLACK)
        flood(x,y+1);
    if(getpixel(x,y-1)== BLACK)
        flood(x,y-1);
}
int main() 
{ 
    int gd = DETECT, gm; 
    initgraph (&gd, &gm, "");
    int a,b,c,d;
    
    //FOR H

    DDA(30,30,100,30);
    DDA(30,30,30,60);
    DDA(100,30,100,60);
    DDA(50,60,50,200);
    DDA(30,200,50,200); 
    DDA(30,200,30,230);
    DDA(30,230,100,230);
    DDA(30,60,50,60); 
    DDA(80,60,80,120); 
    DDA(80,60,100,60); 
    DDA(80,150,80,200); 
    DDA(100,200,100,230); 
    DDA(80,200,100,200); 
    
    DDA(80,120,170,120); 
    DDA(80,150,170,150); 
    
    DDA(170,120,170,60); 
    DDA(170,150,170,200); 

    DDA(150,30,150,60); 
    DDA(150,60,170,60); 
    DDA(200,60,220,60); 
    DDA(220,30,220,60); 
    DDA(150,30,220,30); 
    DDA(170,200,150,200);
    DDA(150,200,150,230);
    DDA(150,230,220,230);
    DDA(220,230,220,200); 
    DDA(220,200,200,200);
    DDA(200,200,200,60);

    flood(31,50);

    //T
    DDA(250,30,350,30);
    DDA(350,30,350,60);
    DDA(350,60,320,60);
    DDA(320,60,320,230);
    DDA(320,230,280,230);
    DDA(280,230,280,60);
    DDA(280,60,250,60);
    DDA(250,60,250,30);

    flood(280,50);

    //D
    DDA(380,30,380,230);
    midPointCircleDraw(380,130,100);
    DDA(390,50,390,210);
    midPointCircleDraw(390,130,80);
    putpixel();
    putpixel();
    flood(380,25);








    getch();
    return 0; 
} 
