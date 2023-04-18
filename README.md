# **ABERTAY UNIVERSITY CMP311 EH4 PROJECT - MODIFIED YERSINIA**

# Installing Libraries
```
sudo apt-get install libnet1-dev
sudo apt-get install -y make
sudo apt-get install sqlite3 libsqlite3-dev libpcap0.8-dev
sudo apt install autoconf automake libtool
```
# Compiling Yersinia
```
git clone https://www.github.com/ZYXMoodester123/yersinia.git
cd yersinia
./autogen.sh --disable-gtk
sudo make
sudo make install
```

# Running Attacks
## ARP Flooder
This attack can be run by using the command:
`sudo yersinia -EH4ARP`
This can be stopped using **CTRL + C** 

## RSTP Root Bridge Changer
This attack can be run by using the command:
`sudo yersinia -EH4STP`

