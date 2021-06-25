#!/bin/bash
rm -rf release
mkdir -p release

cp -rf meshloader *.{hpp,cpp,txt,json} LICENSE release/

mv release score-addon-meshloader
7z a score-addon-meshloader.zip score-addon-meshloader
