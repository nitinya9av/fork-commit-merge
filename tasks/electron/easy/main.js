// Electron - Easy

const { app, BrowserWindow } = require("electron");

function createWindow() {
    const mainWindow= new BrowserWindow({
        width: 1920,
        height: 1080
    });
    mainWindow.loadFile("index.html");
    // TODO: Create a new BrowserWindow that displays the index.html file
}

app.on("activate", function() {
    createWindow();
});
app.on("window-all-closed", function() { app.quit(); })
