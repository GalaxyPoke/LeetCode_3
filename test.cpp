#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<stack>
#include <string> // 包含stoi函数

using namespace std;


//class Solution {
//public:
//    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
//        int n = A.size();
//        move(n, A, B, C);
//    }
//
//    void move(int n, vector<int>& A, vector<int>& B, vector<int>& C) {
//        if (n == 1) {
//            C.push_back(A.back());
//            A.pop_back();
//            return;
//        }
//        move(n - 1, A, C, B);    // 将A上面n-1个通过C移到B
//        C.push_back(A.back()); // 将A最后一个移到C
//        A.pop_back();          // 这时，A空了
//        move(n - 1, B, A, C);    // 将B上面n-1个通过空的A移到C
//    }
//};
//
//int main() {
//    vector<int> A = { 3, 2, 1 }, B = {}, C = {};
//    Solution sol;
//    sol.hanota(A, B, C);
//
//    // 打印结果
//    cout << "C tower contains: ";
//    for (int num : C) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    return 0;
//}



// 函数定义：移除有序向量中的重复元素，并返回新的向量长度
//int removeDuplicates(vector<int>& nums) {
//    int numsSize = nums.size(); // 获取向量的大小
//    if (numsSize == 0) { // 如果向量为空，则直接返回长度为0
//        return 0;
//    }
//
//    int dest = 0; // dest指针用于记录最后一个不重复元素的位置
//    // 遍历向量中除了第一个元素之外的所有元素
//    for (int cur = 1; cur < numsSize; ++cur) {
//        // 当前元素与dest位置的元素不相同，说明发现了新的不重复元素
//        if (nums[cur] != nums[dest]) {
//            // 将这个新的不重复元素移动到dest+1的位置
//            nums[++dest] = nums[cur];
//        }
//    }
//
//    // 返回新的向量长度，因为dest是从0开始的索引，所以要加1
//    return dest + 1;
//}
//
//int main() {
//    // 定义一个有序向量
//    std::vector<int> nums = { 1, 1, 2, 2, 3, 3, 4, 4, 4, 5 };
//
//    // 输出原始向量
//    std::cout << "Original vector:\n";
//    for (int num : nums) {
//        std::cout << num << " ";
//    }
//    std::cout << "\n";
//
//    // 调用removeDuplicates函数
//    int newSize = removeDuplicates(nums);
//
//    // 输出处理后的向量和新的长度
//    std::cout << "Processed vector with no duplicates:\n";
//    for (int i = 0; i < newSize; ++i) {
//        std::cout << nums[i] << " ";
//    }
//    std::cout << "\nNew size: " << newSize << std::endl;
//
//    return 0;
//}

