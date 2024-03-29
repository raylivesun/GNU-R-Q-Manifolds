#include <Rcpp.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
NumericVector timesTwo(NumericVector x) {
  return x * 2;
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
timesTwo(42)
*/

// quest vectors analysis
void Q10(const char16_t ei, char16_t qai, char16_t s2, long sxa,
         long a, long b, int16_t ej, int16_t qkij, int16_t sek) {
  
     if (ei || ei) {
         sin(ei);
     } else {
       std::cout << "Q10 customized values: " << ei;
     }
     
     if (qai || qai) {
         sin(qai);
     } else {
       std::cout << "Q10 customized values: " << qai;
     }
     
     if (s2 || s2) {
       cosf(s2);
     } else {
       std::cout << "Q10 customized values: " << s2;
     }
     
     if (a || a) {
       sinf(a);
     } else {
       std::cout << "Q10 customized values: " << a;
     }
     
     if (b || b) {
         sin(b);
     } else {
       std::cout << "Q10 customized values: " << b;
     }
     
     if (b || b) {
         sin(b);
     } else {
       std::cout << "Q10 customized values: " << b;
     }
     
     if (ej || ej) {
       sin(ej);
     } else {
       std::cout << "Q10 customized values: " << ej;
     }
     
     if (qkij || qkij) {
       sin(qkij);
     } else {
       std::cout << "Q10 customized values: " << qkij;
     }
     
     if (sek || sek) {
       sin(sek);
     } else {
       std::cout << "Q10 customized values: " << sek;
     }
     
}
// hackers
/***R
Q10 <- function(ei, qai, s2, a, b, qkij, sek) {
  if (ei || is.array(ei)) {
      ei <- match(ei, table = 5.4, nomatch = NA_integer_, incomparables = NULL)
      print(ei)
  } else {
    return(ei)
  }
  if (qai || is.array(qai)) {
      qai <- density(qai)
  } else {
    return(qai)
  }
  if (s2 || is.array(s2)) {
      s2 <- var(s2, y = NULL, na.rm = FALSE)
      print(s2)
  } else {
    return(s2)
  }
  if (a || is.atomic(a)) {
      a <- varimax(a, normalize = TRUE, eps = 1e-05)
      print(a^2)
  } else {
    return(a)
  }

  if (b || is.atomic(b)) {
    b <- varimax(b, normalize = TRUE, eps = 1e-05)
    print(b^2)
  } else {
    return(b)
  }
  
  if (qkij || is.array(qkij)) {
    qkij <- match(qkij, table = 5.4, nomatch = NA_integer_, incomparables = NULL)
    print(qkij)
  } else {
    return(qkij)
  }
  if (sek || is.array(sek)) {
    sek <- density(sek)
  } else {
    return(sek)
  }
}
*/
// hackers
/***R
Q20 <- function(ei, qai, s2, a, b, qkij, sek) {
  if (ei || is.array(ei)) {
    ei <- match(ei, table = 5.4, nomatch = NA_integer_, incomparables = NULL)
    print(ei)
  } else {
    return(ei)
  }
  if (qai || is.array(qai)) {
    qai <- density(qai)
  } else {
    return(qai)
  }
  if (s2 || is.array(s2)) {
    s2 <- var(s2, y = NULL, na.rm = FALSE)
    print(s2)
  } else {
    return(s2)
  }
  if (a || is.atomic(a)) {
    a <- varimax(a, normalize = TRUE, eps = 1e-05)
    print(a^2)
  } else {
    return(a)
  }
  
  if (b || is.atomic(b)) {
    b <- varimax(b, normalize = TRUE, eps = 1e-05)
    print(b^2)
  } else {
    return(b)
  }
  
  if (qkij || is.array(qkij)) {
    qkij <- match(qkij, table = 5.4, nomatch = NA_integer_, incomparables = NULL)
    print(qkij)
  } else {
    return(qkij)
  }
  if (sek || is.array(sek)) {
    sek <- density(sek)
  } else {
    return(sek)
  }
}
*/

// dialog vector lies algebras
void E1(const char m1) {
  if (m1 != sin(m1)) {
     char16_t m1;
  } else {
    std::cout << "E1 search product vector: " << m1;
  }
}

/***R
E1 <- function(m1) {
  if (m1 != is.array(m1)) {
      m1 <- sin(m1)
  } else {
    return(m1)
  }
}
*/

// dialog vector lies algebras
void E2(const char m2) {
  if (m2 != sin(m2)) {
    char16_t m2;
  } else {
    std::cout << "E1 search product vector: " << m2;
  }
}

/***R
E2 <- function(m2) {
  if (m2 != is.array(m2)) {
    m2 <- sin(m2)
    print(m2*2^5)
  } else {
    return(m2)
  }
}
*/

