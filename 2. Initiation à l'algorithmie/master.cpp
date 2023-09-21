#include <iostream>
using namespace std;

int main()
{
    int combinaison;
    int proposition;

    combinaison = 65894;
    cout << "Entrer une proposition : " << endl;
    cin >> proposition;
    while (proposition != combinaison)
    {
        cout << "Entrer une proposition : " << endl;
        cin >> proposition;    
    }

    cout << "GAGNE" << endl;
}