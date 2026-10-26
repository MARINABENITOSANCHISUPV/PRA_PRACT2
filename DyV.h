#include <iostream>
#include <vector>
using namespace std;

template <typename T>
int busquedaBinaria(T x, const vector<T> V,int ini, int fin){
	if(ini>fin){
		return -1;
	}
	int medio=(ini+fin)/2;
	if (V[medio] == x){
		return medio;
	}else if(V[medio]>x){
		return busquedaBinaria(x,V,ini,medio-1);
	}else{
		return busquedaBinaria(x,V,medio+1,fin);
	}
}

template <typename T>
int Partition(vector<T> &V, int ini, int fin){
        T x=V[fin];
        int i=ini;
        for(int j=ini;j<=(fin-1);j++){
			if (V[j] <= x){
                	swap(V[j],V[i]);
                	i+=1;
		}
        }
        swap(V[i],V[fin]);
        return i;
}





template <typename T>
void  quicksort(vector<T> &V, int ini, int fin){

	if(ini<fin){
		int pivot = Partition(V, ini, fin);
		quicksort(V, ini, pivot -1);
		quicksort(V, pivot +1, fin);
	}
}

