/*
给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。

示例 1:

输入: 123
输出: 321
 示例 2:

输入: -123
输出: -321
示例 3:

输入: 120
输出: 21
注意:

假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。
2^31-1=2147483647,-2^31=-2147483648
*/
#include<iostream>
#include<math.h>
using namespace std;
class Solution{
    public:
    int flag=0;//判断符号
    int power(int a,int b){
        for(int i=0;i<b;i++){
            a=a*10;
        }
        return a;
    }
    int reverses(int x,int i){
            int a=0;
            int b=0;
            for(int j=0;j<i;j++){
                a = abs(x%10);
                b = b+power(a,i-j-1);
                //cout<<b<<"--------------"<<a<<"--------------"<<i-j-1<<endl;
                //cout<<x%10<<"------------"<<i-j-1<<"----------------"<<pow(10,i-j-1)<<"-------"<<a<<endl;//pow函数莫名其妙少1，输出结果为
                /*
                8------------7----------------1e+007-------79999999
                7------------6----------------1e+006-------86999999
                6------------5----------------100000-------87599999
                5------------4----------------10000-------87649999
                4------------3----------------1000-------87653999
                3------------2----------------100-------87654299
                2------------1----------------10-------87654319
                1------------0----------------1-------87654320
                */
                x /= 10;
                //cout<<x<<"-----"<<endl;
            }
            if(flag>0){
                return b;
            }
            else{
                return -b;
            }
    }
    int reverse(int x){
        if(x<0){
            flag=-1;
        }
        int a=abs(x);
        int i=1;
        for(;a>10;i++){//先看整数x有多少位
            a=a/10;
        }
        //cout<<i<<endl;
        if(i>10){//多于10位直接溢出
            return 0;
        }
        else if(i<10){//少于10位直接输出
            return reverses(x,i);
        }
        else if(i == 10){//如果刚好等于10位，就一位一位判断溢出
            if(x>0){//2147483647
            a=x;
                if(x%10<2){
                    return reverses(a,i);
                }
                else if(x%10 == 2){
                    x /= 10;
                    if(x%10 == 1){
                        x /= 10;
                        if(x%10 == 4){
                            x /= 10;
                            if(x%10 == 7){
                                x /= 10;
                                if(x%10 == 4){
                                    x /= 10;
                                    if(x%10 == 8){
                                        x /= 10;
                                        if(x%10 == 3){
                                            x /= 10;
                                            if(x%10 == 6){
                                                x /= 10;
                                                if(x%10 == 4){
                                                    x /= 10;
                                                    if(x%10 == 7){
                                                        return 2147483647;
                                                    }
                                                    else if(x%10<7){
                                                        return reverses(a,i);
                                                    }
                                                    return 0;//如果第十位大于7
                                                }
                                                else if(x%10<4){
                                                    return reverses(a,i);
                                                }
                                                return 0;//如果第九位大于4
                                            }
                                            else if(x%10<6){
                                                return reverses(a,i);
                                            }
                                            return 0;//如果第八位大于6
                                        }
                                        else if(x%10<3){
                                            return reverses(a,i);
                                        }
                                        return 0;//如果第七位大于3  
                                    }
                                    else if(x%10<8){
                                        return reverses(a,i);
                                    }
                                    return 0;//如果第六位大于8
                                }
                                else if(x%10<4){
                                    return reverses(a,i);
                                }
                                return 0;//如果第五位大于4
                            }
                            else if(x%10<7){
                                return reverses(a,i);
                            }
                            return 0;//如果第四位大于7
                        }
                        else if(x%10<4){
                            return reverses(a,i);
                        }
                        return 0;//如果第三位大于4
                    }
                    else if(x%10 == 0){
                        return reverses(a,i);
                    }
                    return 0;//如果第二位大于1
                }
                return 0;//如果第一位大于2
            }
            else{//-2147483648 x<0;
            a=x;
                if(x%10<2){
                    return reverses(a,i);
                }
                else if(x%10 == 2){
                    x /= 10;
                    if(x%10 == 1){
                        x /= 10;
                        if(x%10 == 4){
                            x /= 10;
                            if(x%10 == 7){
                                x /= 10;
                                if(x%10 == 4){
                                    x /= 10;
                                    if(x%10 == 8){
                                        x /= 10;
                                        if(x%10 == 3){
                                            x /= 10;
                                            if(x%10 == 6){
                                                x /= 10;
                                                if(x%10 == 4){
                                                    x /= 10;
                                                    if(x%10 == 8){
                                                        return -2147483648;
                                                    }
                                                    else if(x%10<8){
                                                        return reverses(a,i);
                                                    }
                                                    return 0;//如果第十位大于8
                                                }
                                                else if(x%10<4){
                                                    return reverses(a,i);
                                                }
                                                return 0;//如果第九位大于4
                                            }
                                            else if(x%10<6){
                                                return reverses(a,i);
                                            }
                                            return 0;//如果第八位大于6
                                        }
                                        else if(x%10<3){
                                            return reverses(a,i);
                                        }
                                        return 0;//如果第七位大于3  
                                    }
                                    else if(x%10<8){
                                        return reverses(a,i);
                                    }
                                    return 0;//如果第六位大于8
                                }
                                else if(x%10<4){
                                    return reverses(a,i);
                                }
                                return 0;//如果第五位大于4
                            }
                            else if(x%10<7){
                                return reverses(a,i);
                            }
                            return 0;//如果第四位大于7
                        }
                        else if(x%10<4){
                            return reverses(a,i);
                        }
                        return 0;//如果第三位大于4
                    }
                    else if(x%10 == 0){
                        return reverses(a,i);
                    }
                    return 0;//如果第二位大于1
                }
                return 0;//如果第一位大于2
            }//cout
        }
    }
};

int main(){
    Solution s;
    int a=-2147483648;// -2147483648 2147483647
    int b = s.reverse(a);
    cout<<b;
    return 0;
}
/*
先判断位数，如果大于10位直接为0，如果正好是10位先看大于0还是小于0，然后一位位比较，小于10位直接输出

Line 42: Char 13: runtime error: negation of -2147483648 cannot be represented in type 'int'; cast to an unsigned type to negate this value to itself (solution.cpp)
思路有问题，参考题解
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
*/
