#include <iostream>
#include <string>

using namespace std;

enum Tzona{
    norte=0,
    sur=1,
    este=2,
    oeste=3,
    centro=4
};

struct Sucursales{
    int id;
    string direccion=" ";
    Tzona zona;
    int facturacion=0;
}suc[25];

void cargoSucursal(){
    system("cls");
    int posicion=0;
    bool esta=true;
    int id=0;
    cout<<"Carga de sucursal\n";
    while(id<100||id>999){
        cout<<"\nIngrese el id de la sucursal (debe estar entre 100 y 999): ";
        cin>>id;
    }
    while(esta==true){
        if(suc[posicion].direccion==" "){
            cout<<"\nIngrese la direccion: ";
            string direccion;
            cin.ignore();
            getline(cin, direccion);
            suc[posicion].direccion=direccion;
            int z=5;
            while (z>4 || z<0){
                cout<<"\nIngrese la zona a la que pertenece la sucursal\n0: Norte\n1: Sur\n2: Este\n3: Oeste\n4: Centro\n\nOpcion elegida: ";
                cin>>z;
            }
            Tzona zon=static_cast<Tzona>(z);
            cout<<"\nIngrese la facturacion de la sucursal: ";
            int facturacion=0;
            cin>>facturacion;
            suc[posicion].facturacion=facturacion;
            suc[posicion].id=id;
            suc[posicion].zona=zon;
            esta=false;
            cout<<"\n\nResultado: Carga correcta\n";
        }
        posicion++;
    }
}

void mostrar(){
    int posicion=0;
    bool ultimo=true;
    while(suc[posicion].id!=0 &&ultimo==true){
        if(suc[posicion].id!=0){
            cout<<"\nID\t"<<suc[posicion].id;
            cout<<"\nZona\t";
            switch(suc[posicion].zona){
                case norte: cout<<"Norte";break;
                case oeste: cout<<"Oeste";break;
                case este: cout<<"Este";break;
                case sur: cout<<"Sur";break;
                case centro: cout<<"Centro";break;
            }
            cout<<"\nDireccion\t"<<suc[posicion].direccion<<"\nFacturacion en $: "<<suc[posicion].facturacion<<"$"<<"\n-------------------------------\n";
        }
        posicion++;
    }
}

void calcularPorZona(){
    int totalNorte=0,totalSur=0,totalEste=0,totalOeste=0,totalCentro=0;
    for(int i=0;i<25; i++){
        switch(suc[i].zona){
            case norte: totalNorte=totalNorte+suc[i].facturacion; break;
            case sur: totalSur=totalSur+suc[i].facturacion;  break;
            case este:totalEste=totalEste+suc[i].facturacion;  break;
            case oeste:totalOeste=totalOeste+suc[i].facturacion;  break;
            case centro:totalCentro=totalCentro+suc[i].facturacion;  break;
        }
    }
    cout<<"\nTotal norte: "<<totalNorte<<"\nTotal Sur: "<<totalSur<<"\nTotal Este: "<<totalEste<<"\nTotal Oeste: "<<totalOeste<<"\nTotal Centro: "<<totalCentro;
}

void mostrarMaximoYMinimo(){
    int posMaxima=0;
    int facturacionMaxima=suc[0].facturacion;
    int facturacionMinima=suc[0].facturacion;
    int posMinima=0;
    int posicion=1;
    while(suc[posicion].direccion!=" "){
        if(suc[posicion].facturacion>facturacionMaxima){
            facturacionMaxima=suc[posicion].facturacion;
            posMaxima=posicion;
        }else{
            if(suc[posicion].facturacion<=facturacionMinima){
                facturacionMinima=suc[posicion].facturacion;
                posMinima=posicion;
            }
        }
        posicion++;
    }
    cout<<"La direccion de la sucursal con menos facturacion es : "<<suc[posMinima].direccion;
    cout<<"\nLa direccion de la sucursal con mayor facturacion es : "<<suc[posMaxima].direccion;
}

int main()
{   int opcion=1;
    while(opcion>0 && opcion<5){
        system("cls");
        cout << "Menu principal:\n\n1: Cargar sucursal\n2: Mostrar\n3: Mostrar la facturacion por zona\n4: Mostrar las sucursales con facturaciones maximas y minimas\n0: Salir\n\nElija una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1 : cout << "\nCarga de sucursal" << endl;
                cargoSucursal();
                break;
            case 2 : cout << "\nMostrar los datos" << endl;
                mostrar();
                break;
            case 3 : cout << "\nMostrar el total de facturacion por zona" << endl;
                calcularPorZona();
                break;
            case 4 : cout<< "\nMostrar las sucursales con facturaciones maximas y minimas" << endl;
                mostrarMaximoYMinimo();
                break;
            default:
                break;
        }
    }
    return 0;
}
