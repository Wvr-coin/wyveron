
Debian
====================
This directory contains files used to package wvrd/wvr-qt
for Debian-based Linux systems. If you compile wvrd/wvr-qt yourself, there are some useful files here.

## wvr: URI support ##


wvr-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install wvr-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your wvr-qt binary to `/usr/bin`
and the `../../share/pixmaps/wvr128.png` to `/usr/share/pixmaps`

wvr-qt.protocol (KDE)

