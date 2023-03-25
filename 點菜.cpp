#include <iostream>
using namespace std;
///要加註解
#include <chrono>
#include <cmath>

#include <thread>
int main() {
    int ifv, ifc, ifm;
    float nt = 0;
    char s, m, r, d, v, awdawd;
    cout << "歡迎光臨成大鍋物，以下將為您介紹本店菜單" << endl;///輸出菜單
    cout << "首先，我們的湯底有以下選擇：\n　ａ絕對不會雷的昆布\n　ｂ要小心屁股炸裂的麻辣\n　ｃ有些很好喝有些很噁的藥膳\n　ｄ媽的一定會糊得很噁心的南瓜\n" << endl;
    cout << "再來為您介紹肉類：\n　ａ澳牛\n　ｂ日豬\n　ｃ哈哈其實我就是吳郭魚啦\n" << endl;
    cout << "再來為您介紹如果月底吃土可以點很多份的附餐：\n　ａ白飯\n　ｂ寬粉\n　ｃ從缺\n" << endl;
    cout << "再來為您介紹喝的：\n　ａ明明是火鍋店卻沒有免費提供的雪碧\n　ｂ生啤酒\n" << endl;
    cout << "如果您吃素，我們也為你提供僅有兩樣的選擇：\n　ａ葉子鍋\n　ｂ真菌菌絲鍋\n" << endl;
    cout << "吃素嗎？（若是請輸入'1'，否則輸入'0'）" << endl;///問是否為素食者
    cin >> ifv;
    cout << "當我問你要什麼選擇時，請盡快以數字回答，我們人手不足非常抱歉，另外請用半形點菜，我們只是為了排版才用全形的" << endl;
    cout << "準備好了嗎？\n以下每個問題僅有2秒選擇時間，若失敗將重頭開始，準備好就輸出任意字元開始點菜" << endl;///提示使用者輸入，依序選擇湯底、肉盤、附餐、飲品
    cin >> awdawd;
    for(int i = 3; i >0; i--){
        this_thread::sleep_for(chrono::seconds(0));
        cout << i << endl;  
    }
    cout << "START!" << endl;
    if(ifv == 0){
        cout << "湯底要什麼？：\n　ａ絕對不會雷的昆布\n　ｂ要小心屁股炸裂的麻辣\n　ｃ有些很好喝有些很噁的藥膳\n　ｄ媽的一定會糊得很噁心的南瓜\n" << endl;
        cin >> s;
        cout << "肉哩？：\n　ａ澳牛\n　ｂ日豬\n　ｃ哈哈其實我就是吳郭魚啦\n" << endl;
        cin >> m; 
    }else{
        cout << "吃素的，快點選：\n　ａ葉子鍋\n　ｂ真菌菌絲鍋\n" << endl;
        cin >> v;  
    }
    cout << "要點飯寬粉還是蛋嗎？：\n　ａ白飯\n　ｂ寬粉\n　ｃ從缺\n" << endl;
    cin >> r;
    cout << "喝什麼？：\n　ａ明明是火鍋店卻沒有免費提供的雪碧\n　ｂ生啤酒\n" << endl;
    cin >> d;
    cout << "請問有類頂大的不成功大學生學生證嗎？（若是打1，不是打0）\n";///詢問是否有成大學生證
    cin >> ifc;
    if(ifc == 1){
        cout << "真的喔？那你是讀那個聽說會讀得要死要活的機械系嗎？（若是打1，不是打0）\n";
        cin >> ifm;
        if(ifm == 1){
            cout << "真的假的？不過沒有優惠，請你不要想太多(店員不經意地露出鄙視的眼神\n";
        }else{
            cout << "啊～竟然不是，真是太可惜了，原本想說你是的話我還打算......(店員不經意地露出看起來楚楚可憐的雙眼，她該不會喜歡勤奮而又博學的機械系男生呢？如果剛才回答是，我的人生或許會從此變得不一樣\n\n";
        }
    }
    cout << "那麼我為您確認一下餐點，如果確認無誤後，之後都是你自己的問題\n首先，你點的湯底是：";
   switch(s) {
      case 'a' :
           cout << "絕對不會雷的昆布鍋　39元" << endl; 
           nt += 39;
         break;
      case 'b' :
           cout << "要小心屁股炸裂的麻辣鍋　49元" << endl; 
           nt += 49;
      case 'c' :
         cout << "有些很好喝有些很噁的藥膳鍋　49元" << endl;
           nt += 49;
           break;
      case 'd' :
           cout << "媽的一定會糊得很噁心的南瓜鍋　49元" << endl;
           nt += 49;
         break;
      default :
           if(ifv == 0){
               cout << "（店員又仔細地看了看，深呼一口氣並破口大罵）給我照規則點餐！" << endl;
           }
   }
   switch(v) {
      case 'a' :
         cout << "葉子鍋　400元" << endl;
           nt += 400;
         break;
      case 'b' :
         cout << "真菌菌絲鍋　360元" << endl; 
           nt += 360;
      default :
           if(ifv == 1){
               cout << "（店員又仔細地看了看，深呼一口氣並破口大罵）給我照規則點餐！" << endl;
           }
   }
    if(ifv == 0){
        cout << "您的肉：";
        switch(m){
            case 'a' :
                cout << "澳牛　368元" << endl;
                nt += 368;
                break;
            case 'b' :
                cout << "日豬　318元" << endl;
                nt += 318;
                break;
            case 'c' :
                cout << "哈哈其實我就是吳郭魚啦　350元" << endl;
                nt += 350;
                break;
        }
    }
    switch(r){
        case 'a' :
            cout << "白飯　10元" << endl;
            nt += 11;
                break;
        case 'b' :
            cout << "寬粉　10元" << endl;
            nt += 10;
                break;
        case 'c' :
            cout << "就跟你說從缺了你還硬要點那我也硬收你錢　15元" << endl;
            nt += 15;
                break;
      default :
            cout << "（店員又仔細地看了看，深呼一口氣並破口大罵）給我照規則點餐！\n";
    }
    switch(d){
        case 'a' :
            cout << "明明是火鍋店卻沒有免費提供的雪碧　20元" << endl;
            nt += 20;
                break;
        case 'b' :
            cout << "生啤酒　80元" << endl;
            nt += 80;
                break;
        default :
            cout << "（店員又仔細地看了看，深呼一口氣並破口大罵）給我照規則點餐！\n";
        }
    int intnt;
    if(ifc == 1){
        intnt = round(0.9*nt);
    }else{
        intnt = round(nt);
    }
    printf("一共是%d元，快給錢（請輸入整數）\n", intnt);///輸出點餐資訊及應付金額
    int getm;
    if(cin >> getm){
        printf("找您%d個十元，%d個五元，和%d個一元", (getm-intnt)/10, (getm-intnt)%10/5, (getm-intnt)%10%5);
    }else{
        cout << "我只有領176還要被你這樣搞？煩不煩啊！";///顯示適當文字或說明
    }
    
    

    
    
}