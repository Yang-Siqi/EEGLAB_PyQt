# -*- coding: utf-8 -*-

import sys
from PyQt5.QtWidgets import  QApplication, QMainWindow,QFileDialog,QMessageBox,QWidget,QAction
from PyQt5.QtCore import  pyqtSlot,QFile,QDir,Qt
from myEEGLAB import QEEGLAB
from ui_MainWindow import Ui_MainWindow

##from PyQt5.QtWidgets import  

##from PyQt5.QtGui import

##from PyQt5.QtSql import 

##from PyQt5.QtMultimedia import

##from PyQt5.QtMultimediaWidgets import


class QmyMainWindow(QMainWindow): 

   def __init__(self, parent=None):
      super().__init__(parent)   # 调用父类构造函数，创建窗体
      self.ui = Ui_MainWindow()    # 创建UI对象
      self.ui.setupUi(self)      # 构造UI界面


   # ========菜单栏open的激活函数================================
   @pyqtSlot()
   def on_actFile_Open_triggered(self):
      print("user clicked “open” ")
      curPath = QDir.currentPath()  # 获取系统当前目录
      title = "Open a file"  # 对话框标题
      filt = "edf file(*.edf);;All file(*.*)"  # 文件过滤器eg.程序文件(*.h *.cpp *.py);;文本文件(*.txt);;所有文件(*.*)
      fileName, flt = QFileDialog.getOpenFileName(self, title, curPath, filt)
      if (fileName == ""):  # 如果没有选择任何文件
         return
      else:
         print(fileName)
         if "edf" in flt:
            self.ui.statusBar.showMessage(fileName)
            EEGLAB = QEEGLAB(self)
            EEGLAB.setAttribute(Qt.WA_DeleteOnClose)
            EEGLAB.setWindowFlag(Qt.Window, True)
            EEGLAB.show()
   
##  ============窗体测试程序 ====================================
if  __name__ == "__main__":        #用于当前窗体测试
   app = QApplication(sys.argv)    #创建GUI应用程序
   form=QmyMainWindow()            #创建窗体
   form.show()
   sys.exit(app.exec_())
