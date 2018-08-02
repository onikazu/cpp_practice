#include <iostream>
using namespace std;

int nResults[] = {
    641, 703, 405, 598, 402, 752, 330,   0, 445, 662,
    254, 710, 467, 530, 548, 485, 244, 396, 601, 510,
    532, 687, 623, 420, 647, 587, 490, 647, 575, 688,
    764, 633, 712, 312, 655, 425, 722, 631, 680, 602
    };

int main(){
    int sum = 0;
    for(int i=0; i < 40; i++){
        sum += nResults[i];
    }
    
    double ave = sum / 40.0;
    
    cout << "平均点" << ave << endl;
    return 0;
}