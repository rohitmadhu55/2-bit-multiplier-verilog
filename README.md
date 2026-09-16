# 2-Bit Binary Multiplier using Verilog HDL

A simple 2-bit binary multiplier designed and verified using Verilog HDL.

## Project Overview

This project implements a 2-bit × 2-bit binary multiplier using logic gates and half-adder modules instead of using the built-in multiplication operator.

The design generates partial products and adds them using half adders to produce a 4-bit product.

## Design Architecture

* Partial-product generation using AND gates
* Half-adder based addition
* Modular Verilog design
* 4-bit product output

### Inputs

* `a[1:0]` — 2-bit multiplicand
* `b[1:0]` — 2-bit multiplier

### Output

* `p[3:0]` — 4-bit product

## Verification

A Verilog testbench was developed to verify all 16 possible combinations of the two 2-bit inputs.

The design was simulated using QuestaSim.

## Files

* `two_bit_multiplier.v` — RTL/design implementation
* `tb_two_bit_multiplier.v` — Testbench

## Future Development

This 2-bit implementation serves as a basic model for extending the design into a **parameterized N-bit multiplier** with an **automated testbench** for generating test cases and checking expected results automatically.

The goal is to progress from a simple fixed-width design toward a reusable and scalable RTL design with automated verification.

