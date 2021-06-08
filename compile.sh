flex   -o lex.yy.cpp Sysy.l
bison  -d -o Sysy.tab.cpp Sysy.y
g++ lex.yy.cpp Sysy.tab.cpp gen.cpp -o test
filepath="/Users/sherco/Documents/Compilers/open-test-cases/sysy/section1/functional_test"
echo $filepath
./test -S -e test.sy -o test.S
#echo $filepath/"00_arr_defn2.sy"

:<<!
!
for file in `ls -a $filepath`
do
  if [ "${file##*.}"x = "sy"x ] ;then
    echo $file
    ./test -S -e $filepath/$file -o result/$file.ee
  fi
done
