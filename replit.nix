{ pkgs }: {
	deps = [
   pkgs.conan
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}