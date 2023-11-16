class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> left;
        vector<int> right;

        stack<int> stack;
        for (int i = 0; i < heights.size(); ++i) {
            while (!stack.empty()) {
                int index = stack.top();
                if (heights[index] >= heights[i])
                    stack.pop();
                else
                    break;
            }
            int index = stack.empty() ? 0 : stack.top() + 1;
            left.push_back(index);
            stack.push(i);
        }

        while (!stack.empty()) stack.pop();
        for (int i = heights.size() - 1; i >= 0; --i) {
            while (!stack.empty()) {
                int index = stack.top();
                if (heights[index] >= heights[i])
                    stack.pop();
                else
                    break;
            }
            int index = stack.empty() ? heights.size() - 1 : stack.top() - 1;
            right.push_back(index);
            stack.push(i);
        }
        reverse(right.begin(), right.end());

        int max = 0;
        for (int i = 0; i < heights.size(); ++i) {
            int maxLeft = i - left[i];
            int maxRight = right[i] - i;
            int rectangle = heights[i] * (1 + maxLeft + maxRight);

            max = max > rectangle ? max : rectangle;
        }

        return max;
    }
};