#include <iostream>
#include <fstream> //Thao tac voi file
#include <stdlib.h>

using namespace std;

int ReadFromFile(float a[], int &n)
{
    
    ifstream in("input_max.txt");

    in >> n;
    for (int i = 0;i < n;i++)
        in >> a[i];
    in.close();
    return 0;
    
}

int TimDayconMax(float a[], int n, int &d, int &c)
{
    int maxx = 0;
    for (int i = 0; i < n-1;i++){
        int j = i;
        // Tim do dai cua day con
        while (a[j] <= a[j+1]) j++;
        // Tim max cua no. Chu y j-i+1 chinh do dai cua day tu i --> j
        if (j-i+1 > maxx) {
            maxx = j-i+1;
            d = i;
            c = j;
        }  
   
    }

    return maxx;         
}

int main()
{
    float a[100];
    int n;
    //Nhap mang
    ReadFromFile(a,n);
    int dau,cuoi;
    int dodaimax = TimDayconMax(a,n,dau,cuoi);
    
    cout << "Do dai max la: " << dodaimax << endl;
    for (int i = dau; i <=cuoi; i++) cout << a[i] << " ";
    cout << endl;  
    
    system("PAUSE");    
    return 0;
}
