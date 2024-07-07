class Solution {
public:
    int numWaterBottles(int numbo, int numex) {
            return numbo + (numbo-1)/(numex-1);
    }
};