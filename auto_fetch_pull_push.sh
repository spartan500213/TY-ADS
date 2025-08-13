#! /usr/bin/bash



git fetch
git pull

git add *
read message
git commit -m $message
git push
