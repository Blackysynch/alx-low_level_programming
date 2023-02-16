void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
