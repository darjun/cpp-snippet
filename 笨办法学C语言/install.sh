set -e

# go somewhere safe
cd /tmp

# get the source to base APR 1.5.2
curl -L -O http://archive.apache.org/dist/apr/apr-1.5.2.tar.gz

# extract it and go into the source
tar -xzvf apr-1.5.2.tar.gz
cd apr-1.5.2

# configure, make, make install
./configure
make
sudo make install

# reset and clean
cd /tmp
rm -rf apr-1.5.2 apr-1.5.2.tar.gz

# do the same with apr-util
curl -L -O http://archive.apache.org/dist/apr/apr-util-1.5.4.tar.gz

# extract
tar -xzvf apr-util-1.5.4.tar

# configure, make, make install
./configure --with-apr=/usr/local/apr
# you need that extra parameter to configure because
# ap-util can't really find it because...who knows.

make
sudo make install

# cleanup
cd /tmp
rm -rf apr-util-1.5.4* apr-1.5.2*