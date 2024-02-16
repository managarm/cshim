project('cshim', default_options: ['c_std=c99'])

incl = include_directories('include')

cshim_dep = declare_dependency(include_directories: incl)

if get_option('install_headers')
	install_headers(
		'include/float.h',
		'include/iso646.h',
		'include/limits.h',
		'include/stdalign.h',
		'include/stdarg.h',
		'include/stdbool.h',
		'include/stddef.h',
		'include/stdint.h',
		'include/stdnoreturn.h',
    )

	pkg = import('pkgconfig')
	pkg.generate(
		name: 'cshim',
		description: 'Shim for freestanding C',
	)
endif
