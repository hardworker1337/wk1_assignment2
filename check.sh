#!/bin/bash

word = "libft.h"
directory ="`Desktop/old_libft/libft"

for file in "$directory"/* do
	if ! grep - q "$word" "$file"; then
		echo "file does not contain the word $word."
		exit 1
	fi
done

echo "All files contain the word $word";
