#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    int a[100];
    char str[100];
    
    //cout << "Doc vao 1 xau ky tu: ";
    //cin >> str;
    //cin.getline(str,100);
    
    //cout << "Xau vua doc vao la: " << str << endl;
    ifstream fin("test2015.txt");
    fin.getline(str,100);
    cout << "Xau vua doc tu file la: " << str << endl; 
    fin.getline(str,100);
    cout << str << endl;
    fin >> n;
    for (int i = 0; i < n;i++)
        fin >> a[i];    


    fin.close();

    //cout << "Xau vua doc tu file la: " << str << endl;  
    cout << n << endl;
    for (int i = 0; i < n;i++)
        cout << a[i] << " ";
    cout << endl;
  
        
    system("PAUSE"); 
}
