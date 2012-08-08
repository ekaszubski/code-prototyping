add_library( ${PROJECT_NAME} SHARED cdf_von_mises.cpp pdf_von_mises.cpp )
target_link_libraries( ${PROJECT_NAME} gsl cblas )
