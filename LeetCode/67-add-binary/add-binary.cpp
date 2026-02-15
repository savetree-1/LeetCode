class Solution {
public:
    string addBinary(string a, string b) {

        string result = "";
        int size_a = a.size() - 1;
        int size_b = b.size() - 1;
        int carry = 0;

        while (size_a >= 0 || size_b >= 0 || carry == 1) {
            int sum = carry;
            if (size_a >= 0) {
                sum += a[size_a] - '0';
                size_a--;
            }
            if (size_b >= 0) {
                sum += b[size_b] - '0';
                size_b--;
            }
            result = char(sum % 2 + '0') + result;
            carry = sum / 2;
        }
        return result;
    }
};