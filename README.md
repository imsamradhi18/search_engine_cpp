# Search Engine in C++

A beginner-friendly search engine project built in C++ to understand core concepts of data structures, algorithms, and text processing.

## About the Project

This project implements a basic search engine using an **inverted index**.

The program takes a collection of documents, processes the words in them, and creates an index that maps each word to the documents in which it appears.

When a user enters a search query, the program searches the inverted index and displays the documents containing the searched word.

## Current Features

- Store multiple text documents
- Process and tokenize words
- Build an inverted index
- Search for keywords
- Display matching documents
- Basic command-line interface

## Example

```text
INVERTED INDEX

a -> 1
all -> 2
brown -> 0 1
cat -> 2
dog -> 0 1
fox -> 0 1
quick -> 0 1
the -> 0 2

Search quick

Found in doc 0 : The quick brown fox jumps over the lazy dog
Found in doc 1 : A quick brown dog outpaces a quick fox
```

## Technologies Used

- C++
- Standard Template Library (STL)
- Data Structures
- Algorithms

## Project Structure

```text
search_engine_cpp/
│
├── src/
│   └── main.cpp
│
├── .gitignore
└── README.md
```

## How to Run

### Compile the program

```bash
g++ src/main.cpp -o output/main.exe
```

### Run the program

On Windows PowerShell:

```powershell
.\output\main.exe
```

## Learning Goals

This project is being developed step-by-step to strengthen understanding of:

- C++ programming
- STL containers
- Strings and text processing
- Hash maps
- Searching techniques
- Data Structures and Algorithms
- Git and GitHub workflow

## Future Improvements

- Support multi-word search queries
- Improve text preprocessing
- Add ranking of search results
- Read documents from external files
- Improve search efficiency
- Add a better command-line interface

## Status

🚧 Work in Progress

This project is being developed and improved continuously as part of my C++ and Data Structures & Algorithms learning journey.
