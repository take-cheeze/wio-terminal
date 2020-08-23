# wio-terminal

Random scripts of [WIO Terminal](https://wiki.seeedstudio.com/Wio-Terminal-Getting-Started/)

## Memo

Using WSL2's [Windows interoperability](https://docs.microsoft.com/en-us/windows/wsl/interop) to build, upload, capturing serial output:
```bash
arduino-cli.exe compile -b Seeeduino:samd:seeed_wio_terminal && \
arduino-cli.exe upload -b Seeeduino:samd:seeed_wio_terminal -p $(arduino-cli.exe board list --format json | jq '.[0].address') && \
../serialtool/serialtool.exe
```
