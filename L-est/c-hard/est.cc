#include <iostream>
#include <gmp.h>
#include <gmpxx.h>
#include <csv_parser/csv_parser.hpp>
#include <gsl/gsl_randist.h>





int main(void) {
  csv_parser file_parser;

  file_parser.init("e2.csv");
  file_parser.set_field_term_char(',');
  file_parser.set_line_term_char('\n');

  unsigned int row_count = 0;
  
  while(file_parser.has_more_rows()) {
    csv_row row = file_parser.get_row();
    
    // Read rows

    row_count++;
  }      
  cout << gsl_ran_gaussian_pdf(0, 1) << '\n';
  cout << row_count << '\n';
}
