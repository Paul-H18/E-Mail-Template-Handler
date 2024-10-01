#!/bin/bash


g++ -std=c++11 -I/opt/homebrew/include src/main.cpp src/JsonHandler.cpp -o eMailTemplateHelper

# Check if the -s flag is provided
run_program=false

# Loop through the provided options
while getopts ":s" option; do
  case $option in
    s)
      run_program=true  # Set flag to true if -s is provided
      ;;
    \?)
      echo "Invalid option: -$OPTARG" >&2  # Handle invalid options
      exit 1
      ;;
  esac
done

# If the flag is set, print the message
if [ "$run_program" = true ]; then
  ./eMailTemplateHelper
fi

