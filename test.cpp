#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<stack>
#include <string> // ����stoi����

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
//        move(n - 1, A, C, B);    // ��A����n-1��ͨ��C�Ƶ�B
//        C.push_back(A.back()); // ��A���һ���Ƶ�C
//        A.pop_back();          // ��ʱ��A����
//        move(n - 1, B, A, C);    // ��B����n-1��ͨ���յ�A�Ƶ�C
//    }
//};
//
//int main() {
//    vector<int> A = { 3, 2, 1 }, B = {}, C = {};
//    Solution sol;
//    sol.hanota(A, B, C);
//
//    // ��ӡ���
//    cout << "C tower contains: ";
//    for (int num : C) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    return 0;
//}



// �������壺�Ƴ����������е��ظ�Ԫ�أ��������µ���������
//int removeDuplicates(vector<int>& nums) {
//    int numsSize = nums.size(); // ��ȡ�����Ĵ�С
//    if (numsSize == 0) { // �������Ϊ�գ���ֱ�ӷ��س���Ϊ0
//        return 0;
//    }
//
//    int dest = 0; // destָ�����ڼ�¼���һ�����ظ�Ԫ�ص�λ��
//    // ���������г��˵�һ��Ԫ��֮�������Ԫ��
//    for (int cur = 1; cur < numsSize; ++cur) {
//        // ��ǰԪ����destλ�õ�Ԫ�ز���ͬ��˵���������µĲ��ظ�Ԫ��
//        if (nums[cur] != nums[dest]) {
//            // ������µĲ��ظ�Ԫ���ƶ���dest+1��λ��
//            nums[++dest] = nums[cur];
//        }
//    }
//
//    // �����µ��������ȣ���Ϊdest�Ǵ�0��ʼ������������Ҫ��1
//    return dest + 1;
//}
//
//int main() {
//    // ����һ����������
//    std::vector<int> nums = { 1, 1, 2, 2, 3, 3, 4, 4, 4, 5 };
//
//    // ���ԭʼ����
//    std::cout << "Original vector:\n";
//    for (int num : nums) {
//        std::cout << num << " ";
//    }
//    std::cout << "\n";
//
//    // ����removeDuplicates����
//    int newSize = removeDuplicates(nums);
//
//    // ����������������µĳ���
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
//    // �����沨�����ʽ��������
//    int evalRPN(vector<string>& tokens) {
//        stack<int> st;  // ʹ������ջ���洢�м������
//
//        // �������е�token����ÿһ�����ֻ��������
//        for (size_t i = 0; i < tokens.size(); i++) {
//            int left, right;  // ���ڴ洢����������
//
//            // ���ݵ�ǰtoken�����ݾ�������
//            if (tokens[i] == "+") {  // �ӷ������
//                GetNum(st, left, right);  // ��ջ��ȡ������
//                st.push(left + right);  // ������֮��ѹ��ջ��
//            }
//            else if (tokens[i] == "-") {  // ���������
//                GetNum(st, left, right);  // ��ջ��ȡ������
//                st.push(left - right);  // ������֮��ѹ��ջ��
//            }
//            else if (tokens[i] == "*") {  // �˷������
//                GetNum(st, left, right);  // ��ջ��ȡ������
//                st.push(left * right);  // ������֮��ѹ��ջ��
//            }
//            else if (tokens[i] == "/") {  // ���������
//                GetNum(st, left, right);  // ��ջ��ȡ������
//                st.push(left / right);  // ������֮��ѹ��ջ��
//            }
//            else {  // ����
//                st.push(stoi(tokens[i]));  // ���ַ���ת��Ϊ������ѹ��ջ��
//            }
//        }
//        return st.top();  // ����ջ��Ԫ�أ���Ϊ���ʽ�����ս��
//    }
//
//    // ��ջ��ȡ�������������ĸ�������
//    void GetNum(stack<int>& st, int& left, int& right) {
//        right = st.top();  // ջ�����Ҳ�����
//        st.pop();  // ����ջ��Ԫ��
//        left = st.top();  // ��һ��ջ�����������
//        st.pop();  // ����ջ��Ԫ��
//    }
//};
//
//
//// �������壺�Ƴ����������е��ظ�Ԫ�أ��������µ����鳤��
//int removeDuplicates(int* nums, int numsSize)
//{
//    // �������Ϊ�գ���ֱ�ӷ��س���Ϊ0
//    if (numsSize == 0)
//    {
//        return 0;
//    }
//
//    // destָ�����ڼ�¼���һ�����ظ�Ԫ�ص�λ��
//    int dest = 0;
//    // curָ�����ڱ��������е�ÿһ��Ԫ��
//    int cur = 1;
//    // ��ʼ��������һ��Ԫ����Ϊ���ظ�Ԫ��
//    nums[dest] = nums[0];
//
//    // ���������г��˵�һ��Ԫ��֮�������Ԫ��
//    while (cur < numsSize)
//    {
//        // ��ǰԪ����destλ�õ�Ԫ�ز���ͬ��˵���������µĲ��ظ�Ԫ��
//        if (nums[cur] != nums[dest])
//        {
//            // ������µĲ��ظ�Ԫ���ƶ���dest+1��λ��
//            nums[++dest] = nums[cur++];
//        }
//        else
//        {
//            // �����ǰԪ����destλ�õ�Ԫ����ͬ����������ظ�Ԫ��
//            cur++;
//        }
//    }
//
//    // �����µ����鳤�ȣ���Ϊdest�Ǵ�0��ʼ������������Ҫ��1
//    return dest + 1;
//}
//
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int Numsize = nums.size();
//        int cur = 1;
//        int dest = 0;//Ĭ�ϵ�һ���Ƕ�һ�޶���
//        int flag = 1;//�ڶ���Ԫ����������ظ�һ�Σ����Գ�ʼ��flagΪ1����ʾ��һ��Ԫ���Ѿ����ֹ�һ��
//        if (nums.size() <= 2) {
//            return nums.size(); // ��������С������2������Ҫ�κβ���
//        }
//
//        while (cur < Numsize)
//        {
//
//            if (nums[cur] == nums[dest] && flag < 2)
//            {
//                // �����ǰԪ����ǰһ����ͬ������û���ظ�����һ�Σ���ôҲ��ӵ�������
//                nums[++dest] = nums[cur];
//                cur++;
//                flag++;
//            }
//            else if (nums[cur] == nums[dest] && flag >= 2)
//            {
//                //��������Ͳ�������Ŀ������
//                cur++;
//
//            }
//            else
//            {
//                // �����ǰԪ��(cur)��ǰһ��(dest)��ͬ����ô�����Ա���ӵ�dest+1��λ����
//                nums[++dest] = nums[cur];
//                cur++;
//                flag = 1;
//            }
//        }
//
//        return dest + 1;// ������³��������һ��Ԫ�ص����� + 1
//    }
//};



