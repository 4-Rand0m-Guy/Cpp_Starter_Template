# C++ Starter Template  

A new project starting template for C++ project using CMake and conan developed in VS Code

The CMake and vscode project configuration files templates are intended for projects that are structured according to
the pitchfork layout see this [reference](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs) for detailed information.

The project structure should look as follows:

```text
Project/  
    |--build/
    |--docs/ 
    |--lib/ 
    |--src/  
        |--main.cpp  
        |--package/  
            |--package.cpp  
            |--package.hpp  
        CMakeLists.txt
    |--test/
        |--mainTestRunner.cpp
        |--package/  
            |--package-test.cpp 
        CMakeLists.txt
.gitignore  
CMakeLists.txt 
conanfile.txt
README.md
```  
