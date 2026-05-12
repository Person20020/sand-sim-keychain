# Firmware

Install platformio, then do the following:
```bash
pio init
pio run --target compiledb
```

Flash the MCU:
```bash
pio run -t upload
```
