#ifndef LAUNCHERCONFIG_H
#define LAUNCHERCONFIG_H
#include <string>
#include <vector>

class LauncherConfig {

public:
    LauncherConfig();

    bool ReadConfig();

    // Whether the file should be ignored (not removed / not downloaded)
    bool IsIgnored(const std::string &file);
    std::string GetFileAddress();
    std::string GetNewsAddress();

private:
    // Name of the config file (including path from the WoW folder)
    static const std::string kConfigFileName;

    // Configurations are set during ReadConfig() and retrieved using getters
    std::string fileAddress;
    std::string newsAddress;
    bool clearCacheOnPlay;
    // These files are ignored when calculating differences (both local and remote)
    std::vector<std::string> ignoredFiles;

};

#endif // LAUNCHERCONFIG_H
