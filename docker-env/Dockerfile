FROM ubuntu:16.04
MAINTAINER lp
RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list
RUN apt-get update -y
RUN apt-get install apache2 socat -y
COPY re.* /var/www/html/
RUN mv /var/www/html/re.html /var/www/html/index.html
EXPOSE 80 
# build cmds:
# sudo docker build ../docker-env/ -t wasm:v1
# sudo docker run -it -p LOCAL_PORT:80 wasm:v1 /bin/bash
# service apache2 start
# Done!

