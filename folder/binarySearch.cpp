int binarySearch (int list[], int key, int low, int high){

          int middle;                                     //하나 이상의 항목이 있어야 탐색
          if (low<=high){
             middle = (low+high)/2;
             if(key ==list[middl])                        //탐색 성공
                   return middle;
             else if(key<list[middle])                    //왼쪽 부분 리스트 탐색
                   return binarySearch (key,low,middle-1);
             else                                         //오른쪽 부분 리스트 탐색
                   return binarySearch (key,middle+1,high);
          }
          return -1;                                      //탐색 실패
} 
