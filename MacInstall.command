#!/bin/bash
ROUTE="$(cd "$(dirname "$0")" && pwd)"
FILE="$ROUTE/lib/bmi.c"
LIB="$ROUTE/lib/"
OUTPUT="$ROUTE/bmi"
clang "$FILE" -L"$LIB" -lcbmi -lC -o "$OUTPUT"
if [ $? -eq 0 ]; then
    echo "All set! Your compilation went was a success!"
else
    echo "Oops! Looks like there was a hiccup with the compilation."
fi

