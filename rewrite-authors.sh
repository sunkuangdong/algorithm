#!/bin/sh

# 指定需要替换的旧邮箱和新作者信息
git filter-branch --env-filter '
OLD_EMAIL=("sunkuandong1@gmail.com" "sunkuangdong@163.com" "sunkuangdong@ele-cloud.com")  # 旧邮箱地址
CORRECT_NAME="sunkuangdong"          # 新的作者名称
CORRECT_EMAIL="769296817@qq.com"  # 新的邮箱地址

if [ "$GIT_COMMITTER_EMAIL" = "$OLD_EMAIL" ]
then
    export GIT_COMMITTER_NAME="$CORRECT_NAME"
    export GIT_COMMITTER_EMAIL="$CORRECT_EMAIL"
fi
if [ "$GIT_AUTHOR_EMAIL" = "$OLD_EMAIL" ]
then
    export GIT_AUTHOR_NAME="$CORRECT_NAME"
    export GIT_AUTHOR_EMAIL="$CORRECT_EMAIL"
fi
' --tag-name-filter cat -- --branches --tags