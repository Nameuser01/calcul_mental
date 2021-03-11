#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void choix_menu(){
    cout<<"0 - quitter le programme."<<endl;
    cout<<"1 - multiplications."<<endl;
    cout<<"2 - divisions."<<endl;
    cout<<"3 - additions."<<endl;
    cout<<"4 - soustractions."<<endl;
}
int main(){
    int choix(1), parties(0);
    while (choix != 0)
    {
       cout<<"Que voulez vous faire ?"<<endl;
       choix_menu();
       cout<<"> ";cin>>choix;
       if (choix == 0){
            cout<<"Fin"<<endl;
       }
       else if(choix == 1){
            parties++;
            int nbr_rep(0), max_number(0), min_number(0), score(0);
            cout<<"Okay, donc vous voulez faire une partie.\n"<<endl;
            while(nbr_rep <= 0){
                    cout <<"Combien de questions ?\n> ";cin>>nbr_rep;
            }
            while(max_number == 0 && min_number == 0 || max_number < min_number){
                cout<<"max number = ";cin>>max_number;
                cout<<"min number = ";cin>>min_number;
            }
            for (int i = 0;i < nbr_rep; i++){
                    int result(0), user_ans(0), a(0), b(0);
                    a = rand()%(max_number-1) +min_number;
                    b = rand()%max_number +min_number;
                    result = a * b;
                    cout<<a<<" x "<<b<<" = ?\n> ";cin>>user_ans;
                    if(user_ans == result){
                        cout<<"Bonne réponse"<<endl;
                        score++;
                    }
                    else{
                        cout<<a<<" x "<<b<<" = "<<result<<endl;
                    }
            }
            double result_sur_cent(0);
            result_sur_cent = 100*score/nbr_rep;
            cout<<"\nFin de la partie n°"<<parties<<", vous avez un score de "<<result_sur_cent<<"%"<<endl;
       }
       else if(choix == 2){//Il faut intégrer un système d'arrondissement des resultats au dixième ou centième sinon, c'est ingérable
            parties++;
            int nbr_rep(0), max_number(0), min_number(0), score(0);
            cout<<"Okay, donc vous voulez faire une partie.\n"<<endl;
            while(nbr_rep == 0){
                    cout <<"Combien de questions ?\n> ";cin>>nbr_rep;
            }
            while(max_number == 0 && min_number == 0 || max_number < min_number){
                cout<<"max number = ";cin>>max_number;
                cout<<"min number = ";cin>>min_number;
            }
            for (int i = 0;i < nbr_rep; i++){
                    double result(0), user_ans(0), a(0), b(0);
                    a = rand()%(max_number-1) +min_number;
                    while(b == 0){
                            b = rand()%max_number +min_number;
                    }
                    result = a / b;
                    cout<<a<<" / "<<b<<" = ?\n> ";cin>>user_ans;
                    if(user_ans == result){
                        cout<<"Bonne réponse"<<endl;
                        score++;
                    }
                    else{
                        cout<<a<<" / "<<b<<" = "<<result<<endl;
                    }
            }
            double result_sur_cent(0);
            result_sur_cent = 100*score/nbr_rep;
            cout<<"\nFin de la partie n°"<<parties<<", vous avez un score de "<<result_sur_cent<<"%"<<endl;
       }
       else if(choix == 3){
            parties++;
            int nbr_rep(0), max_number(0), min_number(0), score(0);
            cout<<"Okay, donc vous voulez faire une partie.\n"<<endl;
            while(nbr_rep == 0){
                    cout <<"Combien de questions ?\n> ";cin>>nbr_rep;
            }
            while(max_number == 0 && min_number == 0 || max_number < min_number){
                cout<<"max number = ";cin>>max_number;
                cout<<"min number = ";cin>>min_number;
            }
            for (int i = 0;i < nbr_rep; i++){
                    int result(0), user_ans(0), a(0), b(0);
                    a = rand()%(max_number-1) +min_number;
                    b = rand()%max_number +min_number;
                    result = a + b;
                    cout<<a<<" + "<<b<<" = ?\n> ";cin>>user_ans;
                    if(user_ans == result){
                        cout<<"Bonne réponse"<<endl;
                        score++;
                    }
                    else{
                        cout<<a<<" + "<<b<<" = "<<result<<endl;
                    }
            }
            double result_sur_cent(0);
            result_sur_cent = 100*score/nbr_rep;
            cout<<"\nFin de la partie n°"<<parties<<", vous avez un score de "<<result_sur_cent<<"%"<<endl;
       }
       else if(choix == 4){
            parties++;
            int nbr_rep(0), max_number(0), min_number(0), score(0);
            cout<<"Okay, donc vous voulez faire une partie.\n"<<endl;
            while(nbr_rep == 0){
                    cout <<"Combien de questions ?\n> ";cin>>nbr_rep;
            }
            while(max_number == 0 && min_number == 0 || max_number < min_number){
                cout<<"max number = ";cin>>max_number;
                cout<<"min number = ";cin>>min_number;
            }
            for (int i = 0;i < nbr_rep; i++){
                    int result(0), user_ans(0), a(0), b(0);
                    a = rand()%(max_number-1) +min_number;
                    b = rand()%max_number +min_number;
                    result = a - b;
                    cout<<a<<" - "<<b<<" = ?\n> ";cin>>user_ans;
                    if(user_ans == result){
                        cout<<"Bonne réponse"<<endl;
                        score++;
                    }
                    else{
                        cout<<a<<" - "<<b<<" = "<<result<<endl;
                    }
            }
            double result_sur_cent(0);
            result_sur_cent = 100*score/nbr_rep;
            cout<<"\nFin de la partie n°"<<parties<<", vous avez un score de "<<result_sur_cent<<"%"<<endl;
       }
        else{
            cout<<"Wrong input from the user !"<<endl;
        }
    }
    cout<<"Fin du programme"<<endl;
    return 0;
}
