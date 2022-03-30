call "setup_msvc.bat"

cd .

if "%1"=="" (nmake  -f GradingSys.mk all) else (nmake  -f GradingSys.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
