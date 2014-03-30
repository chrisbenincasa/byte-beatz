byte-beatz
==========

audio experiments in C

[inspired by Kragen's Bytebeat](http://canonical.org/~kragen/bytebeat/)

## play some beatz
beatz uses sox. you might beed to: `brew install sox`

```bash
make all
./bin/beatz.sh ./obj/short-1.out

# specify a sample rate in Hz (defaults to 8000)
./bin/beatz.sh ./obj/short-1.out 44100

# specifiy an encoding type (defaults to u8)
# u = unsigned, s = signed
./bin/beatz.sh ./obj/dual-channel.out 8000 u16

# use mu-law (defaults to false)
./bin/beatz.sh ./obj/dual-channel.out 8000 u8 true
```
