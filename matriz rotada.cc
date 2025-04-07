#include <iostream>
using namespace std;
int main (){
    int n;
    int table[100][100];
    int rot[100][100];
    cout << "Ingrese el tamaño de la matrix: ";
    cin >> n;
    
    int num =  1 ;
    cout<<"matriz original "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            table[i][j]=num++;
            cout<<table[i][j]<<" ";
        }
    cout<<endl;
    }
    
    cout<<"matriz rotada "<<endl;
     
    for (int i = 0;i<n;i++){
        for (int j=0; j<n;j++){
            rot[j][n - 1 - i]=table[i][j];
            cout<<rot[i][j]<<" ";
            
        }
    cout<<endl;
    }
    

    return 0;
 
}
