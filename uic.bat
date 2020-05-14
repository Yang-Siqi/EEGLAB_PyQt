echo off

rem 将子目录 QtApp 下的.ui文件复制到当前目录下，并且编译
copy .\QtApp\MainWindow.ui  MainWindow.ui
copy .\QtApp\EEGLAB.ui EEGLAB.ui
pyuic5 -o ui_MainWindow.py  MainWindow.ui&&pyuic5 -o ui_EEGLAB.py EEGLAB.ui&&pyrcc5 .\QtApp\res.qrc -o res_rc.py

