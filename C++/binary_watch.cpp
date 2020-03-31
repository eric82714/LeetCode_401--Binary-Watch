class Solution {
public:
    int bin(int n) {
        int count = 0;
        
        while(n != 0) {
            if(n % 2 == 1) count ++;
            n = n / 2;
        }
        
        return count;
    }
    
    vector<string> readBinaryWatch(int num) {
        vector<string> result;
        
        for(int i = 0; i < 12; i++) {
            for(int j = 0; j < 60; j++) {
                if((bin(i) + bin(j)) == num) {
                    string h = to_string(i);
                    string m;
                    if(j <= 9) m = "0" + to_string(j); 
                    else m = to_string(j);
                    result.push_back(h + ":" + m);
                }
            }
        }
        
        return result;
    }
};
