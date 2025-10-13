// =====================
// player 데이터 저장
// =====================
#include <iostream>

using namespace std;

// 절대적인 수치를 저장
class Player{
public:
    int playerMaxHp = 251;
    int playerMaxStamina = 214;
    int playerATK = 48;
};

// 변동되는 수치를 저장
struct PlayerStatus{
    int nowHp;
    int nowStamina;
};