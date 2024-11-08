## a "prgress bar" made in c++ and some ANCI codes
![Untitled video - Made with Clipchamp](https://github.com/user-attachments/assets/ffde55ad-4553-4702-aad2-395addb57479)
### How it works
it's fairly basic actually given a number, divided it into 100 then loop from 0 untill the number
at each time you get a multiple of a 100'th of that number (i % hundridth) then add a char
to the progress bar.

I use <a>\r </a> (Carriage Return) to over write the "-" and not to write "progress: # progress ## progress ###....
HOWEVER in order for it to look good We need to hid the curser so I used the [ANCI code](https://stackoverflow.com/questions/4842424/list-of-ansi-color-escape-sequences) \033[?25l to hide the curser 
for the color i use \033[<color#>m 
every third it changes the color so the first thrid is red, betwen the 1st and 3rd thrids is yello and the last thir is green.

![image](https://github.com/user-attachments/assets/a07d245e-8cdd-42f2-be46-d2cdd7f1c004)

### IMPORTANT NOTE
it got stuck on this for way longer that it deserved and it was because I was assigning i (which is an int) a very large number (after 10billion)
and after ONLY 3 HOURS i figured it out so I changed it to long long int (which can hold 9 quintillion I belive!).
