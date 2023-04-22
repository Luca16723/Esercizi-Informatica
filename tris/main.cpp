#include <iostream>
using namespace std;

void stampa_tabella();
void cambio_giocatore(); 
void fai_la_mossa();
void il_giocatore_ha_vinto();
bool ce_un_tris();

// Variabili globali;

string giocatore ="X";   //memorizza il giocatore che fa la mossa

string tabella[3][3]={ { " ", " " , " " },  //memorizza la tabella del gioco
                       { " ", " " , " " },
                       { " ", " " , " " } }; 

int main(){

    stampa_tabella();

    int mosse = 9;

    while ( mosse > 0 ){
        fai_la_mossa();
        stampa_tabella();
        
        if ( ce_un_tris()){
           il_giocatore_ha_vinto();
           return 0;
        };
        cambio_giocatore(); 
        mosse=mosse-1;
     }
    cout << "PARI";
}

void cambio_giocatore(){
    
    if ( giocatore=="O" )
        { giocatore="X";}
    else 
        { giocatore="O";};
} 


void fai_la_mossa(){
    cout<< "tocca al giocatore "<<giocatore<<endl;

    //TODO: fa scegliere all'utente la casella dove inserire il segno
    cout << "inserisci mossa"<<endl;
    
    //TODO: Controllare se e' possibile fare la mossa  
    
    //TODO: in caso sia possibile fa la mossa 
    
   
}

void il_giocatore_ha_vinto(){
    cout << "ha vinto ...."<<giocatore<<endl;
}

bool ce_un_tris(){
    //TODO: controllare se nella tabella c'e' un tris (controllare 
    // nelle colonne, nelle righe, nelle diagonali )
    
    return false;
}

void stampa_tabella(){

    //TODO: stampare la tabella 
    //per testare la funzione non c'è bisogno di sviluppare le altre
    //modificate i valori nella sua inizializzazione ...
    
    cout<< "ora stammpo la tabella"<<endl; //TODO: rimuovere quando fatto
    cout<< endl;
}
