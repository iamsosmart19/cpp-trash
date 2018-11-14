#include <iostream>

class Polygon {
public:
    Polygon() {
        this->length = 1;
        this->width = 2;
        this->Name = "poly";
    }
    
    Polygon operator+(const Polygon& P) {
        Polygon dinosaur;
        dinosaur.length += P.length;
        dinosaur.width += P.width;
        return dinosaur;
    }
    
    bool operator>(const Polygon& P) {
        if (this->length * this->width > P.length * P.width ) {
            return true;
        }
        else {
            return false;
        }
    }
    
    int rlength(){
        return length;
    }
    int rwidth(){
        return width;
    }
    void setLength(int len) {
        length = len;
    }
    void Area() {
        printf("IDK LOL\n");
    }
    
protected:
    int length, width;
    std::string Name;
};

class Quadrilateral : public Polygon {
public:
    void Area() {
        printf("Area is %d\n", length * width);
    }
};

class Triangle : public Polygon {
public:
    
};

int main(int argc, char* argv[]) {
    Polygon lol;
    Quadrilateral quad;
    quad.setLength(12);
    quad.Area();
    return 0;
}
