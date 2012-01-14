@echo off

del refal2.exe
del src\res.cc

rem type core.ref > fn2.ref
rem type core-parse.ref >> fn2.ref
rem type core-meta.ref >> fn2.ref
rem type core-templates.ref >> fn2.ref

type ref\main.ref > fn2.ref
type ref\parser-templates.ref >> fn2.ref
type ref\parser.ref >> fn2.ref
type ref\builder.ref >> fn2.ref
type ref\commands.ref >> fn2.ref

mingw32-make
rem del fn2.ref
refal2