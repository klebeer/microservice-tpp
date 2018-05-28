#!/bin/bash

#image-to-ascii -i images/mascota-transparente.png

while read line <&3; do
    while : ; do
        stty raw -echo
        key=$(dd bs=1 count=1 </dev/tty 2> /dev/null)
        stty -raw echo
        if [ "$key" = q ] ; then
            break
        fi
    done
    echo "$line"
done 3< "$1"