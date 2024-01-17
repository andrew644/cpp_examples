project('cpp_examples', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++20'])

src = [
  'cpp_examples.cpp',
  'examples/basic_dsa.cpp'
  ]
incdir = include_directories('include')
exe = executable('cpp_examples', src, include_directories : incdir,
  install : true)

test('basic', exe)
