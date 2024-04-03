class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int rightShiftCnt = 0;
        while (left != right) {
            left >>= 1;
            right >>= 1;
            rightShiftCnt++;
        }
        int commonPrefix = (right << rightShiftCnt);
        return commonPrefix;
    }
};