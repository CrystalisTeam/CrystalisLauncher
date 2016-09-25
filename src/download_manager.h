#ifndef DOWNLOADMANAGER_H
#define DOWNLOADMANAGER_H

#include <string>
#include <vector>

class DownloadManager {

public:
    enum LauncherState {
        kIdle, kDownloading, kPaused, kReady
    };

    DownloadManager();

    // Launches download of all files contained in input list.
    // Ignored files are not downloaded.
    // @returns Number of downloaded files.
    int Download(std::vector<std::string> toDownload);
    float GetDownloadPercent();

private:
    long int totalDownloadSize;
    long int currentDownloadSize;

    LauncherState status;

};

#endif // DOWNLOADMANAGER_H
