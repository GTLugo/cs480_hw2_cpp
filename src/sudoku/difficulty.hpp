//
// Created by galex on 3/9/2022.
//

#pragma once

#include "sudoku.hpp"

class Difficulty {
public:
  static inline Sudoku& easy() {
    static Sudoku p{{
      0, 3, 0, 0, 8, 0, 0, 0, 6, // 6
      5, 0, 0, 2, 9, 4, 7, 1, 0, // 3
      0, 0, 0, 3, 0, 0, 5, 0, 0, // 7
      0, 0, 5, 0, 1, 0, 8, 0, 4, // 5
      4, 2, 0, 8, 0, 5, 0, 3, 9, // 3
      1, 0, 8, 0, 3, 0, 6, 0, 0, // 5
      0, 0, 3, 0, 0, 7, 0, 0, 0, // 7
      0, 4, 1, 6, 5, 3, 0, 0, 2, // 3
      2, 0, 0, 0, 4, 0, 0, 6, 0  // 6
    }};
    return p;
  };

  static inline Sudoku& medium() {
    static Sudoku p{{
      3, 0, 8, 2, 9, 6, 0, 0, 0,
      0, 4, 0, 0, 0, 8, 0, 0, 0,
      5, 0, 2, 1, 0, 0, 0, 8, 7,
      0, 1, 3, 0, 0, 0, 0, 0, 0,
      7, 8, 0, 0, 0, 0, 0, 3, 5,
      0, 0, 0, 0, 0, 0, 4, 1, 0,
      1, 2, 0, 0, 0, 7, 8, 0, 3,
      0, 0, 0, 8, 0, 0, 0, 2, 0,
      0, 0, 0, 5, 4, 2, 1, 0, 6
    }};
    return p;
  };

  static inline Sudoku& hard() {
    static Sudoku p{{
      7, 0, 0, 0, 0, 0, 0, 0, 0,
      6, 0, 0, 4, 1, 0, 2, 5, 0,
      0, 1, 3, 0, 9, 5, 0, 0, 0,
      8, 6, 0, 0, 0, 0, 0, 0, 0,
      3, 0, 1, 0, 0, 0, 4, 0, 5,
      0, 0, 0, 0, 0, 0, 0, 8, 6,
      0, 0, 0, 8, 4, 0, 5, 3, 0,
      0, 4, 2, 0, 3, 6, 0, 0, 7,
      0, 0, 0, 0, 0, 0, 0, 0, 9
    }};
    return p;
  };

  static inline Sudoku& evil() {
    static Sudoku p{{
      0, 6, 0, 8, 0, 0, 0, 0, 0,
      0, 0, 4, 0, 6, 0, 0, 0, 9,
      1, 0, 0, 0, 4, 3, 0, 6, 0,
      0, 5, 2, 0, 0, 0, 0, 0, 0,
      0, 0, 8, 6, 0, 9, 3, 0, 0,
      0, 0, 0, 0, 0, 0, 5, 7, 0,
      0, 1, 0, 4, 8, 0, 0, 0, 5,
      8, 0, 0, 0, 1, 0, 2, 0, 0,
      0, 0, 0, 0, 0, 5, 0, 4, 0
     }};
    return p;
  };
};