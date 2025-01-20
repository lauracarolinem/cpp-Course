#include <iostream>
#include <vector>

using namespace std;
int main(){
    //vector sintax: vector_name.at(element_index)
    //vector_name.push_back(element) -> coloca no fim da lista, aumentando o tamanho do vetor
    //ver o tamanho do vetor: vector_name.size()

    vector <int> vector1 ;
    vector <int> vector2 ;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Elements in vector 1: " << vector1.at(0) << ", " << vector1.at(1) << endl;
    cout << "Size of vector 1: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Elements in vector 2: " << vector2.at(0) << ", " << vector2.at(1) << endl;
    cout << "Size of vector 2: " << vector2.size() << endl;

    vector <vector <int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Elements in vector 2d: \n";
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "Elements in vector 2d(again): \n";
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl; //não vai printar o valor novo do vetor 1 porque é uma copia

    cout << "Elements in vector 1 (again): " << vector1.at(0) << ", " << vector1.at(1) << endl;

    return 0;

}