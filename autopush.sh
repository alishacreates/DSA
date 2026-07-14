#!/bin/bash

git add .

git diff --cached --quiet && exit 0

git commit -m "Auto commit: $(date '+%Y-%m-%d %H:%M:%S')"

git push origin main