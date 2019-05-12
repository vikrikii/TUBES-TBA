#include "tba_h.h"

using namespace std;

int main(){
    system ("color 3f");
    int i=0;
    char arr[100];
    bool status = true;
    bool status_subject = false;
    bool status_predikat = false;
    bool status_object = false;
    bool status_keterangan = false;
    int jum_s=0;
    int jum_p=0;
    int jum_o=0;
    int jum_k=0;
    string pita, ket, ulang="y";

    do{
    system("CLS");
    cout<<"                                            -------------------------------\n";
    cout<<"                                            TUBES TEORI BAHASA DAN AUTOMATA\n";
    cout<<"                                            -------------------------------\n";
    cout<<"INPUT  : ";
    getline (cin, pita);
    strcpy(arr, pita.c_str());
    cout<<"------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"OUTPUT : ";

     while (i<strlen(arr)){
        if ((((arr[i]=='c')or (arr[i]=='a')or ((arr[i]=='b')&&(arr[i+2]=='y'))or((arr[i]=='s')&&(arr[i+1]=='a'))
            or((arr[i]=='k')&&(arr[i+1]=='a')))&&(arr[i-1]==' '))||
            (((arr[i]=='c')or (arr[i]=='a')or ((arr[i]=='b')&&(arr[i+2]=='y'))or((arr[i]=='s')&&(arr[i+1]=='a'))
            or((arr[i]=='k')&&(arr[i+1]=='a')))&&(i==0))){
            cek_subjek (arr,i, status_subject,jum_s);
            if(status_subject == false){
                cout << " ERROR ";
                while(arr[i+1]!=' '){
                    i++;
                }
            }
            i++;
            if((arr[i]=='m')&&(arr[i+1]=='e')&&(arr[i-1]==' ')){
                cek_predikat (arr,i,status_predikat,jum_p);
                if(status_predikat == false){
                    cout << " ERROR ";
                    while(arr[i+1]!=' '){
                        i++;
                    }
                }
                i++;
                if(((arr[i]=='o')or (arr[i]=='b')or(arr[i]=='l')or
                    (arr[i]=='s'))&&(arr[i-1] == ' ')){
                    cek_objek(arr,i,status_object,jum_o);
                    if(status_object == false){
                        cout << " ERROR ";
                        while(arr[i+1]!=' '){
                            i++;
                        }
                    }
                    i++;
                    if (((arr[i]=='k')or (arr[i]=='K')or(arr[i]=='p')or
                        (arr[i]=='P') or (arr[i]=='m')or (arr[i]=='M')or(arr[i]=='r')or (arr[i]=='R')
                         or (arr[i]=='j')or (arr[i]=='J'))&&(arr[i-1] == ' ')){
                         cek_keterangan(arr,i,status_keterangan,jum_k);
                         if (status_keterangan == false){
                            cout << " ERROR ";
                            while(arr[i+1]!=' '){
                                i++;
                            }
                         }
                        }

                   }
                   else if(((arr[i]=='k')or (arr[i]=='K')or(arr[i]=='p')or
                        (arr[i]=='P') or ((arr[i]=='m')&&(arr[i+1]=='a'))or (arr[i]=='M')or(arr[i]=='r')or (arr[i]=='R')
                        or (arr[i]=='j')or (arr[i]=='J'))&&(arr[i-1] == ' ')){
                         cek_keterangan(arr,i,status_keterangan,jum_k);
                         if (status_keterangan == false){
                            cout << " ERROR ";
                            status = false;
                            while(arr[i+1]!=' '){
                                i++;
                            }
                         }
                    }
            }

        i--;
        }else if(((arr[i]=='m')&&(arr[i+1]=='e')&&(arr[i-1]==' '))||
                 ((arr[i]=='m')&&(arr[i+1]=='e')&&(i==0))){
                cek_predikat(arr, i, status,jum_p);
                if (status == false){
                    cout <<" ERROR ";
                    while(arr[i+1]!=' '){
                        i++;
                    }
                }
        }else if((((arr[i]=='o')or(arr[i]=='b')or(arr[i]=='s')or(arr[i]=='l'))&&(arr[i-1]==' '))||
                 (((arr[i]=='o')or(arr[i]=='b')or(arr[i]=='s')or(arr[i]=='l'))&&(i==0))){
            cek_objek(arr, i, status,jum_o);
            if (status == false){
                    cout <<" ERROR ";
                    while(arr[i+1]!=' '){
                        i++;
                    }
                }
        }else if((((arr[i]=='k')or(arr[i]=='p')or(arr[i]=='m')or(arr[i]=='r')or(arr[i]=='j'))&&(arr[i-1]==' '))||
                 (((arr[i]=='k')or(arr[i]=='p')or(arr[i]=='m')or(arr[i]=='r')or(arr[i]=='j'))&&(i==0))){
            cek_keterangan(arr, i, status,jum_k);
            if (status == false){
                    cout <<" ERROR ";
                    while(arr[i+1]!=' '){
                        i++;
                    }
                }
        }else if ((((arr[i]=='d')||(arr[i]=='e')||(arr[i]=='f')||(arr[i]=='g')||(arr[i]=='h')||(arr[i]=='i')||
                  (arr[i]=='n')or(arr[i]=='o')or(arr[i]=='q')or(arr[i]=='t')or(arr[i]=='u')or(arr[i]=='v')or
                  (arr[i]=='w')or(arr[i]=='x')or(arr[i]=='y')or(arr[i]=='z'))&&(arr[i-1]=' '))||
                  (((arr[i]=='d')||(arr[i]=='e')||(arr[i]=='f')||(arr[i]=='g')||(arr[i]=='h')||(arr[i]=='i')||
                  (arr[i]=='n')or(arr[i]=='o')or(arr[i]=='q')or(arr[i]=='t')or(arr[i]=='u')or(arr[i]=='v')or
                  (arr[i]=='w')or(arr[i]=='x')or(arr[i]=='y')or(arr[i]=='z'))&&(i==0))){
                   cout<<" ERROR ";
                   status = false;
                   while(arr[i]!=' '){
                    i++;
                   }

        }
        i++;
    }
        cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
        cout<<"STATUS : ";
      /// UNTUK S - P
        if((status_subject == true) && (status_predikat == true )&&(status_object == false) && (status_keterangan == false )&&
           (jum_s == 1)&&(jum_p == 1)&&(status == true)){
            cout<<" VALID";
        }

        /// UNTUK S - P - O - K
        else if ((status_subject == true) && (status_predikat == true )&&(status_object == true) && (status_keterangan == true )&&
                 (jum_s == 1)&&(jum_p == 1) && ((jum_o == 1)&&(jum_k == 1))&&(status == true)){
            cout<<" VALID";
        }
        /// UNTUK S - P - O
        else if ((status_subject == true) && (status_predikat == true )&&(status_object == true)&& (status_keterangan == false )&&
                 (jum_s == 1)&&(jum_p == 1) && ((jum_o == 1))&&(status == true)){
            cout<<" VALID";
        }
        /// UNTUK S - P - K
        else if ((status_subject == true) && (status_predikat == true )&&(status_object == false) && (status_keterangan == true )&&
                 (jum_s == 1)&&(jum_p == 1) && ((jum_k == 1))&&(status == true)){
            cout<<" VALID";

        }
        else{
            cout<<" TIDAK VALID";
        }
        cout<<"\n------------------------------------------------------------------------------------------------------------------------";
        cout<<"Masukan lagi? (y/t)";
        cin>>ulang;
        }while(ulang!="t");

        getch();
        return 0;
}
