#include<iostream>
using namespace std;
int n;
int v[100];
int tata, fiu;

int read_data()
{
        cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cout << "V[" << i << "] : ";
        cin >> v[i];
    }
}
int make_heaps()
{
    for(int i = 2; i <= n; i++)
    {
        tata = fiu/2;
        fiu = i;
    while(tata >= 1 && v[tata] < v[fiu])
               {
                    swap(v[tata], v[fiu]);
                    fiu = tata;
                    tata = fiu/2;
                    tata++;
                    fiu++;
                }
    }

}
int print_data()
{
    for(int i = 1; i <= n; i++)
        cout << v[i] << endl;
}
int main()
{
    read_data();
    make_heaps();
    print_data();
}
