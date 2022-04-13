/**
  *print_name - prints a name as given.
  *@name: pointer to name.
  *@f: function pointer.
  *
  *Return: void.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
