#include "wowinstall.h"

WowInstall::WowInstall()
{
    WowInstall::GetVersionServer();
}

bool WowInstall::CheckVersion() {
    //WowInstall::GetVersionServer();

    return version == server_version;
}

void WowInstall::GetVersionServer() {

}

void WowInstall::Update() {

}

void WowInstall::UpdateNews() {

}

bool WowInstall::CheckWowDirectory() {

}
