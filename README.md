# RainFall

Repository for **RainFall**, a group project by **diroyer** and
**Don-Chinjao**.

This repository contains reconstructed source code, exploitation commands,
recovered flags, and solution notes for each level of the project.

## Structure

Each directory corresponds to a challenge:

```text
level0/ ... level9/
bonus0/ ... bonus3/
```

Each directory generally contains:

- `source.c` or `source.cpp`: a reconstructed or annotated version of the binary.
- `flag`: the flag obtained after exploitation.
- `ressources/commands.txt` or `command.txt`: useful commands, payloads, and leads.
- `walkthrough`: solution notes, when available.

## Methodology

The challenges cover several common exploitation techniques:

- buffer overflows;
- arbitrary memory writes using format-string vulnerabilities;
- ret2libc;
- GOT/PLT hijacking;
- shellcode injection through environment variables;
- edge cases involving signed and unsigned integers;
- dynamic analysis with `gdb`.

The commands have been kept close to their original form to preserve a useful
record of the reasoning and tests performed during the project.

## Usage

For any given level, start by reviewing the source file and the commands:

```sh
ls levelX
cat levelX/source.c
cat levelX/ressources/commands.txt
```

## Notes

This repository serves as both a study resource and a solution archive.
Addresses, offsets, and payloads may depend on the RainFall environment used
during the project.
