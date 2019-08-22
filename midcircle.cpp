#include<iostream> 
#include<graphics.h>
using namespace std; 
void midPointCircleDraw(int x_centre, int y_centre, int r) 
{ 
    int x = r, y = 0; 
    // cout << "(" << x + x_centre << ", " << y + y_centre << ") ";
    putpixel(x + x_centre ,y + y_centre,RED); 

    if (r > 0) 
    { 
        // cout << "(" << x + x_centre << ", " << -y + y_centre << ") "; 
        putpixel(x + x_centre ,-y + y_centre,RED);
        // cout << "(" << y + x_centre << ", " << x + y_centre << ") ";
        putpixel(y + x_centre ,x + y_centre,RED);
        // cout << "(" << -y + x_centre << ", " << x + y_centre << ")\n"; 
        putpixel(-y + x_centre ,x + y_centre,RED);
    } 
    int P = 1 - r; 
    while (x > y) 
    {  
        y++; 
          
        if (P <= 0) 
            P = P + 2*y + 1; 
        else
        { 
            x--; 
            P = P + 2*y - 2*x + 1; 
        } 
          
        if (x < y) 
            break; 
          
        // cout << "(" << x + x_centre << ", " << y + y_centre << ") "; 
        // cout << "(" << -x + x_centre << ", " << y + y_centre << ") "; 
        // cout << "(" << x + x_centre << ", " << -y + y_centre << ") "; 
        // cout << "(" << -x + x_centre << ", " << -y + y_centre << ")\n"; 
        putpixel(x + x_centre,y + y_centre,RED);
        putpixel(-x + x_centre,y + y_centre,RED);
        putpixel(x + x_centre,-y + y_centre,RED);
        putpixel(-x + x_centre,-y + y_centre,RED);


        if (x != y) 
        { 
            // cout << "(" << y + x_centre << ", " << x + y_centre << ") "; 
            // cout << "(" << -y + x_centre << ", " << x + y_centre << ") "; 
            // cout << "(" << y + x_centre << ", " << -x + y_centre << ") "; 
            // cout << "(" << -y + x_centre << ", " << -x + y_centre << ")\n"; 
            putpixel(y + x_centre, x + y_centre,RED);
            putpixel(-y + x_centre, x + y_centre,RED);
            putpixel(y + x_centre, -x + y_centre,RED);
            putpixel(-y + x_centre, -x + y_centre,RED);

        } 
    } 
} 
  
int main() 
{ 
    int gd = DETECT, gm; 
    initgraph (&gd, &gm, "");
    int a,b,c;
    cout<<"Enter center and radius\n";
    cin>>a>>b>>c;
    midPointCircleDraw(a, b, c);  
    getch();
    return 0; 
} 