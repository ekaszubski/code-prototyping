add_library( ${PROJECT_NAME} SHARED cdf_truncated_normal.cpp pdf_truncated_normal.cpp )
target_link_libraries( ${PROJECT_NAME} gsl cblas )
