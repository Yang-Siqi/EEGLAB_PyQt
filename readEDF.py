# based on the pyedflib demo plotEDFFile

import numpy as np
import pyedflib
import matplotlib.pyplot as plt
from matplotlib.collections import LineCollection


def plotEEG(sigbuf_plot, interval_sec):
    data = sigbuf_plot
    numSample = sigbuf_plot.size
    t = np.arange(numSample, dtype=float)
    x_datapoint = (0, numSample)
    fig, ax = plt.subplots()
    segs = []  # segments
    segs.append(np.hstack((t[:, np.newaxis], data[:, np.newaxis])))
    plt.xlim(*x_datapoint)
    lines = LineCollection(segs)
    ax.add_collection(lines)


    for x_markers in range(1, numSample, interval_sec):
        plt.text(x_markers, segs[0][x_markers][1] + 0.3, "W1", ha='center', va='bottom', fontsize=10.5, color='r')
        print(x_markers, segs[0][x_markers][1])

    plt.xlabel("time_points")
    y0 = data.min()-10
    y1 = data.max()+10
    plt.ylim(y0, y1)
    fig.set_size_inches(9, 4)


if __name__ == '__main__':
    f = pyedflib.EdfReader("00002035-100582[001]-T.edf")   # 这个到时候用getpath
    signal_index = f.getSignalLabels().index("EEG Fpz-Cz")
    signal_labels = f.getSignalLabels()[signal_index]
    print("EEG details:", f.getSignalHeader(signal_index))
    signal_freq = f.getSampleFrequencies()[signal_index] # 100hz
    interval_sec = 30*signal_freq  # 3000
    sigbuf = f.readSignal(signal_index)   # (7950000,)
    f.close()
    del f

    sigbuf_plot = sigbuf[:7000]  # 我这里只取了7000的数据，后面有stream的话再加上

    plotEEG(sigbuf_plot,interval_sec)
    plt.show()



