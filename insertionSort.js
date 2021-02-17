//time complexity: O(N^2) ; space: O(1)
function insertionSort(array){
  for(let i = 0; i < array.length; i++){
    for(let j = i; j > 0 && array[j]<array[j-1];j--){
      swap(array, j, j-1);
    }
  }
  return array;
}
function swap(array, i, j){
  let temp = array[j];
  array[j] = array[i];
  array[i] = temp;
}

exports.insertionSort = insertionSort;
