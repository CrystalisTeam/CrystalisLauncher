#include "file_manager.h"
#include "launcher_config.h"
#include "windows.h"

const std::string kDataPath = "Data/";
const std::string kBackupPath = ".BKP/";


FileManager::FileManager() {
    toDownload = new std::vector<std::string>();
    toRemove = new std::vector<std::string>();
}

FileManager::~FileManager() {
    delete toDownload;
    delete toRemove;
}

bool FileManager::CheckFiles(const std::string &address) {
    // TODO
    return false;
}

int FileManager::RemoveFiles() {
    int nb = 0;

    for (auto& file : *toRemove) {
        if (!LauncherConfig::IsIgnored(file)) {
#ifdef _WIN32  // Windows case
            int error = MoveFile(FileManager::kDataPath + *file, FileManager::kBackupPath + *file);
            if (error) {
                // TODO: handle errors?
            }
#else
            // TODO: handle other OS?
#endif
            ++nb;
        }
    }

    return nb;
}
