# CMake generated Testfile for 
# Source directory: /home/pheonix/ros2_ws/src/joystick_drivers/joy
# Build directory: /home/pheonix/ros2_ws/build/joy
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pheonix/ros2_ws/build/joy/test_results/joy/cppcheck.xunit.xml" "--package-name" "joy" "--output-file" "/home/pheonix/ros2_ws/build/joy/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/jazzy/bin/ament_cppcheck" "--xunit-file" "/home/pheonix/ros2_ws/build/joy/test_results/joy/cppcheck.xunit.xml" "--include_dirs" "/home/pheonix/ros2_ws/src/joystick_drivers/joy/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/pheonix/ros2_ws/src/joystick_drivers/joy" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/jazzy/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/jazzy/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;84;ament_package;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pheonix/ros2_ws/build/joy/test_results/joy/cpplint.xunit.xml" "--package-name" "joy" "--output-file" "/home/pheonix/ros2_ws/build/joy/ament_cpplint/cpplint.txt" "--command" "/opt/ros/jazzy/bin/ament_cpplint" "--xunit-file" "/home/pheonix/ros2_ws/build/joy/test_results/joy/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/pheonix/ros2_ws/src/joystick_drivers/joy" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;78;ament_add_test;/opt/ros/jazzy/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;39;ament_cpplint;/opt/ros/jazzy/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;84;ament_package;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pheonix/ros2_ws/build/joy/test_results/joy/flake8.xunit.xml" "--package-name" "joy" "--output-file" "/home/pheonix/ros2_ws/build/joy/ament_flake8/flake8.txt" "--command" "/opt/ros/jazzy/bin/ament_flake8" "--xunit-file" "/home/pheonix/ros2_ws/build/joy/test_results/joy/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/pheonix/ros2_ws/src/joystick_drivers/joy" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_flake8/cmake/ament_flake8.cmake;69;ament_add_test;/opt/ros/jazzy/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;19;ament_flake8;/opt/ros/jazzy/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;84;ament_package;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pheonix/ros2_ws/build/joy/test_results/joy/lint_cmake.xunit.xml" "--package-name" "joy" "--output-file" "/home/pheonix/ros2_ws/build/joy/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/jazzy/bin/ament_lint_cmake" "--xunit-file" "/home/pheonix/ros2_ws/build/joy/test_results/joy/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/pheonix/ros2_ws/src/joystick_drivers/joy" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/jazzy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/jazzy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;84;ament_package;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pheonix/ros2_ws/build/joy/test_results/joy/pep257.xunit.xml" "--package-name" "joy" "--output-file" "/home/pheonix/ros2_ws/build/joy/ament_pep257/pep257.txt" "--command" "/opt/ros/jazzy/bin/ament_pep257" "--xunit-file" "/home/pheonix/ros2_ws/build/joy/test_results/joy/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/pheonix/ros2_ws/src/joystick_drivers/joy" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/jazzy/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/jazzy/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;84;ament_package;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pheonix/ros2_ws/build/joy/test_results/joy/uncrustify.xunit.xml" "--package-name" "joy" "--output-file" "/home/pheonix/ros2_ws/build/joy/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/jazzy/bin/ament_uncrustify" "--xunit-file" "/home/pheonix/ros2_ws/build/joy/test_results/joy/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/pheonix/ros2_ws/src/joystick_drivers/joy" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;85;ament_add_test;/opt/ros/jazzy/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;43;ament_uncrustify;/opt/ros/jazzy/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;84;ament_package;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/pheonix/ros2_ws/build/joy/test_results/joy/xmllint.xunit.xml" "--package-name" "joy" "--output-file" "/home/pheonix/ros2_ws/build/joy/ament_xmllint/xmllint.txt" "--command" "/opt/ros/jazzy/bin/ament_xmllint" "--xunit-file" "/home/pheonix/ros2_ws/build/joy/test_results/joy/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/pheonix/ros2_ws/src/joystick_drivers/joy" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/jazzy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/jazzy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;84;ament_package;/home/pheonix/ros2_ws/src/joystick_drivers/joy/CMakeLists.txt;0;")
