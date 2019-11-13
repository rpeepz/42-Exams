unsigned char	swap_bits(unsigned char octet)
{
	unsigned char swap = 0;
	if (octet & 0x1)
		swap |= 0x10;
	if (octet & 0x2)
		swap |= 0x20;
	if (octet & 0x4)
		swap |= 0x40;
	if (octet & 0x8)
		swap |= 0x80;
	if (octet & 0x10)
		swap |= 0x1;
	if (octet & 0x20)
		swap |= 0x2;
	if (octet & 0x40)
		swap |= 0x4;
	if (octet & 0x80)
		swap |= 0x8;
	return swap;
}
