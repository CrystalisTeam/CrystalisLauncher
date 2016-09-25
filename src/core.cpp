#include "core.h"

Core::Core() {
    dlManager = new DownloadManager();
    fileManager = new FileManager();
    mainWindow = new MainWindow();
}

Core::~Core() {
    delete dlManager;
    delete fileManager;
    delete mainWindow;
}


void Core::MainThread() {
    mainWindow->show();

    if (fileManager->CheckFiles("TEMP")) {
        // Game is up-to-date

    } else {
        // Download and/or remove files to update game

    }

    while (!stopApplication_) {
        // TODO: check download
    }
}

void Core::LaunchGame() {
    system("Wow.exe");
    mainWindow->hide();
    stopApplication_ = true;
}
