# C++ Week02 — Algorithm Readiness Preheat

## Goal

Build the practical C++ and STL foundation required before starting structured algorithm study.

## Project

Sensor Data Recorder and Algorithm Readiness Test.

## What I Practiced

- `std::string`
- `std::vector`
- `push_back()` and `size()`
- `std::size_t`
- references
- `const std::vector<int>&`
- `std::sort`
- custom comparator
- `std::pair`
- `std::stack`
- `std::queue`
- basic `std::set`
- basic `std::map`

## Algorithm Readiness Test

The final test:

- reads a sensor name;
- stores readings in `std::vector<int>`;
- sorts readings in descending order using a custom comparator;
- finds the maximum reading;
- counts readings greater than or equal to a threshold;
- uses `const std::vector<int>&` in function parameters.

## Build

```powershell
g++ readiness_test.cpp -Wall -Wextra -std=c++17 -o readiness_test
```
