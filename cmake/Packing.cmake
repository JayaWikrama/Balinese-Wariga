set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME ${PROJECT_NAME}-lib)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Library untuk Wariga Bali")
set(CPACK_PACKAGE_VENDOR "Jaya Wikrama")
set(CPACK_VERBATIM_VARIABLES YES)
set(CPACK_PACKAGE_INSTALL_DIRECTORY ${CPACK_PACKAGE_NAME})
set(CPACK_OUTPUT_FILE_PREFIX "${CMAKE_SOURCE_DIR}/package")
set(CPACK_PACKAGING_INSTALL_PREFIX "/")
set(CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Jaya Wikrama")
set(CPACK_PACKAGE_CONTACT "jaya.wikrama@delameta.com")
set(CPACK_DEBIAN_FILE_NAME DEB-DEFAULT)
set(CPACK_COMPONENTS_GROUPING ALL_COMPONENTS_IN_ONE)
set(CPACK_DEB_COMPONENT_INSTALL YES)

install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/" DESTINATION "/usr/include/")

include(CPack)