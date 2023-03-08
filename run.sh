#########################################################################
# File Name:    run.sh
# Author:       Yanwen Xia
# mail:         18252677381@163.com
# Created Time: 2023年03月08日 星期三 15时47分17秒
#########################################################################
#!/bin/bash
echo "deploy gtest on ubuntu"
sudo apt-get install libgtest-dev
cd /usr/src/gtest
mkdir build
cd build
cmake ..
make 
cd lib
sudo cp libgtest*.a /usr/local/lib
