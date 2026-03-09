#include <iostream>
using namespace std;
main(){
	// numero es positivo>0 o negativo<0
	int num=0;
	cout<<"ingrese el numero: ";
	cin>>num;
	if (num>0){// >0
		//entra aca cuando la condicion es verdadera
		cout<<"Positivo"<<endl;
	}else{//<=a 0
			if(num==0){
				cout<<"Neutro"<<endl;
				}else{//<0
					cout<<"Negativo"<<endl;
		}
	}
	system("pause");
}
