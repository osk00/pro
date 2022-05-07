
//X - O Spiel
// Autor: Obada Alkhatib

#include<iostream>

using namespace std;
bool gameStatus = true;
string p[9] ={"0","1","2","3","4","5","6","7","8"};
int pb[9] = {34,54367,13242,7211,9223,347,1246,1635,792124};
bool check(){
    if(pb[0]==pb[4] && pb[4]==pb[8]){
        return false;
    }else if(pb[1]==pb[4] && pb[4]==pb[7]){
        return false;
    }
    else if(pb[6]==pb[4] && pb[4]==pb[2]){
        return false;
    }
    else if(pb[3]==pb[4] && pb[4]==pb[5]){
        return false;
    }


    return true;
}

int main(){
    int x, o;

        cout << "Welcome to the X - O Spiel."<< endl<< endl;
        cout << p[0]<<"  |  "<< p[1]<<"  |  "<< p[2] <<endl;
        cout<<"---------------"<<endl;
        cout << p[3]<<"  |  "<< p[4]<<"  |  "<< p[5] <<endl;
        cout<<"---------------"<<endl;
        cout << p[6]<<"  |  "<< p[7]<<"  |  "<< p[8] <<endl;




    while(gameStatus == true){
        cout << "X du bist dran.."<<endl;
        cin >> x;
         while(pb[x]== 2 || pb[x]==1){
            cout << "Yout little piece of shit"<< endl << "You cant do that...try again."<<endl;
            cout << "X du bist dran.."<< endl;
            cin >> x;
        }
        p[x] = "X";
        pb[x] = 1;
        cout << p[0]<<"  |  "<< p[1]<<"  |  "<< p[2] <<endl;
        cout<<"---------------"<<endl;
        cout << p[3]<<"  |  "<< p[4]<<"  |  "<< p[5] <<endl;
        cout<<"---------------"<<endl;
        cout << p[6]<<"  |  "<< p[7]<<"  |  "<< p[8] <<endl;
        if(check() == false){
            cout << "X hat gewonnen."<<endl;
            break;

        }

        cout << "O du bist dran.."<< endl;
        cin >> o;
        while(pb[o]== 2 || pb[o]==1){
            cout << "Yout little piece of shit"<< endl << "You cant do that...try again."<<endl;
            cout << "O du bist dran.."<< endl;
            cin >> o;
        }

        p[o] = "O";
        pb[o] = 2;
        cout << p[0]<<"  |  "<< p[1]<<"  |  "<< p[2] <<endl;
        cout<<"---------------"<<endl;
        cout << p[3]<<"  |  "<< p[4]<<"  |  "<< p[5] <<endl;
        cout<<"---------------"<<endl;
        cout << p[6]<<"  |  "<< p[7]<<"  |  "<< p[8] <<endl;
        if(check() == false){
            cout << "O hat gewonnen."<<endl;
            break;

        }
        system("CLS");
        cout << p[0]<<"  |  "<< p[1]<<"  |  "<< p[2] <<endl;
        cout<<"---------------"<<endl;
        cout << p[3]<<"  |  "<< p[4]<<"  |  "<< p[5] <<endl;
        cout<<"---------------"<<endl;
        cout << p[6]<<"  |  "<< p[7]<<"  |  "<< p[8] <<endl;
        //system ("pause");
    }

    return 0;
}
