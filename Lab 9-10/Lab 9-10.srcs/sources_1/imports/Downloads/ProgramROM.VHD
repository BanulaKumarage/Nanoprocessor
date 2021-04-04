library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

entity ProgramRom is
    Port ( Memory_Select  : in STD_LOGIC_VECTOR (2 downto 0);
           To_Instruction_bus : out STD_LOGIC_VECTOR (11 downto 0));
end ProgramRom;

architecture Behavioral of ProgramRom is

type rom_type is array (0 to 7) of STD_LOGIC_VECTOR(11 downto 0);
SIGNAL programRom:rom_type:=(
"100010000011", -- MOVI R1, 3
"100100000001",
"010100000000",
"001110010000",
"000010100000",
"110010000111",
"110000000011",
"110000000111"

);
begin

To_Instruction_bus <= programRom(to_integer(unsigned(Memory_Select)));

end Behavioral;
