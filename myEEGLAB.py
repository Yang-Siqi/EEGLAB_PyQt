import sys
from PyQt5.QtWidgets import QApplication, QMainWindow

from readEDF import plotEEG
from ui_EEGLAB import Ui_EEGLAB
import pyedflib
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.collections import LineCollection


class QEEGLAB(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)  # 调用父类构造函数，创建窗体
        self.ui = Ui_EEGLAB()  # 创建UI对象
        self.ui.setupUi(self)  # 构造UI界面

        self.setWindowTitle("EEGLAB")
        self.__plotedf()


    ##  ==============自定义功能函数============
    def __plotedf(self):
        f = pyedflib.EdfReader("SC4001E0-PSG.edf")  # 这个到时候用getpath
        signal_index = f.getSignalLabels().index("EEG Fpz-Cz")
        #signal_labels = f.getSignalLabels()[signal_index]
        print("EEG details:", f.getSignalHeader(signal_index))
        signal_freq = f.getSampleFrequencies()[signal_index]  # 100hz
        interval_sec = 30 * signal_freq  # 3000
        sigbuf = f.readSignal(signal_index)  # (7950000,)
        f.close()
        del f
        sigbuf_plot = sigbuf[:7000]  # 我这里只取了7000的数据，后面有stream的话再加上

        data = sigbuf_plot
        numSample = sigbuf_plot.size
        t = np.arange(numSample, dtype=float)
        x_datapoint = (0, numSample)
        segs = []  # segments
        segs.append(np.hstack((t[:, np.newaxis], data[:, np.newaxis])))

        self.ui.widget.figure.clear()
        ax = self.ui.widget.figure.add_subplot(1,1,1)
        ax.set_xlim(*x_datapoint)
        lines = LineCollection(segs)
        ax.add_collection(lines)

        for x_markers in range(1, numSample, interval_sec):
            ax.text(x_markers, segs[0][x_markers][1] + 0.3, "W1", ha='center', va='bottom', fontsize=10.5, color='r')
            print(x_markers, segs[0][x_markers][1])

        ax.set_xlabel("time_points")
        y0 = data.min() - 10
        y1 = data.max() + 10
        ax.set_ylim(y0,y1)








# ============窗体测试程序 ================================
if __name__ == "__main__":
    app = QApplication(sys.argv)
    form = QEEGLAB()
    form.show()
    sys.exit(app.exec_())
