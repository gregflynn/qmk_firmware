# build
```bash
cd ~/kb/qmk_firmware
make massdrop/alt:gfly
```

# flash
- plug in keyboard
- push button on bottom
```bash
cd ~/kb
sudo ./mdloader_linux --first --download qmk_firmware/massdrop_alt_gfly.bin --restart
```
