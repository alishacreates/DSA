#!/bin/bash

git add -A

git diff --cached --quiet && {
    echo "No changes to commit."
    exit 0
}

git commit -m "Auto commit: $(date '+%Y-%m-%d %H:%M:%S')"

git push