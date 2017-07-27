AC_INIT([prototest],[0.1.0],[dali@keywcorp.com])

AM_INIT_AUTOMAKE([subdir-objects])

AC_CONFIG_FILES([Makefile src/Makefile])

PKG_CHECK_MODULES(PROTOBUF, protobuf >= 3.3.2)
AC_SUBST(PROTOBUF_LIBS)
AC_SUBST(PROTOBUF_CFLAGS)
AC_SUBST(PROTOBUF_VERSION)
AC_CHECK_PROG([PROTOC], [protoc], [protoc])
AS_IF([test "x${PROTOC}" == "x"],
    [AC_MSG_ERROR([ProtoBuf complier "protoc" not found.])])

AC_CONFIG_MACRO_DIR([m4])
AC_PROG_CXX
AX_CXX_COMPILE_STDCXX_11(ext,mandatory)
AC_LANG([C++])
AC_OUTPUT
