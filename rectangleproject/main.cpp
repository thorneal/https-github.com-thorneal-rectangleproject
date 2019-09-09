//
//  main.cpp
//  rectangleproject
//
//  Created by Abbie Thorne on 9/5/19.
//  Copyright © 2019 Abbie Thorne. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int width, lngth, area, peri;
    cout << "\n\n Find the permimeter and area of a rectangle :\n";
    cout << "-------------------------------------------------\n";
    cout<<" Input the length of the rectangle : ";
    cin>>lngth;
    cout<<" Input the width of the rectangle : ";
    cin>>width;
    area=(lngth*width);
    peri=2*(lngth+width);
    cout<<" The area of the rectangle is : "<< area << endl;
    cout<<" The perimeter of the rectangle is : "<< peri << endl;
    cout << endl;
    return 0;
    }
