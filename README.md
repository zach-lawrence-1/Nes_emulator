# Nes_emulator
## About The Project
I have always enjoyed classic video games on the NES and SNES consoles since I was a kid, playing games such as Mike Tysons Punch out, Super Mario Bros, Super Mario World, and more. I have seen some emulators online and wanted to make one for myself for a while now. I decided now is the time and will try my best to make an emulator from scratch in C++.
### Implementation Details
For the bus that will connect all the separate components in the emulator, I have decided for now to use the singleton approach. This is because I only need one instance
of the bus class, and I need to be able to use it across all classes in the project. Depending on future implementations of other classes this may need to change.
## How To Run
### Downloading The Code
Download the code and make file as follows
Git:
1. ```git clone https://github.com/zach-lawrence-1/Nes_emulator.git c```
   - c can be any local directory you want.
2. ```cd c```

OR

Just download zip from github and unzip where you want
### Windows
On windows, as long as you have MSYS2 setup with g++ and you can run make files then you should be able to run the main program as follows:
1. Download code and make file.
2. Open a terminal in the same directory as the code and make file.
3. Type in ```make```
4. run ```./nes.exe``` or ```./nes```

## Project Images
