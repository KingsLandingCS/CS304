#include<iostream>
using namespace std;

class Room{
    private:
    double height;
    double width;

    public:
    Room(){
        height = 0;
        width = 0;
        cout<<"default constructor is called"<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Width: "<<width<<endl;
    }

    Room(double h){
        height = h;
        width=0;
        cout<<"One Argument constructor is called"<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Width: "<<width<<endl;
    }

    Room(double h, double w){
        height = h;
        width=w;
        cout<<"two Argument constructor is called"<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Width: "<<width<<endl;
    }

};

int main(){

    Room obj;
    Room obj2(10);
    Room obj3(10,20);

    return 0;
}