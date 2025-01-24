void radixSort( int list[], int n){

           Queue queues[10];
           int factor=1;
            for(int d=0; d<4; d++){
                for(int i=0; i<n; i++)
                      queues[(list[i]/factor)%10].enqueue( list[i]);

                for(int b=i=0; b<10; b++)
                    while(!queues[b].isEmpty() )
                           list[i++] = queues[b].dequeue();
                 factor *=10;

            }
}

                      