//
//class Solution {
//public:
//    // 评估逆波兰表达式的主函数
//    int evalRPN(vector<string>& tokens) {
//        stack<int> st;  // 使用整数栈来存储中间计算结果
//
//        // 遍历所有的token（即每一个数字或运算符）
//        for (size_t i = 0; i < tokens.size(); i++) {
//            int left, right;  // 用于存储两个操作数
//
//            // 根据当前token的内容决定操作
//            if (tokens[i] == "+") {  // 加法运算符
//                GetNum(st, left, right);  // 从栈中取两个数
//                st.push(left + right);  // 将两数之和压入栈中
//            }
//            else if (tokens[i] == "-") {  // 减法运算符
//                GetNum(st, left, right);  // 从栈中取两个数
//                st.push(left - right);  // 将两数之差压入栈中
//            }
//            else if (tokens[i] == "*") {  // 乘法运算符
//                GetNum(st, left, right);  // 从栈中取两个数
//                st.push(left * right);  // 将两数之积压入栈中
//            }
//            else if (tokens[i] == "/") {  // 除法运算符
//                GetNum(st, left, right);  // 从栈中取两个数
//                st.push(left / right);  // 将两数之商压入栈中
//            }
//            else {  // 数字
//                st.push(stoi(tokens[i]));  // 将字符串转换为整数并压入栈中
//            }
//        }
//        return st.top();  // 返回栈顶元素，即为表达式的最终结果
//    }
//
//    // 从栈中取出两个操作数的辅助函数
//    void GetNum(stack<int>& st, int& left, int& right) {
//        right = st.top();  // 栈顶是右操作数
//        st.pop();  // 弹出栈顶元素
//        left = st.top();  // 下一个栈顶是左操作数
//        st.pop();  // 弹出栈顶元素
//    }
//};
//
//
//// 函数定义：移除有序数组中的重复元素，并返回新的数组长度
//int removeDuplicates(int* nums, int numsSize)
//{
//    // 如果数组为空，则直接返回长度为0
//    if (numsSize == 0)
//    {
//        return 0;
//    }
//
//    // dest指针用于记录最后一个不重复元素的位置
//    int dest = 0;
//    // cur指针用于遍历数组中的每一个元素
//    int cur = 1;
//    // 初始化，将第一个元素视为不重复元素
//    nums[dest] = nums[0];
//
//    // 遍历数组中除了第一个元素之外的所有元素
//    while (cur < numsSize)
//    {
//        // 当前元素与dest位置的元素不相同，说明发现了新的不重复元素
//        if (nums[cur] != nums[dest])
//        {
//            // 将这个新的不重复元素移动到dest+1的位置
//            nums[++dest] = nums[cur++];
//        }
//        else
//        {
//            // 如果当前元素与dest位置的元素相同，跳过这个重复元素
//            cur++;
//        }
//    }
//
//    // 返回新的数组长度，因为dest是从0开始的索引，所以要加1
//    return dest + 1;
//}
//
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int Numsize = nums.size();
//        int cur = 1;
//        int dest = 0;//默认第一个是独一无二的
//        int flag = 1;//第二个元素至多可以重复一次，所以初始化flag为1，表示第一个元素已经出现过一次
//        if (nums.size() <= 2) {
//            return nums.size(); // 如果数组大小不超过2，则不需要任何操作
//        }
//
//        while (cur < Numsize)
//        {
//
//            if (nums[cur] == nums[dest] && flag < 2)
//            {
//                // 如果当前元素与前一个相同，但还没有重复超过一次，那么也添加到数组中
//                nums[++dest] = nums[cur];
//                cur++;
//                flag++;
//            }
//            else if (nums[cur] == nums[dest] && flag >= 2)
//            {
//                //这种情况就不符合题目条件了
//                cur++;
//
//            }
//            else
//            {
//                // 如果当前元素(cur)与前一个(dest)不同，那么它可以被添加到dest+1的位置中
//                nums[++dest] = nums[cur];
//                cur++;
//                flag = 1;
//            }
//        }
//
//        return dest + 1;// 数组的新长度是最后一个元素的索引 + 1
//    }
//};



//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int left = 0;//初始化左指针
//        int right = height.size() - 1;//初始化右指针
//        int res = 0;  // 初始化结果变量
//
//        while (left < right) {
//            int currentArea = (right - left) * min(height[left], height[right]);//计算当前的面积
//            res = max(res, currentArea);  // 更新最大面积
//
//            if (height[left] > height[right]) {
//                right--;  // 移动较短的一边
//            }
//            else {
//                left++;  // 移动较短的一边
//            }
//        }
//        return res;
//    }
//};

