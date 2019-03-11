This folder includes a detailed report of how I got the 3D printer to work, and the config file of the firmware I used for the delta printer. 

The config file is my edited copy of the latest (at the time) repetier firmware. 

The configuration file contains all the info about the physical parameters of the 3D printer, which I had measured out. 

This includes the distances of the axes, the print area and volume, and most importantly the Z height.

As the 3D printer does not have an autolevelling mechanism, the Z height needs to be manually adjusted by changing it in the config file and uploading it to the arduino.

To use this file, download the repetier firmware and replace the firmwares config file with this one.


