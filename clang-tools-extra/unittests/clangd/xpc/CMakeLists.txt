set(LLVM_LINK_COMPONENTS
  support
  )

get_filename_component(CLANGD_SOURCE_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/../../clangd REALPATH)
include_directories(
  ${CLANGD_SOURCE_DIR}
  )

add_extra_unittest(ClangdXpcTests
  ConversionTests.cpp
  )

target_link_libraries(ClangdXpcTests
  PRIVATE
  clangdXpcJsonConversions
  clangDaemon
  LLVMSupport
  LLVMTestingSupport
  )
