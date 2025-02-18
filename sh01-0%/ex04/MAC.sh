ifconfig -a | gawk '/ether/{print$2}'
