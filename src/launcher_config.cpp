#include "launcher_config.h"

const std::string LauncherConfig::kConfigFileName = ".launcherConfig";


LauncherConfig::LauncherConfig() { }

bool LauncherConfig::ReadConfig() {
    // TODO
}


std::string LauncherConfig::GetFileAddress() {
    return fileAddress;
}

std::string LauncherConfig::GetNewsAddress() {
    return newsAddress;
}

bool LauncherConfig::IsIgnored(const std::string &file) {
    // TODO
    // check in ignored list
    return false;
}
