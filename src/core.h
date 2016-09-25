#ifndef CORE_H
#define CORE_H
#include "mainwindow.h"
#include "download_manager.h"
#include "file_manager.h"

class Core {

public:
    Core();
    ~Core();

    // Main thread loop, for managing the update.
    void MainThread();

    // Executes Wow.exe and hides the launcher.
    void LaunchGame();

private:
    DownloadManager* dlManager;
    FileManager* fileManager;
    MainWindow* mainWindow;

    bool stopApplication_;

};

#endif // CORE_H
