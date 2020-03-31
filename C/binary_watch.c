/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int bin(int n){
    int count = 0;
        
    while(n != 0) {
        if(n % 2 == 1) count ++;
        n = n / 2;
    }
        
    return count;
}

char ** readBinaryWatch(int num, int* returnSize){
    int index = 0;
    char** result = malloc(1000 * sizeof(char*));
    for(int i = 0; i < 1000; i++)
        result[i] = malloc(6 * sizeof(char));
    
    if(num == 0){
        sprintf(result[0], "%d:0%d", 0, 0);
        *returnSize = 1;
        return result;
    }
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 60; j++){
            if((bin(i) + bin(j)) == num){
                if(j < 10){ 
                    sprintf(result[index], "%d:0%d", i, j);
                }
                else{
                    sprintf(result[index], "%d:%d", i, j);
                }
                index ++;
            }
        }
    }
    
    *returnSize = index;
    return result;

}
