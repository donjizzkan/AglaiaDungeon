// =====================
// player 데이터 저장
// =====================
#include <iostream>
#include <array>
#include "SFML/System.hpp"
#include "application.hpp"
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
    array<StatusEffectDetail, (size_t)StatusEffect::cnt> effects;
};

// 상태이상 효과 종류들
enum class StatusEffect{
    Stun,
    Poison,
    Burn,
    cnt                 // 상태이상 효과의 총 개수 세는용
};

// 각 상태이상의 디테일저장용
struct StatusEffectDetail{
    StatusEffect effect;
    int effectTurn;     
    int effectDmg;
};

