## R7 values
set_property PACKAGE_PIN U16 [get_ports {S_LED[0]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_LED[0]}]
set_property PACKAGE_PIN E19 [get_ports {S_LED[1]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_LED[1]}]
set_property PACKAGE_PIN U19 [get_ports {S_LED[2]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_LED[2]}]

## Zero flag
set_property PACKAGE_PIN P1 [get_ports {ZERO_FLAG}]
    set_property IOSTANDARD LVCMOS33 [get_ports {ZERO_FLAG}]

## Overflow
set_property PACKAGE_PIN L1 [get_ports {OVERFLOW}]
    set_property IOSTANDARD LVCMOS33 [get_ports {OVERFLOW}]
    
##7 segment display
set_property PACKAGE_PIN W7 [get_ports {S_7_Seg_val[0]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_7_Seg_val[0]}]
set_property PACKAGE_PIN W6 [get_ports {S_7_Seg_val[1]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_7_Seg_val[1]}]
set_property PACKAGE_PIN U8 [get_ports {S_7_Seg_val[2]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_7_Seg_val[2]}]
set_property PACKAGE_PIN V8 [get_ports {S_7_Seg_val[3]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_7_Seg_val[3]}]
set_property PACKAGE_PIN U5 [get_ports {S_7_Seg_val[4]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_7_Seg_val[4]}]
set_property PACKAGE_PIN V5 [get_ports {S_7_Seg_val[5]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_7_Seg_val[5]}]
set_property PACKAGE_PIN U7 [get_ports {S_7_Seg_val[6]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {S_7_Seg_val[6]}]    

## Clock signal
set_property PACKAGE_PIN W5 [get_ports clk]
    set_property IOSTANDARD LVCMOS33 [get_ports clk]
    create_clock -add -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports clk]
