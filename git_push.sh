#!/bin/bash
git add .
echo "Enter Commit Message"
read message
git commit -m "$message"
git push

