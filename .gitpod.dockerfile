FROM gitpod/workspace-full

# Install Docker
RUN sudo apt-get update \
 && sudo apt-get install -y \
    apt-transport-https \
    ca-certificates \
    curl \
    software-properties-common \
 && sudo rm -rf /var/lib/apt/lists/*
RUN curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add -
RUN sudo add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu bionic stable"
RUN sudo apt update
RUN apt-cache policy docker-ce
RUN sudo apt install docker-ce -y
RUN sudo usermod -aG docker gitpod

# Install Docker Compose
RUN sudo curl -L https://github.com/docker/compose/releases/download/1.21.2/docker-compose-`uname -s`-`uname -m` -o /usr/local/bin/docker-compose
RUN sudo chmod +x /usr/local/bin/docker-compose
