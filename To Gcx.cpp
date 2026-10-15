/*
    This program is written for GCX

    Version: 1.0

    Created on 2026.10.14

    A a specialised letter for you
*/
#include <iostream>
#include <string>
using namespace std;
#include <vector>

string poem[8][8] =
{
    // A：风、街道、相逢
    {
        "阳光在幽深的街道里迷了路\n",
        "风经过你时\n忽然有了形状\n",
        "那些尚未发生的相逢\n",
        "在某条没有名字的街上\n",
        "我不知道我是在走还是停\n",
        "有一阵风\n偏偏吹乱了你的头发\n",
        "灯火渐次低垂\n而你仍在远处\n",
        "那时的我们\n还不懂得如何告别\n"
    },

    // B：冬天、温度、记忆
    {
        "空气凝结成玻璃\n",
        "冬天教会了人温暖的意义\n",
        "在一场雪尚未落下以前\n",
        "指尖还留着\n一点迟迟不散的温热\n",
        "我把旧日的寒冷\n轻轻放在你手心\n",
        "窗上浮起薄雾\n遮住了半个世界\n",
        "有些温柔\n原来是从寒冷中生长的\n",
        "而你一笑\n漫长的冬天便有了尽头\n"
    },

    // C：夜、月、梦
    {
        "月色在窗帘背后流淌\n",
        "像一场没有惊醒的梦\n",
        "夜风替我掩上了门\n",
        "你的影子\n比月亮更早来到这里\n",
        "星辰沉入无声的湖水\n",
        "我曾在梦里\n听见你轻轻唤我\n",
        "枕边散落着\n昨夜未尽的絮语\n",
        "好让今夜\n比昨夜再长一些\n"
    },

    // D：旅人、远方、归途
    {
        "在世界辽阔的另一面\n",
        "一个旅人忘记了来路\n",
        "山川沉默\n仿佛从未有人经过\n",
        "我走过许多地方\n只为记住一次回眸\n",
        "远方的风尘\n还停在我的衣襟上\n",
        "道路在暮色中渐渐变窄\n",
        "我们曾把流浪\n误认作某种自由\n",
        "如今想来\n归途也可以是一个人\n"
    },

    // E：日常、光阴、细节
    {
        "午后的光\n斜斜地落在书页之间\n",
        "杯中的水已经凉了\n",
        "有些话说到一半\n便忘了下文\n",
        "你坐在窗边\n什么也不必做\n",
        "我们谈起一些\n并不重要的小事\n",
        "时钟走得很慢\n像故意留下片刻\n",
        "一阵熟悉的香气\n经过空荡的走廊\n",
        "原来寻常日子\n也值得这样珍藏\n"
    },

    // F：情爱、眉眼、亲昵
    {
        "你眉间的春色\n比花开得更早\n",
        "有一瞬间\n我几乎吻上你的名字\n",
        "晚风拂过衣领\n也拂过未说出口的爱意\n",
        "那一点微红\n不知属于晚霞还是脸颊\n",
        "愿借你眼底的光\n照亮我片刻的踌躇\n",
        "唇边停着半句诗\n和一点不肯散去的温柔\n",
        "若有花香暗暗浮动\n大约是你刚刚经过\n",
        "我把满怀心事藏好\n却忘了藏住目光\n"
    },

    // G：年华、遗忘、时间
    {
        "光阴从指缝间悄悄漏下\n",
        "有些往事\n至今没有合上\n",
        "那年夏天的雨\n仍落在很远的地方\n",
        "我们都曾年轻得\n不愿相信岁月\n",
        "多年以后\n风是否还认得我们\n",
        "昨日的声音\n在空房间里轻轻回响\n",
        "我想留住的\n其实不过几个瞬间\n",
        "有些名字\n越过时间仍然清晰\n"
    },

    // H：眷恋、回声、未完成
    {
        "于是我又想起了你\n",
        "这一切\n仿佛本可以再迟一点结束\n",
        "而我的心事\n仍停留在那个黄昏\n",
        "倘若还有一场春雨\n",
        "请让风再轻一些\n",
        "我愿在你身旁\n虚度许多明亮的日子\n",
        "直到夜色温柔地淹没我们\n",
        "还有许多话\n想留到明天再说\n"
    }
};


int main() {
    string letterList = "ioeuvylm";
    string code;
    cout << "请在ioeuvylm中选择任意个组成一串字符：\n";//后面注意输入的奇偶个数
    cin >> code;
    vector<char> splitCode1;
    vector<char> splitCode2;
    for (int i = 0;i < code.length();i = i + 2)
    {
        char parameter = code[i];
        splitCode1.push_back(parameter);
    }//取出输入的字符并存入
    for (int i = 1;i < code.length();i = i + 2)
    {
        char parameter = code[i];
        splitCode2.push_back(parameter);
    }//取出输入的字符并存入
    if (code == "iloveyou") {
        cout << "I LOVE YOU,TOO";
        return 0;
    }
    else {  // 每次处理一组字母
    for (int k = 0; k < splitCode1.size(); k++)
    {
        int row = -1;
        int col = -1;

        // 寻找两个字母对应的行号、列号
        for (int j = 0; j < letterList.length(); j++)
        {
            if (splitCode1[k] == letterList[j])
            {
                row = j;
            }

            if (splitCode2[k] == letterList[j])
            {
                col = j;
            }
        }

        // 检查是否找到
        if (row == -1 || col == -1)
        {
            cout << "输入了不合法的字母！\n";
            return 0;
        }

        // 核心：根据两个下标输出句子
        cout << poem[row][col];
    }

    return 0;
        

    }
}
    


    
  
