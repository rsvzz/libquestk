
inc_src = include_directories(['../../inc'])
source_files = [
    'queue.c',
    'stack.c'
]

install_headers(['../../inc/stack.h', '../../inc/queue.h'], subdir: 'questk')
shared_library('questk', 
source_files, include_directories: [inc_src], 
install: true
)

#meson build --buildtype release
#ninja -C build