echo off

rem ����Ŀ¼ QtApp �µ�.ui�ļ����Ƶ���ǰĿ¼�£����ұ���
copy .\QtApp\MainWindow.ui  MainWindow.ui
copy .\QtApp\EEGLAB.ui EEGLAB.ui
pyuic5 -o ui_MainWindow.py  MainWindow.ui&&pyuic5 -o ui_EEGLAB.py EEGLAB.ui&&pyrcc5 .\QtApp\res.qrc -o res_rc.py

