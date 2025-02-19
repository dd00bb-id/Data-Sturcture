// 인덱스 테이블 항목의 구조체
struct Index{
       int key;   //키 값
       int index; //키 값의 인덱스
};


//색인 순차 탐색 함수
int indexedSearch( int list[], int nList,Index *tbl, int nTbl, int key){
        if(key<list[0] || key>list[nList-1])       //키 값이 리스트 범위 밖
              return -1;
        for(int i=0; i,nTbl-1;i++){                //인덱스 테이블 조사
             if( tbl[i].key<=key && tbl[i+1].key>key)
                   return sequentialSearch(list, key, tbl[i].index, tbl[i+1].index);
        }
        return sequentialSearch(list, key, tbl[nTbl-1].index,nList);
}


