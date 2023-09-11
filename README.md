# str2progmem

This script allows you to parse text files into PROGMEM blocks for Arduino, generating source and header files automatically.

It also works for generic C usage by setting the env var `TARGET` to `generic`.

## Usage

Given this string list:

```txt
# strings_en.txt
__IDENTIFIER str_en
Welcome to the Menu
I ¬9D NY!
¬01¬02¬ad¬0f¬ff
```

You can invoke the script as such:

```bash
./str2pgmspace strings_en.txt str_en
```

This will generate the files `str_en.c`and `str_en.h`. Then, after incluing the header, the strings can be used as such:

```cpp
// On serial port
Serial.println( PGMSTR(STR_EN_GET(0)) );

// On an LCD
lcd.println( PGMSTR(STR_EN_GET(1)) );
```

See [this post](https://www.camargo.eng.br/blog/2019/string-tables-in-flash-memory-on-arduino-script.html) for more info.
