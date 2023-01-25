#ifndef Object_h
#define Object_h


class Object{
   
    public:

    static int count;

    Object(){
        count++;
    }

    Object(const Object&){ //const = only takes in Object, pass by reference
        count++;
    }

};


#endif