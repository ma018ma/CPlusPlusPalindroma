#include <iostream>
#include <string>
 
using namespace std;
 
bool palindroma(string parola)
{
    cout<<"parola?"<<endl;
    cin>>parola;
    bool risultato = true;
    
    int k = parola.length()-1;
 
    for(int i=0; i<parola.length(); i++)
    {
        if (parola[i] == parola[k])
        {
            k--;
        }
        else
        {
        risultato = false;
        break;
        }    
    }

    return risultato;
 
}
 
int main()
{
    string parola;
    if(palindroma(parola))
    {
        cout << "La parola e palindroma" << endl;
    }
    else
    {
        cout << "La parola non e palindroma" << endl;
    }
}
