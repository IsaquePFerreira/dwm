# My fork and buil of dwm - dynamic window manager
My customization of dwm with some patches and keys for my
daily use

Keybinds
---
- Modkey is SUPER
- Launch terminal emulator - SUPER + RETURN
- Launch dmenu - SUPER + d
- Launch browser - SUPER + q

Patches
---
- Urgent Border
- Autostart
- Functional Gaps -- with pertag suport
- Per Tag
- SysTray

The coloscheme inspired in [Multicolor theme by lcpz/awesome-copycats](https://github.com/lcpz/awesome-copycats)

Requirements
---
For Void Linux:
```sh
sudo xbps-install -S base-devel libX11-devel libXft-devel libXinerama-devel noto-fonts-ttf noto-fonts-ttf-extra font-hack-ttf
```

Installation
---
```sh
git clone https://github.com/IsaquePFerreira/dwm
cd dwm
make
sudo make clean install
```
