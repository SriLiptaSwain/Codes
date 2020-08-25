class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        std::vector<int>::size_type i = 0, size = bits.size();
        for(; i < size; i++){
            if(bits[i]){
                i++;
                if(i >= size-1) return false;
                continue;
            }
        }
        return true;
    }
};
