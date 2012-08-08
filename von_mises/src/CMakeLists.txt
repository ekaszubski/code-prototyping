add_library( ${PROJECT_NAME} SHARED cdf_von_mises.cpp pdf_von_mises.cpp cdf_wrapped_normal.cpp pdf_wrapped_normal.cpp )
target_link_libraries( ${PROJECT_NAME} gsl cblas )
