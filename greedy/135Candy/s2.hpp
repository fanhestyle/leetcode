#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int>& ratings)
    {
        int result = 1; //返回结果

        int pre = 1;        //升序序列的最大值
        int descending = 0; //降序序列的长度

        for (int i = 1; i < ratings.size(); i++)
        {
            int p = ratings[i], q = ratings[i - 1];

            if (p >= q)
            {
                if (descending > 0)
                {
                    int previousDescending = (1 + descending) * descending / 2;
                    result += previousDescending;

                    //（比如
                    // 1,2,3,_,_,_,_假设3后面接着有4个降序的数字，那么显然3就要增加变成5）
                    if (descending >= pre) //如果降序的数量大于之前升序的数量
                    {
                        result += (descending + 1 - pre);
                    }
                    pre = 1;
                    descending = 0;
                }

                if (p == q)
                {
                    pre = 1;
                }
                else
                {
                    pre++;
                }

                result += pre;
            }
            else // p < q
            {
                ++descending;
            }
        }

        //如果后续递减直到程序结束，那么我们还需要把循环之后未统计的部分加上
        if (descending > 0)
        {
            result += ((1 + descending) * descending) / 2;
            if (pre <= descending)
                result += (descending - pre) + 1;
        }

        return result;
    }
};

/*
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int ret = 1;
        int inc = 1, dec = 0, pre = 1;
        for (int i = 1; i < n; i++) {
            if (ratings[i] >= ratings[i - 1]) {
                dec = 0;
                pre = ratings[i] == ratings[i - 1] ? 1 : pre + 1;
                ret += pre;
                inc = pre;
            } else {
                dec++;
                if (dec == inc) {
                    dec++;
                }
                ret += dec;
                pre = 1;
            }
        }
        return ret;
    }
*/