#include <stdio.h>

//struct Rectangle{
//    int length;
//    int breadth;
//};
//
//void changeLength(struct Rectangle *p, int l){
//    p->length = l;
//
//
//}
//
//int main() {
//    struct Rectangle r = {10,5};
//    changeLength(&r, 20);
//    printf("%d", r );
//}

struct Test{
    int A[5];
    int n;
};

void fun(struct Test t1){
    t1.A[0] = 12;

}

int main(){

    struct Test t = {{2,4,6,8,10}, 5} ;
    fun(t);
}