#include "tba_h.h"

using namespace std;

void cek_subjek (char *x, int &i, bool &status,int &jml){
    /* kamu, saya, alif, chae, bayu */
    if ((x[i]=='c')or (x[i]=='a')or (x[i]=='b')or(x[i]=='s')
        or(x[i]=='k')){
        i++;
        if (((x[i-1]=='c')&&(x[i]=='h'))or((x[i-1]=='a')&&(x[i]=='l'))or(((x[i-1]=='b')or(x[i-1]=='s')or(x[i-1]=='k'))&&(x[i]=='a'))){
            i++;
            if (((x[i-1]=='h')&&(x[i]=='a'))or((x[i-1]=='l')&&(x[i]=='i'))or((x[i-1]=='a')&&((x[i]=='y')or(x[i]=='m')))){
                i++;
                if(((x[i-1]=='a')&&(x[i]=='e')) or ((x[i-1]=='i')&&(x[i]=='f'))or((x[i-1]=='y')&&((x[i]=='u')or(x[i]=='a')))or ((x[i-1]=='m')&&(x[i]=='u'))){
                    i++;
                    if ((x[i]==' ')or(i>=strlen(x))){
                     //   i++;
                        cout<<"SUBJEK ";
                        status=true;
                    }
                    else{
                        status=false;
                    }
                }
                else{
                    status = false;
                }
            }
            else {
                status = false;
            }
        }
        else{
            status = false;
        }
    }
    else{
        status=false;
    }
    jml++;

}

void cek_predikat (char *x, int &i, bool &status,int &jml){
    /*mempelajari , mengetahui , mengenal , memakai , menggunakan*/
    if (x[i]=='m'){
        i++;
        if (x[i]=='e'){
            i++;
            if ((x[i]=='m')or(x[i]=='n')){
                i++;
                if(((x[i-1]=='m')&&((x[i]=='p')or(x[i]=='a')or(x[i]=='g')))or((x[i-1]=='n')&&(x[i]=='g'))){
                    i++;
                    if(((x[i-1]=='p')&&(x[i]=='e'))or((x[i-1]=='a')&&(x[i]=='k'))or((x[i-1]=='g')&&((x[i]=='e')or(x[i]=='g')))){
                        i++;
                        if(((x[i-1]=='e')&&((x[i]=='l')or(x[i]=='t')or(x[i]=='n')))or((x[i-1]=='k')&&(x[i]=='a'))or((x[i-1]=='g')&&(x[i]=='u'))){
                            i++;
                            if(((x[i-1]=='l')&&(x[i]=='a'))or(((x[i-1]=='t')or(x[i-1]=='n'))&&(x[i]=='a'))or((x[i-1]=='a')&&(x[i]=='i'))or((x[i-1]=='u')&&(x[i]=='n'))){
                                i++;
                                if(((x[i-1]=='a')&&((x[i]=='j')or(x[i]=='h')or(x[i]=='l'))) or ((x[i-1]=='n')&&(x[i]=='a'))){
                                    i++;
                                    if( ((x[i-1]=='j')&&(x[i]=='a')) or ((x[i-1]=='h')&&(x[i]=='u')) or ((x[i-1]=='a')&&(x[i]=='k')) ){
                                        i++;
                                        if( ((x[i-1]=='a')&&(x[i]=='r')) or ((x[i-1]=='u')&&(x[i]=='i')) or ((x[i-1]=='k')&&(x[i]=='a')) ){
                                            i++;
                                            if( ((x[i-1]=='r')&&(x[i]=='i')) or ((x[i-1]=='a')&&(x[i]=='n')) ){
                                                i++;
                                                if ((x[i]==' ')or(i>=strlen(x))){
                                                //    i++;
                                                    cout<<" PREDIKAT ";
                                                    status=true;
                                                }
                                                else{

                                                    status=false;
                                                }
                                            }
                                            else if((x[i] == ' ')or(((x[9] == 'i')or(x[9] == 'n'))&&(x[10]==' '))or(i>=strlen(x))){
                                              //  i++;
                                                cout << " PREDIKAT ";
                                                status = true;
                                            }
                                            else{
                                                status = false;
                                            }
                                        }

                                        else{
                                            status = false;
                                        }
                                    }
                                    else if((x[i]==' ')or((x[7]=='l')&&(x[8]==' '))or (i>=strlen(x))){
                                        //i++;
                                        cout<<" PREDIKAT ";
                                        status = true;
                                    }
                                    else{
                                        status = false;
                                    }
                                }
                                else if((x[i]==' ')or((x[6]=='i')&&(x[7]==' '))or (i>=strlen(x))){
                                 //   i++;
                                    cout<<" PREDIKAT ";
                                    status = true;
                                }
                                else{
                                    status = false;
                                }
                            }
                        }
                        else{
                            status = false;
                        }
                    }
                    else{
                        status = false;
                    }
                }
                else{
                    status = false;
                }
            }
            else {
                status = false;
            }
        }
        else{
            status = false;
        }
    }
    else{
        status=false;
    }
    jml++;

}

