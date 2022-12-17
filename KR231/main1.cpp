#include <iostream>

class wood {
public:
    int length, width, height, weight;
    wood(int a, int b, int c, int d){
        length=a;
        width=b;
        height=c;
        weight=d;
    }
    wood(int a, int b, int c){
        length=a;
        width=b;
        height=c;
        weight=1;
    }
    wood(int a, int b){
        length=a;
        width=b;
        height=1;
        weight=1;
    }
    wood(int a){
        length=a;
        width=1;
        height=1;
        weight=1;
    }
    wood(){
        length=1;
        width=1;
        height=1;
        weight=1;

    }
    int GetVolume(){
        return length * width * height;
    }
    int GetLength(){
        return _Gett(1);
    }
    int GetWidth(){
        return _Gett(2);
    }
    int GetHeight(){
        return _Gett(3);
    }
    int GetWeight(){
        return _Gett(4);
    }
    void SetLength(int a){
        length=a;
    }
    void SetWidth(int a){
        width=a;
    }
    void SetHeight(int a){
        height=a;
    }
    void SetWeight(int a){
        weight=a;
    }
    void print(){
        std::cout<<"Length: "<<length<<std::endl;
        std::cout<<"Width:  "<<width<<std::endl;
        std::cout<<"Height: "<<height<<std::endl;
        std::cout<<"Weight: "<<weight<<std::endl;
    }
    
    wood operator=(wood& a){
        a.SetLength(length);
        a.SetWidth(width);
        a.SetHeight(height);
        a.SetWeight(weight);
        return a;
    }
    
private:
    int _Gett(int i){
        switch (i) {
            case 1:
                return length;
                break;
            case 2:
                return width;
                break;
            case 3:
                return height;
                break;
            case 4:
                return weight;
                break;
            default:
                break;
        }
        return 0;
    }
    
    
};


int main() {
    wood a(1,2,3,4), b, c(4,3,2), d=a;
    a.print();
    std::cout<<"\n";
    d.print();
    int v=a.GetVolume();
    std::cout<<v<<std::endl;
    c.SetWeight(1);
    c.print();
    std::cout<<b.GetLength()<<std::endl;
}
