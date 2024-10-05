// Copyright 2023 Danny Nguyen (danny@keeb.io)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define USB_VBUS_PIN GP0
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP12
#define SERIAL_USART_RX_PIN GP13
#define SERIAL_USART_PIN_SWAP
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP10
#define I2C1_SCL_PIN GP11

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define TAPPING_TERM 180
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM_PER_KEY // Defaults to TAPPING_TERM if not set
#define ONESHOT_TAP_TOGGLE 2 // Double tap OSMs to lock. This is affected by the quick tap term.
#define ONESHOT_TIMEOUT 1500  // Time (in ms) before the one shot key is released
