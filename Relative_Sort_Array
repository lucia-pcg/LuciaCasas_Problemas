class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // hago un mapa para guardar el orden de arr2
        unordered_map<int, int> orden;
        for (int i = 0; i < arr2.size(); i++) {
            orden[arr2[i]] = i;  // guardo en qué posición está cada número
        }

        // ordeno arr1 con insertion sort pero usando la prioridad de arr2
        for (int i = 1; i < arr1.size(); i++) {
            int actual = arr1[i];
            int j = i - 1;

            // saco la "prioridad" (si no está en arr2 le pongo una muy grande)
            auto prioridad = [&](int x){
                if (orden.count(x)) return orden[x];
                return 10000 + x; // los que no están en arr2 van al final
            };

            // recorro hacia atrás mientras el anterior tenga más prioridad
            while (j >= 0 && prioridad(arr1[j]) > prioridad(actual)) {
                arr1[j + 1] = arr1[j];
                j--;
            }

            arr1[j + 1] = actual; // inserto el número en su lugar correcto
        }

        return arr1;
    }
};

