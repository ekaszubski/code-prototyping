add_library( ${PROJECT_NAME} SHARED cdf_unsigned_normal.cpp pdf_unsigned_normal.cpp )
target_link_libraries( ${PROJECT_NAME} gsl cblas )
