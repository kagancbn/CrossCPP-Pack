# MoxPP
C++ Template Repository with Conan2 and Premake5 for Windows and Linux.

**Please make sure to read the WHOLE readme and follow all instructions!**

## Important things to know
- The template only supports building the following configurations:
    - `Windows` for `Windows`
    - `Linux` for `Linux`
- The project only support `x64` builds

## Dependencies
Before you are getting started make sure to install the following applications:
- Python3
- Conan2 (`pip install conan`) please use version `2.0.7` (it might work on newer version but conan2 changes a thing with every update!)
- Visual Studio (Windows)
- build-essential (Linux)
More information in [BUILDING.md](BUILDING.md)

## Checklist
After you used this template for creating your new project please make sure to follow all these steps to setup your repository correctly.
- [x] Check that the project works on your system:
    - [x] Windows: Run `mox.bat init`, open the visual studio and build the solution (Batch build).
    - [ ] Linux: Run `./mox.sh autogen`. This should produce the file `./deploy/Release/package.zip` (You can also do this on 
**There is more information in** `BUILDING.md` **(That you should keep) on how to build the project.**

**We have an extensive video that showcases how this template works: [https://youtu.be/u-2syomFD2s](https://youtu.be/u-2syomFD2s)**

## License
The code shipped with MoxPP is licensed under the `MIT License`. All python and lua scripts have the license embedded into them. Additional attribution is not required as long as the template is not redistributed itself. Feel free to use the template in your projects. This is no legal advice! Consult your lawyer! 
