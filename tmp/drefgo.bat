@echo off
echo "" > %1.xml
del  %1.xml
refgo ..\refal_scaner.rsl %1
..\bin\debug\refal51.exe %1.xml 
pause
exit