//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> ans;
//        int len = nums.size();
//        if (len < 3) {
//            return ans;
//        }// 元素不足情况
//        std::sort(nums.begin(), nums.end()); // 对输入的数组进行升序排序
//        if (nums[0] > 0) {
//            return ans;
//        }
//        int i;
//        for (i = 0; i < len - 2; i++) {
//            if (i > 0 && nums[i] == nums[i - 1]) {
//                continue;
//            }// 如果i不是第一个元素且和前一个元素相等，就往后移一位，保证结果中每个相同的i只出现一次
//            int m = i + 1; // 目前指向当前元素的后一元素
//            int n = len - 1; // 目前指向最后一个元素
//            int sum;  // 表示三数之和
//            while (m < n) {
//                int sum = nums[i] + nums[m] + nums[n];
//                if (sum == 0) {
//                    ans.push_back({ nums[i], nums[m], nums[n] });
//                    while (m < n && nums[m] == nums[m + 1]) {
//                        ++m;
//                    }
//                    while (m < n && nums[n] == nums[n - 1]) {
//                        --n;
//                    }
//                    ++m;
//                    --n;   // 这里可以跳过重复的m,n位置，一方面避免了结果重复（以为是在sum=0时触发），另一方面节约了时间
//                    // 但是不能给sum不为0时跳过，如果m,n跳过就导致m,n是唯一，不会出现m=n的情况了
//                    // 比如[-2，-1，-1]这种结果就不会出现，导致答案错误
//                }
//                else if (sum < 0) {
//                    ++m;
//                }
//                else {
//                    --n;
//                }
//            }
//        }
//        return ans;
//    }
//};

////LeetCode - LCR 179.查找总价格为目标值的两个商品
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& price, int target)
//    {
//        int left = 0;
//        int right = price.size() - 1;
//        while (left < right)
//        {
//            int sum = price[left] + price[right];
//            if (sum > target)
//            {
//                right--;
//            }
//            else if (sum < target)
//            {
//                left++;
//            }
//
//            else
//            {
//                return { price[left],price[right] };
//            }
//        }
//        return { -1,-1 };
//    }
//};
//
//
////LeetCode - 611.有效三角形个数
//class Solution {
//public:
//    int triangleNumber(vector<int>& nums)
//    {
//        sort(nums.begin(), nums.end());
//        int cout = 0;
//        int fix = nums.size() - 1;
//        while (fix > 1)
//        {
//            int left = 0;
//            int right = fix - 1;
//            while (left < right)
//            {
//                if (nums[left] + nums[right] > nums[fix])
//                {
//                    cout += right - left;
//                    right--;
//                }
//                else
//                {
//                    left++;
//                }
//            }
//            fix--;
//        }
//        return cout;
//    }
//};

//LeetCode - 长度最小的子数组
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) 
//    {
//        int left = 0;
//        int right = 0;
//        int len = INT_MAX;
//        int res = 0;
//        while (right < nums.size())
//        {
//            res += num[right++];
//                while (res > target)
//                {
//                    len = min(len,right - left +1);
//                    sum -= num[left--];
//                }
//                return len = INT_MAX ？0 : len;
//        }
//    }
//};

// 1004. 最大连续1的个数 III
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int zero = 0;
        int ret = 0;
        while (right < nums.size())
        {
            if (nums[right] == 0)
            {
                zero++;
                while (zero > k)
                {
                    if (nums[left++] == 0)
                    {
                        zero--;
                    }
                }
            }
            ret = max(ret, right - left + 1);
            right++;
        }
        return ret;
    }
};

//LeetCode - 1658. 将 x 减到 0 的最小操作数
class Solution {
public:
    int minOperations(vector<int>& nums, int x)
    {
        int len = -1;
        int left = 0;
        int right = 0;
        int sum = 0;
        int res = 0;
        for (int a : nums)
        {
            sum += a;
        }
        int target = sum - x;
        if (target < 0)
        {
            return -1;
        }
        while (right < nums.size())
        {
            res += nums[right];
            while (res > target)
            {
                res -= nums[left++];
            }
            if (res == target)
            {
                len = max(len, right - left + 1);
            }
            right++;
        }
        if (len == -1)
        {
            return len;
        }
        else
        {
            return nums.size() - len;
        }
    }
};

//LeetCode - 904.水果成篮
class Solution {
public:
    int totalFruit(vector<int>& fruits)
    {
        unordered_map<int, int> hash;
        int left = 0;
        int right = 0;
        int ret = 0;
        while (right < fruits.size())
        {
            hash[fruits[right]]++;
            while (hash.size() > 2)
            {
                hash[fruits[left]]--;
                if (hash[fruits[left]] == 0)
                {
                    hash.erase(fruits[left]);
                }
                left++;
            }
            ret = max(ret, right - left + 1);
            right++;
        }
        return ret;
    }
};