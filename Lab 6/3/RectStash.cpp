#ifndef RSTASH_H
#define RSTASH_H
#include "Vec.h"
#include "Rect.h"
#include <iostream>
#include <vector>
#include "RectStash.h"
using namespace std;



int main()
{

    RectStash stash;
    Rect* rect;
    float x, y, w, h;
    stash.initialize(10);

    cin >> x >> y >> w >> h;

  
    while (x > 0 || y > 0 || h > 0 || w > 0){

        rect = new Rect(x,y,w,h);
        stash.add(&rect);
        cin >> x >> y >> w >> h;
    }

    cin >> x >> y;



    while (x!=-99 || y != -99){

        Vec vect(x, y);

   for(int i = 0; i <stash.count(); i++){
        rect = (Rect*)stash.fetch(i);
        //cout << rect << "\n"; 
        
        if (rect->contains(vect)){
            cout<<"in ";
        }
        else{
            cout<<"out ";
        }
        
    }

        cout << "\n";
        cin >> x >> y;

    }
}

#endif
