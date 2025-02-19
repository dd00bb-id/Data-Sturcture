int interpolationSearch (int list[], int nList, int key){

      int low = 0;
      int high =n-1;
      while( (list[low] <key) && (key <=list[high]) ){
          int j=(int)((float)(key-list[low]) / (list[high]-list[low]) *(high-low) )+low;
             if   (key > list[j] ) low =j+1;
             else if (key < list[j] ) high = j-1;
             else  return j;                               //탐색 성공
      }
      return -1;                                           //탐색 실패
}
 
