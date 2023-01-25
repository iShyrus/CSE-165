#ifndef RECT_H
#define RECT_H
#include <iostream>
#include "Vec.h"
using namespace std;


	class Rect {
	
		float x,y, width, height;

		public:

			Rect(float x1, float y1, float w, float h) {
				x = x1;
				y = y1;
				width = w;
				height = h;
			}
	
			bool contains(Vec n) {

				// cout<<"Test:"<<"\n";

				// cout<<x<<" "<<n.x<<" "<<x+width <<"\n";
 				// cout<<y<<" "<<n.y<<" "<<y+height<<"\n\n";	
				

				if(x<=n.x && (n.x+width) >=n.x && y>n.y && (y-height)<= n.y){
					return 1;
				}
				else{
					return 0;
				}


			}

			


	};


#endif