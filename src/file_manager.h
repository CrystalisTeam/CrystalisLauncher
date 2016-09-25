#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <string>
#include <vector>

class FileManager {

public:
    FileManager();
    ~FileManager();

    // Check differences between local and remote files.
    // @param address: address of the remote root folder to search for files.
    bool CheckFiles(const string &address);

    // Remove all local files that had been marked as unnecessary by CheckFiles.
    // Files are not actually removed, but moved into the backup folder (see kBackupPath).
    // @returns Number of removed files.
    int RemoveFiles();

    // Path to the Data folder, where downloaded files are put.
    static const std::string kDataPath;
    // Path to the backup folder, where "removed" files are put.
    static const std::string kBackupPath;

private:
    std::vector<std::string>* toDownload;
    std::vector<std::string>* toRemove;

};

#endif // FILEMANAGER_H
