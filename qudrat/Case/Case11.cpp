#include <iostream>
#include <math.h>
using namespace std;
int main() {
    char c;
    int k1, k2;
    cin >> c >> k1 >> k2;
    switch(c){
        case 's':
        switch(k1){
            case 0:
            switch(k2){
                case 0: c = 'j'; break;
                case 1: c = 's'; break;
                case 2: c = 'g'; break;
            } break;
            case 1:
            switch(k2){
                case 0: c = 's'; break;
                case 1: c = 'j'; break;
                case 2: c = 'q'; break;
            } break;
            case 2:
            switch(k2){
                case 0: c = 'g'; break;
                case 1: c = 'q'; break;
                case 2: c = 's'; break;
            } break;
        }break; 
        case 'q':
        switch(k1){
            case 0:
            switch(k2){
                case 0: c = 'g'; break;
                case 1: c = 'q'; break;
                case 2: c = 's'; break;
            } break;
            case 1:
            switch(k2){
                case 0: c = 'q'; break;
                case 1: c = 'g'; break;
                case 2: c = 'j'; break;
            } break;
            case 2:
            switch(k2){
                case 0: c = 's'; break;
                case 1: c = 'j'; break;
                case 2: c = 'q'; break;
            } break;
        }break; 
        case 'j':
        switch(k1){
            case 0:
            switch(k2){
                case 0: c = 's'; break;
                case 1: c = 'j'; break;
                case 2: c = 'q'; break;
            } break;
            case 1:
            switch(k2){
                case 0: c = 'j'; break;
                case 1: c = 's'; break;
                case 2: c = 'g'; break;
            } break;
            case 2:
            switch(k2){
                case 0: c = 'q'; break;
                case 1: c = 'g'; break;
                case 2: c = 'j'; break;
            } break;
        }break; 
        case 'g':
        switch(k1){
            case 0:
            switch(k2){
                case 0: c = 'q'; break;
                case 1: c = 'g'; break;
                case 2: c = 'j'; break;
            } break;
            case 1:
            switch(k2){
                case 0: c = 'g'; break;
                case 1: c = 'q'; break;
                case 2: c = 's'; break;
            } break;
            case 2:
            switch(k2){
                case 0: c = 'j'; break;
                case 1: c = 's'; break;
                case 2: c = 'g'; break;
            } break;
        }break; 
    }
    cout << c;
    return 0;
}
