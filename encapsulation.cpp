#include<iostream>
using namespace std;
class Encap{
    private:
    int age;
    public:
    string name;
    void setvalue(int a){
        age = a;
        cout<<age<<endl;
    }
    void show(){
        name = "viru";
        cout<<name<<endl;
    }
};
int main(){
    Encap e1;
    e1.show();
    e1.setvalue(19);
    return 0;
}