set (SUPRESSIONS "${CMAKE_CURRENT_SOURCE_DIR}/../valgrind.supp")

# all test programs
set(ALL_TESTS
  hubport
  filterelement
  agnosticbin
  agnosticbin3
  audiomixerbin
  audiomixer
  bufferinjector
  pad_connections
)

# tests targets
foreach(test ${ALL_TESTS})
  add_test_program (test_${test} ${test}.c)

  add_dependencies(test_${test} ${LIBRARY_NAME}plugins)

  target_include_directories(test_${test} PRIVATE
    ${gstreamer-1.0_INCLUDE_DIRS}
    ${gstreamer-check-1.0_INCLUDE_DIRS}
  )

  target_link_libraries(test_${test}
    ${gstreamer-1.0_LIBRARIES}
    ${gstreamer-check-1.0_LIBRARIES}
  )

endforeach(test)

add_custom_target(clear_directory
  COMMAND ${CMAKE_COMMAND} -E remove_directory ${KURENTO_DOT_DIR}
  COMMAND ${CMAKE_COMMAND} -E make_directory ${KURENTO_DOT_DIR}
)

add_dependencies(check clear_directory)
