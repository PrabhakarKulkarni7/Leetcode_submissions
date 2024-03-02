#include <vector>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int minSalary = INT_MAX; // Initialize minSalary to maximum possible integer value
        int maxSalary = INT_MIN; // Initialize maxSalary to minimum possible integer value
        double total = 0; // Initialize total sum of salaries
        
        // Iterate through the array to calculate the total sum of salaries and find the minimum and maximum salaries
        for (int i = 0; i < n; ++i) {
            total += salary[i]; // Add current salary to the total sum
            minSalary = min(minSalary, salary[i]); // Update minSalary if current salary is smaller
            maxSalary = max(maxSalary, salary[i]); // Update maxSalary if current salary is larger
        }
        
        // Calculate the average salary by excluding the minimum and maximum salaries from the total sum
        // Divide by (n - 2) since we are excluding two values from the calculation
        return (total - minSalary - maxSalary) / (n - 2);
    }
};
