#ifndef VEC_H
#define VEC_H
#include <iostream>
using namespace std;

	class Vec {

		public:
			float x,y;
			static Vec null;
			Vec() {
				x=0;
				y=0;
			}	
			Vec(float q, float w) {
				x=q;
				y=w;
			}
			void add(Vec n) {
				x += n.x;
				y += n.y;
			}
	
			void print() {
				cout << "(" << x << ", " << y << ")" << endl;
			}


	};
	Vec Vec::null = Vec(0,0);

#endif