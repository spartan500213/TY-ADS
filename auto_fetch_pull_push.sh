#! /usr/bin/bash



git fetch
echo ">>> Success: FETCH"
git pull
echo ">>> Success: PULL"

git add *
echo ">>> Success: ADD"
read message
git commit -m "$message"
echo ">>> Success: COMMIT"
git push
echo ">>> Success: PUSH"
