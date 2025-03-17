#include <stdint.h>

#define UART_BASE 0x09000000

void uart_send(char c) {
    *(volatile uint32_t *)(UART_BASE) = c;
}

void uart_print(const char *str) {
    while (*str) {
        uart_send(*str++);
    }
}

void kernel_main() {
    uart_print("Hello!\n");
    while (1);
}
