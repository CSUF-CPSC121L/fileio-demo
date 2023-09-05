# File I/O (input/output)
## File output
Create a program that collects a volunteer name and their schedule then saves all entries to a file called `volunteer.txt`. The file should be formatted so that each entry will take three lines. The first line contains the ID of the volunteer, the second line contains their name, and the third line their schedule. The example below shows how your program might get user input and the contents of `volunteer.txt` from the sample input. Specifically, the file shows entries from two volunteers.

#### Sample Screen output
```
Volunteer ID: 112233
Volunteer name: Paul Inventado
Schedule: TuTh 9:00 - 10:00 AM
Add another volunteer (Y/N)? Y
Volunteer ID: 445566
Volunteer name: Doina Bein
Schedule: TuTh 10:00 - 11:00 AM
Add another volunteer (Y/N)? N
```

#### Sample volunteer.txt contents
```
112233
Paul Inventado
TuTh 9:00 - 10:00 AM
445566
Doina Bein
TuTh 10:00 - 11:00 AM
```
## File input
Create a program that loads the list of volunteers and their schedules from a file (`volunteer.txt`) then displays them on the screen. It assumes the same file format as the program we used to write volunteer entries to a file: each entry will take three lines where the first line contains their ID, the second line contains their name and the third line contains the schedule.

The program should display the name of the volunteer and their schedule. The example below shows how your program might display the information

#### Sample Screen output
```
List of volunteers and their schedules:
[112233] Paul Inventado (TuTh 9:00 - 10:00 AM)
[445566] Doina Bein (TuTh 10:00 - 10:00 AM)
```
