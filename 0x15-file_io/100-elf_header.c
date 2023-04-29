#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void _check_elf(unsigned char *);
void _print_magic(unsigned char *);
void _print_class(unsigned char *);
void _print_data(unsigned char *);
void _print_version(unsigned char *);
void _print_abi(unsigned char *);
void _print_osabi(unsigned char *);
void _print_type(unsigned int e_type, unsigned char *);
void _print_entry(unsigned long int, unsigned char *);
void _close_elf(int elf);

/**
 * _check_elf - checks if a file is an ELF file or not
 * @a_ident: A pointer to an array
 *
 * Description: exit code 98 on error
 */
void _check_elf(unsigned char *a_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (a_ident[idx] != 127 &&
		    a_ident[idx] != 'E' &&
		    a_ident[idx] != 'L' &&
		    a_ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _print_magic - prints the magic numbers 
 * @a_ident: A pointer to an array
 *
 * Description: magic numbers separated by spaces
 */
void _print_magic(unsigned char *a_ident)
{
	int idx;

	printf("  Magic:   ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", a_ident[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _print_class - prints the class of an ELF header file
 * @a_ident: A pointer to an array
 */
void _print_class(unsigned char *a_ident)
{
	printf("  Class:                             ");

	switch (a_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", a_ident[EI_CLASS]);
	}
}

/**
 * _print_data - prints the data of an ELF header file
 * @a_ident: A pointer to an array
 */
void _print_data(unsigned char *a_ident)
{
	printf("  Data:                              ");

	switch (a_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", a_ident[EI_CLASS]);
	}
}

/**
 * _print_version - prints the version of an ELF header file
 * @a_ident: A pointer to an array
 */
void _print_version(unsigned char *a_ident)
{
	printf("  Version:                           %d",
	       a_ident[EI_VERSION]);

	switch (a_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * _print_osabi - prints the OS/ABI of an ELF header file
 * @a_ident: A pointer to an array
 */
void _print_osabi(unsigned char *a_ident)
{
	printf("  OS/ABI:                            ");

	switch (a_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", a_ident[EI_OSABI]);
	}
}

/**
 * _print_abi - prints the ABI version of an ELF header file
 * @a_ident: A pointer to an array
 */
void _print_abi(unsigned char *a_ident)
{
	printf("  ABI Version:                       %d\n",
	       a_ident[EI_ABIVERSION]);
}

/**
 * _print_type - prints the type of an ELF header file
 * @a_type: ELF type.
 * @a_ident: A pointer to an array
 */
void _print_type(unsigned int a_type, unsigned char *a_ident)
{
	if (a_ident[EI_DATA] == ELFDATA2MSB)
		a_type >>= 8;

	printf("  Type:                              ");

	switch (a_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", a_type);
	}
}

/**
 * _print_entry - prints the entry point of an ELF header file
 * @a_entry: address of ELF entry point.
 * @a_ident: A pointer to an array
 */
void _print_entry(unsigned long int a_entry, unsigned char *a_ident)
{
	printf("  Entry point address:               ");

	if (a_ident[EI_DATA] == ELFDATA2MSB)
	{
		a_entry = ((a_entry << 8) & 0xFF00FF00) |
			  ((a_entry >> 8) & 0xFF00FF);
		a_entry = (a_entry << 16) | (a_entry >> 16);
	}

	if (a_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)a_entry);

	else
		printf("%#lx\n", a_entry);
}

/**
 * _close_elf - closes ELF file.
 * @elf: file descriptor of ELF file.
 *
 * Description: exit code 98 on error
 */
void _close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - entry point
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 0 on Success.
 *
 * Description: exit code 98 on error
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		_close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		_close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	_check_elf(header->e_ident);
	printf("ELF Header:\n");
	_print_magic(header->e_ident);
	_print_class(header->e_ident);
	_print_data(header->e_ident);
	_print_version(header->e_ident);
	_print_osabi(header->e_ident);
	_print_abi(header->e_ident);
	_print_type(header->e_type, header->e_ident);
	_print_entry(header->e_entry, header->e_ident);

	free(header);
	_close_elf(o);
	return (0);
}
