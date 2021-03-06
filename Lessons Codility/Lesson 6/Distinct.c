// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi2 = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi2 - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi2 + 1, high);
  }
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    if(N==0){
        return 0;
    }
    if(N==1){
        return 1;
    }

    quickSort(A, 0, N- 1);
    int result=0;
    for(int i=0;i<N-1;i++){
        if(A[i] != A[i+1]){
            result+=1;
        }
    }

    return result+1;
}
