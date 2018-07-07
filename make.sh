mbed add http://os.mbed.com/users/mbed_official/code/mbed/
mbed deploy
mbed compile -m NUCLEO_F302R8 -t GCC_ARM -c
cp BUILD/NUCLEO_F302R8/GCC_ARM/Nucleo_printf.bin /media/kubant/NODE_F302R8/
