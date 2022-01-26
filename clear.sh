for f in $(find ./ -name 'a.out' -or -name 'test_case' -or -name 'test'); do rm $f; done

# function read_dir(){
#     for file in `ls $1`       #注意此处这是两个反引号，表示运行系统命令
#     do
#         if [ -d $1"/"$file ]  #注意此处之间一定要加上空格，否则会报错
#         then
#             read_dir $1"/"$file
#         else
#             rm -rf test_case
#             rm -rf a.out
#         fi
#     done
# }  

# read_dir .

# for file in ./*
# do
#     if test -d $file
#     then
#         cd $file
#         rm -rf test_case
#         rm -rf a.out
#         cd ..
#     fi
# done
