//Program To Replicate Ren Command Of Windows Command Line Interface (MS.DOCS)
#include <stdio.h>
void renameFile(const char *oldName, const char *newName)
{
    int result = rename(oldName, newName);

    if (result == 0)
        {
          printf("File renamed successfully from '%s' to '%s'.\n", oldName, newName);
        }
          else
            {
              perror("\aError renaming file");
            }
}

int main()
{
    char oldFile[100], newFile[100];

    printf("Enter the current file name: ");
    scanf("%s", oldFile);

    printf("Enter the new file name: ");
    scanf("%s", newFile);

    renameFile(oldFile, newFile);

    return 0;
}
