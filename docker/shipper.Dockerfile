MAINTAINER fake_empire@mail.ru
FROM centos:latest
RUN curl -L -O https://artifacts.elastic.co/downloads/beats/filebeat/filebeat-5.2.2-x86_64.rpm && sudo rpm -vi filebeat-5.2.2-x86_64.rpm
RUN echo "HELLO WORLD!"
