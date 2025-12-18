# Deadline Conflict Detector

## Description
Deadline Conflict Detector is a console-based learning project that identifies overlapping deadlines between tasks using sorting and interval comparison logic.

## Features
- Accepts multiple tasks with start and end times
- Detects overlapping deadlines
- Displays conflicting tasks clearly

## Concepts Used
- Sorting
- Interval overlap detection
- Time complexity analysis

## How It Works
1. Tasks are sorted based on start time
2. Adjacent tasks are compared
3. If a task starts before the previous task ends, a conflict is detected

## Sample Input
Assignment-1 10 12
Assignment-2 11 13
Assignment-3 14 16

## Time Complexity
- Sorting: O(n log n)
- Conflict Detection: O(n)
- Overall: O(n log n)

## Tech Stack
- Language: C++
- Type: Console-based application
