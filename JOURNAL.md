---
show_on_site: True
title: "Sand Sim Keychain"
description: "A sand simulator led keychain"
start_date: "2026-05-06"
image_url: "https://placehold.co/600x400"
image_alt_text: "Placeholder image"
---

# Journal

<span class="github-only">
    View a web version <a href="https://journal.person20020.dev/journal/sand-sim-keychain">here</a>.
</span>

## 2026-05-06 -- Research

_Time spent: ~3hrs_

So far I have mostly done research on some of the parts that I will be using and made a general plan of what the project will be.

Plan:

- A sand simulation keychain
- Either 16x16 or 12x12 LED matrix. Not sure of which LEDs but either standard RGB or single color. Probably in 0606 or 0603 size.
- Gyro for interaction
- Magnetic charging base. Using either sheet metal spring contacts (like [this](https://www.te.com/en/products/connectors/contacts/spring-finger-contacts.html)) or pogo pins.
-

Parts:

- STM32U031K8U
- LIR2450
- 0606 (maybe larger) for RGB or 0603 single color leds

## 2026-05-11 -- Start charger base & general design

_Time spent: ~3hrs_

I started on the actual design mostly with the basic placement/shape. For the keychain part I will probably be using a pcb with all of the leds on it and maybe some of the components and then a secondary pcb with contacts for the charger and the power management. There will be a small mound in the middle for space for the battery and as a locating feature for the base and the battery will be close enough that it should be able to be attracted by a magnet to hold it on the charger base.

![3D model](https://files.catbox.moe/5a3526.png)
![3D model](https://files.catbox.moe/eel1cs.png)

I also made the schematic. I have not yet decided on the exact parts but it should only require a USB C port, a few passives and the contacts.
![Schematic](https://files.catbox.moe/ykkpdl.png)
