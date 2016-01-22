int main(struct multiboot *mboot_ptr)
{
	monitor_clear();
	monitor_write("what a pity！");
	return 0xDEADBCBC;
}
