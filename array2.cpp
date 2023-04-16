//array adalah sebuah variabel yang menampung beberapa data di dalam 1 tipe data


#include <iostream>
using namespace std;
int main () {


  //array 1 dimensi
string nama [3] = {"ica","ical","ibhe"};

                cout<<nama[2]<<endl;






    //array 2 dimensi
                     //pembacaan index di mulai dari 0
string input[2][3] = {{"pensil","penghapus","pulpen"},
                      {"kertas","penggaris","spidol"}};

                //penghapus
                cout<<input[0][1]<<endl;

                //kertas
                cout<<input[1][0];









}
