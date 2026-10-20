class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();

        double total = 0;
        double min_Salary = INT_MAX;
        double max_Salary = INT_MIN;

        for(int i = 0; i < n; i++){
            total += salary[i];

            min_Salary = min(min_Salary, (double)salary[i]);
            max_Salary = max(max_Salary, (double)salary[i]);
        }

        double sub_Total = total - (min_Salary + max_Salary);

        double avg_Salary = sub_Total / (n - 2);

        return avg_Salary;
    }
};