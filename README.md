cd BasicVSCode/make
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ../make
cd ../Debug
make
./maintest.exe
