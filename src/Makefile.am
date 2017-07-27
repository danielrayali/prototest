AM_CPPFLAGS=$(srcdir) -I$(builddir)

%.pb.cc %.pb.h: %.proto
	$(PROTOC) --proto_path=$(srcdir) --cpp_out=$(builddir) $^

dist_noinst_DATA = message.proto

bin_PROGRAMS = prog
prog_SOURCES = main.cc \
	message.pb.cc \
	message.pb.h
prog_LDADD = -lprotobuf

BUILT_SOURCES = message.pb.h

clean-local:
	-rm -rf *.pb.h *.pb.cc
