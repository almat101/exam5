# VIM shortcuts useful for exam 5:

1. Create `.myvimrc` file:
   ```bash
   cd
   vim .myvimrc

## Add the following configurations:

  ```vim
  syntax on
  set number
  set mouse=a
  ```
 1. ### Create 'Warlock.hpp' 'Warlock.cpp'
 ```bash
  vim .
 ```
* Move the arrow to select a file and press t to open a new tab.
* Close all files with :wqa.

2. ### Open 2 file in spilt screen
```bash
 vim -O Warlock.hpp Warlock.cpp
```
* close all file with :wga

3. ### After completing cpp_module_00, copy it to cpp_module_01:
```bash
cp -r cpp_module_00 cpp_module_01 
```
4. ### Search and replace a class name in a file with Vim:
```vim
  vim ASpell.hpp
```

this command will change all the occurency of ASpell with ATarget pay attention with the #IFNDEF ASPELL_HPP this will not be changed :)
```vim
:%s/ASpell/ATarget/g
```

5. ### Vim autocomplete:

Press Ctrl + n to autocomplete methods and attributes of a class.

### extra:
If u want to compare the output of a subject with your, u can do it by making an output file with the subject output:

```vim
vim output
```
```
Richard: This looks like another boring day.$
Richard: I am Richard, Hello, I'm Richard the Warlock!!$
Inconspicuous Red-brick Wall has been turned into a critter!$
Inconspicuous Red-brick Wall has been burnt to a crisp!$
Richard: My job here is done!$
```

```bash
c++ *.cpp

./a.out | cat -e > myoutput

diff output myoutput 
```


### this should display nothing (the files are equals)

or u can do it with vim
```vim
vim .

t on output

:diffsplit myoutput
```

### this should display that all line are equals ( no purple line and red lines on differences)

