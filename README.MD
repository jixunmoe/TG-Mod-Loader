TG Mod Loader
-------------

To build the loader and mods, open MINGW32 from msys2 and run:

    # build loader
    make release
    # build mod
    (cd mods/time-format; make release)

To apply the patch, copy everyting inside `bin` directory to telegram directory.

Compatible mod: [FontMod](https://github.com/ysc3839/FontMod)
