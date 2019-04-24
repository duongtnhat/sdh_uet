#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Nhap xau vao:";
    cin.getline(str,100);
    
    //Xu ly
    int i = 0;
    int demsotu = 0;
    while (str[i]!=0){
        if ((str[i] != ' ' && str[i] != '.'&&str[i] != ',')&&
        (str[i+1]==0 || str[i+1] == ' '||str[i+1]== '.'||str[i+1]== ','))
            demsotu = demsotu + 1;                
        i = i + 1;     
    }
    
    cout << "So tu cua xau la: " << demsotu << endl;
    system("PAUSE");    
    return 0;
}
