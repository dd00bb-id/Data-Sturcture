//반복문을 이용한 이진탐색 함수
int binarySearchIter(int list[], int key, int low, int high){

               int middle;
               while (low <=high){                      //항목들이 남아 있으면(종료조건)
                      middle = (low+high)/2;
                      if(key ==list[middle])            //탐색 성공
                          return middle;
                      else if(key> list[middle])        //key가 middle의 값보다 크면 middle+1 ~ high 사이 검색
                          low=middle+1;
                      else                              //key가 middle의 값보다 작으면 low ~ middle-1 사이 검색
                         high=middle-1;
               ]
           return -1;                                   //탐색 실패 
}