//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int left = 0;//��ʼ����ָ��
//        int right = height.size() - 1;//��ʼ����ָ��
//        int res = 0;  // ��ʼ���������
//
//        while (left < right) {
//            int currentArea = (right - left) * min(height[left], height[right]);//���㵱ǰ�����
//            res = max(res, currentArea);  // ����������
//
//            if (height[left] > height[right]) {
//                right--;  // �ƶ��϶̵�һ��
//            }
//            else {
//                left++;  // �ƶ��϶̵�һ��
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
//        }// Ԫ�ز������
//        std::sort(nums.begin(), nums.end()); // ����������������������
//        if (nums[0] > 0) {
//            return ans;
//        }
//        int i;
//        for (i = 0; i < len - 2; i++) {
//            if (i > 0 && nums[i] == nums[i - 1]) {
//                continue;
//            }// ���i���ǵ�һ��Ԫ���Һ�ǰһ��Ԫ����ȣ���������һλ����֤�����ÿ����ͬ��iֻ����һ��
//            int m = i + 1; // Ŀǰָ��ǰԪ�صĺ�һԪ��
//            int n = len - 1; // Ŀǰָ�����һ��Ԫ��
//            int sum;  // ��ʾ����֮��
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
//                    --n;   // ������������ظ���m,nλ�ã�һ��������˽���ظ�����Ϊ����sum=0ʱ����������һ�����Լ��ʱ��
//                    // ���ǲ��ܸ�sum��Ϊ0ʱ���������m,n�����͵���m,n��Ψһ���������m=n�������
//                    // ����[-2��-1��-1]���ֽ���Ͳ�����֣����´𰸴���
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

////LeetCode - LCR 179.�����ܼ۸�ΪĿ��ֵ��������Ʒ
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
////LeetCode - 611.��Ч�����θ���
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

//LeetCode - ������С��������
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
//                return len = INT_MAX ��0 : len;
//        }
//    }
//};

// 1004. �������1�ĸ��� III
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

//LeetCode - 1658. �� x ���� 0 ����С������
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

//LeetCode - 904.ˮ������
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