void cek_objek (char *x, int &i, bool &status,int &jml) {
    /* orang , buku, sepatu, baju, laptop */
    if ((x[i]=='o')or(x[i]=='b')or(x[i]=='s')or(x[i]=='l')){
        i++;
        if (((x[i-1]=='o')&&(x[i]=='r'))or((x[i-1]=='b')&&((x[i]=='u')or(x[i]=='a')))or ((x[i-1]=='s')&&(x[i]=='e')) or ((x[i-1]=='l')&&(x[i]=='a')) ){
            i++;
            if( ((x[i-1]=='r')&&(x[i]=='a')) or ((x[i-1]=='u')&&(x[i]=='k')) or ((x[i-1]=='a')&&((x[i]=='j') or (x[i]=='p'))) or ((x[i-1]=='e')&&(x[i]=='p')) ){
                i++;
                if(((x[i-1]=='a')&&(x[i]=='n')) or (((x[i-1]=='k')or(x[i-1] == 'j'))&&(x[i]=='u')) or ((x[i-1]=='p')&&((x[i]=='t')or(x[i]=='a')))){
                    i++;
                    if( ((x[i-1]=='n')&&(x[i]=='g')) or ((x[i-1]=='a')&&(x[i]=='t')) or ((x[i-1]=='t')&&(x[i]=='o')) ){
                        i++;
                        if( ((x[i-1]=='t')&&(x[i]=='u')) or ((x[i-1]=='o')&&(x[i]=='p')) ){
                            i++;
                            if ((x[i]==' ')or(i>=strlen(x))){
                             //   i++;
                                cout<<" OBJEK ";
                                status=true;
                            }
                            else{
                                status=false;
                            }
                        }
                        else if ((x[i]==' ')or((x[4]=='g')&&(x[5]==' '))or(i>=strlen(x))){
                           // i++;
                            cout << " OBJEK ";
                            status = true;
                        }
                        else{

                            status = false;
                        }
                    }
                    else if ((x[i]==' ')or((x[3]=='u')&&(x[4]==' '))or(i>=strlen(x))){
                       // i++;
                        cout <<  " OBJEK ";
                        status = true;
                    }
                    else{
                        status = false;
                    }
                }
                else {
                    status = false;
                }
            }
            else{
                status = false;
            }
        }
        else{
            status=false;
        }
    }
    else{
        status=false;
    }
    jml++;

}

void cek_keterangan (char *x, int &i, bool &status,int &jml) {
    /* kelas, pagi, malam , rumah , jalan  */
    if((x[i]=='k')or(x[i]=='p')or(x[i]=='m')or(x[i]=='r')or(x[i]=='j')){
        i++;
        if( ((x[i-1]=='k')&&(x[i]=='e')) or (((x[i-1]=='p')or(x[i-1]=='m')or(x[i-1]=='j'))&&(x[i]=='a')) or ((x[i-1]=='r')&&(x[i]=='u')) ) {
            i++;
            if(((x[i-1]=='e')&&(x[i]=='l')) or ((x[i-1]=='a')&&((x[i]=='g')or(x[i]=='l'))) or ((x[i-1]=='u') && (x[i]=='m'))) {
                i++;
                if (((x[i-1]=='l')&&(x[i]=='a')) or ((x[i-1]=='m')&&(x[i]=='a')) or ((x[i-1]=='g')&&(x[i]=='i'))){
                    i++;
                    if ((x[i-1]=='a')&&((x[i]=='s') or (x[i]=='m') or (x[i]=='h') or (x[i]=='n')) ){
                       i++;
                        if((x[i] == ' ')or(i>=strlen(x))){
                   //         i++;
                            cout << " KETERANGAN ";
                            status = true;
                        }
                        else{
                            status = false;
                       }
                    }
                    else if((((x[3]=='i')&&(x[4]==' '))or(x[i]==' '))or(i>=strlen(x))){
                       // i++;
                        cout << " KETERANGAN ";
                        status = true;
                    }
                    else{
                       status = false;
                    }
                }
                else{
                    status = false;
                }
            }
            else{
                status = false;
            }
        }
        else{
            status = false;
        }
    }
    else {
        status = false;
    }
    jml++;

}
