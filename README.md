![](./resources/official_armmbed_example_badge.png)
# Blinky Mbed OS example
This is part of USNA SY202 ICE01 in Febuary 2023.

Students will analyze code of this program an modify it to gain understanding of C++ programming using the Keil Studio cloud compilier.

## Application functionality

The `main()` function is the single thread in the application. 

This program will open a serial connection to the COM port of the attached LPC1786 mbed and prompt the user to increase or decrease the brightness of LED1 using the "u" or "d" keys.

## Building and running

1. Connect a USB cable between the USB port on the board and the host computer.
2. <a name="build_cmd"></a> Run the following command to build the example project and program the microcontroller flash memory:
    ```bash
    $ mbed compile -m <TARGET> -t <TOOLCHAIN> --flash
    ```
The binary is located at `./BUILD/<TARGET>/<TOOLCHAIN>/mbed-os-example-blinky.bin`.

Alternatively, you can manually copy the binary to the board, which you mount on the host computer over USB.

Depending on the target, you can build the example project with the `GCC_ARM`, `ARM` or `IAR` toolchain. After installing Arm Mbed CLI, run the command below to determine which toolchain supports your target:

```bash
$ mbed compile -S
```

## Troubleshooting
If you have problems, you can review the [documentation](https://os.mbed.com/docs/latest/tutorials/debugging.html) for suggestions on what could be wrong and how to fix it.

## Related Links

* [Mbed OS Stats API](https://os.mbed.com/docs/latest/apis/mbed-statistics.html).
* [Mbed OS Configuration](https://os.mbed.com/docs/latest/reference/configuration.html).
* [Mbed OS Serial Communication](https://os.mbed.com/docs/latest/tutorials/serial-communication.html).
* [Mbed OS bare metal](https://os.mbed.com/docs/mbed-os/latest/reference/mbed-os-bare-metal.html).
* [Mbed boards](https://os.mbed.com/platforms/).

### License and contributions

This project contains code from other projects. The original license text is included in those source files. They must comply with our license guide.
