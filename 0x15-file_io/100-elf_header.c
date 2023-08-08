#include <elf.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void print_elf_head(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

	printf("Data:                             %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");

	printf("Version:                             %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                             %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                             %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                             %d\n", header->e_type);
	
	printf("Entry point address:                             0x%lx\n", header->e_entry);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_head elf_filename\n");
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file %s\n", argv[1]);
		return (98);
	}
	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header from file %s\n", argv[1]);
		return 98;
	}
	print_elf_head(&header);
	close(fd);
}
