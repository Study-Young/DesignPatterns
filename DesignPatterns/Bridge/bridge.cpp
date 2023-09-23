#include "bridge.h"

void HandsetGame::Run()
{
    qDebug()<<"运行手机游戏；";
}

void HandsetAddressList::Run()
{
    qDebug()<<"运行手机通信录；";
}

void HandsetMP3::Run()
{
    qDebug()<<"运行手机MP3播放；";
}

void HandsetBrand::SetHandsetSoft(HandsetSoft *soft)
{
    m_pHandsetSoft = soft;
}

void HandsetBrandM::Run()
{
    m_pHandsetSoft->Run();
}

void HandsetBrandN::Run()
{
    m_pHandsetSoft->Run();
}

void HandsetBrandP::Run()
{
    m_pHandsetSoft->Run();
}
