# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'ui_xml/ros_console_widget.ui'
#
# Created by: PyQt5 UI code generator 5.15.9
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_RosConsoleWidget(object):
    def setupUi(self, RosConsoleWidget):
        RosConsoleWidget.setObjectName("RosConsoleWidget")
        RosConsoleWidget.resize(400, 300)
        self.verticalLayout_2 = QtWidgets.QVBoxLayout(RosConsoleWidget)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.label = QtWidgets.QLabel(RosConsoleWidget)
        self.label.setObjectName("label")
        self.verticalLayout_2.addWidget(self.label)
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.debug_checkbox = QtWidgets.QCheckBox(RosConsoleWidget)
        self.debug_checkbox.setObjectName("debug_checkbox")
        self.horizontalLayout.addWidget(self.debug_checkbox)
        self.info_checkbox = QtWidgets.QCheckBox(RosConsoleWidget)
        self.info_checkbox.setChecked(False)
        self.info_checkbox.setObjectName("info_checkbox")
        self.horizontalLayout.addWidget(self.info_checkbox)
        self.warn_checkbox = QtWidgets.QCheckBox(RosConsoleWidget)
        self.warn_checkbox.setChecked(True)
        self.warn_checkbox.setObjectName("warn_checkbox")
        self.horizontalLayout.addWidget(self.warn_checkbox)
        self.error_checkbox = QtWidgets.QCheckBox(RosConsoleWidget)
        self.error_checkbox.setChecked(True)
        self.error_checkbox.setObjectName("error_checkbox")
        self.horizontalLayout.addWidget(self.error_checkbox)
        self.fatal_checkbox = QtWidgets.QCheckBox(RosConsoleWidget)
        self.fatal_checkbox.setChecked(True)
        self.fatal_checkbox.setObjectName("fatal_checkbox")
        self.horizontalLayout.addWidget(self.fatal_checkbox)
        self.verticalLayout_2.addLayout(self.horizontalLayout)
        self.console_list = QtWidgets.QListWidget(RosConsoleWidget)
        self.console_list.setObjectName("console_list")
        self.verticalLayout_2.addWidget(self.console_list)
        self.clear_button = QtWidgets.QPushButton(RosConsoleWidget)
        self.clear_button.setObjectName("clear_button")
        self.verticalLayout_2.addWidget(self.clear_button)

        self.retranslateUi(RosConsoleWidget)
        QtCore.QMetaObject.connectSlotsByName(RosConsoleWidget)

    def retranslateUi(self, RosConsoleWidget):
        _translate = QtCore.QCoreApplication.translate
        RosConsoleWidget.setWindowTitle(_translate("RosConsoleWidget", "Ros Console"))
        self.label.setText(_translate("RosConsoleWidget", "Ros Console"))
        self.debug_checkbox.setText(_translate("RosConsoleWidget", "DEBUG"))
        self.info_checkbox.setText(_translate("RosConsoleWidget", "INFO"))
        self.warn_checkbox.setText(_translate("RosConsoleWidget", "WARN"))
        self.error_checkbox.setText(_translate("RosConsoleWidget", "ERROR"))
        self.fatal_checkbox.setText(_translate("RosConsoleWidget", "FATAL"))
        self.clear_button.setText(_translate("RosConsoleWidget", "Clear"))
