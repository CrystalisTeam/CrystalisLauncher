#include "wowinstall.h"

WowInstall::WowInstall()
{
    WowInstall::GetVersionServer();
}

bool WowInstall::CheckVersion() {
    //WowInstall::GetVersionServer();
    if (version != version_server) {
        return false;
    }
    return true;
}

void WowInstall::GetVersionServer() {

}

void WowInstall::Update() {

}

void WowInstall::UpdateNews() {

}

bool WowInstall::CheckWowDirectory() {

}
