#!/bin/bash

cp rover_icon.png ~/.icons/rover_icon.png

cp gui_launcher.desktop ~/Desktop/gui_launcher.desktop

chmod a+rwx ~/Desktop/gui_launcher.desktop

sudo desktop-file-install gui_launcher.desktop 
