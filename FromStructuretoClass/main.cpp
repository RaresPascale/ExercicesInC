#include <iostream>
 using namespace std;
 /* structura devine clasa
  * toate functiile intra in interiorul clasei
  * se renunta la pointeri intrucat adresarea va fi directa
  * nu vom mai avea nevoie de ei pentru a accesa datele si pt a le modifica
   */

class Rectangle{
    private:
        int length;
        int breadth;

    public:

    void initialise(int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }

    void changeLength(int l){
        length = l;
    }
};

int main() {
    Rectangle r;
    r.initialise(10,5);
    r.area();
    r.changeLength(20);

    return 0;
}

