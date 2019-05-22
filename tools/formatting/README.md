# Formatting Tools

## check-format

This bash-script checks the format of every c(pp) & h(pp) file in the current and parent directories against the clang-format style defined in a parent `.clang-format` file.
It returns 0 if everything is formatted correctly.
Otherwise, it displays the list of files that do not match the format and returns 1.

## format-all

This bash-script applies the format of a parent `.clang-format` to every c(pp) & h(pp) file in the current and parent directories.

This script returns 0 on success.