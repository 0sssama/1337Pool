ifconfig | grep '..:..:..:..:..:..' | sed 's/ether //' | tr -d '[:blank:]'
