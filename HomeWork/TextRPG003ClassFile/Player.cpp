#include "Player.h"
#include <iostream>

// #CPP������ #include�� �ƹ��� �����ص� ��ȯ������ ���� ���ص� �ȴ�.
// �׷��� ������ �ִ�. ���尡 ���� �ɸ���.
// obj���ϸ��� #include�� 


// �ɹ��Լ� ���� ����
APlayer::APlayer()
{
	// std::cout << "�÷��̾� ������" << std::endl;
}

void APlayer::StatusTextPrint()
{
    //UObject* Ptr = this;
    //UFightUnit* Ptr = this;
    //UStatusUnit* Ptr = this;

    printf_s("���ݷ� : %d ~ %d + %d\n", MinAtt, MaxAtt, EquipAtt);
    printf_s("ü�� : %d\n", Hp);
    printf_s("��� : %d\n", Gold);
}

// �ɹ��Լ��� �����Ҵ�� �̷��� �׳� �����Լ���.
// ��Ȯ�� �̸��� �������� �Ѵ�.
// � Ŭ������ ���Ѱ��� �������� �Ѵ�.
void APlayer::Equip(class Item* Weapon)
{

}
