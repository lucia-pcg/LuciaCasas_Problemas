class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1; // último elemento válido en nums1
        int j = n - 1; // último elemento de nums2
        int k = m + n - 1; // última posición del arreglo final en nums1

        // mientras haya elementos en ambos arreglos
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // si sobran elementos en nums2, los copiamos
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        // si sobran elementos en nums1, no hacemos nada, ya están en su lugar
    }
};
