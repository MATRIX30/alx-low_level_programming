#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int main(int argc, char **argv) 
{
    int fd, i;
    Elf64_Ehdr header;
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 1;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        perror("read");
        close(fd);
        return 1;
    }

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");

    printf("Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           %d\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
    printf("ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type:                              %d\n", header.e_type);
    printf("Entry point address:               0x%lx\n", header.e_entry);

    close(fd);
    return (0);
}

