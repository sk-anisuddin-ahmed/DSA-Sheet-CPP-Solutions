class Solution {
  public:
  
    void merge(vector<int>& array, int leftIndex, int midIndex, int rightIndex) {
        int leftArraySize = midIndex - leftIndex + 1;
        int rightArraySize = rightIndex - midIndex;
    
        int leftArray[leftArraySize];
        int rightArray[rightArraySize];
    
        for (int i = 0; i < leftArraySize; i++)
            leftArray[i] = array[leftIndex + i];
        for (int j = 0; j < rightArraySize; j++)
            rightArray[j] = array[midIndex + 1 + j];
    
        int i = 0;
        int j = 0;
        int index = leftIndex;
    
        while (i < leftArraySize && j < rightArraySize) {
            if (leftArray[i] <= rightArray[j]) {
                array[index] = leftArray[i];
                index++;
                i++;
            }
            else {
                array[index] = rightArray[j];
                index++;
                j++;
            }
        }
    
        while (i < leftArraySize) {
            array[index] = leftArray[i];
            index++;
            i++;
        }
    
        while (j < rightArraySize) {
            array[index] = rightArray[j];
            index++;
            j++;
        }
    }
    
    void mergeSort(vector<int>& arr, int l, int r) {
        if (l >= r) return;
        int midIndex = l + (r - l)/2;
        
        mergeSort(arr, l, midIndex);
        mergeSort(arr, midIndex + 1, r);
        merge(arr, l, midIndex, r);
    }
};