library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity display_unit is
    port(Reg_val : in STD_LOGIC_VECTOR (3 downto 0);
         S_7_Seg_val : out STD_LOGIC_VECTOR (6 downto 0);
--         S_7_Seg_sign : out STD_LOGIC_VECTOR (6 downto 0);
         Sign : out STD_LOGIC);
end display_unit;

architecture Behavioral of display_unit is
COMPONENT LUT_16_7 PORT(
       address : in STD_LOGIC_VECTOR (3 downto 0);
       data : out STD_LOGIC_VECTOR (6 downto 0)
    );
END COMPONENT;

begin
LUT_16_7_0: LUT_16_7 port map(
    address => Reg_val,
    data => S_7_Seg_val 
);

-- S_7_Seg_sign(6) <= not(Reg_val(3)); 
 Sign <= Reg_val(3);
-- S_7_Seg_sign(5 downto 0) <= "111111";

end Behavioral;