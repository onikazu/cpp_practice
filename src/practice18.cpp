// while
# include <iostream>
using namespace std;

int main(){
    int a = 0;
    
    while(a < 20){
        cout << a << endl;
        a++;
    }
    
    do{
        cout << "in do while" << endl;
    }while(a != 20);
    
    return 0;
}