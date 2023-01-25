 #include <iostream>
using namespace std;

//Forward declaration of Number and Coord3D
class Object;
class Coord3D;
class Number;

//The Object ADT
class Object {
public:
	virtual Object* multiply ( const Object* obj ) const = 0;
	virtual void print() = 0;
	virtual ~Object() {}
};

class Number : public Object {
  public:
    int num;

    // default constructor
    Number()
      : num{0}
    {
    }

    // parameterised constructor
    Number(int num)
      : num{num}
    {
    }

    // destructor
    ~Number() {
    }

    /**
     * if other is a Number, then this should return a Number
     * if other is a Coord3D, then this should return a Coord3D
     * Hint: typeid(var) might be helpful operator to know the type of an object at runtime
     */
    Object *multiply(const Object *other) const;

    void print() {
      cout << "num = " << num << "\n";
    }
};


class Coord3D : public Object {
  public:
    int x, y, z;

    Coord3D()
      : x{0}, y{0}, z{0}
    {
    }

    Coord3D(int x1, int y1, int z1)
      : x{x1}, y{y1}, z{z1}
    {
    }

    ~Coord3D() {
    }

    // This should return a Coord3D
    Object *multiply(const Object *other) const;

    void print() {
        cout << "x = " << x << ", " << "y = " << y << ", " << "z = " << z <<"\n";
    }
};

Object *Number::multiply(const Object *other) const {

  if(typeid(*other) == typeid(Number)) {
    const Number *number = (Number *) other;
    return new Number(num * number->num);
  } 

  else if (typeid(*other) == typeid(Coord3D)) {
    const Coord3D *coord3D = (Coord3D *) other;
    return new Coord3D(num * coord3D->x, num * coord3D->y, num * coord3D->z);
  }


}

Object *Coord3D::multiply(const Object *other) const {
  if(typeid(*other) == typeid(Number)) {
    const Number *number = (Number *) other;
    return new Coord3D(number->num * x, number->num * y, number->num * z);
  } 

  else if(typeid(*other) == typeid(Coord3D)) {
    const Coord3D *coord3D = (Coord3D *) other;
    return new Coord3D(x * coord3D->x, y * coord3D->y, z * coord3D->z);

  }
}

