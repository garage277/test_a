#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.exceptions(std::ios::failbit);
    uint16_t n{0};
    //cout << "введите длину списков: ";
    cin >> n;

    auto get_ids = [](uint16_t length){
        std::vector<uint16_t> cont;
        cont.reserve(length);
        for( uint16_t x=0, i=0; i<length; ++i )
        {
            cin >> x;
            cont.push_back(x);
        }
        return cont;
    };

    //cout << "\nвведите первый список:\n";
    auto ids1 = get_ids(n);

    //cout << "\nвведите второй список:\n";
    auto ids2 = get_ids(n);

    for( size_t i=0; i<n; ++i )
    {
        if( i!=0 )
            cout << " ";

        cout << ids1[i] << " " << ids2[i];
    }

    cout << endl;

    return 0;
}
