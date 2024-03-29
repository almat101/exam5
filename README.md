VIM shortcut usefull for exam 5:

cd then create .myvimrc

vim .myvimrc
syntax on
set number
set mouse=a

create Warlock.hpp Warlock.cpp

vim . 
then move the arrow to select a file and press t to open a new tab
close all file with wga

open 2 file in spilt screen with vim -O Warlock.hpp Warlock.cpp
close all file with wga

when  u have done cpp_module_00 

cp -r cpp_module_00 cpp_module_01 

now when u want to search and replace a name for a class u can do it by open the file with vim and then

:%s/ASpell/ATarget/g

this change all occurency of ASpell with ATarget
pay attention with the #IFNDEF ASPELL_HPP this will not be changed :)

vim autocomplete ctrl + n
usefull for the methods and the attribute of a class

extra:
if u want to compare the output of a subject with your u can do it by making an output class with the (subject output)

vim output
Richard: This looks like another boring day.$
Richard: I am Richard, Hello, I'm Richard the Warlock!!$
Inconspicuous Red-brick Wall has been turned into a critter!$
Inconspicuous Red-brick Wall has been burnt to a crisp!$
Richard: My job here is done!$

then c++ *.cpp
./a.out | cat -e > myoutput

diff output myoutput 

should display nothing (the files are equals)

or u can do it with vim

vim .

t on output

:diffsplit myoutput

should display that all line are equals ( no purple line and red lines on differences)

