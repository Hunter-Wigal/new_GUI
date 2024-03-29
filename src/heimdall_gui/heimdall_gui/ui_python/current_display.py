# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'ui_xml/current_display.ui'
#
# Created by: PyQt5 UI code generator 5.15.7
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets
from heimdall_gui.urc_gui_common.widgets.current_widget import CurrentWidget


class Ui_CurrentDisplay(object):
    def setupUi(self, CurrentDisplay):
        CurrentDisplay.setObjectName("CurrentDisplay")
        CurrentDisplay.resize(116, 744)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Maximum, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(CurrentDisplay.sizePolicy().hasHeightForWidth())
        CurrentDisplay.setSizePolicy(sizePolicy)
        self.verticalLayout = QtWidgets.QVBoxLayout(CurrentDisplay)
        self.verticalLayout.setContentsMargins(7, 10, 0, 0)
        self.verticalLayout.setObjectName("verticalLayout")
        self.groupBox = QtWidgets.QGroupBox(CurrentDisplay)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.groupBox.sizePolicy().hasHeightForWidth())
        self.groupBox.setSizePolicy(sizePolicy)
        self.groupBox.setAlignment(QtCore.Qt.AlignCenter)
        self.groupBox.setObjectName("groupBox")
        self.gridLayout_2 = QtWidgets.QGridLayout(self.groupBox)
        self.gridLayout_2.setObjectName("gridLayout_2")
        self.sh = CurrentWidget(self.groupBox)
        self.sh.setObjectName("sh")
        self.gridLayout_2.addWidget(self.sh, 2, 0, 1, 1)
        self.gr = CurrentWidget(self.groupBox)
        self.gr.setObjectName("gr")
        self.gridLayout_2.addWidget(self.gr, 0, 0, 1, 1)
        self.el = CurrentWidget(self.groupBox)
        self.el.setObjectName("el")
        self.gridLayout_2.addWidget(self.el, 2, 1, 1, 1)
        self.rl = CurrentWidget(self.groupBox)
        self.rl.setObjectName("rl")
        self.gridLayout_2.addWidget(self.rl, 0, 1, 1, 1)
        self.dl = CurrentWidget(self.groupBox)
        self.dl.setObjectName("dl")
        self.gridLayout_2.addWidget(self.dl, 1, 0, 1, 1)
        self.dr = CurrentWidget(self.groupBox)
        self.dr.setObjectName("dr")
        self.gridLayout_2.addWidget(self.dr, 1, 1, 1, 1)
        self.verticalLayout.addWidget(self.groupBox)
        self.groupBox_2 = QtWidgets.QGroupBox(CurrentDisplay)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.groupBox_2.sizePolicy().hasHeightForWidth())
        self.groupBox_2.setSizePolicy(sizePolicy)
        self.groupBox_2.setAlignment(QtCore.Qt.AlignCenter)
        self.groupBox_2.setObjectName("groupBox_2")
        self.gridLayout = QtWidgets.QGridLayout(self.groupBox_2)
        self.gridLayout.setObjectName("gridLayout")
        self.lb = CurrentWidget(self.groupBox_2)
        self.lb.setObjectName("lb")
        self.gridLayout.addWidget(self.lb, 1, 0, 1, 1)
        self.rb = CurrentWidget(self.groupBox_2)
        self.rb.setObjectName("rb")
        self.gridLayout.addWidget(self.rb, 1, 1, 1, 1)
        self.lf = CurrentWidget(self.groupBox_2)
        self.lf.setObjectName("lf")
        self.gridLayout.addWidget(self.lf, 0, 0, 1, 1)
        self.rf = CurrentWidget(self.groupBox_2)
        self.rf.setObjectName("rf")
        self.gridLayout.addWidget(self.rf, 0, 1, 1, 1)
        self.verticalLayout.addWidget(self.groupBox_2)
        self.verticalLayout.setStretch(0, 3)
        self.verticalLayout.setStretch(1, 2)

        self.retranslateUi(CurrentDisplay)
        QtCore.QMetaObject.connectSlotsByName(CurrentDisplay)

    def retranslateUi(self, CurrentDisplay):
        _translate = QtCore.QCoreApplication.translate
        CurrentDisplay.setWindowTitle(_translate("CurrentDisplay", "CurrentDisplay"))
        self.groupBox.setTitle(_translate("CurrentDisplay", "Arm"))
        self.groupBox_2.setTitle(_translate("CurrentDisplay", "Wheels"))

