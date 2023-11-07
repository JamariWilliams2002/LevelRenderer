Assets by Quaternius: https://quaternius.com/index.html

---CONTROLS---
Up and Down-> Left Shift and Space
Left, Right, In, Out-> WASD
Mouse to turn
Activate Splitscreen-> 1 Key
Toggle Preset Cameras in Splitscreen-> 2 Key
Swap Levels-> F1
    Valid levels start with GameLevel..., ex GameLevelTest

---NOTE---
The Executable must be in the /build folder or level swapping will not work

---BUILD INSTRUCTIONS---
Requires Visual Studio, CMake, and WindowsSDK
1. Open the directory containing this document in Windows Explorer and select the path bar at the top.
2. Type "cmd" into the bar and a command prompt should open. Type: cmake -S ./ -B ./build.
3. This should generate a solution inside a new folder. Open it and set it as your startup project.