for file in ./*
do
    if test -d $file
    then
        cd $file
        make clean
        cd ..
    fi
done
