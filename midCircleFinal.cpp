#include<iostream> 
#include<graphics.h>
using namespace std; 
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
            putpixel(-y + x_centre ,x + y_centre,RED);

            putpixel(x + x_centre,y + y_centre,RED);
            putpixel(-x + x_centre,y + y_centre,RED);
            putpixel(x + x_centre,-y + y_centre,RED);
            putpixel(-x + x_centre,-y + y_centre,RED);

            putpixel(y + x_centre, x + y_centre,RED);
            putpixel(-y + x_centre, x + y_centre,RED);
            putpixel(y + x_centre, -x + y_centre,RED);
            putpixel(-y + x_centre, -x + y_centre,RED);

           
           p=p+2*x+1;
        }
        else
        {
            x++;
            y--;

            putpixel(x + x_centre ,-y + y_centre,RED);
            putpixel(y + x_centre ,x + y_centre,RED);
            putpixel(-y + x_centre ,x + y_centre,RED);

            putpixel(x + x_centre,y + y_centre,RED);
            putpixel(-x + x_centre,y + y_centre,RED);
            putpixel(x + x_centre,-y + y_centre,RED);
            putpixel(-x + x_centre,-y + y_centre,RED);

            putpixel(y + x_centre, x + y_centre,RED);
            putpixel(-y + x_centre, x + y_centre,RED);
            putpixel(y + x_centre, -x + y_centre,RED);
            putpixel(-y + x_centre, -x + y_centre,RED);

        
            p=p+2*x+1-2*y;
        }
    }

}


int main() 
{ 
    int a,b,c;
    cout<<"Enter center and radius\n";
    cin>>a>>b>>c;
    int gd = DETECT, gm; 
    initgraph (&gd, &gm, NULL);
    
    
    midPointCircleDraw(a, b, c);  
    getch();
    return 0; 
} 
