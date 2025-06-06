#ifdef __GNUC__
# pragma GCC system_header
#endif
#define ALWAYS_INLINE(x) __attribute__ ((__always_inline__)) x

typedef long unsigned int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);
typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);
typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);
typedef int cookie_close_function_t (void *__cookie);
typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __off64_t off64_t;
typedef __ssize_t ssize_t;
typedef __fpos_t fpos_t;
typedef __fpos64_t fpos64_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));
extern int fclose (FILE *__stream);
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern FILE *tmpfile64 (void)
   __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__malloc__ (__builtin_free, 1)));
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern int fcloseall (void);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
extern int printf (const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));
extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") __attribute__ ((__warn_unused_result__));
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") __attribute__ ((__warn_unused_result__));
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void perror (const char *__s);
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int pclose (FILE *__stream);
extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (pclose, 1))) __attribute__ ((__warn_unused_result__));
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1)));
extern char *cuserid (char *__s)
  __attribute__ ((__access__ (__write_only__, 1)));
struct obstack;
extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return getc (stdin);
}
extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}
extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}
extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}
extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return putc (__c, stdout);
}
extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0010) != 0);
}
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0020) != 0);
}
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3)));
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      const char *__restrict __format,
      __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3)));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) sprintf (char *__restrict __s, const char *__restrict __fmt, ...)
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt,
      __builtin_va_arg_pack ());
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsprintf (char *__restrict __s, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}
extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, const char *__restrict __format,
      ...) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, const char *__restrict __format,
       __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) snprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, ...)
{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt,
       __builtin_va_arg_pack ());
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsnprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}
extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
     __gnuc_va_list __ap);
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vfprintf (FILE *__restrict __stream,
   const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}
extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vdprintf (int __fd, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}
extern int __asprintf_chk (char **__restrict __ptr, int __flag,
      const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4))) __attribute__ ((__warn_unused_result__));
extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
       const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0))) __attribute__ ((__warn_unused_result__));
extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
     int __flag, const char *__restrict __format,
     ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
      int __flag,
      const char *__restrict __format,
      __gnuc_va_list __args)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)
{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) __asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)
{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_printf (struct obstack *__restrict __obstack, const char *__restrict __fmt, ...)
{
  return __obstack_printf_chk (__obstack, 2 - 1, __fmt,
          __builtin_va_arg_pack ());
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vasprintf (char **__restrict __ptr, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vasprintf_chk (__ptr, 2 - 1, __fmt, __ap);
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_vprintf (struct obstack *__restrict __obstack, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __obstack_vprintf_chk (__obstack, 2 - 1, __fmt,
    __ap);
}
extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream)
    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 3)));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets")
    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2))) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__s, 2 > 1);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && (((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_alias (__s, __n, __stream);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && !(((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_chk_warn (__s, sz, __n, __stream);
  return __fgets_chk (__s, sz, __n, __stream);
}
extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread") __attribute__ ((__warn_unused_result__));
extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__ptr, 0);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && (((long unsigned int) (__n)) <= (sz) / (__size))))
    return __fread_alias (__ptr, __size, __n, __stream);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && !(((long unsigned int) (__n)) <= (sz) / (__size))))
    return __fread_chk_warn (__ptr, sz, __size, __n, __stream);
  return __fread_chk (__ptr, sz, __size, __n, __stream);
}
extern char *__fgets_unlocked_chk (char *__restrict __s, size_t __size,
       int __n, FILE *__restrict __stream)
    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 3)));
extern char *__fgets_unlocked_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets_unlocked")
    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *__fgets_unlocked_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_unlocked_chk")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets_unlocked called with bigger size than length " "of destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2))) char *
fgets_unlocked (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__s, 2 > 1);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && (((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_unlocked_alias (__s, __n, __stream);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && !(((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_unlocked_chk_warn (__s, sz, __n, __stream);
  return __fgets_unlocked_chk (__s, sz, __n, __stream);
}
extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked") __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__ptr, 0);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && (((long unsigned int) (__n)) <= (sz) / (__size))))
    {
      if (__builtin_constant_p (__size)
   && __builtin_constant_p (__n)
   && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
   && __size * __n <= 8)
 {
   size_t __cnt = __size * __n;
   char *__cptr = (char *) __ptr;
   if (__cnt == 0)
     return 0;
   for (; __cnt > 0; --__cnt)
     {
       int __c = getc_unlocked (__stream);
       if (__c == (-1))
  break;
       *__cptr++ = __c;
     }
   return (__cptr - (char *) __ptr) / __size;
 }
      return __fread_unlocked_alias (__ptr, __size, __n, __stream);
    }
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && !(((long unsigned int) (__n)) <= (sz) / (__size))))
    return __fread_unlocked_chk_warn (__ptr, sz, __size, __n, __stream);
  return __fread_unlocked_chk (__ptr, sz, __size, __n, __stream);
}


typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __clockid_t clockid_t;
typedef __time_t time_t;
typedef __timer_t timer_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;
typedef int register_t __attribute__ ((__mode__ (__word__)));
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{
  return __builtin_bswap16 (__bsx);
}
static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{
  return __builtin_bswap32 (__bsx);
}
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}
static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}
static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
  __attribute__((__warning__ ("bit outside of fd_set selected")));

typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;
  unsigned int __nusers;
  int __kind;
  short __spins;
  short __elision;
  __pthread_list_t __list;
};
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  signed char __rwelision;
  unsigned char __pad1[7];
  unsigned long int __pad2;
  unsigned int __flags;
};
struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
typedef struct
{
  int __data ;
} __once_flag;
typedef unsigned long int pthread_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
  char __size[56];
  long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;


struct stat
  {
    __dev_t st_dev;
    __ino_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __syscall_slong_t __glibc_reserved[3];
  };
struct stat64
  {
    __dev_t st_dev;
    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __syscall_slong_t __glibc_reserved[3];
  };
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));
extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
extern __mode_t getumask (void) __attribute__ ((__nothrow__ , __leaf__));
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
typedef __signed__ char __s8;
typedef unsigned char __u8;
typedef __signed__ short __s16;
typedef unsigned short __u16;
typedef __signed__ int __s32;
typedef unsigned int __u32;
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned long __kernel_old_dev_t;
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;
typedef __kernel_ulong_t __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef __kernel_long_t __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;
typedef struct {
 int val[2];
} __kernel_fsid_t;
typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;
typedef unsigned __poll_t;
struct statx_timestamp {
 __s64 tv_sec;
 __u32 tv_nsec;
 __s32 __reserved;
};
struct statx {
 __u32 stx_mask;
 __u32 stx_blksize;
 __u64 stx_attributes;
 __u32 stx_nlink;
 __u32 stx_uid;
 __u32 stx_gid;
 __u16 stx_mode;
 __u16 __spare0[1];
 __u64 stx_ino;
 __u64 stx_size;
 __u64 stx_blocks;
 __u64 stx_attributes_mask;
 struct statx_timestamp stx_atime;
 struct statx_timestamp stx_btime;
 struct statx_timestamp stx_ctime;
 struct statx_timestamp stx_mtime;
 __u32 stx_rdev_major;
 __u32 stx_rdev_minor;
 __u32 stx_dev_major;
 __u32 stx_dev_minor;
 __u64 stx_mnt_id;
 __u64 __spare2;
 __u64 __spare3[12];
};

int statx (int __dirfd, const char *__restrict __path, int __flags,
           unsigned int __mask, struct statx *__restrict __buf)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 5)));


typedef int wchar_t;

typedef struct
  {
    int quot;
    int rem;
  } div_t;
typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;
__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern _Float32 strtof32 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern _Float64 strtof64 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern _Float128 strtof128 (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern _Float32x strtof32x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern _Float64x strtof64x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));
extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));
__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));
__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));
extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float32 strtof32_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float64 strtof64_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float128 strtof128_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float32x strtof32x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float64x strtof64x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}
__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));
extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };
extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));
extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));
extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));
extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;
  };
extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__));
extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));
extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)))
    __attribute__ ((__malloc__ (__builtin_free, 1)));
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__ (reallocarray, 1)));

extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));

extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__));
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
     __attribute__ ((__alloc_size__ (2))) __attribute__ ((__warn_unused_result__));
extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int system (const char *__command) __attribute__ ((__warn_unused_result__));
extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__malloc__))
     __attribute__ ((__malloc__ (__builtin_free, 1))) __attribute__ ((__warn_unused_result__));
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
typedef int (*__compar_fn_t) (const void *, const void *);
typedef __compar_fn_t comparison_fn_t;
typedef int (*__compar_d_fn_t) (const void *, const void *, void *);
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;
  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (const void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 {
   return (void *) __p;
 }
    }
  return ((void *)0);
}
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));
extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__read_only__, 2)));
extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3)))
  __attribute__ ((__access__ (__read_only__, 2)));
extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int posix_openpt (int __oflag) __attribute__ ((__warn_unused_result__));
extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));
extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));
extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int getpt (void);
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) __asm__ ("" "realpath") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("" "__realpath_chk") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) realpath (const char *__restrict __name, char *__restrict __resolved)
{
  size_t sz = __builtin_object_size (__resolved, 2 > 1);
  if (sz == (size_t) -1)
    return __realpath_alias (__name, __resolved);
  return __realpath_chk (__name, __resolved, sz);
}
extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ptsname_r") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ptsname_r_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ptsname_r (int __fd, char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ptsname_r_alias (__fd, __buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1))));
}
extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) __asm__ ("" "wctomb") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__nothrow__ , __leaf__)) wctomb (char *__s, wchar_t __wchar)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1
      && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}
extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) __asm__ ("" "mbstowcs") __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__mbstowcs_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len)
{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) ? __mbstowcs_alias (__dst, __src, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) ? __mbstowcs_chk_warn (__dst, __src, __len, (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t))) : __mbstowcs_chk (__dst, __src, __len, (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))));
}
extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) __asm__ ("" "wcstombs") __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__wcstombs_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len)
{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) ? __wcstombs_alias (__dst, __src, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) ? __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1)) : __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1))));
}

typedef long int ptrdiff_t;

extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 4)));
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)))
      __attribute__ ((__access__ (__read_only__, 1, 3)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 1, 3)));
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)))
     __attribute__ ((__access__ (__write_only__, 1, 3)));
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)))
    __attribute__ ((__access__ (__read_only__, 1, 2)))
    __attribute__ ((__access__ (__read_only__, 3, 4)));
extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern const char *strerrordesc_np (int __err) __attribute__ ((__nothrow__ , __leaf__));
extern const char *strerrorname_np (int __err) __attribute__ ((__nothrow__ , __leaf__));
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));

extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bcopy (const void *__src, void *__dest, size_t __len)
{
  (void) __builtin___memmove_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 0));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bzero (void *__dest, size_t __len)
{
  (void) __builtin___memset_chk (__dest, '\0', __len,
     __builtin_object_size (__dest, 0));
}
extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern const char *sigabbrev_np (int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern const char *sigdescr_np (int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__read_write__, 1, 2)));
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)
{
  return __builtin___memcpy_chk (__dest, __src, __len,
     __builtin_object_size (__dest, 0));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memmove (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 0));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) mempcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)
{
  return __builtin___mempcpy_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 0));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memset (void *__dest, int __ch, size_t __len)
{
  return __builtin___memset_chk (__dest, __ch, __len,
     __builtin_object_size (__dest, 0));
}
void __explicit_bzero_chk (void *__dest, size_t __len, size_t __destlen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) explicit_bzero (void *__dest, size_t __len)
{
  __explicit_bzero_chk (__dest, __len, __builtin_object_size (__dest, 0));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len)
{
  return __builtin___strncpy_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 2 > 1));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpncpy (char *__dest, const char *__src, size_t __n)
{
  return __builtin___stpncpy_chk (__dest, __src, __n,
      __builtin_object_size (__dest, 2 > 1));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcat (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncat (char *__restrict __dest, const char *__restrict __src, size_t __len)
{
  return __builtin___strncat_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 2 > 1));
}

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
typedef int __gwchar_t;

typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));
extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));
extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int execveat (int __fd, const char *__path, char *const __argv[],
                     char *const __envp[], int __flags)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ , __leaf__));
extern int close (int __fd);
extern void closefrom (int __lowfd) __attribute__ ((__nothrow__ , __leaf__));
extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t write (int __fd, const void *__buf, size_t __n) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__read_only__, 2, 3)));
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__read_only__, 2, 3)));
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__read_only__, 2, 3)));
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned int sleep (unsigned int __seconds);
extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));
extern int usleep (__useconds_t __useconds);
extern int pause (void);
extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 1)));
extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ , __leaf__));
extern char **__environ;
extern char **environ;
extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void _exit (int __status) __attribute__ ((__noreturn__));
enum
  {
    _PC_LINK_MAX,
    _PC_MAX_CANON,
    _PC_MAX_INPUT,
    _PC_NAME_MAX,
    _PC_PATH_MAX,
    _PC_PIPE_BUF,
    _PC_CHOWN_RESTRICTED,
    _PC_NO_TRUNC,
    _PC_VDISABLE,
    _PC_SYNC_IO,
    _PC_ASYNC_IO,
    _PC_PRIO_IO,
    _PC_SOCK_MAXBUF,
    _PC_FILESIZEBITS,
    _PC_REC_INCR_XFER_SIZE,
    _PC_REC_MAX_XFER_SIZE,
    _PC_REC_MIN_XFER_SIZE,
    _PC_REC_XFER_ALIGN,
    _PC_ALLOC_SIZE_MIN,
    _PC_SYMLINK_MAX,
    _PC_2_SYMLINKS
  };
enum
  {
    _SC_ARG_MAX,
    _SC_CHILD_MAX,
    _SC_CLK_TCK,
    _SC_NGROUPS_MAX,
    _SC_OPEN_MAX,
    _SC_STREAM_MAX,
    _SC_TZNAME_MAX,
    _SC_JOB_CONTROL,
    _SC_SAVED_IDS,
    _SC_REALTIME_SIGNALS,
    _SC_PRIORITY_SCHEDULING,
    _SC_TIMERS,
    _SC_ASYNCHRONOUS_IO,
    _SC_PRIORITIZED_IO,
    _SC_SYNCHRONIZED_IO,
    _SC_FSYNC,
    _SC_MAPPED_FILES,
    _SC_MEMLOCK,
    _SC_MEMLOCK_RANGE,
    _SC_MEMORY_PROTECTION,
    _SC_MESSAGE_PASSING,
    _SC_SEMAPHORES,
    _SC_SHARED_MEMORY_OBJECTS,
    _SC_AIO_LISTIO_MAX,
    _SC_AIO_MAX,
    _SC_AIO_PRIO_DELTA_MAX,
    _SC_DELAYTIMER_MAX,
    _SC_MQ_OPEN_MAX,
    _SC_MQ_PRIO_MAX,
    _SC_VERSION,
    _SC_PAGESIZE,
    _SC_RTSIG_MAX,
    _SC_SEM_NSEMS_MAX,
    _SC_SEM_VALUE_MAX,
    _SC_SIGQUEUE_MAX,
    _SC_TIMER_MAX,
    _SC_BC_BASE_MAX,
    _SC_BC_DIM_MAX,
    _SC_BC_SCALE_MAX,
    _SC_BC_STRING_MAX,
    _SC_COLL_WEIGHTS_MAX,
    _SC_EQUIV_CLASS_MAX,
    _SC_EXPR_NEST_MAX,
    _SC_LINE_MAX,
    _SC_RE_DUP_MAX,
    _SC_CHARCLASS_NAME_MAX,
    _SC_2_VERSION,
    _SC_2_C_BIND,
    _SC_2_C_DEV,
    _SC_2_FORT_DEV,
    _SC_2_FORT_RUN,
    _SC_2_SW_DEV,
    _SC_2_LOCALEDEF,
    _SC_PII,
    _SC_PII_XTI,
    _SC_PII_SOCKET,
    _SC_PII_INTERNET,
    _SC_PII_OSI,
    _SC_POLL,
    _SC_SELECT,
    _SC_UIO_MAXIOV,
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
    _SC_PII_INTERNET_STREAM,
    _SC_PII_INTERNET_DGRAM,
    _SC_PII_OSI_COTS,
    _SC_PII_OSI_CLTS,
    _SC_PII_OSI_M,
    _SC_T_IOV_MAX,
    _SC_THREADS,
    _SC_THREAD_SAFE_FUNCTIONS,
    _SC_GETGR_R_SIZE_MAX,
    _SC_GETPW_R_SIZE_MAX,
    _SC_LOGIN_NAME_MAX,
    _SC_TTY_NAME_MAX,
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
    _SC_THREAD_KEYS_MAX,
    _SC_THREAD_STACK_MIN,
    _SC_THREAD_THREADS_MAX,
    _SC_THREAD_ATTR_STACKADDR,
    _SC_THREAD_ATTR_STACKSIZE,
    _SC_THREAD_PRIORITY_SCHEDULING,
    _SC_THREAD_PRIO_INHERIT,
    _SC_THREAD_PRIO_PROTECT,
    _SC_THREAD_PROCESS_SHARED,
    _SC_NPROCESSORS_CONF,
    _SC_NPROCESSORS_ONLN,
    _SC_PHYS_PAGES,
    _SC_AVPHYS_PAGES,
    _SC_ATEXIT_MAX,
    _SC_PASS_MAX,
    _SC_XOPEN_VERSION,
    _SC_XOPEN_XCU_VERSION,
    _SC_XOPEN_UNIX,
    _SC_XOPEN_CRYPT,
    _SC_XOPEN_ENH_I18N,
    _SC_XOPEN_SHM,
    _SC_2_CHAR_TERM,
    _SC_2_C_VERSION,
    _SC_2_UPE,
    _SC_XOPEN_XPG2,
    _SC_XOPEN_XPG3,
    _SC_XOPEN_XPG4,
    _SC_CHAR_BIT,
    _SC_CHAR_MAX,
    _SC_CHAR_MIN,
    _SC_INT_MAX,
    _SC_INT_MIN,
    _SC_LONG_BIT,
    _SC_WORD_BIT,
    _SC_MB_LEN_MAX,
    _SC_NZERO,
    _SC_SSIZE_MAX,
    _SC_SCHAR_MAX,
    _SC_SCHAR_MIN,
    _SC_SHRT_MAX,
    _SC_SHRT_MIN,
    _SC_UCHAR_MAX,
    _SC_UINT_MAX,
    _SC_ULONG_MAX,
    _SC_USHRT_MAX,
    _SC_NL_ARGMAX,
    _SC_NL_LANGMAX,
    _SC_NL_MSGMAX,
    _SC_NL_NMAX,
    _SC_NL_SETMAX,
    _SC_NL_TEXTMAX,
    _SC_XBS5_ILP32_OFF32,
    _SC_XBS5_ILP32_OFFBIG,
    _SC_XBS5_LP64_OFF64,
    _SC_XBS5_LPBIG_OFFBIG,
    _SC_XOPEN_LEGACY,
    _SC_XOPEN_REALTIME,
    _SC_XOPEN_REALTIME_THREADS,
    _SC_ADVISORY_INFO,
    _SC_BARRIERS,
    _SC_BASE,
    _SC_C_LANG_SUPPORT,
    _SC_C_LANG_SUPPORT_R,
    _SC_CLOCK_SELECTION,
    _SC_CPUTIME,
    _SC_THREAD_CPUTIME,
    _SC_DEVICE_IO,
    _SC_DEVICE_SPECIFIC,
    _SC_DEVICE_SPECIFIC_R,
    _SC_FD_MGMT,
    _SC_FIFO,
    _SC_PIPE,
    _SC_FILE_ATTRIBUTES,
    _SC_FILE_LOCKING,
    _SC_FILE_SYSTEM,
    _SC_MONOTONIC_CLOCK,
    _SC_MULTI_PROCESS,
    _SC_SINGLE_PROCESS,
    _SC_NETWORKING,
    _SC_READER_WRITER_LOCKS,
    _SC_SPIN_LOCKS,
    _SC_REGEXP,
    _SC_REGEX_VERSION,
    _SC_SHELL,
    _SC_SIGNALS,
    _SC_SPAWN,
    _SC_SPORADIC_SERVER,
    _SC_THREAD_SPORADIC_SERVER,
    _SC_SYSTEM_DATABASE,
    _SC_SYSTEM_DATABASE_R,
    _SC_TIMEOUTS,
    _SC_TYPED_MEMORY_OBJECTS,
    _SC_USER_GROUPS,
    _SC_USER_GROUPS_R,
    _SC_2_PBS,
    _SC_2_PBS_ACCOUNTING,
    _SC_2_PBS_LOCATE,
    _SC_2_PBS_MESSAGE,
    _SC_2_PBS_TRACK,
    _SC_SYMLOOP_MAX,
    _SC_STREAMS,
    _SC_2_PBS_CHECKPOINT,
    _SC_V6_ILP32_OFF32,
    _SC_V6_ILP32_OFFBIG,
    _SC_V6_LP64_OFF64,
    _SC_V6_LPBIG_OFFBIG,
    _SC_HOST_NAME_MAX,
    _SC_TRACE,
    _SC_TRACE_EVENT_FILTER,
    _SC_TRACE_INHERIT,
    _SC_TRACE_LOG,
    _SC_LEVEL1_ICACHE_SIZE,
    _SC_LEVEL1_ICACHE_ASSOC,
    _SC_LEVEL1_ICACHE_LINESIZE,
    _SC_LEVEL1_DCACHE_SIZE,
    _SC_LEVEL1_DCACHE_ASSOC,
    _SC_LEVEL1_DCACHE_LINESIZE,
    _SC_LEVEL2_CACHE_SIZE,
    _SC_LEVEL2_CACHE_ASSOC,
    _SC_LEVEL2_CACHE_LINESIZE,
    _SC_LEVEL3_CACHE_SIZE,
    _SC_LEVEL3_CACHE_ASSOC,
    _SC_LEVEL3_CACHE_LINESIZE,
    _SC_LEVEL4_CACHE_SIZE,
    _SC_LEVEL4_CACHE_ASSOC,
    _SC_LEVEL4_CACHE_LINESIZE,
    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,
    _SC_RAW_SOCKETS,
    _SC_V7_ILP32_OFF32,
    _SC_V7_ILP32_OFFBIG,
    _SC_V7_LP64_OFF64,
    _SC_V7_LPBIG_OFFBIG,
    _SC_SS_REPL_MAX,
    _SC_TRACE_EVENT_NAME_MAX,
    _SC_TRACE_NAME_MAX,
    _SC_TRACE_SYS_MAX,
    _SC_TRACE_USER_EVENT_MAX,
    _SC_XOPEN_STREAMS,
    _SC_THREAD_ROBUST_PRIO_INHERIT,
    _SC_THREAD_ROBUST_PRIO_PROTECT,
    _SC_MINSIGSTKSZ,
    _SC_SIGSTKSZ
  };
enum
  {
    _CS_PATH,
    _CS_V6_WIDTH_RESTRICTED_ENVS,
    _CS_GNU_LIBC_VERSION,
    _CS_GNU_LIBPTHREAD_VERSION,
    _CS_V5_WIDTH_RESTRICTED_ENVS,
    _CS_V7_WIDTH_RESTRICTED_ENVS,
    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS,
    _CS_LFS_LIBS,
    _CS_LFS_LINTFLAGS,
    _CS_LFS64_CFLAGS,
    _CS_LFS64_LDFLAGS,
    _CS_LFS64_LIBS,
    _CS_LFS64_LINTFLAGS,
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS,
    _CS_XBS5_ILP32_OFF32_LIBS,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LIBS,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
    _CS_XBS5_LP64_OFF64_CFLAGS,
    _CS_XBS5_LP64_OFF64_LDFLAGS,
    _CS_XBS5_LP64_OFF64_LIBS,
    _CS_XBS5_LP64_OFF64_LINTFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LIBS,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LIBS,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LIBS,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LIBS,
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V7_LP64_OFF64_CFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LIBS,
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
    _CS_V6_ENV,
    _CS_V7_ENV
  };
extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));
extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));
extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));
extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));
extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));
extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));
extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));
extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 2, 1)));
extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__));
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ , __leaf__));
extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ , __leaf__));
extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern __pid_t fork (void) __attribute__ ((__nothrow__));
extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));
extern __pid_t _Fork (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));
extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));
extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));
extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) __attribute__ ((__warn_unused_result__));
extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__access__ (__write_only__, 3, 4)));
extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));
extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));
extern char *getlogin (void);
extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));



extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 1, 2)));
extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__read_only__, 1, 2)));
extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));
extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));
extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));
extern int fsync (int __fd);
extern int syncfs (int __fd) __attribute__ ((__nothrow__ , __leaf__));
extern long int gethostid (void);
extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));
extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int lockf (int __fd, int __cmd, __off_t __len) __attribute__ ((__warn_unused_result__));
extern int lockf64 (int __fd, int __cmd, __off64_t __len) __attribute__ ((__warn_unused_result__));
ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
    int __outfd, __off64_t *__poutoff,
    size_t __length, unsigned int __flags);
extern int fdatasync (int __fildes);
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)))
    __attribute__ ((__access__ (__read_only__, 1, 3)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
int getentropy (void *__buffer, size_t __length) __attribute__ ((__warn_unused_result__))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int close_range (unsigned int __fd, unsigned int __max_fd,
   int __flags) __attribute__ ((__nothrow__ , __leaf__));
extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
      size_t __buflen)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __read_alias (int __fd, void *__buf, size_t __nbytes) __asm__ ("" "read")
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __read_chk_warn (int __fd, void *__buf, size_t __nbytes, size_t __buflen) __asm__ ("" "__read_chk")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("read called with bigger length than size of " "the destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
read (int __fd, void *__buf, size_t __nbytes)
{
  return ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && (((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __read_alias (__fd, __buf, __nbytes) : ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && !(((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __read_chk_warn (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0)) : __read_chk (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0))));
}
extern ssize_t __pread_chk (int __fd, void *__buf, size_t __nbytes,
       __off_t __offset, size_t __bufsize)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __pread64_chk (int __fd, void *__buf, size_t __nbytes,
         __off64_t __offset, size_t __bufsize)
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __pread_alias (int __fd, void *__buf, size_t __nbytes, __off_t __offset) __asm__ ("" "pread")
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __pread64_alias (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __pread_chk_warn (int __fd, void *__buf, size_t __nbytes, __off_t __offset, size_t __bufsize) __asm__ ("" "__pread_chk")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread called with bigger length than size of " "the destination buffer")));
extern ssize_t __pread64_chk_warn (int __fd, void *__buf, size_t __nbytes, __off64_t __offset, size_t __bufsize) __asm__ ("" "__pread64_chk")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread64 called with bigger length than size of " "the destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread (int __fd, void *__buf, size_t __nbytes, __off_t __offset)
{
  return ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && (((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread_alias (__fd, __buf, __nbytes, __offset) : ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && !(((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread_chk_warn (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0)) : __pread_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0))));
}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread64 (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
{
  return ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && (((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread64_alias (__fd, __buf, __nbytes, __offset) : ((((__typeof (__nbytes)) 0 < (__typeof (__nbytes)) -1 || (__builtin_constant_p (__nbytes) && (__nbytes) > 0)) && __builtin_constant_p ((((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) && !(((long unsigned int) (__nbytes)) <= (__builtin_object_size (__buf, 0)) / (sizeof (char)))) ? __pread64_chk_warn (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0)) : __pread64_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0))));
}
extern ssize_t __readlink_chk (const char *__restrict __path,
          char *__restrict __buf, size_t __len,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __readlink_alias (const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlink") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern ssize_t __readlink_chk_warn (const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlink_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlink called with bigger length " "than size of destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlink (const char *__restrict __path, char *__restrict __buf, size_t __len)
{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __readlink_alias (__path, __buf, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __readlink_chk_warn (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1)) : __readlink_chk (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1))));
}
extern ssize_t __readlinkat_chk (int __fd, const char *__restrict __path,
     char *__restrict __buf, size_t __len,
     size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 3, 4)));
extern ssize_t __readlinkat_alias (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlinkat") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 3, 4)));
extern ssize_t __readlinkat_chk_warn (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlinkat_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlinkat called with bigger " "length than size of destination " "buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlinkat (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len)
{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __readlinkat_alias (__fd, __path, __buf, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __readlinkat_chk_warn (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1)) : __readlinkat_chk (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1))));
}
extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__getcwd_alias (char *__buf, size_t __size) __asm__ ("" "getcwd") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__getcwd_chk_warn (char *__buf, size_t __size, size_t __buflen) __asm__ ("" "__getcwd_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getcwd caller with bigger length than size of " "destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getcwd (char *__buf, size_t __size)
{
  return ((((__typeof (__size)) 0 < (__typeof (__size)) -1 || (__builtin_constant_p (__size) && (__size) > 0)) && __builtin_constant_p ((((long unsigned int) (__size)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__size)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getcwd_alias (__buf, __size) : ((((__typeof (__size)) 0 < (__typeof (__size)) -1 || (__builtin_constant_p (__size) && (__size) > 0)) && __builtin_constant_p ((((long unsigned int) (__size)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__size)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getcwd_chk_warn (__buf, __size, __builtin_object_size (__buf, 2 > 1)) : __getcwd_chk (__buf, __size, __builtin_object_size (__buf, 2 > 1))));
}
extern char *__getwd_chk (char *__buf, size_t buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *__getwd_warn (char *__buf) __asm__ ("" "getwd") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use getcwd instead, as getwd " "doesn't specify buffer size")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getwd (char *__buf)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    return __getwd_chk (__buf, __builtin_object_size (__buf, 2 > 1));
  return __getwd_warn (__buf);
}
extern size_t __confstr_chk (int __name, char *__buf, size_t __len,
        size_t __buflen) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 2, 3)));
extern size_t __confstr_alias (int __name, char *__buf, size_t __len) __asm__ ("" "confstr") __attribute__ ((__nothrow__ , __leaf__))
   __attribute__ ((__access__ (__write_only__, 2, 3)));
extern size_t __confstr_chk_warn (int __name, char *__buf, size_t __len, size_t __buflen) __asm__ ("" "__confstr_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__((__warning__ ("confstr called with bigger length than size of destination " "buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) confstr (int __name, char *__buf, size_t __len)
{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __confstr_alias (__name, __buf, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __confstr_chk_warn (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1)) : __confstr_chk (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1))));
}
extern int __getgroups_chk (int __size, __gid_t __list[], size_t __listlen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 1)));
extern int __getgroups_alias (int __size, __gid_t __list[]) __asm__ ("" "getgroups") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 2, 1)));
extern int __getgroups_chk_warn (int __size, __gid_t __list[], size_t __listlen) __asm__ ("" "__getgroups_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getgroups called with bigger group count than what " "can fit into destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getgroups (int __size, __gid_t __list[])
{
  return ((((__typeof (__size)) 0 < (__typeof (__size)) -1 || (__builtin_constant_p (__size) && (__size) > 0)) && __builtin_constant_p ((((long unsigned int) (__size)) <= (__builtin_object_size (__list, 2 > 1)) / (sizeof (__gid_t)))) && (((long unsigned int) (__size)) <= (__builtin_object_size (__list, 2 > 1)) / (sizeof (__gid_t)))) ? __getgroups_alias (__size, __list) : ((((__typeof (__size)) 0 < (__typeof (__size)) -1 || (__builtin_constant_p (__size) && (__size) > 0)) && __builtin_constant_p ((((long unsigned int) (__size)) <= (__builtin_object_size (__list, 2 > 1)) / (sizeof (__gid_t)))) && !(((long unsigned int) (__size)) <= (__builtin_object_size (__list, 2 > 1)) / (sizeof (__gid_t)))) ? __getgroups_chk_warn (__size, __list, __builtin_object_size (__list, 2 > 1)) : __getgroups_chk (__size, __list, __builtin_object_size (__list, 2 > 1))));
}
extern int __ttyname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)))
   __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int __ttyname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ttyname_r") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ttyname_r_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ttyname_r called with bigger buflen than " "size of destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ttyname_r (int __fd, char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ttyname_r_alias (__fd, __buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ttyname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __ttyname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1))));
}
extern int __getlogin_r_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __getlogin_r_alias (char *__buf, size_t __buflen) __asm__ ("" "getlogin_r") __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getlogin_r_chk")
     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("getlogin_r called with bigger buflen than " "size of destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
getlogin_r (char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getlogin_r_alias (__buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getlogin_r_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __getlogin_r_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1))));
}
extern int __gethostname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __gethostname_alias (char *__buf, size_t __buflen) __asm__ ("" "gethostname") __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __gethostname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__gethostname_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("gethostname called with bigger buflen than " "size of destination buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) gethostname (char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __gethostname_alias (__buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __gethostname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __gethostname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1))));
}
extern int __getdomainname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __getdomainname_alias (char *__buf, size_t __buflen) __asm__ ("" "getdomainname") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __getdomainname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getdomainname_chk") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getdomainname called with bigger " "buflen than size of destination " "buffer")));
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getdomainname (char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getdomainname_alias (__buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __getdomainname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __getdomainname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1))));
}
extern __pid_t gettid (void) __attribute__ ((__nothrow__ , __leaf__));


typedef float float_t;
typedef double double_t;
enum
  {
    FP_INT_UPWARD =
      0,
    FP_INT_DOWNWARD =
      1,
    FP_INT_TOWARDZERO =
      2,
    FP_INT_TONEARESTFROMZERO =
      3,
    FP_INT_TONEAREST =
      4,
  };
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignaling (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
 extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ , __leaf__));
 extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern double exp10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp10 (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
 extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));
 extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
 extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));
extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));
extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double nextdown (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextdown (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double nextup (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextup (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogb (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));
extern double roundeven (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __roundeven (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern int canonicalize (double *__cx, const double *__x) __attribute__ ((__nothrow__ , __leaf__));
extern double fmaxmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaxmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fminmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fmaximum (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaximum (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fminimum (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminimum (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fmaximum_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaximum_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fminimum_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminimum_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fmaximum_mag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaximum_mag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fminimum_mag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminimum_mag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fmaximum_mag_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaximum_mag_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fminimum_mag_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminimum_mag_num (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int totalorder (const double *__x, const double *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermag (const double *__x, const double *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern double getpayload (const double *__x) __attribute__ ((__nothrow__ , __leaf__)); extern double __getpayload (const double *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayload (double *__x, double __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsig (double *__x, double __payload) __attribute__ ((__nothrow__ , __leaf__));
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignalingf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
 extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ , __leaf__));
 extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern float exp10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp10f (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
 extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));
 extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
 extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float nextdownf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextdownf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float nextupf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextupf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));
extern float roundevenf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundevenf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern int canonicalizef (float *__cx, const float *__x) __attribute__ ((__nothrow__ , __leaf__));
extern float fmaxmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fminmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fmaximumf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaximumf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fminimumf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminimumf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fmaximum_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaximum_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fminimum_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminimum_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fmaximum_magf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaximum_magf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fminimum_magf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminimum_magf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fmaximum_mag_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaximum_mag_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fminimum_mag_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminimum_mag_numf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int totalorderf (const float *__x, const float *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf (const float *__x, const float *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern float getpayloadf (const float *__x) __attribute__ ((__nothrow__ , __leaf__)); extern float __getpayloadf (const float *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf (float *__x, float __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf (float *__x, float __payload) __attribute__ ((__nothrow__ , __leaf__));
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
 extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ , __leaf__));
 extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern long double exp10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
 extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
 extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
 extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double nextdownl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextdownl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double nextupl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextupl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));
extern long double roundevenl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundevenl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern int canonicalizel (long double *__cx, const long double *__x) __attribute__ ((__nothrow__ , __leaf__));
extern long double fmaxmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fminmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fmaximuml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaximuml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fminimuml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminimuml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fmaximum_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaximum_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fminimum_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminimum_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fmaximum_magl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaximum_magl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fminimum_magl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminimum_magl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fmaximum_mag_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaximum_mag_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fminimum_mag_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminimum_mag_numl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int totalorderl (const long double *__x, const long double *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagl (const long double *__x, const long double *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern long double getpayloadl (const long double *__x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __getpayloadl (const long double *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadl (long double *__x, long double __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigl (long double *__x, long double __payload) __attribute__ ((__nothrow__ , __leaf__));
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 acosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __acosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 asinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __asinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 atanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __atanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 atan2f32 (_Float32 __y, _Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __atan2f32 (_Float32 __y, _Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 cosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __cosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 sinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __sinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 tanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __tanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 coshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __coshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 sinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __sinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 tanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __tanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 acoshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __acoshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 asinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __asinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 atanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __atanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 expf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __expf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 frexpf32 (_Float32 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __frexpf32 (_Float32 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 ldexpf32 (_Float32 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __ldexpf32 (_Float32 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 logf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __logf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 log10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __log10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 modff32 (_Float32 __x, _Float32 *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __modff32 (_Float32 __x, _Float32 *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern _Float32 exp10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __exp10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 expm1f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __expm1f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 log1pf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __log1pf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 logbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __logbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 exp2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __exp2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 log2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __log2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 powf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __powf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 sqrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __sqrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 hypotf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __hypotf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 cbrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __cbrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 ceilf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __ceilf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fabsf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fabsf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 floorf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __floorf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fmodf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __fmodf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 copysignf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __copysignf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 nanf32 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nanf32 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 j0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __j0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 j1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __j1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 jnf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __jnf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 y0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __y0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 y1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __y1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 ynf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __ynf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 erff32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __erff32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 erfcf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __erfcf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 lgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __lgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 tgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __tgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 lgammaf32_r (_Float32, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __lgammaf32_r (_Float32, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 rintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __rintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 nextafterf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nextafterf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 nextdownf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nextdownf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 nextupf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nextupf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 remainderf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __remainderf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 scalbnf32 (_Float32 __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __scalbnf32 (_Float32 __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 scalblnf32 (_Float32 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __scalblnf32 (_Float32 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 nearbyintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nearbyintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 roundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __roundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 truncf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __truncf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 remquof32 (_Float32 __x, _Float32 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __remquof32 (_Float32 __x, _Float32 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 fdimf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __fdimf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 fmaxf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaxf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fminf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 roundevenf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __roundevenf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern int canonicalizef32 (_Float32 *__cx, const _Float32 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 fmaxmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaxmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fminmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fmaximumf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaximumf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fminimumf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminimumf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fmaximum_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaximum_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fminimum_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminimum_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fmaximum_magf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaximum_magf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fminimum_magf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminimum_magf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fmaximum_mag_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaximum_mag_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fminimum_mag_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminimum_mag_numf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int totalorderf32 (const _Float32 *__x, const _Float32 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf32 (const _Float32 *__x, const _Float32 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float32 getpayloadf32 (const _Float32 *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __getpayloadf32 (const _Float32 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf32 (_Float32 *__x, _Float32 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf32 (_Float32 *__x, _Float32 __payload) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 acosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __acosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 asinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __asinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 atanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __atanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 atan2f64 (_Float64 __y, _Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __atan2f64 (_Float64 __y, _Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 cosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __cosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 sinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __sinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 tanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __tanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 coshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __coshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 sinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __sinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 tanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __tanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 acoshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __acoshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 asinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __asinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 atanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __atanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 expf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __expf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 frexpf64 (_Float64 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __frexpf64 (_Float64 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 ldexpf64 (_Float64 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __ldexpf64 (_Float64 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 logf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __logf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 log10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __log10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 modff64 (_Float64 __x, _Float64 *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __modff64 (_Float64 __x, _Float64 *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern _Float64 exp10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __exp10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 expm1f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __expm1f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 log1pf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __log1pf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 logbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __logbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 exp2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __exp2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 log2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __log2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 powf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __powf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 sqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __sqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 hypotf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __hypotf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 cbrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __cbrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 ceilf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __ceilf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fabsf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fabsf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 floorf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __floorf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fmodf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __fmodf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 copysignf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __copysignf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 nanf64 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nanf64 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 j0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __j0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 j1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __j1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 jnf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __jnf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 y0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __y0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 y1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __y1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 ynf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __ynf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 erff64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __erff64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 erfcf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __erfcf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 lgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __lgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 tgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __tgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 lgammaf64_r (_Float64, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __lgammaf64_r (_Float64, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 rintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __rintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 nextafterf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nextafterf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 nextdownf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nextdownf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 nextupf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nextupf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 remainderf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __remainderf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 scalbnf64 (_Float64 __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __scalbnf64 (_Float64 __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 scalblnf64 (_Float64 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __scalblnf64 (_Float64 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 nearbyintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nearbyintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 roundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __roundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 truncf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __truncf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 remquof64 (_Float64 __x, _Float64 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __remquof64 (_Float64 __x, _Float64 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 fdimf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __fdimf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 fmaxf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaxf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fminf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 roundevenf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __roundevenf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern int canonicalizef64 (_Float64 *__cx, const _Float64 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 fmaxmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaxmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fminmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fmaximumf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaximumf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fminimumf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminimumf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fmaximum_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaximum_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fminimum_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminimum_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fmaximum_magf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaximum_magf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fminimum_magf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminimum_magf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fmaximum_mag_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaximum_mag_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fminimum_mag_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminimum_mag_numf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int totalorderf64 (const _Float64 *__x, const _Float64 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf64 (const _Float64 *__x, const _Float64 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float64 getpayloadf64 (const _Float64 *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __getpayloadf64 (const _Float64 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf64 (_Float64 *__x, _Float64 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf64 (_Float64 *__x, _Float64 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int __fpclassifyf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __signbitf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __isinff128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __finitef128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __isnanf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));
extern int __iseqsigf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignalingf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
 extern _Float128 acosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __acosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 asinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __asinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 atanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __atanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 atan2f128 (_Float128 __y, _Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __atan2f128 (_Float128 __y, _Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 cosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __cosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 sinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __sinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 tanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __tanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 coshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __coshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 sinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __sinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 tanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __tanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf128 (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf128 (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 acoshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __acoshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 asinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __asinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 atanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __atanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 expf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __expf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 frexpf128 (_Float128 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __frexpf128 (_Float128 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 ldexpf128 (_Float128 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __ldexpf128 (_Float128 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 logf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __logf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 log10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __log10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 modff128 (_Float128 __x, _Float128 *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __modff128 (_Float128 __x, _Float128 *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern _Float128 exp10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __exp10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 expm1f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __expm1f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 log1pf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __log1pf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 logbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __logbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 exp2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __exp2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 log2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __log2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 powf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __powf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 hypotf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __hypotf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 cbrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __cbrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 ceilf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __ceilf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fabsf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fabsf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 floorf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __floorf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fmodf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __fmodf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 copysignf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __copysignf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 nanf128 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nanf128 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 j0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __j0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 j1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __j1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 jnf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __jnf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 y0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __y0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 y1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __y1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 ynf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __ynf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 erff128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __erff128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 erfcf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __erfcf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 lgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __lgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 tgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __tgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 lgammaf128_r (_Float128, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __lgammaf128_r (_Float128, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 rintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __rintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 nextafterf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nextafterf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 nextdownf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nextdownf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 nextupf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nextupf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 remainderf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __remainderf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 scalbnf128 (_Float128 __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __scalbnf128 (_Float128 __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 scalblnf128 (_Float128 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __scalblnf128 (_Float128 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 nearbyintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nearbyintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 roundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __roundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 truncf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __truncf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 remquof128 (_Float128 __x, _Float128 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __remquof128 (_Float128 __x, _Float128 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 fdimf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __fdimf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 fmaxf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaxf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fminf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 roundevenf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __roundevenf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern int canonicalizef128 (_Float128 *__cx, const _Float128 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 fmaxmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaxmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fminmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fmaximumf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaximumf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fminimumf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminimumf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fmaximum_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaximum_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fminimum_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminimum_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fmaximum_magf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaximum_magf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fminimum_magf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminimum_magf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fmaximum_mag_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaximum_mag_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fminimum_mag_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminimum_mag_numf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int totalorderf128 (const _Float128 *__x, const _Float128 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf128 (const _Float128 *__x, const _Float128 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float128 getpayloadf128 (const _Float128 *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __getpayloadf128 (const _Float128 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf128 (_Float128 *__x, _Float128 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf128 (_Float128 *__x, _Float128 __payload) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x acosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __acosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x asinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __asinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x atanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __atanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x atan2f32x (_Float32x __y, _Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __atan2f32x (_Float32x __y, _Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x cosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __cosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x sinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __sinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x tanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __tanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x coshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __coshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x sinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __sinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x tanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __tanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x acoshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __acoshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x asinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __asinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x atanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __atanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x expf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __expf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x frexpf32x (_Float32x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __frexpf32x (_Float32x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x ldexpf32x (_Float32x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __ldexpf32x (_Float32x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x logf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __logf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x log10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __log10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x modff32x (_Float32x __x, _Float32x *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __modff32x (_Float32x __x, _Float32x *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern _Float32x exp10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __exp10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x expm1f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __expm1f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x log1pf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __log1pf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x logbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __logbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x exp2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __exp2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x log2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __log2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x powf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __powf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x sqrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __sqrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x hypotf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __hypotf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x cbrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __cbrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x ceilf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __ceilf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fabsf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fabsf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x floorf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __floorf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fmodf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __fmodf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x copysignf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __copysignf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x nanf32x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nanf32x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x j0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __j0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x j1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __j1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x jnf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __jnf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x y0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __y0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x y1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __y1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x ynf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __ynf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x erff32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __erff32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x erfcf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __erfcf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x lgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __lgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x tgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __tgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x lgammaf32x_r (_Float32x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __lgammaf32x_r (_Float32x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x rintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __rintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x nextafterf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nextafterf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x nextdownf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nextdownf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x nextupf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nextupf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x remainderf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __remainderf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x scalbnf32x (_Float32x __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __scalbnf32x (_Float32x __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x scalblnf32x (_Float32x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __scalblnf32x (_Float32x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x nearbyintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nearbyintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x roundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __roundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x truncf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __truncf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x remquof32x (_Float32x __x, _Float32x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __remquof32x (_Float32x __x, _Float32x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x fdimf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __fdimf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x fmaxf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaxf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fminf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x roundevenf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __roundevenf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern int canonicalizef32x (_Float32x *__cx, const _Float32x *__x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x fmaxmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaxmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fminmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fmaximumf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaximumf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fminimumf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminimumf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fmaximum_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaximum_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fminimum_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminimum_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fmaximum_magf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaximum_magf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fminimum_magf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminimum_magf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fmaximum_mag_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaximum_mag_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fminimum_mag_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminimum_mag_numf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int totalorderf32x (const _Float32x *__x, const _Float32x *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf32x (const _Float32x *__x, const _Float32x *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float32x getpayloadf32x (const _Float32x *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __getpayloadf32x (const _Float32x *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf32x (_Float32x *__x, _Float32x __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf32x (_Float32x *__x, _Float32x __payload) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x acosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __acosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x asinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __asinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x atanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __atanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x atan2f64x (_Float64x __y, _Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __atan2f64x (_Float64x __y, _Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x cosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __cosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x sinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __sinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x tanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __tanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x coshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __coshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x sinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __sinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x tanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __tanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x acoshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __acoshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x asinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __asinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x atanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __atanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x expf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __expf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x frexpf64x (_Float64x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __frexpf64x (_Float64x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x ldexpf64x (_Float64x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __ldexpf64x (_Float64x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x logf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __logf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x log10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __log10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x modff64x (_Float64x __x, _Float64x *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __modff64x (_Float64x __x, _Float64x *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern _Float64x exp10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __exp10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x expm1f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __expm1f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x log1pf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __log1pf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x logbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __logbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x exp2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __exp2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x log2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __log2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x powf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __powf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x hypotf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __hypotf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x cbrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __cbrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x ceilf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __ceilf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fabsf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fabsf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x floorf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __floorf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fmodf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __fmodf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x copysignf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __copysignf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x nanf64x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nanf64x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x j0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __j0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x j1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __j1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x jnf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __jnf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x y0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __y0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x y1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __y1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x ynf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __ynf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x erff64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __erff64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x erfcf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __erfcf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x lgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __lgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x tgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __tgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x lgammaf64x_r (_Float64x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __lgammaf64x_r (_Float64x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x rintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __rintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x nextafterf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nextafterf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x nextdownf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nextdownf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x nextupf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nextupf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x remainderf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __remainderf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x scalbnf64x (_Float64x __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __scalbnf64x (_Float64x __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x scalblnf64x (_Float64x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __scalblnf64x (_Float64x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x nearbyintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nearbyintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x roundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __roundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x truncf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __truncf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x remquof64x (_Float64x __x, _Float64x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __remquof64x (_Float64x __x, _Float64x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x fdimf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __fdimf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x fmaxf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaxf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fminf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x roundevenf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __roundevenf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern int canonicalizef64x (_Float64x *__cx, const _Float64x *__x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x fmaxmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaxmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fminmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fmaximumf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaximumf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fminimumf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminimumf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fmaximum_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaximum_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fminimum_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminimum_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fmaximum_magf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaximum_magf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fminimum_magf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminimum_magf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fmaximum_mag_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaximum_mag_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fminimum_mag_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminimum_mag_numf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int totalorderf64x (const _Float64x *__x, const _Float64x *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf64x (const _Float64x *__x, const _Float64x *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float64x getpayloadf64x (const _Float64x *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __getpayloadf64x (const _Float64x *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf64x (_Float64x *__x, _Float64x __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf64x (_Float64x *__x, _Float64x __payload) __attribute__ ((__nothrow__ , __leaf__));
extern float fadd (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fdiv (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float ffma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));
extern float fmul (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fsqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern float fsub (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float faddl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fdivl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float ffmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));
extern float fmull (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fsqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern float fsubl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double daddl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double ddivl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double dfmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));
extern double dmull (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double dsqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double dsubl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32addf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32divf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32mulf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32sqrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32subf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32addf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32divf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32mulf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32sqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32subf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32addf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32divf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32mulf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32subf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32addf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32divf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32mulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32subf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xaddf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xdivf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xfmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xmulf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xsqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xsubf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xaddf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xdivf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xfmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xmulf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xsqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xsubf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xaddf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xdivf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xfmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xmulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xsqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xsubf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64addf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64divf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64mulf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64subf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64addf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64divf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64mulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64subf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xaddf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xdivf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xfmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xmulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xsqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xsubf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern int signgam;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };
extern int __iscanonicall (long double __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern size_t strlcpy(char *, const char*, size_t);
extern size_t strlcat(char *, const char*, size_t);
extern void setproctitle(const char *fmt, ...);




void *ruby_xmalloc(size_t) __attribute__ ((alloc_size (1)));
void *ruby_xmalloc2(size_t,size_t) __attribute__ ((alloc_size (1,2)));
void *ruby_xcalloc(size_t,size_t) __attribute__ ((alloc_size (1,2)));
void *ruby_xrealloc(void*,size_t) __attribute__ ((alloc_size (2)));
void *ruby_xrealloc2(void*,size_t,size_t) __attribute__ ((alloc_size (2,3)));
void ruby_xfree(void*);




typedef unsigned long VALUE;
typedef unsigned long ID;
typedef char ruby_check_sizeof_int[4 == sizeof(int) ? 1 : -1];
typedef char ruby_check_sizeof_long[8 == sizeof(long) ? 1 : -1];
typedef char ruby_check_sizeof_long_long[8 == sizeof(long long) ? 1 : -1];
typedef char ruby_check_sizeof_voidp[8 == sizeof(void*) ? 1 : -1];

extern long int __sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));

VALUE rb_int2inum(intptr_t);
VALUE rb_uint2inum(uintptr_t);
VALUE rb_ll2inum(long long);
VALUE rb_ull2inum(unsigned long long);
__attribute__ ((__noreturn__)) void rb_out_of_int(long num);
static inline int
rb_long2int_inline(long n)
{
    int i = (int)n;
    if ((long)i != n)
 rb_out_of_int(n);
    return i;
}
static inline long
rb_fix2long(VALUE x)
{
    return ((long)(((long)(x))>>(int)(1)));
}
static inline unsigned long
rb_fix2ulong(VALUE x)
{
    return ((unsigned long)((long)(((long)(x))>>(int)(1))));
}
ID rb_sym2id(VALUE);
VALUE rb_id2sym(ID);
enum ruby_special_consts {
    RUBY_Qfalse = 0x00,
    RUBY_Qtrue = 0x14,
    RUBY_Qnil = 0x08,
    RUBY_Qundef = 0x34,
    RUBY_IMMEDIATE_MASK = 0x07,
    RUBY_FIXNUM_FLAG = 0x01,
    RUBY_FLONUM_MASK = 0x03,
    RUBY_FLONUM_FLAG = 0x02,
    RUBY_SYMBOL_FLAG = 0x0c,
    RUBY_SPECIAL_SHIFT = 8
};
enum ruby_value_type {
    RUBY_T_NONE = 0x00,
    RUBY_T_OBJECT = 0x01,
    RUBY_T_CLASS = 0x02,
    RUBY_T_MODULE = 0x03,
    RUBY_T_FLOAT = 0x04,
    RUBY_T_STRING = 0x05,
    RUBY_T_REGEXP = 0x06,
    RUBY_T_ARRAY = 0x07,
    RUBY_T_HASH = 0x08,
    RUBY_T_STRUCT = 0x09,
    RUBY_T_BIGNUM = 0x0a,
    RUBY_T_FILE = 0x0b,
    RUBY_T_DATA = 0x0c,
    RUBY_T_MATCH = 0x0d,
    RUBY_T_COMPLEX = 0x0e,
    RUBY_T_RATIONAL = 0x0f,
    RUBY_T_NIL = 0x11,
    RUBY_T_TRUE = 0x12,
    RUBY_T_FALSE = 0x13,
    RUBY_T_SYMBOL = 0x14,
    RUBY_T_FIXNUM = 0x15,
    RUBY_T_UNDEF = 0x16,
    RUBY_T_IMEMO = 0x1a,
    RUBY_T_NODE = 0x1b,
    RUBY_T_ICLASS = 0x1c,
    RUBY_T_ZOMBIE = 0x1d,
    RUBY_T_MASK = 0x1f
};
static inline int rb_type(VALUE obj);
void rb_check_type(VALUE,int);
VALUE rb_str_to_str(VALUE);
VALUE rb_string_value(volatile VALUE*);
char *rb_string_value_ptr(volatile VALUE*);
char *rb_string_value_cstr(volatile VALUE*);
void rb_check_safe_obj(VALUE);
void rb_check_safe_str(VALUE) __attribute__((error("rb_check_safe_str() and Check_SafeStr() are obsolete; use SafeStringValue() instead")));
VALUE rb_str_export(VALUE);
VALUE rb_str_export_locale(VALUE);
VALUE rb_get_path(VALUE);
VALUE rb_get_path_no_checksafe(VALUE);
void rb_secure(int);
int rb_safe_level(void);
void rb_set_safe_level(int);
int ruby_safe_level_2_error(void) __attribute__((error("$SAFE=2 to 4 are obsolete")));
int ruby_safe_level_2_warning(void) __attribute__((const,warning("$SAFE=2 to 4 are obsolete")));
void rb_set_safe_level_force(int);
void rb_secure_update(VALUE);
__attribute__ ((__noreturn__)) void rb_insecure_operation(void);
VALUE rb_errinfo(void);
void rb_set_errinfo(VALUE);
long rb_num2long(VALUE);
unsigned long rb_num2ulong(VALUE);
static inline long
rb_num2long_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return ((long)(((long)(x))>>(int)(1)));
    else
 return rb_num2long(x);
}
static inline unsigned long
rb_num2ulong_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return ((unsigned long)((long)(((long)(x))>>(int)(1))));
    else
 return rb_num2ulong(x);
}
long rb_num2int(VALUE);
long rb_fix2int(VALUE);
static inline int
rb_num2int_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return (int)rb_fix2int(x);
    else
 return (int)rb_num2int(x);
}
unsigned long rb_num2uint(VALUE);
unsigned long rb_fix2uint(VALUE);
short rb_num2short(VALUE);
unsigned short rb_num2ushort(VALUE);
short rb_fix2short(VALUE);
unsigned short rb_fix2ushort(VALUE);
static inline short
rb_num2short_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return rb_fix2short(x);
    else
 return rb_num2short(x);
}
long long rb_num2ll(VALUE);
unsigned long long rb_num2ull(VALUE);
static inline long long
rb_num2ll_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return ((long)(((long)(x))>>(int)(1)));
    else
 return rb_num2ll(x);
}
double rb_num2dbl(VALUE);
VALUE rb_uint2big(uintptr_t);
VALUE rb_int2big(intptr_t);
VALUE rb_newobj(void);
VALUE rb_newobj_of(VALUE, VALUE);
VALUE rb_obj_setup(VALUE obj, VALUE klass, VALUE type);
__extension__
enum ruby_fl_type {
    RUBY_FL_WB_PROTECTED = (1<<5),
    RUBY_FL_PROMOTED0 = (1<<5),
    RUBY_FL_PROMOTED1 = (1<<6),
    RUBY_FL_PROMOTED = RUBY_FL_PROMOTED0|RUBY_FL_PROMOTED1,
    RUBY_FL_FINALIZE = (1<<7),
    RUBY_FL_TAINT = (1<<8),
    RUBY_FL_UNTRUSTED = RUBY_FL_TAINT,
    RUBY_FL_EXIVAR = (1<<10),
    RUBY_FL_FREEZE = (1<<11),
    RUBY_FL_USHIFT = 12,
    RUBY_FL_USER0 = (1<<(RUBY_FL_USHIFT+0)),
    RUBY_FL_USER1 = (1<<(RUBY_FL_USHIFT+1)),
    RUBY_FL_USER2 = (1<<(RUBY_FL_USHIFT+2)),
    RUBY_FL_USER3 = (1<<(RUBY_FL_USHIFT+3)),
    RUBY_FL_USER4 = (1<<(RUBY_FL_USHIFT+4)),
    RUBY_FL_USER5 = (1<<(RUBY_FL_USHIFT+5)),
    RUBY_FL_USER6 = (1<<(RUBY_FL_USHIFT+6)),
    RUBY_FL_USER7 = (1<<(RUBY_FL_USHIFT+7)),
    RUBY_FL_USER8 = (1<<(RUBY_FL_USHIFT+8)),
    RUBY_FL_USER9 = (1<<(RUBY_FL_USHIFT+9)),
    RUBY_FL_USER10 = (1<<(RUBY_FL_USHIFT+10)),
    RUBY_FL_USER11 = (1<<(RUBY_FL_USHIFT+11)),
    RUBY_FL_USER12 = (1<<(RUBY_FL_USHIFT+12)),
    RUBY_FL_USER13 = (1<<(RUBY_FL_USHIFT+13)),
    RUBY_FL_USER14 = (1<<(RUBY_FL_USHIFT+14)),
    RUBY_FL_USER15 = (1<<(RUBY_FL_USHIFT+15)),
    RUBY_FL_USER16 = (1<<(RUBY_FL_USHIFT+16)),
    RUBY_FL_USER17 = (1<<(RUBY_FL_USHIFT+17)),
    RUBY_FL_USER18 = (1<<(RUBY_FL_USHIFT+18)),
    RUBY_FL_USER19 = (1<<(RUBY_FL_USHIFT+19)),
    RUBY_ELTS_SHARED = RUBY_FL_USER2,
    RUBY_FL_DUPPED = (RUBY_T_MASK|RUBY_FL_EXIVAR|RUBY_FL_TAINT),
    RUBY_FL_SINGLETON = RUBY_FL_USER0
};
struct __attribute__((__aligned__(8))) RBasic {
    VALUE flags;
    const VALUE klass;
};
VALUE rb_obj_hide(VALUE obj);
VALUE rb_obj_reveal(VALUE obj, VALUE klass);
enum ruby_robject_flags {
    ROBJECT_EMBED_LEN_MAX = 3,
    ROBJECT_EMBED = RUBY_FL_USER1,
    ROBJECT_ENUM_END
};
struct RObject {
    struct RBasic basic;
    union {
 struct {
     uint32_t numiv;
     VALUE *ivptr;
            void *iv_index_tbl;
 } heap;
 VALUE ary[ROBJECT_EMBED_LEN_MAX];
    } as;
};
enum ruby_rmodule_flags {
    RMODULE_IS_OVERLAID = RUBY_FL_USER2,
    RMODULE_IS_REFINEMENT = RUBY_FL_USER3,
    RMODULE_INCLUDED_INTO_REFINEMENT = RUBY_FL_USER4,
    RMODULE_ENUM_END
};
__attribute__ ((__pure__)) double rb_float_value(VALUE);
VALUE rb_float_new(double);
VALUE rb_float_new_in_heap(double);
enum ruby_rstring_flags {
    RSTRING_NOEMBED = RUBY_FL_USER1,
    RSTRING_EMBED_LEN_MASK = (RUBY_FL_USER2|RUBY_FL_USER3|RUBY_FL_USER4|
         RUBY_FL_USER5|RUBY_FL_USER6),
    RSTRING_EMBED_LEN_SHIFT = (RUBY_FL_USHIFT+2),
    RSTRING_EMBED_LEN_MAX = (int)((sizeof(VALUE)*3)/sizeof(char)-1),
    RSTRING_FSTR = RUBY_FL_USER17,
    RSTRING_ENUM_END
};
struct RString {
    struct RBasic basic;
    union {
 struct {
     long len;
     char *ptr;
     union {
  long capa;
  VALUE shared;
     } aux;
 } heap;
 char ary[RSTRING_EMBED_LEN_MAX + 1];
    } as;
};
enum ruby_rarray_flags {
    RARRAY_EMBED_LEN_MAX = 3,
    RARRAY_EMBED_FLAG = RUBY_FL_USER1,
    RARRAY_EMBED_LEN_MASK = (RUBY_FL_USER4|RUBY_FL_USER3),
    RARRAY_EMBED_LEN_SHIFT = (RUBY_FL_USHIFT+3),
    RARRAY_TRANSIENT_FLAG = RUBY_FL_USER13,
    RARRAY_ENUM_END
};
struct RArray {
    struct RBasic basic;
    union {
 struct {
     long len;
     union {
  long capa;
  VALUE shared;
     } aux;
     const VALUE *ptr;
 } heap;
 const VALUE ary[RARRAY_EMBED_LEN_MAX];
    } as;
};
struct RRegexp {
    struct RBasic basic;
    struct re_pattern_buffer *ptr;
    const VALUE src;
    unsigned long usecnt;
};
size_t rb_hash_size_num(VALUE hash);
struct RFile {
    struct RBasic basic;
    struct rb_io_t *fptr;
};
struct RData {
    struct RBasic basic;
    void (*dmark)(void*);
    void (*dfree)(void*);
    void *data;
};
typedef struct rb_data_type_struct rb_data_type_t;
struct rb_data_type_struct {
    const char *wrap_struct_name;
    struct {
 void (*dmark)(void*);
 void (*dfree)(void*);
 size_t (*dsize)(const void *);
 void *reserved[2];
    } function;
    const rb_data_type_t *parent;
    void *data;
    VALUE flags;
};
struct RTypedData {
    struct RBasic basic;
    const rb_data_type_t *type;
    VALUE typed_flag;
    void *data;
};
typedef void (*RUBY_DATA_FUNC)(void*);
VALUE rb_data_object_wrap(VALUE,void*,RUBY_DATA_FUNC,RUBY_DATA_FUNC);
VALUE rb_data_object_zalloc(VALUE,size_t,RUBY_DATA_FUNC,RUBY_DATA_FUNC);
VALUE rb_data_typed_object_wrap(VALUE klass, void *datap, const rb_data_type_t *);
VALUE rb_data_typed_object_zalloc(VALUE klass, size_t size, const rb_data_type_t *type);
int rb_typeddata_inherited_p(const rb_data_type_t *child, const rb_data_type_t *parent);
int rb_typeddata_is_kind_of(VALUE, const rb_data_type_t *);
void *rb_check_typeddata(VALUE, const rb_data_type_t *);
int rb_big_sign(VALUE);
void rb_freeze_singleton_class(VALUE klass);
static inline void
rb_obj_freeze_inline(VALUE x)
{
    if ((!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) != RUBY_T_NODE)) {
 (void)(((struct RBasic*)(x))->flags |= RUBY_FL_FREEZE);
 if ((((struct RBasic*)(x))->klass) && !(((struct RBasic*)(x))->flags & RUBY_FL_SINGLETON)) {
     rb_freeze_singleton_class(x);
 }
    }
}
static inline VALUE rb_data_object_wrap_warning(VALUE,void*,RUBY_DATA_FUNC,RUBY_DATA_FUNC) __attribute__((warning("untyped Data is unsafe; use TypedData instead")));
static inline void *rb_data_object_get_warning(VALUE) __attribute__((warning("untyped Data is unsafe; use TypedData instead")));
static inline VALUE
rb_data_object_wrap_warning(VALUE klass, void *ptr, RUBY_DATA_FUNC mark, RUBY_DATA_FUNC free)
{
    return rb_data_object_wrap(klass, ptr, mark, free);
}
static inline void *
rb_data_object_get(VALUE obj)
{
    rb_check_type((VALUE)(obj),(RUBY_T_DATA));
    return ((struct RData *)obj)->data;
}
static inline void *
rb_data_object_get_warning(VALUE obj)
{
    return rb_data_object_get(obj);
}
static inline VALUE
rb_data_object_make(VALUE klass, RUBY_DATA_FUNC mark_func, RUBY_DATA_FUNC free_func, void **datap, size_t size)
{
    VALUE result = rb_data_object_zalloc((klass), (size), (RUBY_DATA_FUNC)(mark_func), (RUBY_DATA_FUNC)(free_func)); (void)((*datap) = (void *)(((struct RData*)(result))->data));;
    return result;
}
static inline VALUE
rb_data_typed_object_make(VALUE klass, const rb_data_type_t *type, void **datap, size_t size)
{
    VALUE result = rb_data_typed_object_zalloc(klass, size, type); (void)((*datap) = (void *)(((struct RData*)(result))->data));;
    return result;
}
__attribute__ ((__deprecated__("by ""rb_data_object_wrap"))) static inline VALUE rb_data_object_alloc(VALUE,void*,RUBY_DATA_FUNC,RUBY_DATA_FUNC);
static inline VALUE
rb_data_object_alloc(VALUE klass, void *data, RUBY_DATA_FUNC dmark, RUBY_DATA_FUNC dfree)
{
    return rb_data_object_wrap(klass, data, dmark, dfree);
}
__attribute__ ((__deprecated__("by ""rb_data_typed_object_wrap"))) static inline VALUE rb_data_typed_object_alloc(VALUE,void*,const rb_data_type_t*);
static inline VALUE
rb_data_typed_object_alloc(VALUE klass, void *datap, const rb_data_type_t *type)
{
    return rb_data_typed_object_wrap(klass, datap, type);
}
void rb_gc_writebarrier(VALUE a, VALUE b);
void rb_gc_writebarrier_unprotect(VALUE obj);
static inline VALUE
rb_obj_wb_unprotect(VALUE x, const char *filename __attribute__ ((unused)), int line __attribute__ ((unused)))
{
    rb_gc_writebarrier_unprotect(x);
    return x;
}
static inline VALUE
rb_obj_written(VALUE a, VALUE oldv __attribute__ ((unused)), VALUE b, const char *filename __attribute__ ((unused)), int line __attribute__ ((unused)))
{
    if (!(((VALUE)(b) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(b) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 rb_gc_writebarrier(a, b);
    }
    return a;
}
static inline VALUE
rb_obj_write(VALUE a, VALUE *slot, VALUE b, const char *filename __attribute__ ((unused)), int line __attribute__ ((unused)))
{
    *slot = b;
    rb_obj_written(a, ((VALUE)RUBY_Qundef) , b, filename, line);
    return a;
}
static inline int
rb_integer_type_p(VALUE obj)
{
    return ((((int)(long)(obj))&RUBY_FIXNUM_FLAG) ||
     (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) &&
      (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_BIGNUM));
}
static inline VALUE
rb_long2num_inline(long v)
{
    if ((((v) < (0x7fffffffffffffffL>>1)+1) && ((v) >= (((long)(-0x7fffffffffffffffL - 1L))>>(int)(1)))))
 return (((VALUE)(v))<<1 | RUBY_FIXNUM_FLAG);
    else
 return rb_int2big(v);
}
static inline VALUE
rb_ulong2num_inline(unsigned long v)
{
    if (((v) < (0x7fffffffffffffffL>>1)+1))
 return (((VALUE)(v))<<1 | RUBY_FIXNUM_FLAG);
    else
 return rb_uint2big(v);
}
static inline char
rb_num2char_inline(VALUE x)
{
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(x))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((x) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((x) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((x) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((x) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(x)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(x))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) && ((!(((struct RBasic*)(x))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(x))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(x))->as.heap.len)>=1))
 return (!(((struct RBasic*)(x))->flags & RSTRING_NOEMBED) ? ((struct RString*)(x))->as.ary : ((struct RString*)(x))->as.heap.ptr)[0];
    else
 return (char)(rb_num2int_inline(x) & 0xff);
}
void *rb_alloc_tmp_buffer(volatile VALUE *store, long len) __attribute__ ((alloc_size (2)));
void *rb_alloc_tmp_buffer_with_count(volatile VALUE *store, size_t len,size_t count) __attribute__ ((alloc_size (2,3)));
void rb_free_tmp_buffer(volatile VALUE *store);
__attribute__ ((__noreturn__)) void ruby_malloc_size_overflow(size_t, size_t);
static inline int
rb_mul_size_overflow(size_t a, size_t b, size_t max, size_t *c)
{
    __extension__
    unsigned __int128 c2 = (unsigned __int128)a * (unsigned __int128)b;
    if (c2 > max) return 1;
    *c = (size_t)c2;
    return 0;
}
static inline void *
rb_alloc_tmp_buffer2(volatile VALUE *store, long count, size_t elsize)
{
    size_t cnt = (size_t)count;
    if (elsize == sizeof(VALUE)) {
 if ((__builtin_expect(!!(cnt > 0x7fffffffffffffffL / sizeof(VALUE)), 0))) {
     ruby_malloc_size_overflow(cnt, elsize);
 }
    }
    else {
 size_t size, max = 0x7fffffffffffffffL - sizeof(VALUE) + 1;
 if ((__builtin_expect(!!(rb_mul_size_overflow(cnt, elsize, max, &size)), 0))) {
     ruby_malloc_size_overflow(cnt, elsize);
 }
 cnt = (size + sizeof(VALUE) - 1) / sizeof(VALUE);
    }
    return rb_alloc_tmp_buffer_with_count(store, cnt * sizeof(VALUE), cnt);
}
void rb_obj_infect(VALUE victim, VALUE carrier);
typedef int ruby_glob_func(const char*,VALUE, void*);
void rb_glob(const char*,void(*)(const char*,VALUE,void*),VALUE);
int ruby_glob(const char*,int,ruby_glob_func*,VALUE);
int ruby_brace_glob(const char*,int,ruby_glob_func*,VALUE);
VALUE rb_define_class(const char*,VALUE);
VALUE rb_define_module(const char*);
VALUE rb_define_class_under(VALUE, const char*, VALUE);
VALUE rb_define_module_under(VALUE, const char*);
void rb_include_module(VALUE,VALUE);
void rb_extend_object(VALUE,VALUE);
void rb_prepend_module(VALUE,VALUE);
struct rb_global_variable;
typedef VALUE rb_gvar_getter_t(ID id, void *data, struct rb_global_variable *gvar);
typedef void rb_gvar_setter_t(VALUE val, ID id, void *data, struct rb_global_variable *gvar);
typedef void rb_gvar_marker_t(VALUE *var);
VALUE rb_gvar_undef_getter(ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_undef_setter(VALUE val, ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_undef_marker(VALUE *var);
VALUE rb_gvar_val_getter(ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_val_setter(VALUE val, ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_val_marker(VALUE *var);
VALUE rb_gvar_var_getter(ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_var_setter(VALUE val, ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_var_marker(VALUE *var);
__attribute__ ((__noreturn__)) void rb_gvar_readonly_setter(VALUE val, ID id, void *data, struct rb_global_variable *gvar);
void rb_define_variable(const char*,VALUE*);
void rb_define_virtual_variable(const char*,VALUE(*)(),void(*)());
void rb_define_hooked_variable(const char*,VALUE*,VALUE(*)(),void(*)());
void rb_define_readonly_variable(const char*,const VALUE*);
void rb_define_const(VALUE,const char*,VALUE);
void rb_define_global_const(const char*,VALUE);
void rb_define_method(VALUE,const char*,VALUE(*)(),int);
void rb_define_module_function(VALUE,const char*,VALUE(*)(),int);
void rb_define_global_function(const char*,VALUE(*)(),int);
void rb_undef_method(VALUE,const char*);
void rb_define_alias(VALUE,const char*,const char*);
void rb_define_attr(VALUE,const char*,int,int);
void rb_global_variable(VALUE*);
void rb_gc_register_mark_object(VALUE);
void rb_gc_register_address(VALUE*);
void rb_gc_unregister_address(VALUE*);
ID rb_intern(const char*);
ID rb_intern2(const char*, long);
ID rb_intern_str(VALUE str);
const char *rb_id2name(ID);
ID rb_check_id(volatile VALUE *);
ID rb_to_id(VALUE);
VALUE rb_id2str(ID);
VALUE rb_sym2str(VALUE);
VALUE rb_to_symbol(VALUE name);
VALUE rb_check_symbol(volatile VALUE *namep);
__attribute__ ((__error__ (" argument length doesn't match"))) int rb_varargs_bad_length(int,int);
const char *rb_class2name(VALUE);
const char *rb_obj_classname(VALUE);
void rb_p(VALUE);
VALUE rb_eval_string(const char*);
VALUE rb_eval_string_protect(const char*, int*);
VALUE rb_eval_string_wrap(const char*, int*);
VALUE rb_funcall(VALUE, ID, int, ...);
VALUE rb_funcallv(VALUE, ID, int, const VALUE*);
VALUE rb_funcallv_public(VALUE, ID, int, const VALUE*);
VALUE rb_funcall_passing_block(VALUE, ID, int, const VALUE*);
VALUE rb_funcall_with_block(VALUE, ID, int, const VALUE*, VALUE);
int rb_scan_args(int, const VALUE*, const char*, ...);
VALUE rb_call_super(int, const VALUE*);
VALUE rb_current_receiver(void);
int rb_get_kwargs(VALUE keyword_hash, const ID *table, int required, int optional, VALUE *);
VALUE rb_extract_keywords(VALUE *orighash);
VALUE rb_gv_set(const char*, VALUE);
VALUE rb_gv_get(const char*);
VALUE rb_iv_get(VALUE, const char*);
VALUE rb_iv_set(VALUE, const char*, VALUE);
VALUE rb_equal(VALUE,VALUE);
VALUE *rb_ruby_verbose_ptr(void);
VALUE *rb_ruby_debug_ptr(void);
enum rb_io_wait_readwrite {RB_IO_WAIT_READABLE, RB_IO_WAIT_WRITABLE};
__attribute__ ((__noreturn__)) void rb_raise(VALUE, const char*, ...) __attribute__((format(printf, 2, 3)));
__attribute__ ((__noreturn__)) void rb_fatal(const char*, ...) __attribute__((format(printf, 1, 2)));
__attribute__((cold)) __attribute__ ((__noreturn__)) void rb_bug(const char*, ...) __attribute__((format(printf, 1, 2)));
__attribute__ ((__noreturn__)) void rb_bug_errno(const char*, int);
__attribute__ ((__noreturn__)) void rb_sys_fail(const char*);
__attribute__ ((__noreturn__)) void rb_sys_fail_str(VALUE);
__attribute__ ((__noreturn__)) void rb_mod_sys_fail(VALUE, const char*);
__attribute__ ((__noreturn__)) void rb_mod_sys_fail_str(VALUE, VALUE);
__attribute__ ((__noreturn__)) void rb_readwrite_sys_fail(enum rb_io_wait_readwrite, const char*);
__attribute__ ((__noreturn__)) void rb_iter_break(void);
__attribute__ ((__noreturn__)) void rb_iter_break_value(VALUE);
__attribute__ ((__noreturn__)) void rb_exit(int);
__attribute__ ((__noreturn__)) void rb_notimplement(void);
VALUE rb_syserr_new(int, const char *);
VALUE rb_syserr_new_str(int n, VALUE arg);
__attribute__ ((__noreturn__)) void rb_syserr_fail(int, const char*);
__attribute__ ((__noreturn__)) void rb_syserr_fail_str(int, VALUE);
__attribute__ ((__noreturn__)) void rb_mod_syserr_fail(VALUE, int, const char*);
__attribute__ ((__noreturn__)) void rb_mod_syserr_fail_str(VALUE, int, VALUE);
__attribute__ ((__noreturn__)) void rb_readwrite_syserr_fail(enum rb_io_wait_readwrite, int, const char*);
void rb_warning(const char*, ...) __attribute__((format(printf, 1, 2)));
void rb_compile_warning(const char *, int, const char*, ...) __attribute__((format(printf, 3, 4)));
void rb_sys_warning(const char*, ...) __attribute__((format(printf, 1, 2)));
__attribute__((cold)) void rb_warn(const char*, ...) __attribute__((format(printf, 1, 2)));
void rb_compile_warn(const char *, int, const char*, ...) __attribute__((format(printf, 3, 4)));
typedef VALUE rb_block_call_func(VALUE yielded_arg, VALUE callback_arg, int argc, const VALUE *argv, VALUE blockarg);
typedef VALUE (*rb_block_call_func_t)();
VALUE rb_each(VALUE);
VALUE rb_yield(VALUE);
VALUE rb_yield_values(int n, ...);
VALUE rb_yield_values2(int n, const VALUE *argv);
VALUE rb_yield_splat(VALUE);
VALUE rb_yield_block(VALUE, VALUE, int, const VALUE *, VALUE);
int rb_block_given_p(void);
void rb_need_block(void);
VALUE rb_iterate(VALUE(*)(VALUE),VALUE,VALUE(*)(),VALUE);
VALUE rb_block_call(VALUE,ID,int,const VALUE*,rb_block_call_func_t,VALUE);
VALUE rb_rescue(VALUE(*)(),VALUE,VALUE(*)(),VALUE);
VALUE rb_rescue2(VALUE(*)(),VALUE,VALUE(*)(),VALUE,...);
VALUE rb_ensure(VALUE(*)(),VALUE,VALUE(*)(),VALUE);
VALUE rb_catch(const char*,VALUE(*)(),VALUE);
VALUE rb_catch_obj(VALUE,VALUE(*)(),VALUE);
__attribute__ ((__noreturn__)) void rb_throw(const char*,VALUE);
__attribute__ ((__noreturn__)) void rb_throw_obj(VALUE,VALUE);
VALUE rb_require(const char*);
extern VALUE rb_mKernel;
extern VALUE rb_mComparable;
extern VALUE rb_mEnumerable;
extern VALUE rb_mErrno;
extern VALUE rb_mFileTest;
extern VALUE rb_mGC;
extern VALUE rb_mMath;
extern VALUE rb_mProcess;
extern VALUE rb_mWaitReadable;
extern VALUE rb_mWaitWritable;
extern VALUE rb_cBasicObject;
extern VALUE rb_cObject;
extern VALUE rb_cArray;
extern VALUE rb_cBinding;
extern VALUE rb_cClass;
extern VALUE rb_cCont;
extern VALUE rb_cData;
extern VALUE rb_cDir;
extern VALUE rb_cEncoding;
extern VALUE rb_cEnumerator;
extern VALUE rb_cFalseClass;
extern VALUE rb_cFile;
extern VALUE rb_cComplex;
extern VALUE rb_cFloat;
extern VALUE rb_cHash;
extern VALUE rb_cIO;
extern VALUE rb_cInteger;
extern VALUE rb_cMatch;
extern VALUE rb_cMethod;
extern VALUE rb_cModule;
extern VALUE rb_cNameErrorMesg;
extern VALUE rb_cNilClass;
extern VALUE rb_cNumeric;
extern VALUE rb_cProc;
extern VALUE rb_cRandom;
extern VALUE rb_cRange;
extern VALUE rb_cRational;
extern VALUE rb_cRegexp;
extern VALUE rb_cStat;
extern VALUE rb_cString;
extern VALUE rb_cStruct;
extern VALUE rb_cSymbol;
extern VALUE rb_cThread;
extern VALUE rb_cTime;
extern VALUE rb_cTrueClass;
extern VALUE rb_cUnboundMethod;
extern VALUE rb_eException;
extern VALUE rb_eStandardError;
extern VALUE rb_eSystemExit;
extern VALUE rb_eInterrupt;
extern VALUE rb_eSignal;
extern VALUE rb_eFatal;
extern VALUE rb_eArgError;
extern VALUE rb_eEOFError;
extern VALUE rb_eIndexError;
extern VALUE rb_eStopIteration;
extern VALUE rb_eKeyError;
extern VALUE rb_eRangeError;
extern VALUE rb_eIOError;
extern VALUE rb_eRuntimeError;
extern VALUE rb_eFrozenError;
extern VALUE rb_eSecurityError;
extern VALUE rb_eSystemCallError;
extern VALUE rb_eThreadError;
extern VALUE rb_eTypeError;
extern VALUE rb_eZeroDivError;
extern VALUE rb_eNotImpError;
extern VALUE rb_eNoMemError;
extern VALUE rb_eNoMethodError;
extern VALUE rb_eFloatDomainError;
extern VALUE rb_eLocalJumpError;
extern VALUE rb_eSysStackError;
extern VALUE rb_eRegexpError;
extern VALUE rb_eEncodingError;
extern VALUE rb_eEncCompatError;
extern VALUE rb_eScriptError;
extern VALUE rb_eNameError;
extern VALUE rb_eSyntaxError;
extern VALUE rb_eLoadError;
extern VALUE rb_eMathDomainError;
extern VALUE rb_stdin, rb_stdout, rb_stderr;
static inline VALUE
rb_class_of(VALUE obj)
{
    if (((VALUE)(obj) & RUBY_IMMEDIATE_MASK)) {
 if ((((int)(long)(obj))&RUBY_FIXNUM_FLAG)) return rb_cInteger;
 if (((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)) return rb_cFloat;
 if (obj == ((VALUE)RUBY_Qtrue)) return rb_cTrueClass;
 if ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)) return rb_cSymbol;
    }
    else if (!!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 if (obj == ((VALUE)RUBY_Qnil)) return rb_cNilClass;
 if (obj == ((VALUE)RUBY_Qfalse)) return rb_cFalseClass;
    }
    return ((struct RBasic*)(obj))->klass;
}
static inline int
rb_type(VALUE obj)
{
    if (((VALUE)(obj) & RUBY_IMMEDIATE_MASK)) {
 if ((((int)(long)(obj))&RUBY_FIXNUM_FLAG)) return RUBY_T_FIXNUM;
        if (((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)) return RUBY_T_FLOAT;
        if (obj == ((VALUE)RUBY_Qtrue)) return RUBY_T_TRUE;
 if ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)) return RUBY_T_SYMBOL;
 if (obj == ((VALUE)RUBY_Qundef)) return RUBY_T_UNDEF;
    }
    else if (!!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 if (obj == ((VALUE)RUBY_Qnil)) return RUBY_T_NIL;
 if (obj == ((VALUE)RUBY_Qfalse)) return RUBY_T_FALSE;
    }
    return (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK);
}


typedef unsigned long st_data_t;
typedef struct st_table st_table;
typedef st_data_t st_index_t;
typedef int st_compare_func(st_data_t, st_data_t);
typedef st_index_t st_hash_func(st_data_t);
typedef char st_check_for_sizeof_st_index_t[8 == (int)sizeof(st_index_t) ? 1 : -1];
struct st_hash_type {
    int (*compare)( );
    st_index_t (*hash)( );
};
typedef struct st_table_entry st_table_entry;
struct st_table_entry;
struct st_table {
    unsigned char entry_power, bin_power, size_ind;
    unsigned int rebuilds_num;
    const struct st_hash_type *type;
    st_index_t num_entries;
    st_index_t *bins;
    st_index_t entries_start, entries_bound;
    st_table_entry *entries;
};
enum st_retval {ST_CONTINUE, ST_STOP, ST_DELETE, ST_CHECK};
st_table *st_init_table(const struct st_hash_type *);
st_table *st_init_table_with_size(const struct st_hash_type *, st_index_t);
st_table *st_init_numtable(void);
st_table *st_init_numtable_with_size(st_index_t);
st_table *st_init_strtable(void);
st_table *st_init_strtable_with_size(st_index_t);
st_table *st_init_strcasetable(void);
st_table *st_init_strcasetable_with_size(st_index_t);
int st_delete(st_table *, st_data_t *, st_data_t *);
int st_delete_safe(st_table *, st_data_t *, st_data_t *, st_data_t);
int st_shift(st_table *, st_data_t *, st_data_t *);
int st_insert(st_table *, st_data_t, st_data_t);
int st_insert2(st_table *, st_data_t, st_data_t, st_data_t (*)(st_data_t));
int st_lookup(st_table *, st_data_t, st_data_t *);
int st_get_key(st_table *, st_data_t, st_data_t *);
typedef int st_update_callback_func(st_data_t *key, st_data_t *value, st_data_t arg, int existing);
int st_update(st_table *table, st_data_t key, st_update_callback_func *func, st_data_t arg);
int st_foreach(st_table *, int (*)(), st_data_t);
int st_foreach_check(st_table *, int (*)(), st_data_t, st_data_t);
st_index_t st_keys(st_table *table, st_data_t *keys, st_index_t size);
st_index_t st_keys_check(st_table *table, st_data_t *keys, st_index_t size, st_data_t never);
st_index_t st_values(st_table *table, st_data_t *values, st_index_t size);
st_index_t st_values_check(st_table *table, st_data_t *values, st_index_t size, st_data_t never);
void st_add_direct(st_table *, st_data_t, st_data_t);
void st_free_table(st_table *);
void st_cleanup_safe(st_table *, st_data_t);
void st_clear(st_table *);
st_table *st_copy(st_table *);
__attribute__ ((__const__)) int st_numcmp(st_data_t, st_data_t);
__attribute__ ((__const__)) st_index_t st_numhash(st_data_t);
__attribute__ ((__pure__)) int st_locale_insensitive_strcasecmp(const char *s1, const char *s2);
__attribute__ ((__pure__)) int st_locale_insensitive_strncasecmp(const char *s1, const char *s2, size_t n);
__attribute__ ((__pure__)) size_t st_memsize(const st_table *);
__attribute__ ((__pure__)) st_index_t st_hash(const void *ptr, size_t len, st_index_t h);
__attribute__ ((__const__)) st_index_t st_hash_uint32(st_index_t h, uint32_t i);
__attribute__ ((__const__)) st_index_t st_hash_uint(st_index_t h, st_index_t i);
__attribute__ ((__const__)) st_index_t st_hash_end(st_index_t h);
__attribute__ ((__const__)) st_index_t st_hash_start(st_index_t h);
void rb_hash_bulk_insert_into_st_table(long, const VALUE *, VALUE);




void rb_mem_clear(register VALUE*, register long);
VALUE rb_assoc_new(VALUE, VALUE);
VALUE rb_check_array_type(VALUE);
VALUE rb_ary_new(void);
VALUE rb_ary_new_capa(long capa);
VALUE rb_ary_new_from_args(long n, ...);
VALUE rb_ary_new_from_values(long n, const VALUE *elts);
VALUE rb_ary_tmp_new(long);
void rb_ary_free(VALUE);
void rb_ary_modify(VALUE);
VALUE rb_ary_freeze(VALUE);
VALUE rb_ary_shared_with_p(VALUE, VALUE);
VALUE rb_ary_aref(int, const VALUE*, VALUE);
VALUE rb_ary_subseq(VALUE, long, long);
void rb_ary_store(VALUE, long, VALUE);
VALUE rb_ary_dup(VALUE);
VALUE rb_ary_resurrect(VALUE ary);
VALUE rb_ary_to_ary(VALUE);
VALUE rb_ary_to_s(VALUE);
VALUE rb_ary_cat(VALUE, const VALUE *, long);
VALUE rb_ary_push(VALUE, VALUE);
VALUE rb_ary_pop(VALUE);
VALUE rb_ary_shift(VALUE);
VALUE rb_ary_unshift(VALUE, VALUE);
VALUE rb_ary_entry(VALUE, long);
VALUE rb_ary_each(VALUE);
VALUE rb_ary_join(VALUE, VALUE);
VALUE rb_ary_reverse(VALUE);
VALUE rb_ary_rotate(VALUE, long);
VALUE rb_ary_sort(VALUE);
VALUE rb_ary_sort_bang(VALUE);
VALUE rb_ary_delete(VALUE, VALUE);
VALUE rb_ary_delete_at(VALUE, long);
VALUE rb_ary_clear(VALUE);
VALUE rb_ary_plus(VALUE, VALUE);
VALUE rb_ary_concat(VALUE, VALUE);
VALUE rb_ary_assoc(VALUE, VALUE);
VALUE rb_ary_rassoc(VALUE, VALUE);
VALUE rb_ary_includes(VALUE, VALUE);
VALUE rb_ary_cmp(VALUE, VALUE);
VALUE rb_ary_replace(VALUE copy, VALUE orig);
VALUE rb_get_values_at(VALUE, long, int, const VALUE*, VALUE(*)(VALUE,long));
VALUE rb_ary_resize(VALUE ary, long len);
VALUE rb_big_new(size_t, int);
int rb_bigzero_p(VALUE x);
VALUE rb_big_clone(VALUE);
void rb_big_2comp(VALUE);
VALUE rb_big_norm(VALUE);
void rb_big_resize(VALUE big, size_t len);
VALUE rb_cstr_to_inum(const char*, int, int);
VALUE rb_str_to_inum(VALUE, int, int);
VALUE rb_cstr2inum(const char*, int);
VALUE rb_str2inum(VALUE, int);
VALUE rb_big2str(VALUE, int);
long rb_big2long(VALUE);
unsigned long rb_big2ulong(VALUE);
long long rb_big2ll(VALUE);
unsigned long long rb_big2ull(VALUE);
void rb_big_pack(VALUE val, unsigned long *buf, long num_longs);
VALUE rb_big_unpack(unsigned long *buf, long num_longs);
int rb_uv_to_utf8(char[6],unsigned long);
VALUE rb_dbl2big(double);
double rb_big2dbl(VALUE);
VALUE rb_big_cmp(VALUE, VALUE);
VALUE rb_big_eq(VALUE, VALUE);
VALUE rb_big_eql(VALUE, VALUE);
VALUE rb_big_plus(VALUE, VALUE);
VALUE rb_big_minus(VALUE, VALUE);
VALUE rb_big_mul(VALUE, VALUE);
VALUE rb_big_div(VALUE, VALUE);
VALUE rb_big_idiv(VALUE, VALUE);
VALUE rb_big_modulo(VALUE, VALUE);
VALUE rb_big_divmod(VALUE, VALUE);
VALUE rb_big_pow(VALUE, VALUE);
VALUE rb_big_and(VALUE, VALUE);
VALUE rb_big_or(VALUE, VALUE);
VALUE rb_big_xor(VALUE, VALUE);
VALUE rb_big_lshift(VALUE, VALUE);
VALUE rb_big_rshift(VALUE, VALUE);
int rb_integer_pack(VALUE val, void *words, size_t numwords, size_t wordsize, size_t nails, int flags);
VALUE rb_integer_unpack(const void *words, size_t numwords, size_t wordsize, size_t nails, int flags);
size_t rb_absint_size(VALUE val, int *nlz_bits_ret);
size_t rb_absint_numwords(VALUE val, size_t word_numbits, size_t *nlz_bits_ret);
int rb_absint_singlebit_p(VALUE val);
VALUE rb_rational_raw(VALUE, VALUE);
VALUE rb_rational_new(VALUE, VALUE);
VALUE rb_Rational(VALUE, VALUE);
VALUE rb_rational_num(VALUE rat);
VALUE rb_rational_den(VALUE rat);
VALUE rb_flt_rationalize_with_prec(VALUE, VALUE);
VALUE rb_flt_rationalize(VALUE);
VALUE rb_complex_raw(VALUE, VALUE);
VALUE rb_complex_new(VALUE, VALUE);
VALUE rb_complex_new_polar(VALUE abs, VALUE arg);
__attribute__ ((__deprecated__("by ""rb_complex_new_polar"))) VALUE rb_complex_polar(VALUE abs, VALUE arg);
VALUE rb_complex_real(VALUE z);
VALUE rb_complex_imag(VALUE z);
VALUE rb_complex_plus(VALUE x, VALUE y);
VALUE rb_complex_minus(VALUE x, VALUE y);
VALUE rb_complex_mul(VALUE x, VALUE y);
VALUE rb_complex_div(VALUE x, VALUE y);
VALUE rb_complex_uminus(VALUE z);
VALUE rb_complex_conjugate(VALUE z);
VALUE rb_complex_abs(VALUE z);
VALUE rb_complex_arg(VALUE z);
VALUE rb_complex_pow(VALUE base, VALUE exp);
VALUE rb_dbl_complex_new(double real, double imag);
VALUE rb_Complex(VALUE, VALUE);
VALUE rb_class_new(VALUE);
VALUE rb_mod_init_copy(VALUE, VALUE);
VALUE rb_singleton_class_clone(VALUE);
void rb_singleton_class_attached(VALUE,VALUE);
void rb_check_inheritable(VALUE);
VALUE rb_define_class_id(ID, VALUE);
VALUE rb_define_class_id_under(VALUE, ID, VALUE);
VALUE rb_module_new(void);
VALUE rb_define_module_id(ID);
VALUE rb_define_module_id_under(VALUE, ID);
VALUE rb_mod_included_modules(VALUE);
VALUE rb_mod_include_p(VALUE, VALUE);
VALUE rb_mod_ancestors(VALUE);
VALUE rb_class_instance_methods(int, const VALUE*, VALUE);
VALUE rb_class_public_instance_methods(int, const VALUE*, VALUE);
VALUE rb_class_protected_instance_methods(int, const VALUE*, VALUE);
VALUE rb_class_private_instance_methods(int, const VALUE*, VALUE);
VALUE rb_obj_singleton_methods(int, const VALUE*, VALUE);
void rb_define_method_id(VALUE, ID, VALUE (*)(), int);
void rb_undef(VALUE, ID);
void rb_define_protected_method(VALUE, const char*, VALUE (*)(), int);
void rb_define_private_method(VALUE, const char*, VALUE (*)(), int);
void rb_define_singleton_method(VALUE, const char*, VALUE(*)(), int);
VALUE rb_singleton_class(VALUE);
int rb_cmpint(VALUE, VALUE, VALUE);
__attribute__ ((__noreturn__)) void rb_cmperr(VALUE, VALUE);
VALUE rb_fiber_new(VALUE (*)(), VALUE);
VALUE rb_fiber_resume(VALUE fib, int argc, const VALUE *argv);
VALUE rb_fiber_yield(int argc, const VALUE *argv);
VALUE rb_fiber_current(void);
VALUE rb_fiber_alive_p(VALUE);
VALUE rb_enum_values_pack(int, const VALUE*);
VALUE rb_enumeratorize(VALUE, VALUE, int, const VALUE *);
typedef VALUE rb_enumerator_size_func(VALUE, VALUE, VALUE);
VALUE rb_enumeratorize_with_size(VALUE, VALUE, int, const VALUE *, rb_enumerator_size_func *);
typedef struct {
    VALUE begin;
    VALUE end;
    VALUE step;
    int exclude_end;
} rb_arithmetic_sequence_components_t;
int rb_arithmetic_sequence_extract(VALUE, rb_arithmetic_sequence_components_t *);
VALUE rb_exc_new(VALUE, const char*, long);
VALUE rb_exc_new_cstr(VALUE, const char*);
VALUE rb_exc_new_str(VALUE, VALUE);
__attribute__ ((__noreturn__)) void rb_loaderror(const char*, ...) __attribute__((format(printf, 1, 2)));
__attribute__ ((__noreturn__)) void rb_loaderror_with_path(VALUE path, const char*, ...) __attribute__((format(printf, 2, 3)));
__attribute__ ((__noreturn__)) void rb_name_error(ID, const char*, ...) __attribute__((format(printf, 2, 3)));
__attribute__ ((__noreturn__)) void rb_name_error_str(VALUE, const char*, ...) __attribute__((format(printf, 2, 3)));
__attribute__ ((__noreturn__)) void rb_invalid_str(const char*, const char*);
__attribute__ ((__noreturn__)) void rb_error_frozen(const char*);
__attribute__ ((__noreturn__)) void rb_error_frozen_object(VALUE);
void rb_error_untrusted(VALUE);
void rb_check_frozen(VALUE);
void rb_check_trusted(VALUE);
void rb_check_copyable(VALUE obj, VALUE orig);
int rb_sourceline(void);
const char *rb_sourcefile(void);
VALUE rb_check_funcall(VALUE, ID, int, const VALUE*);
__attribute__ ((__noreturn__)) static void rb_error_arity(int, int, int);
static inline int
rb_check_arity(int argc, int min, int max)
{
    if ((argc < min) || (max != (-1) && argc > max))
 rb_error_arity(argc, min, max);
    return argc;
}
typedef struct {
    int maxfd;
    fd_set *fdset;
} rb_fdset_t;
void rb_fd_init(rb_fdset_t *);
void rb_fd_term(rb_fdset_t *);
void rb_fd_zero(rb_fdset_t *);
void rb_fd_set(int, rb_fdset_t *);
void rb_fd_clr(int, rb_fdset_t *);
int rb_fd_isset(int, const rb_fdset_t *);
void rb_fd_copy(rb_fdset_t *, const fd_set *, int);
void rb_fd_dup(rb_fdset_t *dst, const rb_fdset_t *src);
struct timeval;
int rb_fd_select(int, rb_fdset_t *, rb_fdset_t *, rb_fdset_t *, struct timeval *);
__attribute__ ((__noreturn__)) void rb_exc_raise(VALUE);
__attribute__ ((__noreturn__)) void rb_exc_fatal(VALUE);
__attribute__ ((__noreturn__)) VALUE rb_f_exit(int, const VALUE*);
__attribute__ ((__noreturn__)) VALUE rb_f_abort(int, const VALUE*);
void rb_remove_method(VALUE, const char*);
void rb_remove_method_id(VALUE, ID);
typedef VALUE (*rb_alloc_func_t)(VALUE);
void rb_define_alloc_func(VALUE, rb_alloc_func_t);
void rb_undef_alloc_func(VALUE);
rb_alloc_func_t rb_get_alloc_func(VALUE);
void rb_clear_constant_cache(void);
void rb_clear_method_cache_by_class(VALUE);
void rb_alias(VALUE, ID, ID);
void rb_attr(VALUE,ID,int,int,int);
int rb_method_boundp(VALUE, ID, int);
int rb_method_basic_definition_p(VALUE, ID);
VALUE rb_eval_cmd(VALUE, VALUE, int);
int rb_obj_respond_to(VALUE, ID, int);
int rb_respond_to(VALUE, ID);
__attribute__ ((__noreturn__)) VALUE rb_f_notimplement(int argc, const VALUE *argv, VALUE obj);
__attribute__ ((__noreturn__)) void rb_interrupt(void);
VALUE rb_apply(VALUE, ID, VALUE);
void rb_backtrace(void);
ID rb_frame_this_func(void);
VALUE rb_obj_instance_eval(int, const VALUE*, VALUE);
VALUE rb_obj_instance_exec(int, const VALUE*, VALUE);
VALUE rb_mod_module_eval(int, const VALUE*, VALUE);
VALUE rb_mod_module_exec(int, const VALUE*, VALUE);
void rb_load(VALUE, int);
void rb_load_protect(VALUE, int, int*);
__attribute__ ((__noreturn__)) void rb_jump_tag(int);
int rb_provided(const char*);
int rb_feature_provided(const char *, const char **);
void rb_provide(const char*);
VALUE rb_f_require(VALUE, VALUE);
VALUE rb_require_safe(VALUE, int);
void rb_obj_call_init(VALUE, int, const VALUE*);
VALUE rb_class_new_instance(int, const VALUE*, VALUE);
VALUE rb_block_proc(void);
VALUE rb_block_lambda(void);
VALUE rb_proc_new(VALUE (*)( ), VALUE);
VALUE rb_obj_is_proc(VALUE);
VALUE rb_proc_call(VALUE, VALUE);
VALUE rb_proc_call_with_block(VALUE, int argc, const VALUE *argv, VALUE);
int rb_proc_arity(VALUE);
VALUE rb_proc_lambda_p(VALUE);
VALUE rb_binding_new(void);
VALUE rb_obj_method(VALUE, VALUE);
VALUE rb_obj_is_method(VALUE);
VALUE rb_method_call(int, const VALUE*, VALUE);
VALUE rb_method_call_with_block(int, const VALUE *, VALUE, VALUE);
int rb_mod_method_arity(VALUE, ID);
int rb_obj_method_arity(VALUE, ID);
VALUE rb_protect(VALUE (*)(VALUE), VALUE, int*);
void rb_set_end_proc(void (*)(VALUE), VALUE);
void rb_exec_end_proc(void);
void rb_thread_schedule(void);
void rb_thread_wait_fd(int);
int rb_thread_fd_writable(int);
void rb_thread_fd_close(int);
int rb_thread_alone(void);
void rb_thread_sleep(int);
void rb_thread_sleep_forever(void);
void rb_thread_sleep_deadly(void);
VALUE rb_thread_stop(void);
VALUE rb_thread_wakeup(VALUE);
VALUE rb_thread_wakeup_alive(VALUE);
VALUE rb_thread_run(VALUE);
VALUE rb_thread_kill(VALUE);
VALUE rb_thread_create(VALUE (*)(), void*);
int rb_thread_fd_select(int, rb_fdset_t *, rb_fdset_t *, rb_fdset_t *, struct timeval *);
void rb_thread_wait_for(struct timeval);
VALUE rb_thread_current(void);
VALUE rb_thread_main(void);
VALUE rb_thread_local_aref(VALUE, ID);
VALUE rb_thread_local_aset(VALUE, ID, VALUE);
void rb_thread_atfork(void);
void rb_thread_atfork_before_exec(void);
VALUE rb_exec_recursive(VALUE(*)(VALUE, VALUE, int),VALUE,VALUE);
VALUE rb_exec_recursive_paired(VALUE(*)(VALUE, VALUE, int),VALUE,VALUE,VALUE);
VALUE rb_exec_recursive_outer(VALUE(*)(VALUE, VALUE, int),VALUE,VALUE);
VALUE rb_exec_recursive_paired_outer(VALUE(*)(VALUE, VALUE, int),VALUE,VALUE,VALUE);
VALUE rb_dir_getwd(void);
VALUE rb_file_s_expand_path(int, const VALUE *);
VALUE rb_file_expand_path(VALUE, VALUE);
VALUE rb_file_s_absolute_path(int, const VALUE *);
VALUE rb_file_absolute_path(VALUE, VALUE);
VALUE rb_file_dirname(VALUE fname);
int rb_find_file_ext_safe(VALUE*, const char* const*, int);
VALUE rb_find_file_safe(VALUE, int);
int rb_find_file_ext(VALUE*, const char* const*);
VALUE rb_find_file(VALUE);
VALUE rb_file_directory_p(VALUE,VALUE);
VALUE rb_str_encode_ospath(VALUE);
int rb_is_absolute_path(const char *);
__attribute__((cold)) __attribute__ ((__noreturn__)) void rb_memerror(void);
__attribute__ ((__pure__)) int rb_during_gc(void);
void rb_gc_mark_locations(const VALUE*, const VALUE*);
void rb_mark_tbl(struct st_table*);
void rb_mark_set(struct st_table*);
void rb_mark_hash(struct st_table*);
void rb_gc_mark_maybe(VALUE);
void rb_gc_mark(VALUE);
void rb_gc_force_recycle(VALUE);
void rb_gc(void);
void rb_gc_copy_finalizer(VALUE,VALUE);
void rb_gc_finalize_deferred(void);
void rb_gc_call_finalizer_at_exit(void);
VALUE rb_gc_enable(void);
VALUE rb_gc_disable(void);
VALUE rb_gc_start(void);
VALUE rb_define_finalizer(VALUE, VALUE);
VALUE rb_undefine_finalizer(VALUE);
size_t rb_gc_count(void);
size_t rb_gc_stat(VALUE);
VALUE rb_gc_latest_gc_info(VALUE);
void rb_gc_adjust_memory_usage(ssize_t);
void st_foreach_safe(struct st_table *, int (*)(), st_data_t);
VALUE rb_check_hash_type(VALUE);
void rb_hash_foreach(VALUE, int (*)(), VALUE);
VALUE rb_hash(VALUE);
VALUE rb_hash_new(void);
VALUE rb_hash_dup(VALUE);
VALUE rb_hash_freeze(VALUE);
VALUE rb_hash_aref(VALUE, VALUE);
VALUE rb_hash_lookup(VALUE, VALUE);
VALUE rb_hash_lookup2(VALUE, VALUE, VALUE);
VALUE rb_hash_fetch(VALUE, VALUE);
VALUE rb_hash_aset(VALUE, VALUE, VALUE);
VALUE rb_hash_clear(VALUE);
VALUE rb_hash_delete_if(VALUE);
VALUE rb_hash_delete(VALUE,VALUE);
VALUE rb_hash_set_ifnone(VALUE hash, VALUE ifnone);
typedef VALUE rb_hash_update_func(VALUE newkey, VALUE oldkey, VALUE value);
VALUE rb_hash_update_by(VALUE hash1, VALUE hash2, rb_hash_update_func *func);
struct st_table *rb_hash_tbl(VALUE, const char *file, int line);
int rb_path_check(const char*);
int rb_env_path_tainted(void);
VALUE rb_env_clear(void);
VALUE rb_hash_size(VALUE);
void rb_hash_free(VALUE);
extern VALUE rb_fs;
extern VALUE rb_output_fs;
extern VALUE rb_rs;
extern VALUE rb_default_rs;
extern VALUE rb_output_rs;
VALUE rb_io_write(VALUE, VALUE);
VALUE rb_io_gets(VALUE);
VALUE rb_io_getbyte(VALUE);
VALUE rb_io_ungetc(VALUE, VALUE);
VALUE rb_io_ungetbyte(VALUE, VALUE);
VALUE rb_io_close(VALUE);
VALUE rb_io_flush(VALUE);
VALUE rb_io_eof(VALUE);
VALUE rb_io_binmode(VALUE);
VALUE rb_io_ascii8bit_binmode(VALUE);
VALUE rb_io_addstr(VALUE, VALUE);
VALUE rb_io_printf(int, const VALUE*, VALUE);
VALUE rb_io_print(int, const VALUE*, VALUE);
VALUE rb_io_puts(int, const VALUE*, VALUE);
VALUE rb_io_fdopen(int, int, const char*);
VALUE rb_io_get_io(VALUE);
VALUE rb_file_open(const char*, const char*);
VALUE rb_file_open_str(VALUE, const char*);
VALUE rb_gets(void);
void rb_write_error(const char*);
void rb_write_error2(const char*, long);
void rb_close_before_exec(int lowfd, int maxhint, VALUE noclose_fds);
int rb_pipe(int *pipes);
int rb_reserved_fd_p(int fd);
int rb_cloexec_open(const char *pathname, int flags, mode_t mode);
int rb_cloexec_dup(int oldfd);
int rb_cloexec_dup2(int oldfd, int newfd);
int rb_cloexec_pipe(int fildes[2]);
int rb_cloexec_fcntl_dupfd(int fd, int minfd);
void rb_update_max_fd(int fd);
void rb_fd_fix_cloexec(int fd);
VALUE rb_marshal_dump(VALUE, VALUE);
VALUE rb_marshal_load(VALUE);
void rb_marshal_define_compat(VALUE newclass, VALUE oldclass, VALUE (*dumper)(VALUE), VALUE (*loader)(VALUE, VALUE));
__attribute__ ((__noreturn__)) void rb_num_zerodiv(void);
VALUE rb_num_coerce_bin(VALUE, VALUE, ID);
VALUE rb_num_coerce_cmp(VALUE, VALUE, ID);
VALUE rb_num_coerce_relop(VALUE, VALUE, ID);
VALUE rb_num_coerce_bit(VALUE, VALUE, ID);
VALUE rb_num2fix(VALUE);
VALUE rb_fix2str(VALUE, int);
__attribute__ ((__const__)) VALUE rb_dbl_cmp(double, double);
int rb_eql(VALUE, VALUE);
VALUE rb_any_to_s(VALUE);
VALUE rb_inspect(VALUE);
VALUE rb_obj_is_instance_of(VALUE, VALUE);
VALUE rb_obj_is_kind_of(VALUE, VALUE);
VALUE rb_obj_alloc(VALUE);
VALUE rb_obj_clone(VALUE);
VALUE rb_obj_dup(VALUE);
VALUE rb_obj_init_copy(VALUE,VALUE);
VALUE rb_obj_taint(VALUE);
__attribute__ ((__pure__)) VALUE rb_obj_tainted(VALUE);
VALUE rb_obj_untaint(VALUE);
VALUE rb_obj_untrust(VALUE);
__attribute__ ((__pure__)) VALUE rb_obj_untrusted(VALUE);
VALUE rb_obj_trust(VALUE);
VALUE rb_obj_freeze(VALUE);
__attribute__ ((__pure__)) VALUE rb_obj_frozen_p(VALUE);
VALUE rb_obj_id(VALUE);
VALUE rb_obj_class(VALUE);
__attribute__ ((__pure__)) VALUE rb_class_real(VALUE);
__attribute__ ((__pure__)) VALUE rb_class_inherited_p(VALUE, VALUE);
VALUE rb_class_superclass(VALUE);
VALUE rb_class_get_superclass(VALUE);
VALUE rb_convert_type(VALUE,int,const char*,const char*);
VALUE rb_check_convert_type(VALUE,int,const char*,const char*);
VALUE rb_check_to_integer(VALUE, const char *);
VALUE rb_check_to_float(VALUE);
VALUE rb_to_int(VALUE);
VALUE rb_check_to_int(VALUE);
VALUE rb_Integer(VALUE);
VALUE rb_to_float(VALUE);
VALUE rb_Float(VALUE);
VALUE rb_String(VALUE);
VALUE rb_Array(VALUE);
VALUE rb_Hash(VALUE);
double rb_cstr_to_dbl(const char*, int);
double rb_str_to_dbl(VALUE, int);
ID rb_id_attrset(ID);
__attribute__ ((__const__)) int rb_is_const_id(ID);
__attribute__ ((__const__)) int rb_is_global_id(ID);
__attribute__ ((__const__)) int rb_is_instance_id(ID);
__attribute__ ((__const__)) int rb_is_attrset_id(ID);
__attribute__ ((__const__)) int rb_is_class_id(ID);
__attribute__ ((__const__)) int rb_is_local_id(ID);
__attribute__ ((__const__)) int rb_is_junk_id(ID);
int rb_symname_p(const char*);
int rb_sym_interned_p(VALUE);
VALUE rb_backref_get(void);
void rb_backref_set(VALUE);
VALUE rb_lastline_get(void);
void rb_lastline_set(VALUE);
void rb_last_status_set(int status, pid_t pid);
VALUE rb_last_status_get(void);
int rb_proc_exec(const char*);
__attribute__ ((__noreturn__)) VALUE rb_f_exec(int, const VALUE*);
pid_t rb_waitpid(pid_t pid, int *status, int flags);
void rb_syswait(pid_t pid);
pid_t rb_spawn(int, const VALUE*);
pid_t rb_spawn_err(int, const VALUE*, char*, size_t);
VALUE rb_proc_times(VALUE);
VALUE rb_detach_process(pid_t pid);
VALUE rb_range_new(VALUE, VALUE, int);
VALUE rb_range_beg_len(VALUE, long*, long*, long, int);
int rb_range_values(VALUE range, VALUE *begp, VALUE *endp, int *exclp);
unsigned int rb_genrand_int32(void);
double rb_genrand_real(void);
void rb_reset_random_seed(void);
VALUE rb_random_bytes(VALUE rnd, long n);
VALUE rb_random_int(VALUE rnd, VALUE max);
unsigned int rb_random_int32(VALUE rnd);
double rb_random_real(VALUE rnd);
unsigned long rb_random_ulong_limited(VALUE rnd, unsigned long limit);
unsigned long rb_genrand_ulong_limited(unsigned long i);
int rb_memcicmp(const void*,const void*,long);
void rb_match_busy(VALUE);
VALUE rb_reg_nth_defined(int, VALUE);
VALUE rb_reg_nth_match(int, VALUE);
int rb_reg_backref_number(VALUE match, VALUE backref);
VALUE rb_reg_last_match(VALUE);
VALUE rb_reg_match_pre(VALUE);
VALUE rb_reg_match_post(VALUE);
VALUE rb_reg_match_last(VALUE);
VALUE rb_reg_new_str(VALUE, int);
VALUE rb_reg_new(const char *, long, int);
VALUE rb_reg_alloc(void);
VALUE rb_reg_init_str(VALUE re, VALUE s, int options);
VALUE rb_reg_match(VALUE, VALUE);
VALUE rb_reg_match2(VALUE);
int rb_reg_options(VALUE);
extern VALUE rb_argv0;
VALUE rb_get_argv(void);
void *rb_load_file(const char*);
void *rb_load_file_str(VALUE);
VALUE rb_f_kill(int, const VALUE*);
void (*ruby_posix_signal(int, void (*)(int)))(int);
void rb_trap_exit(void);
void rb_trap_exec(void);
const char *ruby_signal_name(int);
void ruby_default_signal(int);
VALUE rb_f_sprintf(int, const VALUE*);
VALUE rb_sprintf(const char*, ...) __attribute__((format(printf, 1, 2)));
VALUE rb_vsprintf(const char*, va_list);
VALUE rb_str_catf(VALUE, const char*, ...) __attribute__((format(printf, 2, 3)));
VALUE rb_str_vcatf(VALUE, const char*, va_list);
VALUE rb_str_format(int, const VALUE *, VALUE);
VALUE rb_str_new(const char*, long);
VALUE rb_str_new_cstr(const char*);
VALUE rb_str_new_shared(VALUE);
VALUE rb_str_new_frozen(VALUE);
VALUE rb_str_new_with_class(VALUE, const char*, long);
VALUE rb_tainted_str_new_cstr(const char*);
VALUE rb_tainted_str_new(const char*, long);
VALUE rb_external_str_new(const char*, long);
VALUE rb_external_str_new_cstr(const char*);
VALUE rb_locale_str_new(const char*, long);
VALUE rb_locale_str_new_cstr(const char*);
VALUE rb_filesystem_str_new(const char*, long);
VALUE rb_filesystem_str_new_cstr(const char*);
VALUE rb_str_buf_new(long);
VALUE rb_str_buf_new_cstr(const char*);
VALUE rb_str_buf_new2(const char*);
VALUE rb_str_tmp_new(long);
VALUE rb_usascii_str_new(const char*, long);
VALUE rb_usascii_str_new_cstr(const char*);
VALUE rb_utf8_str_new(const char*, long);
VALUE rb_utf8_str_new_cstr(const char*);
VALUE rb_str_new_static(const char *, long);
VALUE rb_usascii_str_new_static(const char *, long);
VALUE rb_utf8_str_new_static(const char *, long);
void rb_str_free(VALUE);
void rb_str_shared_replace(VALUE, VALUE);
VALUE rb_str_buf_append(VALUE, VALUE);
VALUE rb_str_buf_cat(VALUE, const char*, long);
VALUE rb_str_buf_cat2(VALUE, const char*);
VALUE rb_str_buf_cat_ascii(VALUE, const char*);
VALUE rb_obj_as_string(VALUE);
VALUE rb_check_string_type(VALUE);
void rb_must_asciicompat(VALUE);
VALUE rb_str_dup(VALUE);
VALUE rb_str_resurrect(VALUE str);
VALUE rb_str_locktmp(VALUE);
VALUE rb_str_unlocktmp(VALUE);
VALUE rb_str_dup_frozen(VALUE);
VALUE rb_str_plus(VALUE, VALUE);
VALUE rb_str_times(VALUE, VALUE);
long rb_str_sublen(VALUE, long);
VALUE rb_str_substr(VALUE, long, long);
VALUE rb_str_subseq(VALUE, long, long);
char *rb_str_subpos(VALUE, long, long*);
void rb_str_modify(VALUE);
void rb_str_modify_expand(VALUE, long);
VALUE rb_str_freeze(VALUE);
void rb_str_set_len(VALUE, long);
VALUE rb_str_resize(VALUE, long);
VALUE rb_str_cat(VALUE, const char*, long);
VALUE rb_str_cat_cstr(VALUE, const char*);
VALUE rb_str_cat2(VALUE, const char*);
VALUE rb_str_append(VALUE, VALUE);
VALUE rb_str_concat(VALUE, VALUE);
st_index_t rb_memhash(const void *ptr, long len);
st_index_t rb_hash_start(st_index_t);
st_index_t rb_hash_uint32(st_index_t, uint32_t);
st_index_t rb_hash_uint(st_index_t, st_index_t);
st_index_t rb_hash_end(st_index_t);
st_index_t rb_str_hash(VALUE);
int rb_str_hash_cmp(VALUE,VALUE);
int rb_str_comparable(VALUE, VALUE);
int rb_str_cmp(VALUE, VALUE);
VALUE rb_str_equal(VALUE str1, VALUE str2);
VALUE rb_str_drop_bytes(VALUE, long);
void rb_str_update(VALUE, long, long, VALUE);
VALUE rb_str_replace(VALUE, VALUE);
VALUE rb_str_inspect(VALUE);
VALUE rb_str_dump(VALUE);
VALUE rb_str_split(VALUE, const char*);
void rb_str_setter(VALUE, ID, VALUE*);
VALUE rb_str_intern(VALUE);
VALUE rb_sym_to_s(VALUE);
long rb_str_strlen(VALUE);
VALUE rb_str_length(VALUE);
long rb_str_offset(VALUE, long);
__attribute__ ((__pure__)) size_t rb_str_capacity(VALUE);
VALUE rb_str_ellipsize(VALUE, long);
VALUE rb_str_scrub(VALUE, VALUE);
VALUE rb_sym_all_symbols(void);
VALUE rb_struct_new(VALUE, ...);
VALUE rb_struct_define(const char*, ...);
VALUE rb_struct_define_under(VALUE, const char*, ...);
VALUE rb_struct_alloc(VALUE, VALUE);
VALUE rb_struct_initialize(VALUE, VALUE);
VALUE rb_struct_aref(VALUE, VALUE);
VALUE rb_struct_aset(VALUE, VALUE, VALUE);
VALUE rb_struct_getmember(VALUE, ID);
VALUE rb_struct_s_members(VALUE);
VALUE rb_struct_members(VALUE);
VALUE rb_struct_size(VALUE s);
VALUE rb_struct_alloc_noinit(VALUE);
VALUE rb_struct_define_without_accessor(const char *, VALUE, rb_alloc_func_t, ...);
VALUE rb_struct_define_without_accessor_under(VALUE outer, const char *class_name, VALUE super, rb_alloc_func_t alloc, ...);
typedef void rb_unblock_function_t(void *);
typedef VALUE rb_blocking_function_t(void *);
void rb_thread_check_ints(void);
int rb_thread_interrupted(VALUE thval);
VALUE rb_mutex_new(void);
VALUE rb_mutex_locked_p(VALUE mutex);
VALUE rb_mutex_trylock(VALUE mutex);
VALUE rb_mutex_lock(VALUE mutex);
VALUE rb_mutex_unlock(VALUE mutex);
VALUE rb_mutex_sleep(VALUE self, VALUE timeout);
VALUE rb_mutex_synchronize(VALUE mutex, VALUE (*func)(VALUE arg), VALUE arg);
void rb_timespec_now(struct timespec *);
VALUE rb_time_new(time_t, long);
VALUE rb_time_nano_new(time_t, long);
VALUE rb_time_timespec_new(const struct timespec *, int);
VALUE rb_time_num_new(VALUE, VALUE);
struct timeval rb_time_interval(VALUE num);
struct timeval rb_time_timeval(VALUE time);
struct timespec rb_time_timespec(VALUE time);
VALUE rb_time_utc_offset(VALUE time);
VALUE rb_mod_name(VALUE);
VALUE rb_class_path(VALUE);
VALUE rb_class_path_cached(VALUE);
void rb_set_class_path(VALUE, VALUE, const char*);
void rb_set_class_path_string(VALUE, VALUE, VALUE);
VALUE rb_path_to_class(VALUE);
VALUE rb_path2class(const char*);
void rb_name_class(VALUE, ID);
VALUE rb_class_name(VALUE);
VALUE rb_autoload_load(VALUE, ID);
VALUE rb_autoload_p(VALUE, ID);
VALUE rb_f_trace_var(int, const VALUE*);
VALUE rb_f_untrace_var(int, const VALUE*);
VALUE rb_f_global_variables(void);
void rb_alias_variable(ID, ID);
void rb_copy_generic_ivar(VALUE,VALUE);
void rb_free_generic_ivar(VALUE);
VALUE rb_ivar_get(VALUE, ID);
VALUE rb_ivar_set(VALUE, ID, VALUE);
VALUE rb_ivar_defined(VALUE, ID);
void rb_ivar_foreach(VALUE, int (*)(), st_data_t);
st_index_t rb_ivar_count(VALUE);
VALUE rb_attr_get(VALUE, ID);
VALUE rb_obj_instance_variables(VALUE);
VALUE rb_obj_remove_instance_variable(VALUE, VALUE);
void *rb_mod_const_at(VALUE, void*);
void *rb_mod_const_of(VALUE, void*);
VALUE rb_const_list(void*);
VALUE rb_mod_constants(int, const VALUE *, VALUE);
VALUE rb_mod_remove_const(VALUE, VALUE);
int rb_const_defined(VALUE, ID);
int rb_const_defined_at(VALUE, ID);
int rb_const_defined_from(VALUE, ID);
VALUE rb_const_get(VALUE, ID);
VALUE rb_const_get_at(VALUE, ID);
VALUE rb_const_get_from(VALUE, ID);
void rb_const_set(VALUE, ID, VALUE);
VALUE rb_const_remove(VALUE, ID);
VALUE rb_cvar_defined(VALUE, ID);
void rb_cvar_set(VALUE, ID, VALUE);
VALUE rb_cvar_get(VALUE, ID);
void rb_cv_set(VALUE, const char*, VALUE);
VALUE rb_cv_get(VALUE, const char*);
void rb_define_class_variable(VALUE, const char*, VALUE);
VALUE rb_mod_class_variables(int, const VALUE*, VALUE);
VALUE rb_mod_remove_cvar(VALUE, VALUE);
ID rb_frame_callee(void);
int rb_frame_method_id_and_class(ID *idp, VALUE *klassp);
VALUE rb_str_succ(VALUE);
VALUE rb_time_succ(VALUE);
VALUE rb_make_backtrace(void);
VALUE rb_make_exception(int, const VALUE*);


static inline void
rb_clone_setup(VALUE clone, VALUE obj)
{
    rb_obj_setup(clone, rb_singleton_class_clone(obj),
                 ((struct RBasic*)(obj))->flags & ~(((VALUE)RUBY_FL_PROMOTED0)|((VALUE)RUBY_FL_PROMOTED1)|((VALUE)RUBY_FL_FINALIZE)));
    rb_singleton_class_attached((((struct RBasic*)(clone))->klass), clone);
    if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((RUBY_FL_EXIVAR))):0)) rb_copy_generic_ivar(clone, obj);
}
static inline void
rb_dup_setup(VALUE dup, VALUE obj)
{
    rb_obj_setup(dup, rb_obj_class(obj), (((struct RBasic*)(obj))->flags&(RUBY_FL_DUPPED)));
    if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((RUBY_FL_EXIVAR))):0)) rb_copy_generic_ivar(dup, obj);
}
static inline long
rb_array_len(VALUE a)
{
    return (((struct RBasic*)(a))->flags & (VALUE)RARRAY_EMBED_FLAG) ?
 (long)((((struct RBasic*)(a))->flags >> RARRAY_EMBED_LEN_SHIFT) & ((VALUE)RARRAY_EMBED_LEN_MASK >> RARRAY_EMBED_LEN_SHIFT)) : ((struct RArray*)(a))->as.heap.len;
}
static inline const VALUE *
rb_array_const_ptr_transient(VALUE a)
{
    return ((((struct RBasic*)(a))->flags & (VALUE)RARRAY_EMBED_FLAG) ? ((struct RArray*)(a))->as.ary : ((struct RArray*)(a))->as.heap.ptr);
}
static inline const VALUE *
rb_array_const_ptr(VALUE a)
{
    void rb_ary_detransient(VALUE a);
    if ((((struct RBasic*)((a)))->flags&(RARRAY_TRANSIENT_FLAG))) {
        rb_ary_detransient(a);
    }
    return rb_array_const_ptr_transient(a);
}
static inline VALUE *
rb_array_ptr_use_start(VALUE a, int allow_transient)
{
    VALUE *rb_ary_ptr_use_start(VALUE ary);
    if (!allow_transient) {
        if ((((struct RBasic*)((a)))->flags&(RARRAY_TRANSIENT_FLAG))) {
            void rb_ary_detransient(VALUE a);
            rb_ary_detransient(a);
        }
    }
    return rb_ary_ptr_use_start(a);
}
static inline void
rb_array_ptr_use_end(VALUE a, int allow_transient)
{
    void rb_ary_ptr_use_end(VALUE a);
    rb_ary_ptr_use_end(a);
}
int ruby_native_thread_p(void);
typedef uint32_t rb_event_flag_t;
typedef void (*rb_event_hook_func_t)(rb_event_flag_t evflag, VALUE data, VALUE self, ID mid, VALUE klass);
void rb_add_event_hook(rb_event_hook_func_t func, rb_event_flag_t events, VALUE data);
int rb_remove_event_hook(rb_event_hook_func_t func);
static inline int rb_isascii(int c){ return '\0' <= c && c <= '\x7f'; }
static inline int rb_isupper(int c){ return 'A' <= c && c <= 'Z'; }
static inline int rb_islower(int c){ return 'a' <= c && c <= 'z'; }
static inline int rb_isalpha(int c){ return rb_isupper(c) || rb_islower(c); }
static inline int rb_isdigit(int c){ return '0' <= c && c <= '9'; }
static inline int rb_isalnum(int c){ return rb_isalpha(c) || rb_isdigit(c); }
static inline int rb_isxdigit(int c){ return rb_isdigit(c) || ('A' <= c && c <= 'F') || ('a' <= c && c <= 'f'); }
static inline int rb_isblank(int c){ return c == ' ' || c == '\t'; }
static inline int rb_isspace(int c){ return c == ' ' || ('\t' <= c && c <= '\r'); }
static inline int rb_iscntrl(int c){ return ('\0' <= c && c < ' ') || c == '\x7f'; }
static inline int rb_isprint(int c){ return ' ' <= c && c <= '\x7e'; }
static inline int rb_ispunct(int c){ return !rb_isalnum(c); }
static inline int rb_isgraph(int c){ return '!' <= c && c <= '\x7e'; }
static inline int rb_tolower(int c) { return rb_isupper(c) ? (c|0x20) : c; }
static inline int rb_toupper(int c) { return rb_islower(c) ? (c&0x5f) : c; }
int st_locale_insensitive_strcasecmp(const char *s1, const char *s2);
int st_locale_insensitive_strncasecmp(const char *s1, const char *s2, size_t n);
unsigned long ruby_strtoul(const char *str, char **endptr, int base);
int ruby_snprintf(char *str, size_t n, char const *fmt, ...) __attribute__((format(printf, 3, 4)));
int ruby_vsnprintf(char *str, size_t n, char const *fmt, va_list ap);
__attribute__ ((__error__ ("bad scan arg format"))) int rb_scan_args_bad_format(const char*);
__attribute__ ((__error__ ("variable argument length doesn't match"))) int rb_scan_args_length_mismatch(const char*,int);
__attribute__ ((__always_inline__)) static int rb_scan_args_lead_p(const char *fmt);
static inline int
rb_scan_args_lead_p(const char *fmt)
{
    return ((unsigned char)((fmt[0])-'0')<10);
}
__attribute__ ((__always_inline__)) static int rb_scan_args_n_lead(const char *fmt);
static inline int
rb_scan_args_n_lead(const char *fmt)
{
    return (rb_scan_args_lead_p(fmt) ? fmt[0]-'0' : 0);
}
__attribute__ ((__always_inline__)) static int rb_scan_args_opt_p(const char *fmt);
static inline int
rb_scan_args_opt_p(const char *fmt)
{
    return (rb_scan_args_lead_p(fmt) && ((unsigned char)((fmt[1])-'0')<10));
}
__attribute__ ((__always_inline__)) static int rb_scan_args_n_opt(const char *fmt);
static inline int
rb_scan_args_n_opt(const char *fmt)
{
    return (rb_scan_args_opt_p(fmt) ? fmt[1]-'0' : 0);
}
__attribute__ ((__always_inline__)) static int rb_scan_args_var_idx(const char *fmt);
static inline int
rb_scan_args_var_idx(const char *fmt)
{
    return (!rb_scan_args_lead_p(fmt) ? 0 : !((unsigned char)((fmt[1])-'0')<10) ? 1 : 2);
}
__attribute__ ((__always_inline__)) static int rb_scan_args_f_var(const char *fmt);
static inline int
rb_scan_args_f_var(const char *fmt)
{
    return (fmt[rb_scan_args_var_idx(fmt)]=='*');
}
__attribute__ ((__always_inline__)) static int rb_scan_args_trail_idx(const char *fmt);
static inline int
rb_scan_args_trail_idx(const char *fmt)
{
    const int idx = rb_scan_args_var_idx(fmt);
    return idx+(fmt[idx]=='*');
}
__attribute__ ((__always_inline__)) static int rb_scan_args_n_trail(const char *fmt);
static inline int
rb_scan_args_n_trail(const char *fmt)
{
    const int idx = rb_scan_args_trail_idx(fmt);
    return (((unsigned char)((fmt[idx])-'0')<10) ? fmt[idx]-'0' : 0);
}
__attribute__ ((__always_inline__)) static int rb_scan_args_hash_idx(const char *fmt);
static inline int
rb_scan_args_hash_idx(const char *fmt)
{
    const int idx = rb_scan_args_trail_idx(fmt);
    return idx+((unsigned char)((fmt[idx])-'0')<10);
}
__attribute__ ((__always_inline__)) static int rb_scan_args_f_hash(const char *fmt);
static inline int
rb_scan_args_f_hash(const char *fmt)
{
    return (fmt[rb_scan_args_hash_idx(fmt)]==':');
}
__attribute__ ((__always_inline__)) static int rb_scan_args_block_idx(const char *fmt);
static inline int
rb_scan_args_block_idx(const char *fmt)
{
    const int idx = rb_scan_args_hash_idx(fmt);
    return idx+(fmt[idx]==':');
}
__attribute__ ((__always_inline__)) static int rb_scan_args_f_block(const char *fmt);
static inline int
rb_scan_args_f_block(const char *fmt)
{
    return (fmt[rb_scan_args_block_idx(fmt)]=='&');
}static inline 
__attribute__ ((__always_inline__))  int rb_scan_args_set(int argc, const VALUE *argv, int n_lead, int n_opt, int n_trail, int f_var, int f_hash, int f_block, VALUE *vars[], char *fmt, int varc);static inline 
 int
rb_scan_args_set(int argc, const VALUE *argv,
   int n_lead, int n_opt, int n_trail,
   int f_var, int f_hash, int f_block,
   VALUE *vars[], char *fmt __attribute__ ((unused)), int varc __attribute__ ((unused)))
{
    int i, argi = 0, vari = 0, last_idx = -1;
    VALUE *var, hash = ((VALUE)RUBY_Qnil), last_hash = 0;
    const int n_mand = n_lead + n_trail;
    if (f_hash && n_mand < argc) {
 VALUE last = argv[argc - 1];
 if (!((VALUE)(last) != ((VALUE)RUBY_Qnil))) {
     if (!f_var && n_mand + n_opt < argc)
  argc--;
 }
 else {
     hash = rb_check_hash_type(last);
     if (!!((VALUE)(hash) != ((VALUE)RUBY_Qnil))) {
  VALUE opts = rb_extract_keywords(&hash);
  if (!(last_hash = hash)) argc--;
  else last_idx = argc - 1;
  hash = opts ? opts : ((VALUE)RUBY_Qnil);
     }
 }
    }
    rb_check_arity(argc, n_mand, f_var ? (-1) : n_mand + n_opt);
    for (i = n_lead; i-- > 0; ) {
 var = vars[vari++];
 if (var) *var = (argi == last_idx) ? last_hash : argv[argi];
 argi++;
    }
    for (i = n_opt; i-- > 0; ) {
 var = vars[vari++];
 if (argi < argc - n_trail) {
     if (var) *var = (argi == last_idx) ? last_hash : argv[argi];
     argi++;
 }
 else {
     if (var) *var = ((VALUE)RUBY_Qnil);
 }
    }
    if (f_var) {
 int n_var = argc - argi - n_trail;
 var = vars[vari++];
 if (0 < n_var) {
     if (var) {
  int f_last = (last_idx + 1 == argc - n_trail);
  *var = rb_ary_new_from_values(n_var-f_last, &argv[argi]);
  if (f_last) rb_ary_push(*var, last_hash);
     }
     argi += n_var;
 }
 else {
     if (var) *var = rb_ary_new();
 }
    }
    for (i = n_trail; i-- > 0; ) {
 var = vars[vari++];
 if (var) *var = (argi == last_idx) ? last_hash : argv[argi];
 argi++;
    }
    if (f_hash) {
 var = vars[vari++];
 if (var) *var = hash;
    }
    if (f_block) {
 var = vars[vari++];
 if (rb_block_given_p()) {
     *var = rb_block_proc();
 }
 else {
     *var = ((VALUE)RUBY_Qnil);
 }
    }
    return argc;
}
void ruby_sysinit(int *argc, char ***argv);
void ruby_init(void);
void* ruby_options(int argc, char** argv);
int ruby_executable_node(void *n, int *status);
int ruby_run_node(void *n);
void ruby_show_version(void);
void ruby_show_copyright(void);
void ruby_init_stack(volatile VALUE*);
int ruby_setup(void);
int ruby_cleanup(volatile int);
void ruby_finalize(void);
__attribute__ ((__noreturn__)) void ruby_stop(int);
void ruby_set_stack_size(size_t);
int ruby_stack_check(void);
size_t ruby_stack_length(VALUE**);
int ruby_exec_node(void *n);
void ruby_script(const char* name);
void ruby_set_script_name(VALUE name);
void ruby_prog_init(void);
void ruby_set_argv(int, char**);
void *ruby_process_options(int, char**);
void ruby_init_loadpath(void);
void ruby_incpush(const char*);
void ruby_sig_finalize(void);


static inline unsigned int
nlz_int(unsigned int x)
{
    if (x == 0) return 4 * 8;
    return (unsigned int)__builtin_clz(x);
}
static inline unsigned int
nlz_long(unsigned long x)
{
    if (x == 0) return 8 * 8;
    return (unsigned int)__builtin_clzl(x);
}
static inline unsigned int
nlz_long_long(unsigned long long x)
{
    if (x == 0) return 8 * 8;
    return (unsigned int)__builtin_clzll(x);
}
static inline unsigned int
nlz_int128(unsigned __int128 x)
{
    unsigned __int128 y;
    unsigned int n = 128;
    y = x >> 64; if (y) {n -= 64; x = y;}
    y = x >> 32; if (y) {n -= 32; x = y;}
    y = x >> 16; if (y) {n -= 16; x = y;}
    y = x >> 8; if (y) {n -= 8; x = y;}
    y = x >> 4; if (y) {n -= 4; x = y;}
    y = x >> 2; if (y) {n -= 2; x = y;}
    y = x >> 1; if (y) {return n - 2;}
    return (unsigned int)(n - x);
}
static inline unsigned int
nlz_intptr(uintptr_t x)
{
    return nlz_long(x);
}
static inline unsigned int
rb_popcount32(uint32_t x)
{
    return (unsigned int)__builtin_popcount(x);
}
static inline int
rb_popcount64(uint64_t x)
{
    return __builtin_popcountll(x);
}
static inline int
rb_popcount_intptr(uintptr_t x)
{
    return rb_popcount64(x);
}
static inline int
ntz_int32(uint32_t x)
{
    return __builtin_ctz(x);
}
static inline int
ntz_int64(uint64_t x)
{
    return __builtin_ctzll(x);
}
static inline int
ntz_intptr(uintptr_t x)
{
    return ntz_int64(x);
}
VALUE rb_int128t2big(__int128 n);
static inline long
rb_overflowed_fix_to_int(long x)
{
    return (long)((unsigned long)(x >> 1) ^ (1LU << (8 * 8 - 1)));
}
static inline VALUE
rb_fix_plus_fix(VALUE x, VALUE y)
{
    long lz;
    if (__builtin_add_overflow((long)x, (long)y-1, &lz)) {
 return rb_int2big(rb_overflowed_fix_to_int(lz));
    }
    else {
 return (VALUE)lz;
    }
}
static inline VALUE
rb_fix_minus_fix(VALUE x, VALUE y)
{
    long lz;
    if (__builtin_sub_overflow((long)x, (long)y-1, &lz)) {
 return rb_int2big(rb_overflowed_fix_to_int(lz));
    }
    else {
 return (VALUE)lz;
    }
}
static inline VALUE
rb_fix_mul_fix(VALUE x, VALUE y)
{
    long lx = ((long)(((long)(x))>>(int)(1)));
    long ly = ((long)(((long)(y))>>(int)(1)));
    return (((((__int128)lx * (__int128)ly) < (0x7fffffffffffffffL>>1)+1) && (((__int128)lx * (__int128)ly) >= (((long)(-0x7fffffffffffffffL - 1L))>>(int)(1)))) ? (((VALUE)((__int128)lx * (__int128)ly))<<1 | RUBY_FIXNUM_FLAG) : rb_int128t2big((__int128)lx * (__int128)ly));
}
static inline void
rb_fix_divmod_fix(VALUE a, VALUE b, VALUE *divp, VALUE *modp)
{
    long x = ((long)(((long)(a))>>(int)(1)));
    long y = ((long)(((long)(b))>>(int)(1)));
    long div, mod;
    if (x == (((long)(-0x7fffffffffffffffL - 1L))>>(int)(1)) && y == -1) {
 if (divp) *divp = rb_long2num_inline(-(((long)(-0x7fffffffffffffffL - 1L))>>(int)(1)));
 if (modp) *modp = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
 return;
    }
    div = x / y;
    mod = x % y;
    if (y > 0 ? mod < 0 : mod > 0) {
 mod += y;
 div -= 1;
    }
    if (divp) *divp = (((VALUE)(div))<<1 | RUBY_FIXNUM_FLAG);
    if (modp) *modp = (((VALUE)(mod))<<1 | RUBY_FIXNUM_FLAG);
}
static inline VALUE
rb_fix_div_fix(VALUE x, VALUE y)
{
    VALUE div;
    rb_fix_divmod_fix(x, y, &div, ((void *)0));
    return div;
}
static inline VALUE
rb_fix_mod_fix(VALUE x, VALUE y)
{
    VALUE mod;
    rb_fix_divmod_fix(x, y, ((void *)0), &mod);
    return mod;
}
struct RBignum {
    struct RBasic basic;
    union {
        struct {
            size_t len;
            unsigned int *digits;
        } heap;
        unsigned int ary[(8*3/4)];
    } as;
};
struct RRational {
    struct RBasic basic;
    const VALUE num;
    const VALUE den;
};
struct RFloat {
    struct RBasic basic;
    double float_value;
};
struct RComplex {
    struct RBasic basic;
    const VALUE real;
    const VALUE imag;
};
enum ruby_rhash_flags {
    RHASH_ST_TABLE_FLAG = ((VALUE)RUBY_FL_USER3),
    RHASH_AR_TABLE_MAX_SIZE = 8,
    RHASH_AR_TABLE_SIZE_MASK = (((VALUE)RUBY_FL_USER4)|((VALUE)RUBY_FL_USER5)|((VALUE)RUBY_FL_USER6)|((VALUE)RUBY_FL_USER7)),
    RHASH_AR_TABLE_SIZE_SHIFT = (((VALUE)RUBY_FL_USHIFT)+4),
    RHASH_AR_TABLE_BOUND_MASK = (((VALUE)RUBY_FL_USER8)|((VALUE)RUBY_FL_USER9)|((VALUE)RUBY_FL_USER10)|((VALUE)RUBY_FL_USER11)),
    RHASH_AR_TABLE_BOUND_SHIFT = (((VALUE)RUBY_FL_USHIFT)+8),
    RHASH_ENUM_END
};
int rb_hash_ar_table_p(VALUE hash);
struct ar_table_struct *rb_hash_ar_table(VALUE hash);
st_table *rb_hash_st_table(VALUE hash);
void rb_hash_st_table_set(VALUE hash, st_table *st);
typedef struct ar_table_entry {
    VALUE hash;
    VALUE key;
    VALUE record;
} ar_table_entry;
typedef struct ar_table_struct {
    ar_table_entry entries[8];
} ar_table;
struct RHash {
    struct RBasic basic;
    union {
        st_table *st;
        ar_table *ar;
    } as;
    int iter_lev;
    const VALUE ifnone;
};
extern void ruby_init_setproctitle(int argc, char *argv[]);
enum {
    RSTRUCT_EMBED_LEN_MAX = 3,
    RSTRUCT_EMBED_LEN_MASK = (RUBY_FL_USER2|RUBY_FL_USER1),
    RSTRUCT_EMBED_LEN_SHIFT = (RUBY_FL_USHIFT+1),
    RSTRUCT_TRANSIENT_FLAG = ((VALUE)RUBY_FL_USER3),
    RSTRUCT_ENUM_END
};
struct RStruct {
    struct RBasic basic;
    union {
 struct {
     long len;
     const VALUE *ptr;
 } heap;
 const VALUE ary[RSTRUCT_EMBED_LEN_MAX];
    } as;
};
static inline long
rb_struct_len(VALUE st)
{
    return (((struct RBasic*)(st))->flags & RSTRUCT_EMBED_LEN_MASK) ?
 (long)((((struct RBasic*)(st))->flags >> RSTRUCT_EMBED_LEN_SHIFT) & (RSTRUCT_EMBED_LEN_MASK >> RSTRUCT_EMBED_LEN_SHIFT)) : ((struct RStruct*)(st))->as.heap.len;
}
static inline const VALUE *
rb_struct_const_ptr(VALUE st)
{
    return ((((struct RBasic*)(st))->flags & RSTRUCT_EMBED_LEN_MASK) ? ((struct RStruct*)(st))->as.ary : ((struct RStruct*)(st))->as.heap.ptr);
}
static inline const VALUE *
rb_struct_const_heap_ptr(VALUE st)
{
    return ((struct RStruct*)(st))->as.heap.ptr;
}
struct rb_deprecated_classext_struct {
    char conflict[sizeof(VALUE) * 3];
};
struct rb_subclass_entry;
typedef struct rb_subclass_entry rb_subclass_entry_t;
struct rb_subclass_entry {
    VALUE klass;
    rb_subclass_entry_t *next;
};
typedef unsigned long long rb_serial_t;
struct rb_classext_struct {
    struct st_table *iv_index_tbl;
    struct st_table *iv_tbl;
    struct rb_id_table *const_tbl;
    struct rb_id_table *callable_m_tbl;
    rb_subclass_entry_t *subclasses;
    rb_subclass_entry_t **parent_subclasses;
    rb_subclass_entry_t **module_subclasses;
    rb_serial_t class_serial;
    const VALUE origin_;
    VALUE refined_class;
    rb_alloc_func_t allocator;
};
typedef struct rb_classext_struct rb_classext_t;
struct RClass {
    struct RBasic basic;
    VALUE super;
    rb_classext_t *ptr;
    struct rb_id_table *m_tbl;
};
void rb_class_subclass_add(VALUE super, VALUE klass);
void rb_class_remove_from_super_subclasses(VALUE);
int rb_singleton_class_internal_p(VALUE sklass);
static inline void
RCLASS_SET_ORIGIN(VALUE klass, VALUE origin)
{
    rb_obj_write((VALUE)(klass), (VALUE *)(&((((struct RClass*)(klass))->ptr)->origin_)), (VALUE)(origin), "./internal.h", 1006);
    if (klass != origin) ((!(((VALUE)(origin) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(origin) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(origin))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(origin))->flags |= (((VALUE)RUBY_FL_USER5))) : (void)0);
}
static inline VALUE
RCLASS_SUPER(VALUE klass)
{
    return ((struct RClass*)(klass))->super;
}
static inline VALUE
RCLASS_SET_SUPER(VALUE klass, VALUE super)
{
    if (super) {
 rb_class_remove_from_super_subclasses(klass);
 rb_class_subclass_add(super, klass);
    }
    rb_obj_write((VALUE)(klass), (VALUE *)(&((struct RClass*)(klass))->super), (VALUE)(super), "./internal.h", 1024);
    return super;
}
struct RIMemo {
    VALUE flags;
    VALUE v0;
    VALUE v1;
    VALUE v2;
    VALUE v3;
};
enum imemo_type {
    imemo_env = 0,
    imemo_cref = 1,
    imemo_svar = 2,
    imemo_throw_data = 3,
    imemo_ifunc = 4,
    imemo_memo = 5,
    imemo_ment = 6,
    imemo_iseq = 7,
    imemo_tmpbuf = 8,
    imemo_ast = 9,
    imemo_parser_strterm = 10
};
static inline enum imemo_type
imemo_type(VALUE imemo)
{
    return (((struct RBasic*)(imemo))->flags >> ((VALUE)RUBY_FL_USHIFT)) & 0x0f;
}
static inline int
imemo_type_p(VALUE imemo, enum imemo_type imemo_type)
{
    if ((__builtin_expect(!!(!(((VALUE)(imemo) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(imemo) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))), 1))) {
 const VALUE mask = (0x0f << ((VALUE)RUBY_FL_USHIFT)) | RUBY_T_MASK;
 const VALUE expected_type = (imemo_type << ((VALUE)RUBY_FL_USHIFT)) | RUBY_T_IMEMO;
 return expected_type == (((struct RBasic*)(imemo))->flags & mask);
    }
    else {
 return 0;
    }
}
struct vm_svar {
    VALUE flags;
    const VALUE cref_or_me;
    const VALUE lastline;
    const VALUE backref;
    const VALUE others;
};
struct vm_throw_data {
    VALUE flags;
    VALUE reserved;
    const VALUE throw_obj;
    const struct rb_control_frame_struct *catch_frame;
    VALUE throw_state;
};
struct vm_ifunc_argc {
    int min, max;
};
struct vm_ifunc {
    VALUE flags;
    VALUE reserved;
    VALUE (*func)();
    const void *data;
    struct vm_ifunc_argc argc;
};
struct vm_ifunc *rb_vm_ifunc_new(VALUE (*func)(), const void *data, int min_argc, int max_argc);
static inline struct vm_ifunc *
rb_vm_ifunc_proc_new(VALUE (*func)(), const void *data)
{
    return rb_vm_ifunc_new(func, data, 0, (-1));
}
typedef struct rb_imemo_tmpbuf_struct {
    VALUE flags;
    VALUE reserved;
    VALUE *ptr;
    struct rb_imemo_tmpbuf_struct *next;
    size_t cnt;
} rb_imemo_tmpbuf_t;
VALUE rb_imemo_tmpbuf_auto_free_pointer(void *buf);
VALUE rb_imemo_tmpbuf_auto_free_maybe_mark_buffer(void *buf, size_t cnt);
rb_imemo_tmpbuf_t *rb_imemo_tmpbuf_parser_heap(void *buf, rb_imemo_tmpbuf_t *old_heap, size_t cnt);
static inline VALUE
rb_imemo_tmpbuf_auto_free_pointer_new_from_an_RString(VALUE str)
{
    const void *src;
    void *dst;
    size_t len;
    do { rb_string_value(&(str)); rb_check_safe_obj(str);} while (0);
    len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    src = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    dst = ruby_xmalloc(len);
    memcpy(dst, src, len);
    return rb_imemo_tmpbuf_auto_free_pointer(dst);
}
void rb_strterm_mark(VALUE obj);
struct MEMO {
    VALUE flags;
    VALUE reserved;
    const VALUE v1;
    const VALUE v2;
    union {
 long cnt;
 long state;
 const VALUE value;
 VALUE (*func)();
    } u3;
};
enum {
    cmp_opt_Fixnum,
    cmp_opt_String,
    cmp_opt_Float,
    cmp_optimizable_count
};
struct cmp_opt_data {
    unsigned int opt_methods;
    unsigned int opt_inited;
};
struct rb_global_entry {
    struct rb_global_variable *var;
    ID id;
};
struct rb_global_entry *rb_global_entry(ID);
VALUE rb_gvar_get(struct rb_global_entry *);
VALUE rb_gvar_set(struct rb_global_entry *, VALUE);
VALUE rb_gvar_defined(struct rb_global_entry *);
VALUE rb_ary_last(int, const VALUE *, VALUE);
void rb_ary_set_len(VALUE, long);
void rb_ary_delete_same(VALUE, VALUE);
VALUE rb_ary_tmp_new_fill(long capa);
VALUE rb_ary_at(VALUE, VALUE);
VALUE rb_ary_aref1(VALUE ary, VALUE i);
VALUE rb_ary_aref2(VALUE ary, VALUE b, VALUE e);
size_t rb_ary_memsize(VALUE);
VALUE rb_to_array_type(VALUE obj);
VALUE rb_check_to_array(VALUE ary);
VALUE rb_ary_tmp_new_from_values(VALUE, long, const VALUE *);
VALUE rb_ary_behead(VALUE, long);
static inline VALUE
rb_ary_entry_internal(VALUE ary, long offset)
{
    long len = rb_array_len(ary);
    const VALUE *ptr = rb_array_const_ptr_transient(ary);
    if (len == 0) return ((VALUE)RUBY_Qnil);
    if (offset < 0) {
        offset += len;
        if (offset < 0) return ((VALUE)RUBY_Qnil);
    }
    else if (len <= offset) {
        return ((VALUE)RUBY_Qnil);
    }
    return ptr[offset];
}
extern const char ruby_digitmap[];
double rb_big_fdiv_double(VALUE x, VALUE y);
VALUE rb_big_uminus(VALUE x);
VALUE rb_big_hash(VALUE);
VALUE rb_big_odd_p(VALUE);
VALUE rb_big_even_p(VALUE);
size_t rb_big_size(VALUE);
VALUE rb_integer_float_cmp(VALUE x, VALUE y);
VALUE rb_integer_float_eq(VALUE x, VALUE y);
VALUE rb_cstr_parse_inum(const char *str, ssize_t len, char **endp, int base);
VALUE rb_str_convert_to_inum(VALUE str, int base, int badcheck, int raise_exception);
VALUE rb_big_comp(VALUE x);
VALUE rb_big_aref(VALUE x, VALUE y);
VALUE rb_big_abs(VALUE x);
VALUE rb_big_size_m(VALUE big);
VALUE rb_big_bit_length(VALUE big);
VALUE rb_big_remainder(VALUE x, VALUE y);
VALUE rb_big_gt(VALUE x, VALUE y);
VALUE rb_big_ge(VALUE x, VALUE y);
VALUE rb_big_lt(VALUE x, VALUE y);
VALUE rb_big_le(VALUE x, VALUE y);
VALUE rb_int_powm(int const argc, VALUE * const argv, VALUE const num);
VALUE rb_class_boot(VALUE);
VALUE rb_class_inherited(VALUE, VALUE);
VALUE rb_make_metaclass(VALUE, VALUE);
VALUE rb_include_class_new(VALUE, VALUE);
void rb_class_foreach_subclass(VALUE klass, void (*f)(VALUE, VALUE), VALUE);
void rb_class_detach_subclasses(VALUE);
void rb_class_detach_module_subclasses(VALUE);
void rb_class_remove_from_module_subclasses(VALUE);
VALUE rb_obj_methods(int argc, const VALUE *argv, VALUE obj);
VALUE rb_obj_protected_methods(int argc, const VALUE *argv, VALUE obj);
VALUE rb_obj_private_methods(int argc, const VALUE *argv, VALUE obj);
VALUE rb_obj_public_methods(int argc, const VALUE *argv, VALUE obj);
VALUE rb_special_singleton_class(VALUE);
VALUE rb_singleton_class_clone_and_attach(VALUE obj, VALUE attach);
VALUE rb_singleton_class_get(VALUE obj);
void Init_class_hierarchy(void);
int rb_class_has_methods(VALUE c);
void rb_undef_methods_from(VALUE klass, VALUE super);
VALUE rb_invcmp(VALUE, VALUE);
struct rb_block;
int rb_dvar_defined(ID, const struct rb_block *);
int rb_local_defined(ID, const struct rb_block *);
const char * rb_insns_name(int i);
VALUE rb_insns_name_array(void);
int rb_vm_insn_addr2insn(const void *);
VALUE rb_dbl_complex_new_polar_pi(double abs, double ang);
struct rb_thread_struct;
struct rb_fiber_struct;
VALUE rb_obj_is_fiber(VALUE);
void rb_fiber_reset_root_local_storage(struct rb_thread_struct *);
void ruby_register_rollback_func_for_ensure(VALUE (*ensure_func)(), VALUE (*rollback_func)());
void rb_fiber_init_mjit_cont(struct rb_fiber_struct *fiber);
void ruby_debug_printf(const char*, ...) __attribute__((format(printf, 1, 2)));
VALUE rb_dir_getwd_ospath(void);
void Init_enc(void);
void Init_ext(void);
ID rb_id_encoding(void);
int rb_encdb_replicate(const char *alias, const char *orig);
int rb_encdb_alias(const char *alias, const char *orig);
int rb_encdb_dummy(const char *name);
void rb_encdb_declare(const char *name);
void rb_enc_set_base(const char *name, const char *orig);
int rb_enc_set_dummy(int index);
void rb_encdb_set_unicode(int index);
__attribute__ ((__pure__)) int rb_data_is_encoding(VALUE obj);
extern VALUE rb_cArithSeq;
VALUE rb_f_send(int argc, VALUE *argv, VALUE recv);
VALUE rb_nmin_run(VALUE obj, VALUE num, int by, int rev, int ary);
extern VALUE rb_eEAGAIN;
extern VALUE rb_eEWOULDBLOCK;
extern VALUE rb_eEINPROGRESS;
void rb_report_bug_valist(VALUE file, int line, const char *fmt, va_list args);
VALUE rb_check_backtrace(VALUE);
__attribute__ ((__noreturn__)) void rb_async_bug_errno(const char *,int);
const char *rb_builtin_type_name(int t);
const char *rb_builtin_class_name(VALUE x);
void rb_sys_warn(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
void rb_syserr_warn(int err, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
void rb_sys_warning(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
void rb_syserr_warning(int err, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
VALUE rb_name_err_new(VALUE mesg, VALUE recv, VALUE method);
VALUE rb_nomethod_err_new(VALUE mesg, VALUE recv, VALUE method, VALUE args, int priv);
VALUE rb_key_err_new(VALUE mesg, VALUE recv, VALUE name);
__attribute__ ((__noreturn__)) void ruby_deprecated_internal_feature(const char *);
VALUE rb_warning_warn(VALUE mod, VALUE str);
VALUE rb_warning_string(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
VALUE rb_refinement_module_get_refined_class(VALUE module);
extern ID ruby_static_id_signo, ruby_static_id_status;
void rb_class_modify_check(VALUE);
VALUE rb_get_backtrace(VALUE info);
void rb_call_end_proc(VALUE data);
void rb_mark_end_proc(void);
extern const char ruby_null_device[];
VALUE rb_home_dir_of(VALUE user, VALUE result);
VALUE rb_default_home_dir(VALUE result);
VALUE rb_realpath_internal(VALUE basedir, VALUE path, int strict);
VALUE rb_check_realpath(VALUE basedir, VALUE path);
void rb_file_const(const char*, VALUE);
int rb_file_load_ok(const char *);
VALUE rb_file_expand_path_fast(VALUE, VALUE);
VALUE rb_file_expand_path_internal(VALUE, VALUE, int, int, VALUE);
VALUE rb_get_path_check_to_string(VALUE, int);
VALUE rb_get_path_check_convert(VALUE, VALUE, int);
VALUE rb_get_path_check(VALUE, int);
void Init_File(void);
int ruby_is_fd_loadable(int fd);
__attribute__ ((__noreturn__)) void rb_sys_fail_path_in(const char *func_name, VALUE path);
__attribute__ ((__noreturn__)) void rb_syserr_fail_path_in(const char *func_name, int err, VALUE path);
extern VALUE *ruby_initial_gc_stress_ptr;
extern int ruby_disable_gc;
void Init_heap(void);
void *ruby_mimmalloc(size_t size);
void ruby_mimfree(void *ptr);
void rb_objspace_set_event_hook(const rb_event_flag_t event);
void rb_gc_writebarrier_remember(VALUE obj);
void ruby_gc_set_params(int safe_level);
void rb_copy_wb_protected_attribute(VALUE dest, VALUE obj);
void *rb_aligned_malloc(size_t, size_t);
void rb_aligned_free(void *);
struct st_table *rb_hash_tbl_raw(VALUE hash);
VALUE rb_hash_new_with_size(st_index_t size);


VALUE rb_hash_new_compare_by_id(void);


VALUE rb_hash_has_key(VALUE hash, VALUE key);
VALUE rb_hash_default_value(VALUE hash, VALUE key);
VALUE rb_hash_set_default_proc(VALUE hash, VALUE proc);
long rb_objid_hash(st_index_t index);
long rb_dbl_long_hash(double d);
st_table *rb_init_identtable(void);
st_table *rb_init_identtable_with_size(st_index_t size);
VALUE rb_hash_compare_by_id_p(VALUE hash);
VALUE rb_to_hash_type(VALUE obj);
VALUE rb_hash_key_str(VALUE);
VALUE rb_hash_keys(VALUE hash);
VALUE rb_hash_values(VALUE hash);
VALUE rb_hash_rehash(VALUE hash);
VALUE rb_hash_resurrect(VALUE hash);
int rb_hash_add_new_element(VALUE hash, VALUE key, VALUE val);
VALUE rb_hash_set_pair(VALUE hash, VALUE pair);
void rb_hash_bulk_insert(long, const VALUE *, VALUE);
int rb_hash_stlike_lookup(VALUE hash, st_data_t key, st_data_t *pval);
int rb_hash_stlike_delete(VALUE hash, st_data_t *pkey, st_data_t *pval);
int rb_hash_stlike_foreach(VALUE hash, int (*func)(), st_data_t arg);
int rb_hash_stlike_update(VALUE hash, st_data_t key, st_update_callback_func func, st_data_t arg);
void rb_call_inits(void);
const char *ruby_get_inplace_mode(void);
void ruby_set_inplace_mode(const char *);
ssize_t rb_io_bufread(VALUE io, void *buf, size_t size);
void rb_stdio_set_default_encoding(void);
VALUE rb_io_flush_raw(VALUE, int);
int rb_stderr_tty_p(void);
void rb_io_fptr_finalize_internal(void *ptr);
VALUE rb_get_load_path(void);
VALUE rb_get_expanded_load_path(void);
int rb_require_internal(VALUE fname, int safe);
__attribute__ ((__noreturn__)) void rb_load_fail(VALUE, const char*);
extern const char ruby_exec_prefix[];
extern const char ruby_initial_load_paths[];
int Init_enc_set_filesystem_encoding(void);
VALUE rb_math_atan2(VALUE, VALUE);
VALUE rb_math_cos(VALUE);
VALUE rb_math_cosh(VALUE);
VALUE rb_math_exp(VALUE);
VALUE rb_math_hypot(VALUE, VALUE);
VALUE rb_math_log(int argc, const VALUE *argv);
VALUE rb_math_sin(VALUE);
VALUE rb_math_sinh(VALUE);
VALUE rb_math_sqrt(VALUE);
extern int mjit_enabled;
VALUE mjit_pause(int wait_p);
VALUE mjit_resume(void);
void mjit_finish(int close_handle_p);
void Init_newline(void);
enum ruby_num_rounding_mode {
    RUBY_NUM_ROUND_HALF_UP,
    RUBY_NUM_ROUND_HALF_EVEN,
    RUBY_NUM_ROUND_HALF_DOWN,
    RUBY_NUM_ROUND_DEFAULT = RUBY_NUM_ROUND_HALF_UP
};
int rb_num_to_uint(VALUE val, unsigned int *ret);
VALUE ruby_num_interval_step_size(VALUE from, VALUE to, VALUE step, int excl);
double ruby_float_step_size(double beg, double end, double unit, int excl);
int ruby_float_step(VALUE from, VALUE to, VALUE step, int excl, int allow_endless);
double ruby_float_mod(double x, double y);
int rb_num_negative_p(VALUE);
VALUE rb_int_succ(VALUE num);
VALUE rb_int_pred(VALUE num);
VALUE rb_int_uminus(VALUE num);
VALUE rb_float_uminus(VALUE num);
VALUE rb_int_plus(VALUE x, VALUE y);
VALUE rb_float_plus(VALUE x, VALUE y);
VALUE rb_int_minus(VALUE x, VALUE y);
VALUE rb_int_mul(VALUE x, VALUE y);
VALUE rb_float_mul(VALUE x, VALUE y);
VALUE rb_int_idiv(VALUE x, VALUE y);
VALUE rb_int_modulo(VALUE x, VALUE y);
VALUE rb_int_round(VALUE num, int ndigits, enum ruby_num_rounding_mode mode);
VALUE rb_int2str(VALUE num, int base);
VALUE rb_dbl_hash(double d);
VALUE rb_fix_plus(VALUE x, VALUE y);
VALUE rb_int_gt(VALUE x, VALUE y);
int rb_float_cmp(VALUE x, VALUE y);
VALUE rb_float_gt(VALUE x, VALUE y);
VALUE rb_int_ge(VALUE x, VALUE y);
enum ruby_num_rounding_mode rb_num_get_rounding_option(VALUE opts);
double rb_int_fdiv_double(VALUE x, VALUE y);
VALUE rb_int_pow(VALUE x, VALUE y);
VALUE rb_float_pow(VALUE x, VALUE y);
VALUE rb_int_cmp(VALUE x, VALUE y);
VALUE rb_int_equal(VALUE x, VALUE y);
VALUE rb_int_divmod(VALUE x, VALUE y);
VALUE rb_int_and(VALUE x, VALUE y);
VALUE rb_int_lshift(VALUE x, VALUE y);
VALUE rb_int_div(VALUE x, VALUE y);
VALUE rb_int_abs(VALUE num);
VALUE rb_int_odd_p(VALUE num);
int rb_int_positive_p(VALUE num);
int rb_int_negative_p(VALUE num);
VALUE rb_num_pow(VALUE x, VALUE y);
static inline VALUE
rb_num_compare_with_zero(VALUE num, ID mid)
{
    VALUE zero = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    VALUE r = rb_check_funcall(num, mid, 1, &zero);
    if (r == ((VALUE)RUBY_Qundef)) {
 rb_cmperr(num, zero);
    }
    return r;
}
static inline int
rb_num_positive_int_p(VALUE num)
{
    const ID mid = '>';
    if ((((int)(long)(num))&RUBY_FIXNUM_FLAG)) {
 if (rb_method_basic_definition_p(rb_cInteger, mid))
     return ((long)(num) > (long)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
    }
    else if (( ((RUBY_T_BIGNUM) == RUBY_T_FIXNUM) ? (((int)(long)(num))&RUBY_FIXNUM_FLAG) : ((RUBY_T_BIGNUM) == RUBY_T_TRUE) ? ((num) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_BIGNUM) == RUBY_T_FALSE) ? ((num) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_BIGNUM) == RUBY_T_NIL) ? ((num) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_BIGNUM) == RUBY_T_UNDEF) ? ((num) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_BIGNUM) == RUBY_T_SYMBOL) ? ((((VALUE)(num)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_BIGNUM) == RUBY_T_FLOAT) ? ( ((((int)(long)(num))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == (RUBY_T_BIGNUM)))) {
 if (rb_method_basic_definition_p(rb_cInteger, mid))
     return ((((struct RBasic*)(num))->flags & ((VALUE)((VALUE)RUBY_FL_USER1))) != 0);
    }
    return !(((VALUE)(rb_num_compare_with_zero(num, mid)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
}
static inline int
rb_num_negative_int_p(VALUE num)
{
    const ID mid = '<';
    if ((((int)(long)(num))&RUBY_FIXNUM_FLAG)) {
 if (rb_method_basic_definition_p(rb_cInteger, mid))
     return ((long)(num) < 0);
    }
    else if (( ((RUBY_T_BIGNUM) == RUBY_T_FIXNUM) ? (((int)(long)(num))&RUBY_FIXNUM_FLAG) : ((RUBY_T_BIGNUM) == RUBY_T_TRUE) ? ((num) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_BIGNUM) == RUBY_T_FALSE) ? ((num) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_BIGNUM) == RUBY_T_NIL) ? ((num) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_BIGNUM) == RUBY_T_UNDEF) ? ((num) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_BIGNUM) == RUBY_T_SYMBOL) ? ((((VALUE)(num)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_BIGNUM) == RUBY_T_FLOAT) ? ( ((((int)(long)(num))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == (RUBY_T_BIGNUM)))) {
 if (rb_method_basic_definition_p(rb_cInteger, mid))
     return (!((((struct RBasic*)(num))->flags & ((VALUE)((VALUE)RUBY_FL_USER1))) != 0));
    }
    return !(((VALUE)(rb_num_compare_with_zero(num, mid)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
}
VALUE rb_float_abs(VALUE flt);
VALUE rb_float_equal(VALUE x, VALUE y);
VALUE rb_float_eql(VALUE x, VALUE y);
VALUE rb_flo_div_flo(VALUE x, VALUE y);
static inline double
rb_float_flonum_value(VALUE v)
{
    if (v != (VALUE)0x8000000000000002) {
 union {
     double d;
     VALUE v;
 } t;
 VALUE b63 = (v >> 63);
 t.v = ((((2 - b63) | (v & ~(VALUE)0x03)) >> (3)) | (((2 - b63) | (v & ~(VALUE)0x03)) << ((sizeof((2 - b63) | (v & ~(VALUE)0x03)) * 8) - 3)));
 return t.d;
    }
    return 0.0;
}
static inline double
rb_float_noflonum_value(VALUE v)
{
    return ((struct RFloat *)v)->float_value;
}
static inline double
rb_float_value_inline(VALUE v)
{
    if (((((int)(long)(v))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)) {
 return rb_float_flonum_value(v);
    }
    return rb_float_noflonum_value(v);
}
static inline VALUE
rb_float_new_inline(double d)
{
    union {
 double d;
 VALUE v;
    } t;
    int bits;
    t.d = d;
    bits = (int)((VALUE)(t.v >> 60) & 0x7);
    if (t.v != 0x3000000000000000 &&
 !((bits-3) & ~0x01)) {
 return ((((t.v) << (3)) | ((t.v) >> ((sizeof(t.v) * 8) - 3))) & ~(VALUE)0x01) | 0x02;
    }
    else if (t.v == (VALUE)0) {
 return 0x8000000000000002;
    }
    return rb_float_new_in_heap(d);
}
void rb_obj_copy_ivar(VALUE dest, VALUE obj);
__attribute__ ((__const__)) VALUE rb_obj_equal(VALUE obj1, VALUE obj2);
__attribute__ ((__const__)) VALUE rb_obj_not(VALUE obj);
VALUE rb_class_search_ancestor(VALUE klass, VALUE super);
__attribute__ ((__noreturn__)) void rb_undefined_alloc(VALUE klass);
double rb_num_to_dbl(VALUE val);
VALUE rb_obj_dig(int argc, VALUE *argv, VALUE self, VALUE notfound);
VALUE rb_immutable_obj_clone(int, VALUE *, VALUE);
VALUE rb_obj_not_equal(VALUE obj1, VALUE obj2);
VALUE rb_convert_type_with_id(VALUE,int,const char*,ID);
VALUE rb_check_convert_type_with_id(VALUE,int,const char*,ID);
struct RBasicRaw {
    VALUE flags;
    VALUE klass;
};
VALUE rb_parser_get_yydebug(VALUE);
VALUE rb_parser_set_yydebug(VALUE, VALUE);


VALUE rb_parser_set_context(VALUE, const struct rb_block *, int);


void *rb_parser_load_file(VALUE parser, VALUE name);
int rb_is_const_name(VALUE name);
int rb_is_class_name(VALUE name);
int rb_is_global_name(VALUE name);
int rb_is_instance_name(VALUE name);
int rb_is_attrset_name(VALUE name);
int rb_is_local_name(VALUE name);
int rb_is_method_name(VALUE name);
int rb_is_junk_name(VALUE name);
__attribute__ ((__pure__)) int rb_is_const_sym(VALUE sym);
__attribute__ ((__pure__)) int rb_is_class_sym(VALUE sym);
__attribute__ ((__pure__)) int rb_is_global_sym(VALUE sym);
__attribute__ ((__pure__)) int rb_is_instance_sym(VALUE sym);
__attribute__ ((__pure__)) int rb_is_attrset_sym(VALUE sym);
__attribute__ ((__pure__)) int rb_is_local_sym(VALUE sym);
__attribute__ ((__pure__)) int rb_is_method_sym(VALUE sym);
__attribute__ ((__pure__)) int rb_is_junk_sym(VALUE sym);
ID rb_make_internal_id(void);
void rb_gc_free_dsymbol(VALUE);
ID rb_id_attrget(ID id);
VALUE rb_proc_location(VALUE self);
st_index_t rb_hash_proc(st_index_t hash, VALUE proc);
int rb_block_arity(void);
int rb_block_min_max_arity(int *max);
VALUE rb_func_proc_new(rb_block_call_func_t func, VALUE val);
VALUE rb_func_lambda_new(rb_block_call_func_t func, VALUE val, int min_argc, int max_argc);
VALUE rb_block_to_s(VALUE self, const struct rb_block *block, const char *additional_info);
struct waitpid_state;
struct rb_execarg {
    union {
        struct {
            VALUE shell_script;
        } sh;
        struct {
            VALUE command_name;
            VALUE command_abspath;
            VALUE argv_str;
            VALUE argv_buf;
        } cmd;
    } invoke;
    VALUE redirect_fds;
    VALUE envp_str;
    VALUE envp_buf;
    VALUE dup2_tmpbuf;
    unsigned use_shell : 1;
    unsigned pgroup_given : 1;
    unsigned umask_given : 1;
    unsigned unsetenv_others_given : 1;
    unsigned unsetenv_others_do : 1;
    unsigned close_others_given : 1;
    unsigned close_others_do : 1;
    unsigned chdir_given : 1;
    unsigned new_pgroup_given : 1;
    unsigned new_pgroup_flag : 1;
    unsigned uid_given : 1;
    unsigned gid_given : 1;
    unsigned exception : 1;
    struct waitpid_state *waitpid_state;
    pid_t pgroup_pgid;
    VALUE rlimit_limits;
    mode_t umask_mask;
    uid_t uid;
    gid_t gid;
    int close_others_maxhint;
    VALUE fd_dup2;
    VALUE fd_close;
    VALUE fd_open;
    VALUE fd_dup2_child;
    VALUE env_modification;
    VALUE path_env;
    VALUE chdir_dir;
};
static inline size_t
ARGVSTR2ARGC(VALUE argv_str)
{
    size_t i = 0;
    char *const *p = ((char **)((void *)(((const struct rb_imemo_tmpbuf_struct *)(argv_str))->ptr)) + 1);
    while (p[i++])
        ;
    return i - 1;
}
pid_t rb_fork_ruby(int *status);
void rb_last_status_clear(void);
VALUE rb_rational_canonicalize(VALUE x);
VALUE rb_rational_uminus(VALUE self);
VALUE rb_rational_plus(VALUE self, VALUE other);
VALUE rb_rational_mul(VALUE self, VALUE other);
VALUE rb_lcm(VALUE x, VALUE y);
VALUE rb_rational_reciprocal(VALUE x);
VALUE rb_cstr_to_rat(const char *, int);
VALUE rb_rational_abs(VALUE self);
VALUE rb_rational_cmp(VALUE self, VALUE other);
VALUE rb_rational_pow(VALUE self, VALUE other);
VALUE rb_numeric_quo(VALUE x, VALUE y);
VALUE rb_reg_compile(VALUE str, int options, const char *sourcefile, int sourceline);
VALUE rb_reg_check_preprocess(VALUE);
long rb_reg_search0(VALUE, VALUE, long, int, int);
VALUE rb_reg_match_p(VALUE re, VALUE str, long pos);
_Bool rb_reg_start_with_p(VALUE re, VALUE str);
void rb_backref_set_string(VALUE string, long pos, long len);
void rb_match_unbusy(VALUE);
int rb_match_count(VALUE match);
int rb_match_nth_defined(int nth, VALUE match);
VALUE rb_reg_new_ary(VALUE ary, int options);
extern int ruby_enable_coredump;
int rb_get_next_signal(void);
VALUE rb_fstring(VALUE);
VALUE rb_fstring_new(const char *ptr, long len);
VALUE rb_fstring_cstr(const char *str);
int rb_str_buf_cat_escaped_char(VALUE result, unsigned int c, int unicode_p);
int rb_str_symname_p(VALUE);
VALUE rb_str_quote_unprintable(VALUE);
VALUE rb_id_quote_unprintable(ID);
char *rb_str_fill_terminator(VALUE str, const int termlen);
void rb_str_change_terminator_length(VALUE str, const int oldtermlen, const int termlen);
VALUE rb_str_locktmp_ensure(VALUE str, VALUE (*func)(VALUE), VALUE arg);
VALUE rb_str_tmp_frozen_acquire(VALUE str);
void rb_str_tmp_frozen_release(VALUE str, VALUE tmp);
VALUE rb_str_chomp_string(VALUE str, VALUE chomp);
size_t rb_str_memsize(VALUE);
VALUE rb_sym_proc_call(ID mid, int argc, const VALUE *argv, VALUE passed_proc);
VALUE rb_sym_to_proc(VALUE sym);
char *rb_str_to_cstr(VALUE str);
VALUE rb_str_eql(VALUE str1, VALUE str2);
VALUE rb_obj_as_string_result(VALUE str, VALUE obj);
VALUE rb_sym_intern_ascii(const char *ptr, long len);
VALUE rb_sym_intern_ascii_cstr(const char *ptr);
VALUE rb_to_symbol_type(VALUE obj);
VALUE rb_struct_init_copy(VALUE copy, VALUE s);
VALUE rb_struct_lookup(VALUE s, VALUE idx);
VALUE rb_struct_s_keyword_init(VALUE klass);
struct timeval rb_time_timeval(VALUE);
VALUE rb_obj_is_mutex(VALUE obj);
VALUE rb_suppress_tracing(VALUE (*func)(VALUE), VALUE arg);
void rb_thread_execute_interrupts(VALUE th);
void rb_clear_trace_func(void);
VALUE rb_get_coverages(void);
int rb_get_coverage_mode(void);
VALUE rb_default_coverage(int);
VALUE rb_thread_shield_new(void);
VALUE rb_thread_shield_wait(VALUE self);
VALUE rb_thread_shield_release(VALUE self);
VALUE rb_thread_shield_destroy(VALUE self);
int rb_thread_to_be_killed(VALUE thread);
void rb_mutex_allow_trap(VALUE self, int val);
VALUE rb_uninterruptible(VALUE (*b_proc)(), VALUE data);
VALUE rb_mutex_owned_p(VALUE self);
extern VALUE rb_cEncodingConverter;
char *ruby_dtoa(double d_, int mode, int ndigits, int *decpt, int *sign, char **rve);
char *ruby_hdtoa(double d, const char *xdigs, int ndigits, int *decpt, int *sign, char **rve);
void rb_gc_mark_global_tbl(void);
size_t rb_generic_ivar_memsize(VALUE);
VALUE rb_search_class_path(VALUE);
VALUE rb_attr_delete(VALUE, ID);
VALUE rb_ivar_lookup(VALUE obj, ID id, VALUE undef);
void rb_autoload_str(VALUE mod, ID id, VALUE file);
void rb_deprecate_constant(VALUE mod, const char *name);
__attribute__ ((__noreturn__)) VALUE rb_mod_const_missing(VALUE,VALUE);
rb_gvar_getter_t *rb_gvar_getter_function_of(const struct rb_global_entry *);
rb_gvar_setter_t *rb_gvar_setter_function_of(const struct rb_global_entry *);
_Bool rb_gvar_is_traced(const struct rb_global_entry *);
rb_serial_t rb_next_class_serial(void);
VALUE rb_obj_is_thread(VALUE obj);
void rb_vm_mark(void *ptr);
void Init_BareVM(void);
void Init_vm_objects(void);
__attribute__ ((__pure__)) VALUE rb_vm_top_self(void);
void rb_thread_recycle_stack_release(VALUE *);
VALUE *rb_thread_recycle_stack(size_t);
void rb_vm_change_state(void);
void rb_vm_inc_const_missing_count(void);
const void **rb_vm_get_insns_address_table(void);
VALUE rb_source_location(int *pline);
const char *rb_source_location_cstr(int *pline);
static void rb_vm_pop_cfunc_frame(void);
int rb_vm_add_root_module(ID id, VALUE module);
void rb_vm_check_redefinition_by_prepend(VALUE klass);
VALUE rb_yield_refine_block(VALUE refinement, VALUE refinements);
static VALUE ruby_vm_special_exception_copy(VALUE);
__attribute__ ((__pure__)) st_table *rb_vm_fstring_table(void);
void rb_print_backtrace(void);
void Init_vm_eval(void);
VALUE rb_current_realfilepath(void);
VALUE rb_check_block_call(VALUE, ID, int, const VALUE *, rb_block_call_func_t, VALUE);
typedef void rb_check_funcall_hook(int, VALUE, ID, int, const VALUE *, VALUE);
VALUE rb_check_funcall_with_hook(VALUE recv, ID mid, int argc, const VALUE *argv,
     rb_check_funcall_hook *hook, VALUE arg);
const char *rb_type_str(enum ruby_value_type type);
VALUE rb_check_funcall_default(VALUE, ID, int, const VALUE *, VALUE);
VALUE rb_yield_1(VALUE val);
VALUE rb_yield_force_blockarg(VALUE values);
VALUE rb_lambda_call(VALUE obj, ID mid, int argc, const VALUE *argv,
       rb_block_call_func_t bl_proc, int min_argc, int max_argc,
       VALUE data2);
VALUE rb_equal_opt(VALUE obj1, VALUE obj2);static inline 
VALUE rb_eql_opt(VALUE obj1, VALUE obj2);static inline 
void Init_vm_stack_canary(void);
void Init_eval_method(void);
int rb_method_defined_by(VALUE obj, ID mid, VALUE (*cfunc)());
void Init_prelude(void);
void Init_vm_backtrace(void);
VALUE rb_vm_thread_backtrace(int argc, const VALUE *argv, VALUE thval);
VALUE rb_vm_thread_backtrace_locations(int argc, const VALUE *argv, VALUE thval);
VALUE rb_make_backtrace(void);
void rb_backtrace_print_as_bugreport(void);
int rb_backtrace_p(VALUE obj);
VALUE rb_backtrace_to_str_ary(VALUE obj);
VALUE rb_backtrace_to_location_ary(VALUE obj);
void rb_backtrace_each(VALUE (*iter)(VALUE recv, VALUE str), VALUE output);


const char *rb_objspace_data_type_name(VALUE obj);
VALUE rb_thread_io_blocking_region(rb_blocking_function_t *func, void *data1, int fd);
void rb_ary_detransient(VALUE a);
VALUE *rb_ary_ptr_use_start(VALUE ary);
void rb_ary_ptr_use_end(VALUE ary);
VALUE rb_big_mul_normal(VALUE x, VALUE y);
VALUE rb_big_mul_balance(VALUE x, VALUE y);
VALUE rb_big_mul_karatsuba(VALUE x, VALUE y);
VALUE rb_big_mul_toom3(VALUE x, VALUE y);
VALUE rb_big_sq_fast(VALUE x);
VALUE rb_big_divrem_normal(VALUE x, VALUE y);
VALUE rb_big2str_poweroftwo(VALUE x, int base);
VALUE rb_big2str_generic(VALUE x, int base);
VALUE rb_str2big_poweroftwo(VALUE arg, int base, int badcheck);
VALUE rb_str2big_normal(VALUE arg, int base, int badcheck);
VALUE rb_str2big_karatsuba(VALUE arg, int base, int badcheck);
VALUE rb_big_mul_gmp(VALUE x, VALUE y);
VALUE rb_big_divrem_gmp(VALUE x, VALUE y);
VALUE rb_big2str_gmp(VALUE x, int base);
VALUE rb_str2big_gmp(VALUE arg, int base, int badcheck);
enum rb_int_parse_flags {
    RB_INT_PARSE_SIGN = 0x01,
    RB_INT_PARSE_UNDERSCORE = 0x02,
    RB_INT_PARSE_PREFIX = 0x04,
    RB_INT_PARSE_ALL = 0x07,
    RB_INT_PARSE_DEFAULT = 0x07
};
VALUE rb_int_parse_cstr(const char *str, ssize_t len, char **endp, size_t *ndigits, int base, int flags);
VALUE rb_arith_seq_new(VALUE obj, VALUE meth, int argc, VALUE const *argv,
                       rb_enumerator_size_func *size_fn,
                       VALUE beg, VALUE end, VALUE step, int excl);
int rb_bug_reporter_add(void (*func)(FILE *, void *), void *data);
__attribute__ ((__noreturn__)) void rb_unexpected_type(VALUE,int);
static inline int
rb_typeddata_is_instance_of_inline(VALUE obj, const rb_data_type_t *data_type)
{
    return ( ((RUBY_T_DATA) == RUBY_T_FIXNUM) ? (((int)(long)(obj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_DATA) == RUBY_T_TRUE) ? ((obj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_DATA) == RUBY_T_FALSE) ? ((obj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_DATA) == RUBY_T_NIL) ? ((obj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_DATA) == RUBY_T_UNDEF) ? ((obj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_DATA) == RUBY_T_SYMBOL) ? ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_DATA) == RUBY_T_FLOAT) ? ( ((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_DATA))) && (((struct RTypedData*)(obj))->typed_flag == 1) && ((((struct RTypedData*)(obj))->type) == data_type);
}
VALUE rb_hash_delete_entry(VALUE hash, VALUE key);
VALUE rb_ident_hash_new(void);
void rb_maygvl_fd_fix_cloexec(int fd);
int rb_gc_for_fd(int err);
void rb_write_error_str(VALUE mesg);
VALUE rb_int_positive_pow(long x, unsigned long y);
int rb_exec_async_signal_safe(const struct rb_execarg *e, char *errmsg, size_t errmsg_buflen);
pid_t rb_fork_async_signal_safe(int *status, int (*chfunc)(void*, char *, size_t), void *charg, VALUE fds, char *errmsg, size_t errmsg_buflen);
VALUE rb_execarg_new(int argc, const VALUE *argv, int accept_shell, int allow_exc_opt);
struct rb_execarg *rb_execarg_get(VALUE execarg_obj);
int rb_execarg_addopt(VALUE execarg_obj, VALUE key, VALUE val);
void rb_execarg_parent_start(VALUE execarg_obj);
void rb_execarg_parent_end(VALUE execarg_obj);
int rb_execarg_run_options(const struct rb_execarg *e, struct rb_execarg *s, char* errmsg, size_t errmsg_buflen);
VALUE rb_execarg_extract_options(VALUE execarg_obj, VALUE opthash);
void rb_execarg_setenv(VALUE execarg_obj, VALUE env);
VALUE rb_gcd(VALUE x, VALUE y);
VALUE rb_gcd_normal(VALUE self, VALUE other);
VALUE rb_gcd_gmp(VALUE x, VALUE y);
int rb_grantpt(int fd);
VALUE rb_str_upto_each(VALUE, VALUE, int, int (*each)(VALUE, VALUE), VALUE);
VALUE rb_str_upto_endless_each(VALUE, int (*each)(VALUE, VALUE), VALUE);
int ruby_thread_has_gvl_p(void);
void ruby_reset_leap_second_info(void);
extern const signed char ruby_digit36_to_number_table[];
extern const char ruby_hexdigits[];
extern unsigned long ruby_scan_digits(const char *str, ssize_t len, int base, size_t *retlen, int *overflow);
void rb_mark_generic_ivar(VALUE);
VALUE rb_const_missing(VALUE klass, VALUE name);
int rb_class_ivar_set(VALUE klass, ID vid, VALUE value);
st_table *rb_st_copy(VALUE obj, struct st_table *orig_tbl);
VALUE rb_wb_protected_newobj_of(VALUE, VALUE);
VALUE rb_wb_unprotected_newobj_of(VALUE, VALUE);
size_t rb_obj_memsize_of(VALUE);
void rb_gc_verify_internal_consistency(void);
size_t rb_obj_gc_flags(VALUE, ID[], size_t);
void rb_gc_mark_values(long n, const VALUE *values);
VALUE rb_imemo_new(enum imemo_type type, VALUE v1, VALUE v2, VALUE v3, VALUE v0);
int ruby_fill_random_bytes(void *, size_t, int);




typedef struct rb_vm_struct ruby_vm_t;
int ruby_vm_destruct(ruby_vm_t *vm);
void ruby_vm_at_exit(void(*func)(ruby_vm_t *));


const char *rb_obj_info(VALUE obj);
const char *rb_raw_obj_info(char *buff, const int buff_size, VALUE obj);
void rb_obj_info_dump(VALUE obj);
struct rb_thread_struct;


size_t rb_objspace_data_type_memsize(VALUE obj);
void rb_objspace_reachable_objects_from(VALUE obj, void (func)(VALUE, void *), void *data);
void rb_objspace_reachable_objects_from_root(void (func)(const char *category, VALUE, void *), void *data);
int rb_objspace_markable_object_p(VALUE obj);
int rb_objspace_internal_object_p(VALUE obj);
int rb_objspace_marked_object_p(VALUE obj);
int rb_objspace_garbage_object_p(VALUE obj);
void rb_objspace_each_objects(
    int (*callback)(void *start, void *end, size_t stride, void *data),
    void *data);
void rb_objspace_each_objects_without_setup(
    int (*callback)(void *, void *, size_t, void *),
    void *data);


__attribute__ ((__noreturn__)) void rb_assert_failure(const char *, int, const char *, const char *);
enum node_type {
    NODE_SCOPE,
    NODE_BLOCK,
    NODE_IF,
    NODE_UNLESS,
    NODE_CASE,
    NODE_CASE2,
    NODE_WHEN,
    NODE_WHILE,
    NODE_UNTIL,
    NODE_ITER,
    NODE_FOR,
    NODE_FOR_MASGN,
    NODE_BREAK,
    NODE_NEXT,
    NODE_REDO,
    NODE_RETRY,
    NODE_BEGIN,
    NODE_RESCUE,
    NODE_RESBODY,
    NODE_ENSURE,
    NODE_AND,
    NODE_OR,
    NODE_MASGN,
    NODE_LASGN,
    NODE_DASGN,
    NODE_DASGN_CURR,
    NODE_GASGN,
    NODE_IASGN,
    NODE_CDECL,
    NODE_CVASGN,
    NODE_OP_ASGN1,
    NODE_OP_ASGN2,
    NODE_OP_ASGN_AND,
    NODE_OP_ASGN_OR,
    NODE_OP_CDECL,
    NODE_CALL,
    NODE_OPCALL,
    NODE_FCALL,
    NODE_VCALL,
    NODE_QCALL,
    NODE_SUPER,
    NODE_ZSUPER,
    NODE_ARRAY,
    NODE_ZARRAY,
    NODE_VALUES,
    NODE_HASH,
    NODE_RETURN,
    NODE_YIELD,
    NODE_LVAR,
    NODE_DVAR,
    NODE_GVAR,
    NODE_IVAR,
    NODE_CONST,
    NODE_CVAR,
    NODE_NTH_REF,
    NODE_BACK_REF,
    NODE_MATCH,
    NODE_MATCH2,
    NODE_MATCH3,
    NODE_LIT,
    NODE_STR,
    NODE_DSTR,
    NODE_XSTR,
    NODE_DXSTR,
    NODE_EVSTR,
    NODE_DREGX,
    NODE_ONCE,
    NODE_ARGS,
    NODE_ARGS_AUX,
    NODE_OPT_ARG,
    NODE_KW_ARG,
    NODE_POSTARG,
    NODE_ARGSCAT,
    NODE_ARGSPUSH,
    NODE_SPLAT,
    NODE_BLOCK_PASS,
    NODE_DEFN,
    NODE_DEFS,
    NODE_ALIAS,
    NODE_VALIAS,
    NODE_UNDEF,
    NODE_CLASS,
    NODE_MODULE,
    NODE_SCLASS,
    NODE_COLON2,
    NODE_COLON3,
    NODE_DOT2,
    NODE_DOT3,
    NODE_FLIP2,
    NODE_FLIP3,
    NODE_SELF,
    NODE_NIL,
    NODE_TRUE,
    NODE_FALSE,
    NODE_ERRINFO,
    NODE_DEFINED,
    NODE_POSTEXE,
    NODE_DSYM,
    NODE_ATTRASGN,
    NODE_LAMBDA,
    NODE_LAST
};
typedef struct rb_code_position_struct {
    int lineno;
    int column;
} rb_code_position_t;
typedef struct rb_code_location_struct {
    rb_code_position_t beg_pos;
    rb_code_position_t end_pos;
} rb_code_location_t;
static inline rb_code_location_t code_loc_gen(rb_code_location_t *loc1, rb_code_location_t *loc2)
{
    rb_code_location_t loc;
    loc.beg_pos = loc1->beg_pos;
    loc.end_pos = loc2->end_pos;
    return loc;
}
typedef struct RNode {
    VALUE flags;
    union {
 struct RNode *node;
 ID id;
 VALUE value;
 ID *tbl;
    } u1;
    union {
 struct RNode *node;
 ID id;
 long argc;
 VALUE value;
    } u2;
    union {
 struct RNode *node;
 ID id;
 long state;
 struct rb_global_entry *entry;
 struct rb_args_info *args;
 VALUE value;
    } u3;
    rb_code_location_t nd_loc;
    int node_id;
} NODE;


typedef struct node_buffer_struct node_buffer_t;
typedef struct rb_ast_body_struct {
    const NODE *root;
    VALUE compile_option;
    int line_count;
} rb_ast_body_t;
typedef struct rb_ast_struct {
    VALUE flags;
    node_buffer_t *node_buffer;
    rb_ast_body_t body;
} rb_ast_t;
rb_ast_t *rb_ast_new(void);
void rb_ast_mark(rb_ast_t*);
void rb_ast_dispose(rb_ast_t*);
void rb_ast_free(rb_ast_t*);
void rb_ast_add_mark_object(rb_ast_t*, VALUE);
NODE *rb_ast_newnode(rb_ast_t*);
void rb_ast_delete_node(rb_ast_t*, NODE *n);
VALUE rb_parser_new(void);
VALUE rb_parser_end_seen_p(VALUE);
VALUE rb_parser_encoding(VALUE);
VALUE rb_parser_get_yydebug(VALUE);
VALUE rb_parser_set_yydebug(VALUE, VALUE);
VALUE rb_parser_dump_tree(const NODE *node, int comment);
void rb_parser_set_options(VALUE, int, int, int, int);
rb_ast_t *rb_parser_compile_cstr(VALUE, const char*, const char*, int, int);
rb_ast_t *rb_parser_compile_string(VALUE, const char*, VALUE, int);
rb_ast_t *rb_parser_compile_file(VALUE, const char*, VALUE, int);
rb_ast_t *rb_parser_compile_string_path(VALUE vparser, VALUE fname, VALUE src, int line);
rb_ast_t *rb_parser_compile_file_path(VALUE vparser, VALUE fname, VALUE input, int line);
rb_ast_t *rb_parser_compile_generic(VALUE vparser, VALUE (*lex_gets)(VALUE, int), VALUE fname, VALUE input, int line);
rb_ast_t *rb_compile_cstr(const char*, const char*, int, int);
rb_ast_t *rb_compile_string(const char*, VALUE, int);
rb_ast_t *rb_compile_file(const char*, VALUE, int);
void rb_node_init(NODE *n, enum node_type type, VALUE a0, VALUE a1, VALUE a2);
const struct kwtable *rb_reserved_word(const char *, unsigned int);
struct rb_args_info {
    NODE *pre_init;
    NODE *post_init;
    int pre_args_num;
    int post_args_num;
    ID first_post_arg;
    ID rest_arg;
    ID block_arg;
    NODE *kw_args;
    NODE *kw_rest_arg;
    NODE *opt_args;
};
struct parser_params;
void *rb_parser_malloc(struct parser_params *, size_t);
void *rb_parser_realloc(struct parser_params *, void *, size_t);
void *rb_parser_calloc(struct parser_params *, size_t, size_t);
void rb_parser_free(struct parser_params *, void *);
void rb_parser_printf(struct parser_params *parser, const char *fmt, ...) __attribute__((format(printf, 2, 3)));


enum ruby_id_types {
    RUBY_ID_STATIC_SYM = 0x01,
    RUBY_ID_LOCAL = 0x00,
    RUBY_ID_INSTANCE = (0x01<<1),
    RUBY_ID_GLOBAL = (0x03<<1),
    RUBY_ID_ATTRSET = (0x04<<1),
    RUBY_ID_CONST = (0x05<<1),
    RUBY_ID_CLASS = (0x06<<1),
    RUBY_ID_JUNK = (0x07<<1),
    RUBY_ID_INTERNAL = RUBY_ID_JUNK,
    RUBY_ID_SCOPE_SHIFT = 4,
    RUBY_ID_SCOPE_MASK = (~(~0U<<(RUBY_ID_SCOPE_SHIFT-1))<<1)
};
enum ruby_method_ids {
    idDot2 = 128,
    idDot3 = 129,
    idUPlus = 130,
    idUMinus = 131,
    idPow = 132,
    idCmp = 133,
    idPLUS = '+',
    idMINUS = '-',
    idMULT = '*',
    idDIV = '/',
    idMOD = '%',
    idLTLT = 134,
    idGTGT = 135,
    idLT = '<',
    idLE = 136,
    idGT = '>',
    idGE = 137,
    idEq = 138,
    idEqq = 139,
    idNeq = 140,
    idNot = '!',
    idAnd = '&',
    idOr = '|',
    idBackquote = '`',
    idEqTilde = 141,
    idNeqTilde = 142,
    idAREF = 143,
    idASET = 144,
    idCOLON2 = 145,
    idANDOP = 146,
    idOROP = 147,
    idANDDOT = 148,
    tPRESERVED_ID_BEGIN = 148,
    idNULL,
    idEmptyP,
    idEqlP,
    idRespond_to,
    idRespond_to_missing,
    idIFUNC,
    idCFUNC,
    id_core_set_method_alias,
    id_core_set_variable_alias,
    id_core_undef_method,
    id_core_define_method,
    id_core_define_singleton_method,
    id_core_set_postexe,
    id_core_hash_merge_ptr,
    id_core_hash_merge_kwd,
    id_debug_created_info,
    tPRESERVED_ID_END,
    tTOKEN_LOCAL_BEGIN = tPRESERVED_ID_END-1,
    tMax,
    tMin,
    tFreeze,
    tInspect,
    tIntern,
    tObject_id,
    tConst_missing,
    tMethodMissing,
    tMethod_added,
    tSingleton_method_added,
    tMethod_removed,
    tSingleton_method_removed,
    tMethod_undefined,
    tSingleton_method_undefined,
    tLength,
    tSize,
    tGets,
    tSucc,
    tEach,
    tProc,
    tLambda,
    tSend,
    t__send__,
    t__attached__,
    tInitialize,
    tInitialize_copy,
    tInitialize_clone,
    tInitialize_dup,
    tTo_int,
    tTo_ary,
    tTo_str,
    tTo_sym,
    tTo_hash,
    tTo_proc,
    tTo_io,
    tTo_a,
    tTo_s,
    tTo_i,
    tTo_f,
    tTo_r,
    tBt,
    tBt_locations,
    tCall,
    tMesg,
    tException,
    tNOT,
    tAND,
    tOR,
    tUScore,
    tTOKEN_LOCAL_END,
    tTOKEN_INSTANCE_BEGIN = tTOKEN_LOCAL_END-1,
    tTOKEN_INSTANCE_END,
    tTOKEN_GLOBAL_BEGIN = tTOKEN_INSTANCE_END-1,
    tLASTLINE,
    tBACKREF,
    tTOKEN_GLOBAL_END,
    tTOKEN_CONST_BEGIN = tTOKEN_GLOBAL_END-1,
    tTOKEN_CONST_END,
    tTOKEN_CLASS_BEGIN = tTOKEN_CONST_END-1,
    tTOKEN_CLASS_END,
    tTOKEN_ATTRSET_BEGIN = tTOKEN_CLASS_END-1,
    tTOKEN_ATTRSET_END,
    tNEXT_ID = tTOKEN_ATTRSET_END,
    idMax = ((tMax<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMin = ((tMin<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idFreeze = ((tFreeze<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInspect = ((tInspect<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idIntern = ((tIntern<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idObject_id = ((tObject_id<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idConst_missing = ((tConst_missing<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMethodMissing = ((tMethodMissing<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMethod_added = ((tMethod_added<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSingleton_method_added = ((tSingleton_method_added<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMethod_removed = ((tMethod_removed<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSingleton_method_removed = ((tSingleton_method_removed<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMethod_undefined = ((tMethod_undefined<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSingleton_method_undefined = ((tSingleton_method_undefined<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idLength = ((tLength<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSize = ((tSize<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idGets = ((tGets<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSucc = ((tSucc<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idEach = ((tEach<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idProc = ((tProc<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idLambda = ((tLambda<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSend = ((tSend<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    id__send__ = ((t__send__<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    id__attached__ = ((t__attached__<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInitialize = ((tInitialize<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInitialize_copy = ((tInitialize_copy<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInitialize_clone = ((tInitialize_clone<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInitialize_dup = ((tInitialize_dup<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_int = ((tTo_int<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_ary = ((tTo_ary<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_str = ((tTo_str<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_sym = ((tTo_sym<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_hash = ((tTo_hash<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_proc = ((tTo_proc<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_io = ((tTo_io<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_a = ((tTo_a<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_s = ((tTo_s<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_i = ((tTo_i<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_f = ((tTo_f<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_r = ((tTo_r<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idBt = ((tBt<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idBt_locations = ((tBt_locations<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idCall = ((tCall<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMesg = ((tMesg<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idException = ((tException<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idNOT = ((tNOT<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idAND = ((tAND<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idOR = ((tOR<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idUScore = ((tUScore<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idLASTLINE = ((tLASTLINE<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_GLOBAL|RUBY_ID_STATIC_SYM),
    idBACKREF = ((tBACKREF<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_GLOBAL|RUBY_ID_STATIC_SYM),
    tLAST_OP_ID = tPRESERVED_ID_END-1,
    idLAST_OP_ID = tLAST_OP_ID >> RUBY_ID_SCOPE_SHIFT
};
typedef enum {
    METHOD_VISI_UNDEF = 0x00,
    METHOD_VISI_PUBLIC = 0x01,
    METHOD_VISI_PRIVATE = 0x02,
    METHOD_VISI_PROTECTED = 0x03,
    METHOD_VISI_MASK = 0x03
} rb_method_visibility_t;
typedef struct rb_scope_visi_struct {
    rb_method_visibility_t method_visi : 3;
    unsigned int module_func : 1;
} rb_scope_visibility_t;
typedef struct rb_cref_struct {
    VALUE flags;
    const VALUE refinements;
    const VALUE klass;
    struct rb_cref_struct * const next;
    const rb_scope_visibility_t scope_visi;
} rb_cref_t;
typedef struct rb_method_entry_struct {
    VALUE flags;
    const VALUE defined_class;
    struct rb_method_definition_struct * const def;
    ID called_id;
    const VALUE owner;
} rb_method_entry_t;
typedef struct rb_callable_method_entry_struct {
    VALUE flags;
    const VALUE defined_class;
    struct rb_method_definition_struct * const def;
    ID called_id;
    const VALUE owner;
} rb_callable_method_entry_t;
static inline void
METHOD_ENTRY_VISI_SET(rb_method_entry_t *me, rb_method_visibility_t visi)
{
    ((void)0);
    me->flags = (me->flags & ~(((VALUE)RUBY_FL_USER4) | ((VALUE)RUBY_FL_USER5))) | (visi << ((((VALUE)RUBY_FL_USHIFT) + 4)+0));
}
static inline void
METHOD_ENTRY_BASIC_SET(rb_method_entry_t *me, unsigned int basic)
{
    ((void)0);
    me->flags = (me->flags & ~(((VALUE)RUBY_FL_USER6) )) | (basic << ((((VALUE)RUBY_FL_USHIFT) + 4)+2));
}
static inline void
METHOD_ENTRY_FLAGS_SET(rb_method_entry_t *me, rb_method_visibility_t visi, unsigned int basic)
{
    ((void)0);
    ((void)0);
    me->flags =
      (me->flags & ~(((VALUE)RUBY_FL_USER4)|((VALUE)RUBY_FL_USER5)|((VALUE)RUBY_FL_USER6))) |
 ((visi << ((((VALUE)RUBY_FL_USHIFT) + 4)+0)) | (basic << ((((VALUE)RUBY_FL_USHIFT) + 4)+2)));
}
static inline void
METHOD_ENTRY_FLAGS_COPY(rb_method_entry_t *dst, const rb_method_entry_t *src)
{
    dst->flags =
      (dst->flags & ~(((VALUE)RUBY_FL_USER4)|((VALUE)RUBY_FL_USER5)|((VALUE)RUBY_FL_USER6))) |
 (src->flags & (((VALUE)RUBY_FL_USER4)|((VALUE)RUBY_FL_USER5)|((VALUE)RUBY_FL_USER6)));
}
typedef enum {
    VM_METHOD_TYPE_ISEQ,
    VM_METHOD_TYPE_CFUNC,
    VM_METHOD_TYPE_ATTRSET,
    VM_METHOD_TYPE_IVAR,
    VM_METHOD_TYPE_BMETHOD,
    VM_METHOD_TYPE_ZSUPER,
    VM_METHOD_TYPE_ALIAS,
    VM_METHOD_TYPE_UNDEF,
    VM_METHOD_TYPE_NOTIMPLEMENTED,
    VM_METHOD_TYPE_OPTIMIZED,
    VM_METHOD_TYPE_MISSING,
    VM_METHOD_TYPE_REFINED,
   
} rb_method_type_t;
typedef struct rb_iseq_struct rb_iseq_t;
typedef struct rb_method_iseq_struct {
    const rb_iseq_t * const iseqptr;
    rb_cref_t * const cref;
} rb_method_iseq_t;
typedef struct rb_method_cfunc_struct {
    VALUE (*func)();
    VALUE (*invoker)(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv);
    int argc;
} rb_method_cfunc_t;
typedef struct rb_method_attr_struct {
    ID id;
    const VALUE location;
} rb_method_attr_t;
typedef struct rb_method_alias_struct {
    const struct rb_method_entry_struct * const original_me;
} rb_method_alias_t;
typedef struct rb_method_refined_struct {
    const struct rb_method_entry_struct * const orig_me;
    const VALUE owner;
} rb_method_refined_t;
typedef struct rb_method_bmethod_struct {
    const VALUE proc;
    struct rb_hook_list_struct *hooks;
} rb_method_bmethod_t;
enum method_optimized_type {
    OPTIMIZED_METHOD_TYPE_SEND,
    OPTIMIZED_METHOD_TYPE_CALL,
    OPTIMIZED_METHOD_TYPE_BLOCK_CALL,
    OPTIMIZED_METHOD_TYPE__MAX
};
struct rb_method_definition_struct { rb_method_type_t type : 4; int alias_count : 28; int complemented_count : 28; union { rb_method_iseq_t iseq; rb_method_cfunc_t cfunc; rb_method_attr_t attr; rb_method_alias_t alias; rb_method_refined_t refined; rb_method_bmethod_t bmethod; enum method_optimized_type optimize_type; } body; ID original_id; } __attribute__((packed));
typedef struct rb_method_definition_struct rb_method_definition_t;
void rb_add_method_cfunc(VALUE klass, ID mid, VALUE (*func)(), int argc, rb_method_visibility_t visi);
void rb_add_method_iseq(VALUE klass, ID mid, const rb_iseq_t *iseq, rb_cref_t *cref, rb_method_visibility_t visi);
void rb_add_refined_method_entry(VALUE refined_class, ID mid);
rb_method_entry_t *rb_add_method(VALUE klass, ID mid, rb_method_type_t type, void *option, rb_method_visibility_t visi);
rb_method_entry_t *rb_method_entry_set(VALUE klass, ID mid, const rb_method_entry_t *, rb_method_visibility_t noex);
rb_method_entry_t *rb_method_entry_create(ID called_id, VALUE klass, rb_method_visibility_t visi, const rb_method_definition_t *def);
const rb_method_entry_t *rb_method_entry_at(VALUE obj, ID id);
const rb_method_entry_t *rb_method_entry(VALUE klass, ID id);
const rb_method_entry_t *rb_method_entry_without_refinements(VALUE klass, ID id, VALUE *defined_class);
const rb_method_entry_t *rb_resolve_refined_method(VALUE refinements, const rb_method_entry_t *me);


const rb_callable_method_entry_t *rb_resolve_refined_method_callable(VALUE refinements, const rb_callable_method_entry_t *me);
const rb_method_entry_t *rb_resolve_me_location(const rb_method_entry_t *, VALUE[5]);


const rb_callable_method_entry_t *rb_callable_method_entry(VALUE klass, ID id);
const rb_callable_method_entry_t *rb_callable_method_entry_with_refinements(VALUE klass, ID id, VALUE *defined_class);
const rb_callable_method_entry_t *rb_callable_method_entry_without_refinements(VALUE klass, ID id, VALUE *defined_class);
int rb_method_entry_arity(const rb_method_entry_t *me);
int rb_method_entry_eq(const rb_method_entry_t *m1, const rb_method_entry_t *m2);
st_index_t rb_hash_method_entry(st_index_t hash, const rb_method_entry_t *me);
VALUE rb_method_entry_location(const rb_method_entry_t *me);
VALUE rb_mod_method_location(VALUE mod, ID id);
VALUE rb_obj_method_location(VALUE obj, ID id);
void rb_free_method_entry(const rb_method_entry_t *me);
void rb_sweep_method_entry(void *vm);
const rb_method_entry_t *rb_method_entry_clone(const rb_method_entry_t *me);
const rb_callable_method_entry_t *rb_method_entry_complement_defined_class(const rb_method_entry_t *src_me, ID called_id, VALUE defined_class);
void rb_method_entry_copy(rb_method_entry_t *dst, const rb_method_entry_t *src);
void rb_scope_visibility_set(rb_method_visibility_t);
VALUE rb_unnamed_parameters(int arity);
typedef unsigned int rb_atomic_t;

extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

static inline char *container_of_or_null_(void *member_ptr, size_t offset)
{
 return member_ptr ? (char *)member_ptr - offset : ((void *)0);
}
struct list_node
{
 struct list_node *next, *prev;
};
struct list_head
{
 struct list_node n;
};
static inline void list_head_init(struct list_head *h)
{
 h->n.next = h->n.prev = &h->n;
}
static inline void list_node_init(struct list_node *n)
{
 n->next = n->prev = n;
}
static inline void list_add_after_(struct list_head *h,
       struct list_node *p,
       struct list_node *n,
       const char *abortstr)
{
 n->next = p->next;
 n->prev = p;
 p->next->prev = n;
 p->next = n;
 (void)((void)abortstr, h);
}
static inline void list_add_(struct list_head *h,
        struct list_node *n,
        const char *abortstr)
{
 list_add_after_(h, &h->n, n, abortstr);
}
static inline void list_add_before_(struct list_head *h,
        struct list_node *p,
        struct list_node *n,
        const char *abortstr)
{
 n->next = p;
 n->prev = p->prev;
 p->prev->next = n;
 p->prev = n;
 (void)((void)abortstr, h);
}
static inline void list_add_tail_(struct list_head *h,
      struct list_node *n,
      const char *abortstr)
{
 list_add_before_(h, &h->n, n, abortstr);
}
static inline int list_empty_(const struct list_head *h, const char* abortstr)
{
 (void)((void)abortstr, h);
 return h->n.next == &h->n;
}
static inline _Bool list_empty_nocheck(const struct list_head *h)
{
 return h->n.next == &h->n;
}
static inline void list_del_(struct list_node *n, const char* abortstr)
{
 (void)((void)abortstr, n);
 n->next->prev = n->prev;
 n->prev->next = n->next;
}
static inline void list_del_init_(struct list_node *n, const char *abortstr)
{
 list_del_(n, abortstr);
 list_node_init(n);
}
static inline void list_del_from(struct list_head *h, struct list_node *n)
{
 ((void) sizeof ((!list_empty_(h, "./ccan/list/list.h" ":" "328")) ? 1 : 0), __extension__ ({ if (!list_empty_(h, "./ccan/list/list.h" ":" "328")) ; else __assert_fail ("!list_empty(h)", "./ccan/list/list.h", 328, __extension__ __PRETTY_FUNCTION__); }));
 list_del_(n, "./ccan/list/list.h" ":" "329");
}
static inline void list_swap_(struct list_node *o,
         struct list_node *n,
         const char* abortstr)
{
 (void)((void)abortstr, o);
 *n = *o;
 n->next->prev = n;
 n->prev->next = n;
}
static inline const void *list_top_(const struct list_head *h, size_t off)
{
 if (list_empty_(h, "./ccan/list/list.h" ":" "399"))
  return ((void *)0);
 return (const char *)h->n.next - off;
}
static inline const void *list_pop_(const struct list_head *h, size_t off)
{
 struct list_node *n;
 if (list_empty_(h, "./ccan/list/list.h" ":" "425"))
  return ((void *)0);
 n = h->n.next;
 list_del_(n, "./ccan/list/list.h" ":" "428");
 return (const char *)n - off;
}
static inline const void *list_tail_(const struct list_head *h, size_t off)
{
 if (list_empty_(h, "./ccan/list/list.h" ":" "451"))
  return ((void *)0);
 return (const char *)h->n.prev - off;
}
static inline void list_append_list_(struct list_head *to,
         struct list_head *from,
         const char *abortstr)
{
 struct list_node *from_tail = ((void)abortstr, from)->n.prev;
 struct list_node *to_tail = ((void)abortstr, to)->n.prev;
 to->n.prev = from_tail;
 from_tail->next = &to->n;
 to_tail->next = &from->n;
 from->n.prev = to_tail;
 list_del_(&from->n, "./ccan/list/list.h" ":" "600");
 list_head_init(from);
}
static inline void list_prepend_list_(struct list_head *to,
          struct list_head *from,
          const char *abortstr)
{
 struct list_node *from_tail = ((void)abortstr, from)->n.prev;
 struct list_node *to_head = ((void)abortstr, to)->n.next;
 to->n.next = &from->n;
 from->n.prev = &to->n;
 to_head->prev = from_tail;
 from_tail->next = to_head;
 list_del_(&from->n, "./ccan/list/list.h" ":" "632");
 list_head_init(from);
}
static inline void *list_node_to_off_(struct list_node *node, size_t off)
{
 return (void *)((char *)node - off);
}
static inline struct list_node *list_node_from_off_(void *ptr, size_t off)
{
 return (struct list_node *)((char *)ptr + off);
}
static inline void *list_entry_or_null(const struct list_head *h,
           const struct list_node *n,
           size_t off)
{
 if (n == &h->n)
  return ((void *)0);
 return (char *)n - off;
}
struct sched_param
{
  int sched_priority;
};

extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int unshare (int __flags) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_getcpu (void) __attribute__ ((__nothrow__ , __leaf__));
extern int getcpu (unsigned int *, unsigned int *) __attribute__ ((__nothrow__ , __leaf__));
extern int setns (int __fd, int __nstype) __attribute__ ((__nothrow__ , __leaf__));

typedef unsigned long int __cpu_mask;
typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;

extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
     __attribute__ ((__nothrow__ , __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__));
extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_yield (void) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));

struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;
  int tai;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};

extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __attribute__ ((__nothrow__ , __leaf__));

struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long int tm_gmtoff;
  const char *tm_zone;
};
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
struct sigevent;

extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));
extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__ , __leaf__));
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;
extern char *tzname[2];
extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));
extern int daylight;
extern long int timezone;
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);
extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));
extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));
extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));
extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);
extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));
extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));
extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));
extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));
extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));
extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));
extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int timespec_getres (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
extern int getdate_err;
extern struct tm *getdate (const char *__string);
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);

typedef long int __jmp_buf[8];
struct __jmp_buf_tag
  {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };
enum
{
  PTHREAD_CREATE_JOINABLE,
  PTHREAD_CREATE_DETACHED
};
enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP
  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP
};
enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};
enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
enum
{
  PTHREAD_INHERIT_SCHED,
  PTHREAD_EXPLICIT_SCHED
};
enum
{
  PTHREAD_SCOPE_SYSTEM,
  PTHREAD_SCOPE_PROCESS
};
enum
{
  PTHREAD_PROCESS_PRIVATE,
  PTHREAD_PROCESS_SHARED
};
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};
enum
{
  PTHREAD_CANCEL_ENABLE,
  PTHREAD_CANCEL_DISABLE
};
enum
{
  PTHREAD_CANCEL_DEFERRED,
  PTHREAD_CANCEL_ASYNCHRONOUS
};

extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));
extern int pthread_join (pthread_t __th, void **__thread_return);
extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);
extern int pthread_clockjoin_np (pthread_t __th, void **__thread_return,
                                 clockid_t __clockid,
     const struct timespec *__abstime);
extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__ , __leaf__));
extern pthread_t pthread_self (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));
extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));
extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_setsigmask_np (pthread_attr_t *__attr,
           const __sigset_t *sigmask);
extern int pthread_attr_getsigmask_np (const pthread_attr_t *__attr,
           __sigset_t *sigmask);
extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int pthread_getconcurrency (void) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_setconcurrency (int __level) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_yield (void) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_yield (void) __asm__ ("" "sched_yield") __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("pthread_yield is deprecated, use sched_yield instead")));
extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_setcancelstate (int __state, int *__oldstate);
extern int pthread_setcanceltype (int __type, int *__oldtype);
extern int pthread_cancel (pthread_t __th);
extern void pthread_testcancel (void);
struct __cancel_jmp_buf_tag
{
  __jmp_buf __cancel_jmp_buf;
  int __mask_was_saved;
};
typedef struct
{
  struct __cancel_jmp_buf_tag __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     ;
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  ;
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
     ;
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
  ;
extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__noreturn__))
     __attribute__ ((__weak__))
     ;
extern int __sigsetjmp_cancel (struct __cancel_jmp_buf_tag __env[1], int __savemask) __asm__ ("" "__sigsetjmp") __attribute__ ((__nothrow__)) __attribute__ ((__returns_twice__));
extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutex_clocklock (pthread_mutex_t *__restrict __mutex,
        clockid_t __clockid,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_consistent_np (pthread_mutex_t *) __asm__ ("" "pthread_mutex_consistent") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__deprecated__ ("pthread_mutex_consistent_np is deprecated, use pthread_mutex_consistent")));
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_getrobust_np (pthread_mutexattr_t *, int *) __asm__ ("" "pthread_mutexattr_getrobust") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__deprecated__ ("pthread_mutexattr_getrobust_np is deprecated, use pthread_mutexattr_getrobust")));
extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *, int) __asm__ ("" "pthread_mutexattr_setrobust") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__deprecated__ ("pthread_mutexattr_setrobust_np is deprecated, use pthread_mutexattr_setrobust")));
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_rwlock_clockrdlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_rwlock_clockwrlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));
extern int pthread_cond_clockwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       __clockid_t __clock_id,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 4)));
extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));
extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__access__ (__none__, 2)));
extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) __attribute__ ((__nothrow__ , __leaf__));
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) pthread_equal (pthread_t __thread1, pthread_t __thread2)
{
  return __thread1 == __thread2;
}

typedef pthread_t rb_nativethread_id_t;
typedef pthread_mutex_t rb_nativethread_lock_t;


rb_nativethread_id_t rb_nativethread_self();
void rb_nativethread_lock_initialize(rb_nativethread_lock_t *lock);
void rb_nativethread_lock_destroy(rb_nativethread_lock_t *lock);
void rb_nativethread_lock_lock(rb_nativethread_lock_t *lock);
void rb_nativethread_lock_unlock(rb_nativethread_lock_t *lock);


typedef pthread_cond_t rb_nativethread_cond_t;
typedef struct native_thread_data_struct {
    union {
        struct list_node ubf;
        struct list_node gvl;
    } node;
    union
    {
        rb_nativethread_cond_t intr;
        rb_nativethread_cond_t gvlq;
    } cond;
} native_thread_data_t;
typedef struct rb_global_vm_lock_struct {
    const struct rb_thread_struct *owner;
    rb_nativethread_lock_t lock;
    struct list_head waitq;
    const struct rb_thread_struct *timer;
    int timer_err;
    rb_nativethread_cond_t switch_cond;
    rb_nativethread_cond_t switch_wait_cond;
    int need_yield;
    int wait_yield;
} rb_global_vm_lock_t;

typedef struct __jmp_buf_tag jmp_buf[1];
extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));
extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));
extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
typedef struct __jmp_buf_tag sigjmp_buf[1];
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void longjmp (struct __jmp_buf_tag __env[1], int __val) __asm__ ("" "__longjmp_chk") __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void _longjmp (struct __jmp_buf_tag __env[1], int __val) __asm__ ("" "__longjmp_chk") __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void siglongjmp (struct __jmp_buf_tag __env[1], int __val) __asm__ ("" "__longjmp_chk") __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


typedef __sig_atomic_t sig_atomic_t;
union sigval
{
  int sival_int;
  void *sival_ptr;
};
typedef union sigval __sigval_t;
typedef struct
  {
    int si_signo;
    int si_errno;
    int si_code;
    int __pad0;
    union
      {
 int _pad[((128 / sizeof (int)) - 4)];
 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;
 struct
   {
     int si_tid;
     int si_overrun;
     __sigval_t si_sigval;
   } _timer;
 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     __sigval_t si_sigval;
   } _rt;
 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;
 struct
   {
     void *si_addr;
    
     short int si_addr_lsb;
     union
       {
  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;
  __uint32_t _pkey;
       } _bounds;
   } _sigfault;
 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;
 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
enum
{
  SI_ASYNCNL = -60,
  SI_DETHREAD = -7,
  SI_TKILL,
  SI_SIGIO,
  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,
  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
};
enum
{
  ILL_ILLOPC = 1,
  ILL_ILLOPN,
  ILL_ILLADR,
  ILL_ILLTRP,
  ILL_PRVOPC,
  ILL_PRVREG,
  ILL_COPROC,
  ILL_BADSTK,
  ILL_BADIADDR
};
enum
{
  FPE_INTDIV = 1,
  FPE_INTOVF,
  FPE_FLTDIV,
  FPE_FLTOVF,
  FPE_FLTUND,
  FPE_FLTRES,
  FPE_FLTINV,
  FPE_FLTSUB,
  FPE_FLTUNK = 14,
  FPE_CONDTRAP
};
enum
{
  SEGV_MAPERR = 1,
  SEGV_ACCERR,
  SEGV_BNDERR,
  SEGV_PKUERR,
  SEGV_ACCADI,
  SEGV_ADIDERR,
  SEGV_ADIPERR,
  SEGV_MTEAERR,
  SEGV_MTESERR
};
enum
{
  BUS_ADRALN = 1,
  BUS_ADRERR,
  BUS_OBJERR,
  BUS_MCEERR_AR,
  BUS_MCEERR_AO
};
enum
{
  TRAP_BRKPT = 1,
  TRAP_TRACE,
  TRAP_BRANCH,
  TRAP_HWBKPT,
  TRAP_UNK
};
enum
{
  CLD_EXITED = 1,
  CLD_KILLED,
  CLD_DUMPED,
  CLD_TRAPPED,
  CLD_STOPPED,
  CLD_CONTINUED
};
enum
{
  POLL_IN = 1,
  POLL_OUT,
  POLL_MSG,
  POLL_ERR,
  POLL_PRI,
  POLL_HUP
};
typedef __sigval_t sigval_t;
typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
    union
      {
 int _pad[((64 / sizeof (int)) - 4)];
 __pid_t _tid;
 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
enum
{
  SIGEV_SIGNAL = 0,
  SIGEV_NONE,
  SIGEV_THREAD,
  SIGEV_THREAD_ID = 4
};
typedef void (*__sighandler_t) (int);
extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern void psignal (int __sig, const char *__s);
extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause")
  __attribute__ ((__deprecated__ ("Use the sigsuspend function instead")));
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
typedef __sighandler_t sighandler_t;
typedef __sighandler_t sig_t;
extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int sigisemptyset (const sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));
struct sigaction
  {
    union
      {
 __sighandler_t sa_handler;
 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;
    __sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer) (void);
  };
extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));
extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));
extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));
extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));
extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));
extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));
extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};
struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};
struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};
struct _xmmreg
{
  __uint32_t element[4];
};
struct _fpstate
{
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};
struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};
struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};
struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};
struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));
typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
__extension__ typedef long long int greg_t;
typedef greg_t gregset_t[23];
enum
{
  REG_R8 = 0,
  REG_R9,
  REG_R10,
  REG_R11,
  REG_R12,
  REG_R13,
  REG_R14,
  REG_R15,
  REG_RDI,
  REG_RSI,
  REG_RBP,
  REG_RBX,
  REG_RDX,
  REG_RAX,
  REG_RCX,
  REG_RSP,
  REG_RIP,
  REG_EFL,
  REG_CSGSFS,
  REG_ERR,
  REG_TRAPNO,
  REG_OLDMASK,
  REG_CR2
};
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};
struct _libc_xmmreg
{
  __uint32_t element[4];
};
struct _libc_fpstate
{
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};
typedef struct _libc_fpstate *fpregset_t;
typedef struct
  {
    gregset_t gregs;
    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;
typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
    __extension__ unsigned long long int __ssp[4];
  } ucontext_t;
extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use sigaction with SA_RESTART instead")));
enum
{
  SS_ONSTACK = 1,
  SS_DISABLE
};
extern int sigaltstack (const stack_t *__restrict __ss,
   stack_t *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };
extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int sighold (int __sig) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use the sigprocmask function instead")));
extern int sigrelse (int __sig) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use the sigprocmask function instead")));
extern int sigignore (int __sig) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use the signal function instead")));
extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use the signal and sigprocmask functions instead")));
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));
extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__ , __leaf__));
extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));
extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));
extern int tgkill (__pid_t __tgid, __pid_t __tid, int __signal);

void *rb_register_sigaltstack(void);
void rb_vm_encoded_insn_data_table_init(void);
typedef unsigned long rb_num_t;
typedef signed long rb_snum_t;
enum ruby_tag_type {
    RUBY_TAG_NONE = 0x0,
    RUBY_TAG_RETURN = 0x1,
    RUBY_TAG_BREAK = 0x2,
    RUBY_TAG_NEXT = 0x3,
    RUBY_TAG_RETRY = 0x4,
    RUBY_TAG_REDO = 0x5,
    RUBY_TAG_RAISE = 0x6,
    RUBY_TAG_THROW = 0x7,
    RUBY_TAG_FATAL = 0x8,
    RUBY_TAG_MASK = 0xf
};
enum ruby_vm_throw_flags {
    VM_THROW_NO_ESCAPE_FLAG = 0x8000,
    VM_THROW_STATE_MASK = 0xff
};
struct rb_thread_struct;
struct rb_control_frame_struct;
typedef struct rb_compile_option_struct rb_compile_option_t;
struct iseq_inline_cache_entry {
    rb_serial_t ic_serial;
    const rb_cref_t *ic_cref;
    union {
 size_t index;
 VALUE value;
    } ic_value;
};
union iseq_inline_storage_entry {
    struct {
 struct rb_thread_struct *running_thread;
 VALUE value;
    } once;
    struct iseq_inline_cache_entry cache;
};
enum method_missing_reason {
    MISSING_NOENTRY = 0x00,
    MISSING_PRIVATE = 0x01,
    MISSING_PROTECTED = 0x02,
    MISSING_FCALL = 0x04,
    MISSING_VCALL = 0x08,
    MISSING_SUPER = 0x10,
    MISSING_MISSING = 0x20,
    MISSING_NONE = 0x40
};
struct rb_call_info {
    ID mid;
    unsigned int flag;
    int orig_argc;
};
struct rb_call_info_kw_arg {
    int keyword_len;
    VALUE keywords[1];
};
struct rb_call_info_with_kwarg {
    struct rb_call_info ci;
    struct rb_call_info_kw_arg *kw_arg;
};
struct rb_calling_info {
    VALUE block_handler;
    VALUE recv;
    int argc;
};
struct rb_call_cache;
struct rb_execution_context_struct;
typedef VALUE (*vm_call_handler)(struct rb_execution_context_struct *ec, struct rb_control_frame_struct *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc);
struct rb_call_cache {
    rb_serial_t method_state;
    rb_serial_t class_serial;
    const rb_callable_method_entry_t *me;
    vm_call_handler call;
    union {
 unsigned int index;
 enum method_missing_reason method_missing_reason;
 int inc_sp;
    } aux;
};
typedef struct rb_iseq_location_struct {
    VALUE pathobj;
    VALUE base_label;
    VALUE label;
    VALUE first_lineno;
    int node_id;
    rb_code_location_t code_location;
} rb_iseq_location_t;
static inline VALUE
pathobj_path(VALUE pathobj)
{
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(pathobj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((pathobj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((pathobj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((pathobj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((pathobj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(pathobj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(pathobj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 return pathobj;
    }
    else {
 ((void)0);
 return (rb_array_const_ptr_transient(pathobj)[0]);
    }
}
static inline VALUE
pathobj_realpath(VALUE pathobj)
{
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(pathobj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((pathobj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((pathobj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((pathobj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((pathobj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(pathobj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(pathobj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 return pathobj;
    }
    else {
 ((void)0);
 return (rb_array_const_ptr_transient(pathobj)[1]);
    }
}
struct rb_mjit_unit;
struct rb_iseq_constant_body {
    enum iseq_type {
 ISEQ_TYPE_TOP,
 ISEQ_TYPE_METHOD,
 ISEQ_TYPE_BLOCK,
 ISEQ_TYPE_CLASS,
 ISEQ_TYPE_RESCUE,
 ISEQ_TYPE_ENSURE,
 ISEQ_TYPE_EVAL,
 ISEQ_TYPE_MAIN,
 ISEQ_TYPE_PLAIN
    } type;
    unsigned int iseq_size;
    const VALUE *iseq_encoded;
    struct {
 struct {
     unsigned int has_lead : 1;
     unsigned int has_opt : 1;
     unsigned int has_rest : 1;
     unsigned int has_post : 1;
     unsigned int has_kw : 1;
     unsigned int has_kwrest : 1;
     unsigned int has_block : 1;
     unsigned int ambiguous_param0 : 1;
 } flags;
 unsigned int size;
 int lead_num;
 int opt_num;
 int rest_start;
 int post_start;
 int post_num;
 int block_start;
 const VALUE *opt_table;
 const struct rb_iseq_param_keyword {
     int num;
     int required_num;
     int bits_start;
     int rest_start;
     const ID *table;
     const VALUE *default_values;
 } *keyword;
    } param;
    rb_iseq_location_t location;
    struct iseq_insn_info {
 const struct iseq_insn_info_entry *body;
 unsigned int *positions;
 unsigned int size;
 struct succ_index_table *succ_index_table;
    } insns_info;
    const ID *local_table;
    const struct iseq_catch_table *catch_table;
    const struct rb_iseq_struct *parent_iseq;
    struct rb_iseq_struct *local_iseq;
    union iseq_inline_storage_entry *is_entries;
    struct rb_call_info *ci_entries;
    struct rb_call_cache *cc_entries;
    struct {
 rb_snum_t flip_count;
 VALUE coverage;
        VALUE pc2branchindex;
 VALUE *original_iseq;
    } variable;
    unsigned int local_table_size;
    unsigned int is_size;
    unsigned int ci_size;
    unsigned int ci_kw_size;
    unsigned int stack_max;
    VALUE (*jit_func)(struct rb_execution_context_struct *,
                      struct rb_control_frame_struct *);
    long unsigned total_calls;
    struct rb_mjit_unit *jit_unit;
    char catch_except_p;
};
struct rb_iseq_struct {
    VALUE flags;
    VALUE wrapper;
    struct rb_iseq_constant_body *body;
    union {
 struct iseq_compile_data *compile_data;
 struct {
     VALUE obj;
     int index;
 } loader;
        struct {
            struct rb_hook_list_struct *local_hooks;
            rb_event_flag_t global_trace_events;
        } exec;
    } aux;
};
static inline const rb_iseq_t *
rb_iseq_check(const rb_iseq_t *iseq)
{
    return iseq;
}
static inline const rb_iseq_t *
def_iseq_ptr(rb_method_definition_t *def)
{
    return rb_iseq_check(def->body.iseq.iseqptr);
}
enum ruby_special_exceptions {
    ruby_error_reenter,
    ruby_error_nomemory,
    ruby_error_sysstack,
    ruby_error_stackfatal,
    ruby_error_stream_closed,
    ruby_special_error_count
};
enum ruby_basic_operators {
    BOP_PLUS,
    BOP_MINUS,
    BOP_MULT,
    BOP_DIV,
    BOP_MOD,
    BOP_EQ,
    BOP_EQQ,
    BOP_LT,
    BOP_LE,
    BOP_LTLT,
    BOP_AREF,
    BOP_ASET,
    BOP_LENGTH,
    BOP_SIZE,
    BOP_EMPTY_P,
    BOP_SUCC,
    BOP_GT,
    BOP_GE,
    BOP_NOT,
    BOP_NEQ,
    BOP_MATCH,
    BOP_FREEZE,
    BOP_UMINUS,
    BOP_MAX,
    BOP_MIN,
    BOP_CALL,
    BOP_AND,
    BOP_OR,
    BOP_LAST_
};
struct rb_vm_struct;
typedef void rb_vm_at_exit_func(struct rb_vm_struct*);
typedef struct rb_at_exit_list {
    rb_vm_at_exit_func *func;
    struct rb_at_exit_list *next;
} rb_at_exit_list;
struct rb_objspace;
struct rb_objspace *rb_objspace_alloc(void);
void rb_objspace_free(struct rb_objspace *);
typedef struct rb_hook_list_struct {
    struct rb_event_hook_struct *hooks;
    rb_event_flag_t events;
    unsigned int need_clean;
    unsigned int running;
} rb_hook_list_t;
typedef struct rb_vm_struct {
    VALUE self;
    rb_global_vm_lock_t gvl;
    struct rb_thread_struct *main_thread;
    const struct rb_thread_struct *running_thread;
    void *main_altstack;
    rb_serial_t fork_gen;
    rb_nativethread_lock_t waitpid_lock;
    struct list_head waiting_pids;
    struct list_head waiting_grps;
    struct list_head waiting_fds;
    struct list_head living_threads;
    VALUE thgroup_default;
    int living_thread_num;
    unsigned int running: 1;
    unsigned int thread_abort_on_exception: 1;
    unsigned int thread_report_on_exception: 1;
    unsigned int safe_level_: 1;
    int sleeper;
    VALUE mark_object_ary;
    const VALUE special_exceptions[ruby_special_error_count];
    VALUE top_self;
    VALUE load_path;
    VALUE load_path_snapshot;
    VALUE load_path_check_cache;
    VALUE expanded_load_path;
    VALUE loaded_features;
    VALUE loaded_features_snapshot;
    struct st_table *loaded_features_index;
    struct st_table *loading_table;
    struct {
 VALUE cmd[(64 + 1)];
 unsigned char safe[(64 + 1)];
    } trap_list;
    rb_hook_list_t global_hooks;
    struct st_table *ensure_rollback_table;
    struct rb_postponed_job_struct *postponed_job_buffer;
    int postponed_job_index;
    int src_encoding_index;
    struct list_head workqueue;
    rb_nativethread_lock_t workqueue_lock;
    VALUE verbose, debug, orig_progname, progname;
    VALUE coverages;
    int coverage_mode;
    VALUE defined_module_hash;
    struct rb_objspace *objspace;
    rb_at_exit_list *at_exit;
    VALUE *defined_strings;
    st_table *frozen_strings;
    struct {
 size_t thread_vm_stack_size;
 size_t thread_machine_stack_size;
 size_t fiber_vm_stack_size;
 size_t fiber_machine_stack_size;
    } default_params;
    short redefined_flag[BOP_LAST_];
} rb_vm_t;
struct rb_captured_block {
    VALUE self;
    const VALUE *ep;
    union {
 const rb_iseq_t *iseq;
 const struct vm_ifunc *ifunc;
 VALUE val;
    } code;
};
enum rb_block_handler_type {
    block_handler_type_iseq,
    block_handler_type_ifunc,
    block_handler_type_symbol,
    block_handler_type_proc
};
enum rb_block_type {
    block_type_iseq,
    block_type_ifunc,
    block_type_symbol,
    block_type_proc
};
struct rb_block {
    union {
 struct rb_captured_block captured;
 VALUE symbol;
 VALUE proc;
    } as;
    enum rb_block_type type;
};
typedef struct rb_control_frame_struct {
    const VALUE *pc;
    VALUE *sp;
    const rb_iseq_t *iseq;
    VALUE self;
    const VALUE *ep;
    const void *block_code;
    const VALUE *bp;
} rb_control_frame_t;
extern const rb_data_type_t ruby_threadptr_data_type;
static inline struct rb_thread_struct *
rb_thread_ptr(VALUE thval)
{
    return (struct rb_thread_struct *)rb_check_typeddata(thval, &ruby_threadptr_data_type);
}
enum rb_thread_status {
    THREAD_RUNNABLE,
    THREAD_STOPPED,
    THREAD_STOPPED_FOREVER,
    THREAD_KILLED
};
typedef jmp_buf rb_jmpbuf_t;
struct rb_vm_tag {
    VALUE tag;
    VALUE retval;
    rb_jmpbuf_t buf;
    struct rb_vm_tag *prev;
    enum ruby_tag_type state;
};
__extension__ _Static_assert(__builtin_offsetof (struct rb_vm_tag, buf) > 0, "rb_vm_tag_buf_offset" ": " "offsetof(struct rb_vm_tag, buf) > 0");
__extension__ _Static_assert(__builtin_offsetof (struct rb_vm_tag, buf) + sizeof(rb_jmpbuf_t) < sizeof(struct rb_vm_tag), "rb_vm_tag_buf_end" ": " "offsetof(struct rb_vm_tag, buf) + sizeof(rb_jmpbuf_t) < sizeof(struct rb_vm_tag)");
struct rb_vm_protect_tag {
    struct rb_vm_protect_tag *prev;
};
struct rb_unblock_callback {
    rb_unblock_function_t *func;
    void *arg;
};
struct rb_mutex_struct;
typedef struct rb_thread_list_struct{
    struct rb_thread_list_struct *next;
    struct rb_thread_struct *th;
} rb_thread_list_t;
typedef struct rb_ensure_entry {
    VALUE marker;
    VALUE (*e_proc)();
    VALUE data2;
} rb_ensure_entry_t;
typedef struct rb_ensure_list {
    struct rb_ensure_list *next;
    struct rb_ensure_entry entry;
} rb_ensure_list_t;
typedef char rb_thread_id_string_t[sizeof(rb_nativethread_id_t) * 2 + 3];
typedef struct rb_fiber_struct rb_fiber_t;
typedef struct rb_execution_context_struct {
    VALUE *vm_stack;
    size_t vm_stack_size;
    rb_control_frame_t *cfp;
    struct rb_vm_tag *tag;
    struct rb_vm_protect_tag *protect_tag;
    rb_atomic_t interrupt_flag;
    rb_atomic_t interrupt_mask;
    rb_fiber_t *fiber_ptr;
    struct rb_thread_struct *thread_ptr;
    st_table *local_storage;
    VALUE local_storage_recursive_hash;
    VALUE local_storage_recursive_hash_for_trace;
    const VALUE *root_lep;
    VALUE root_svar;
    rb_ensure_list_t *ensure_list;
    struct rb_trace_arg_struct *trace_arg;
    VALUE errinfo;
    VALUE passed_block_handler;
    uint8_t raised_flag;
    enum method_missing_reason method_missing_reason : 8;
    VALUE private_const_reference;
    struct {
 VALUE *stack_start;
 VALUE *stack_end;
 size_t stack_maxsize;
 __attribute__((__aligned__(8))) jmp_buf regs;
    } machine;
} rb_execution_context_t;
void rb_ec_set_vm_stack(rb_execution_context_t *ec, VALUE *stack, size_t size);
typedef struct rb_thread_struct {
    struct list_node vmlt_node;
    VALUE self;
    rb_vm_t *vm;
    rb_execution_context_t *ec;
    VALUE last_status;
    struct rb_calling_info *calling;
    VALUE top_self;
    VALUE top_wrapper;
    rb_nativethread_id_t thread_id;
    enum rb_thread_status status : 2;
    unsigned int to_kill : 1;
    unsigned int abort_on_exception: 1;
    unsigned int report_on_exception: 1;
    unsigned int pending_interrupt_queue_checked: 1;
    int8_t priority;
    uint32_t running_time_us;
    native_thread_data_t native_thread_data;
    void *blocking_region_buffer;
    VALUE thgroup;
    VALUE value;
    VALUE pending_interrupt_queue;
    VALUE pending_interrupt_mask_stack;
    rb_nativethread_lock_t interrupt_lock;
    struct rb_unblock_callback unblock;
    VALUE locking_mutex;
    struct rb_mutex_struct *keeping_mutexes;
    rb_thread_list_t *join_list;
    union {
        struct {
            VALUE proc;
            VALUE args;
        } proc;
        struct {
            VALUE (*func)();
            void *arg;
        } func;
    } invoke_arg;
    enum {
        thread_invoke_type_none = 0,
        thread_invoke_type_proc,
        thread_invoke_type_func
    } invoke_type;
    VALUE stat_insn_usage;
    rb_fiber_t *root_fiber;
    rb_jmpbuf_t root_jmpbuf;
    VALUE name;
} rb_thread_t;
typedef enum {
    VM_DEFINECLASS_TYPE_CLASS = 0x00,
    VM_DEFINECLASS_TYPE_SINGLETON_CLASS = 0x01,
    VM_DEFINECLASS_TYPE_MODULE = 0x02,
    VM_DEFINECLASS_TYPE_MASK = 0x07
} rb_vm_defineclass_type_t;


rb_iseq_t *rb_iseq_new (const rb_ast_body_t *ast, VALUE name, VALUE path, VALUE realpath, const rb_iseq_t *parent, enum iseq_type);
rb_iseq_t *rb_iseq_new_top (const rb_ast_body_t *ast, VALUE name, VALUE path, VALUE realpath, const rb_iseq_t *parent);
rb_iseq_t *rb_iseq_new_main (const rb_ast_body_t *ast, VALUE path, VALUE realpath, const rb_iseq_t *parent);
rb_iseq_t *rb_iseq_new_with_opt(const rb_ast_body_t *ast, VALUE name, VALUE path, VALUE realpath, VALUE first_lineno,
    const rb_iseq_t *parent, enum iseq_type, const rb_compile_option_t*);
rb_iseq_t *rb_iseq_new_ifunc(const struct vm_ifunc *ifunc, VALUE name, VALUE path, VALUE realpath, VALUE first_lineno,
        const rb_iseq_t *parent, enum iseq_type, const rb_compile_option_t*);
rb_iseq_t *rb_iseq_compile(VALUE src, VALUE file, VALUE line);
rb_iseq_t *rb_iseq_compile_on_base(VALUE src, VALUE file, VALUE line, const struct rb_block *base_block);
rb_iseq_t *rb_iseq_compile_with_option(VALUE src, VALUE file, VALUE realpath, VALUE line, const struct rb_block *base_block, VALUE opt);
VALUE rb_iseq_disasm(const rb_iseq_t *iseq);
int rb_iseq_disasm_insn(VALUE str, const VALUE *iseqval, size_t pos, const rb_iseq_t *iseq, VALUE child);
const char *ruby_node_name(int node);
VALUE rb_iseq_coverage(const rb_iseq_t *iseq);
extern VALUE rb_cISeq;
extern VALUE rb_cRubyVM;
extern VALUE rb_mRubyVMFrozenCore;


typedef struct {
    const struct rb_block block;
    unsigned int is_from_method: 1;
    unsigned int is_lambda: 1;
} rb_proc_t;
typedef struct {
    VALUE flags;
    const rb_iseq_t *iseq;
    const VALUE *ep;
    const VALUE *env;
    unsigned int env_size;
} rb_env_t;
extern const rb_data_type_t ruby_binding_data_type;
typedef struct {
    const struct rb_block block;
    const VALUE pathobj;
    unsigned short first_lineno;
} rb_binding_t;
enum vm_check_match_type {
    VM_CHECKMATCH_TYPE_WHEN = 1,
    VM_CHECKMATCH_TYPE_CASE = 2,
    VM_CHECKMATCH_TYPE_RESCUE = 3
};
enum vm_call_flag_bits {
    VM_CALL_ARGS_SPLAT_bit,
    VM_CALL_ARGS_BLOCKARG_bit,
    VM_CALL_FCALL_bit,
    VM_CALL_VCALL_bit,
    VM_CALL_ARGS_SIMPLE_bit,
    VM_CALL_BLOCKISEQ_bit,
    VM_CALL_KWARG_bit,
    VM_CALL_KW_SPLAT_bit,
    VM_CALL_TAILCALL_bit,
    VM_CALL_SUPER_bit,
    VM_CALL_ZSUPER_bit,
    VM_CALL_OPT_SEND_bit,
    VM_CALL__END
};
enum vm_special_object_type {
    VM_SPECIAL_OBJECT_VMCORE = 1,
    VM_SPECIAL_OBJECT_CBASE,
    VM_SPECIAL_OBJECT_CONST_BASE
};
enum vm_svar_index {
    VM_SVAR_LASTLINE = 0,
    VM_SVAR_BACKREF = 1,
    VM_SVAR_EXTRA_START = 2,
    VM_SVAR_FLIPFLOP_START = 2
};
typedef struct iseq_inline_cache_entry *IC;
typedef union iseq_inline_storage_entry *ISE;
typedef struct rb_call_info *CALL_INFO;
typedef struct rb_call_cache *CALL_CACHE;
void rb_vm_change_state(void);
typedef VALUE CDHASH;
typedef rb_control_frame_t *
  (*rb_insn_func_t)(rb_execution_context_t *, rb_control_frame_t *);
enum {
    VM_FRAME_MAGIC_METHOD = 0x11110001,
    VM_FRAME_MAGIC_BLOCK = 0x22220001,
    VM_FRAME_MAGIC_CLASS = 0x33330001,
    VM_FRAME_MAGIC_TOP = 0x44440001,
    VM_FRAME_MAGIC_CFUNC = 0x55550001,
    VM_FRAME_MAGIC_IFUNC = 0x66660001,
    VM_FRAME_MAGIC_EVAL = 0x77770001,
    VM_FRAME_MAGIC_RESCUE = 0x78880001,
    VM_FRAME_MAGIC_DUMMY = 0x79990001,
    VM_FRAME_MAGIC_MASK = 0x7fff0001,
    VM_FRAME_FLAG_PASSED = 0x0010,
    VM_FRAME_FLAG_FINISH = 0x0020,
    VM_FRAME_FLAG_BMETHOD = 0x0040,
    VM_FRAME_FLAG_CFRAME = 0x0080,
    VM_FRAME_FLAG_LAMBDA = 0x0100,
    VM_FRAME_FLAG_MODIFIED_BLOCK_PARAM = 0x0200,
    VM_ENV_FLAG_LOCAL = 0x0002,
    VM_ENV_FLAG_ESCAPED = 0x0004,
    VM_ENV_FLAG_WB_REQUIRED = 0x0008
};
static inline void VM_FORCE_WRITE_SPECIAL_CONST(const VALUE *ptr, VALUE special_const_value);
static inline void
VM_ENV_FLAGS_SET(const VALUE *ep, VALUE flag)
{
    VALUE flags = ep[( 0)];
    ((void)0);
    VM_FORCE_WRITE_SPECIAL_CONST(&ep[( 0)], flags | flag);
}
static inline void
VM_ENV_FLAGS_UNSET(const VALUE *ep, VALUE flag)
{
    VALUE flags = ep[( 0)];
    ((void)0);
    VM_FORCE_WRITE_SPECIAL_CONST(&ep[( 0)], flags & ~flag);
}
static inline unsigned long
VM_ENV_FLAGS(const VALUE *ep, long flag)
{
    VALUE flags = ep[( 0)];
    ((void)0);
    return flags & flag;
}
static inline unsigned long
VM_FRAME_TYPE(const rb_control_frame_t *cfp)
{
    return VM_ENV_FLAGS(cfp->ep, VM_FRAME_MAGIC_MASK);
}
static inline int
VM_FRAME_LAMBDA_P(const rb_control_frame_t *cfp)
{
    return VM_ENV_FLAGS(cfp->ep, VM_FRAME_FLAG_LAMBDA) != 0;
}
static inline int
VM_FRAME_FINISHED_P(const rb_control_frame_t *cfp)
{
    return VM_ENV_FLAGS(cfp->ep, VM_FRAME_FLAG_FINISH) != 0;
}
static inline int
VM_FRAME_BMETHOD_P(const rb_control_frame_t *cfp)
{
    return VM_ENV_FLAGS(cfp->ep, VM_FRAME_FLAG_BMETHOD) != 0;
}
static inline int
rb_obj_is_iseq(VALUE iseq)
{
    return imemo_type_p(iseq, imemo_iseq);
}
static inline int
VM_FRAME_CFRAME_P(const rb_control_frame_t *cfp)
{
    int cframe_p = VM_ENV_FLAGS(cfp->ep, VM_FRAME_FLAG_CFRAME) != 0;
    ((void)0);
    return cframe_p;
}
static inline int
VM_FRAME_RUBYFRAME_P(const rb_control_frame_t *cfp)
{
    return !VM_FRAME_CFRAME_P(cfp);
}
static inline int
VM_ENV_LOCAL_P(const VALUE *ep)
{
    return VM_ENV_FLAGS(ep, VM_ENV_FLAG_LOCAL) ? 1 : 0;
}
static inline const VALUE *
VM_ENV_PREV_EP(const VALUE *ep)
{
    ((void)0);
    return ((void *)(((ep[(-1)])) & ~0x03));
}
static inline VALUE
VM_ENV_BLOCK_HANDLER(const VALUE *ep)
{
    ((void)0);
    return ep[(-1)];
}
static inline int
VM_ENV_ESCAPED_P(const VALUE *ep)
{
    ((void)0);
    return VM_ENV_FLAGS(ep, VM_ENV_FLAG_ESCAPED) ? 1 : 0;
}
static inline VALUE
VM_ENV_ENVVAL(const VALUE *ep)
{
    VALUE envval = ep[( 1)];
    ((void)0);
    ((void)0);
    return envval;
}
static inline const rb_env_t *
VM_ENV_ENVVAL_PTR(const VALUE *ep)
{
    return (const rb_env_t *)VM_ENV_ENVVAL(ep);
}
static inline const rb_env_t *
vm_env_new(VALUE *env_ep, VALUE *env_body, unsigned int env_size, const rb_iseq_t *iseq)
{
    rb_env_t *env = (rb_env_t *)rb_imemo_new(imemo_env, (VALUE)env_ep, (VALUE)env_body, 0, (VALUE)iseq);
    env->env_size = env_size;
    env_ep[( 1)] = (VALUE)env;
    return env;
}
static inline void
VM_FORCE_WRITE(const VALUE *ptr, VALUE v)
{
    *((VALUE *)ptr) = v;
}
static inline void
VM_FORCE_WRITE_SPECIAL_CONST(const VALUE *ptr, VALUE special_const_value)
{
    ((void)0);
    VM_FORCE_WRITE(ptr, special_const_value);
}
static inline void
VM_STACK_ENV_WRITE(const VALUE *ep, int index, VALUE v)
{
    ((void)0);
    VM_FORCE_WRITE(&ep[index], v);
}static inline 
const VALUE *rb_vm_ep_local_ep(const VALUE *ep);
const VALUE *rb_vm_proc_local_ep(VALUE proc);static inline 
void rb_vm_block_ep_update(VALUE obj, const struct rb_block *dst, const VALUE *ep);
void rb_vm_block_copy(VALUE obj, const struct rb_block *dst, const struct rb_block *src);static inline 
VALUE rb_vm_frame_block_handler(const rb_control_frame_t *cfp);
static inline const rb_control_frame_t *
RUBY_VM_END_CONTROL_FRAME(const rb_execution_context_t *ec)
{
    return (rb_control_frame_t *)(ec->vm_stack + ec->vm_stack_size);
}
static inline int
RUBY_VM_CONTROL_FRAME_STACK_OVERFLOW_P(const rb_execution_context_t *ec, const rb_control_frame_t *cfp)
{
    return !((void *)(RUBY_VM_END_CONTROL_FRAME(ec)) > (void *)(cfp));
}
static inline int
VM_BH_ISEQ_BLOCK_P(VALUE block_handler)
{
    if ((block_handler & 0x03) == 0x01) {
 return 1;
    }
    else {
 return 0;
    }
}
static inline VALUE
VM_BH_FROM_ISEQ_BLOCK(const struct rb_captured_block *captured)
{
    VALUE block_handler = ((VALUE)(captured) | (0x01));
    ((void)0);
    return block_handler;
}
static inline const struct rb_captured_block *
VM_BH_TO_ISEQ_BLOCK(VALUE block_handler)
{
    struct rb_captured_block *captured = ((void *)((block_handler) & ~0x03));
    ((void)0);
    return captured;
}
static inline int
VM_BH_IFUNC_P(VALUE block_handler)
{
    if ((block_handler & 0x03) == 0x03) {
 return 1;
    }
    else {
 return 0;
    }
}
static inline VALUE
VM_BH_FROM_IFUNC_BLOCK(const struct rb_captured_block *captured)
{
    VALUE block_handler = ((VALUE)(captured) | (0x03));
    ((void)0);
    return block_handler;
}
static inline const struct rb_captured_block *
VM_BH_TO_IFUNC_BLOCK(VALUE block_handler)
{
    struct rb_captured_block *captured = ((void *)((block_handler) & ~0x03));
    ((void)0);
    return captured;
}
static inline const struct rb_captured_block *
VM_BH_TO_CAPT_BLOCK(VALUE block_handler)
{
    struct rb_captured_block *captured = ((void *)((block_handler) & ~0x03));
    ((void)0);
    return captured;
}
static inline enum rb_block_handler_type
vm_block_handler_type(VALUE block_handler)
{
    if (VM_BH_ISEQ_BLOCK_P(block_handler)) {
 return block_handler_type_iseq;
    }
    else if (VM_BH_IFUNC_P(block_handler)) {
 return block_handler_type_ifunc;
    }
    else if (((((VALUE)(block_handler)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(block_handler) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(block_handler) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(block_handler))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 return block_handler_type_symbol;
    }
    else {
 ((void)0);
 return block_handler_type_proc;
    }
}
static inline void
vm_block_handler_verify(__attribute__ ((__unused__)) VALUE block_handler)
{
    ((void)0);
}
static inline enum rb_block_type
vm_block_type(const struct rb_block *block)
{
    return block->type;
}
static inline void
vm_block_type_set(const struct rb_block *block, enum rb_block_type type)
{
    struct rb_block *mb = (struct rb_block *)block;
    mb->type = type;
}
static inline const struct rb_block *
vm_proc_block(VALUE procval)
{
    ((void)0);
    return &((rb_proc_t *)(((struct RTypedData*)(procval))->data))->block;
}
static inline const rb_iseq_t *vm_block_iseq(const struct rb_block *block);
static inline const VALUE *vm_block_ep(const struct rb_block *block);
static inline const rb_iseq_t *
vm_proc_iseq(VALUE procval)
{
    return vm_block_iseq(vm_proc_block(procval));
}
static inline const VALUE *
vm_proc_ep(VALUE procval)
{
    return vm_block_ep(vm_proc_block(procval));
}
static inline const rb_iseq_t *
vm_block_iseq(const struct rb_block *block)
{
    switch (vm_block_type(block)) {
      case block_type_iseq: return rb_iseq_check(block->as.captured.code.iseq);
      case block_type_proc: return vm_proc_iseq(block->as.proc);
      case block_type_ifunc:
      case block_type_symbol: return ((void *)0);
    }
    __builtin_unreachable();
    return ((void *)0);
}
static inline const VALUE *
vm_block_ep(const struct rb_block *block)
{
    switch (vm_block_type(block)) {
      case block_type_iseq:
      case block_type_ifunc: return block->as.captured.ep;
      case block_type_proc: return vm_proc_ep(block->as.proc);
      case block_type_symbol: return ((void *)0);
    }
    __builtin_unreachable();
    return ((void *)0);
}
static inline VALUE
vm_block_self(const struct rb_block *block)
{
    switch (vm_block_type(block)) {
      case block_type_iseq:
      case block_type_ifunc:
 return block->as.captured.self;
      case block_type_proc:
 return vm_block_self(vm_proc_block(block->as.proc));
      case block_type_symbol:
 return ((VALUE)RUBY_Qundef);
    }
    __builtin_unreachable();
    return ((VALUE)RUBY_Qundef);
}
static inline VALUE
VM_BH_TO_SYMBOL(VALUE block_handler)
{
    ((void)0);
    return block_handler;
}
static inline VALUE
VM_BH_FROM_SYMBOL(VALUE symbol)
{
    ((void)0);
    return symbol;
}
static inline VALUE
VM_BH_TO_PROC(VALUE block_handler)
{
    ((void)0);
    return block_handler;
}
static inline VALUE
VM_BH_FROM_PROC(VALUE procval)
{
    ((void)0);
    return procval;
}
VALUE rb_thread_alloc(VALUE klass);
VALUE rb_binding_alloc(VALUE klass);
VALUE rb_proc_alloc(VALUE klass);
VALUE rb_proc_dup(VALUE self);
extern void rb_vmdebug_stack_dump_raw(const rb_execution_context_t *ec, const rb_control_frame_t *cfp);
extern void rb_vmdebug_debug_print_pre(const rb_execution_context_t *ec, const rb_control_frame_t *cfp, const VALUE *_pc);
extern void rb_vmdebug_debug_print_post(const rb_execution_context_t *ec, const rb_control_frame_t *cfp);
void rb_vm_bugreport(const void *);
__attribute__ ((__noreturn__)) void rb_bug_context(const void *, const char *fmt, ...);


VALUE rb_iseq_eval(const rb_iseq_t *iseq);
VALUE rb_iseq_eval_main(const rb_iseq_t *iseq);
VALUE rb_iseq_path(const rb_iseq_t *iseq);
VALUE rb_iseq_realpath(const rb_iseq_t *iseq);


VALUE rb_iseq_pathobj_new(VALUE path, VALUE realpath);
void rb_iseq_pathobj_set(const rb_iseq_t *iseq, VALUE path, VALUE realpath);
int rb_ec_frame_method_id_and_class(const rb_execution_context_t *ec, ID *idp, ID *called_idp, VALUE *klassp);
void rb_ec_setup_exception(const rb_execution_context_t *ec, VALUE mesg, VALUE cause);
VALUE rb_vm_invoke_proc(rb_execution_context_t *ec, rb_proc_t *proc, int argc, const VALUE *argv, VALUE block_handler);
VALUE rb_vm_make_proc_lambda(const rb_execution_context_t *ec, const struct rb_captured_block *captured, VALUE klass, int8_t is_lambda);
static inline VALUE
rb_vm_make_proc(const rb_execution_context_t *ec, const struct rb_captured_block *captured, VALUE klass)
{
    return rb_vm_make_proc_lambda(ec, captured, klass, 0);
}
static inline VALUE
rb_vm_make_lambda(const rb_execution_context_t *ec, const struct rb_captured_block *captured, VALUE klass)
{
    return rb_vm_make_proc_lambda(ec, captured, klass, 1);
}
VALUE rb_vm_make_binding(const rb_execution_context_t *ec, const rb_control_frame_t *src_cfp);
VALUE rb_vm_env_local_variables(const rb_env_t *env);
const rb_env_t *rb_vm_env_prev_env(const rb_env_t *env);
const VALUE *rb_binding_add_dynavars(VALUE bindval, rb_binding_t *bind, int dyncount, const ID *dynvars);
void rb_vm_inc_const_missing_count(void);
void rb_vm_gvl_destroy(rb_vm_t *vm);
VALUE rb_vm_call(rb_execution_context_t *ec, VALUE recv, VALUE id, int argc,
   const VALUE *argv, const rb_callable_method_entry_t *me);
static void rb_vm_pop_frame(rb_execution_context_t *ec);
void rb_thread_start_timer_thread(void);
void rb_thread_stop_timer_thread(void);
void rb_thread_reset_timer_thread(void);
void rb_thread_wakeup_timer_thread(int);
static inline void
rb_vm_living_threads_init(rb_vm_t *vm)
{
    list_head_init(&vm->waiting_fds);
    list_head_init(&vm->waiting_pids);
    list_head_init(&vm->workqueue);
    list_head_init(&vm->waiting_grps);
    list_head_init(&vm->living_threads);
    vm->living_thread_num = 0;
}
static inline void
rb_vm_living_threads_insert(rb_vm_t *vm, rb_thread_t *th)
{
    list_add_tail_(&vm->living_threads, &th->vmlt_node, "./vm_core.h" ":" "1648");
    vm->living_thread_num++;
}
static inline void
rb_vm_living_threads_remove(rb_vm_t *vm, rb_thread_t *th)
{
    list_del_(&th->vmlt_node, "./vm_core.h" ":" "1655");
    vm->living_thread_num--;
}
typedef int rb_backtrace_iter_func(void *, VALUE, int, VALUE);
rb_control_frame_t *rb_vm_get_ruby_level_next_cfp(const rb_execution_context_t *ec, const rb_control_frame_t *cfp);
rb_control_frame_t *rb_vm_get_binding_creatable_next_cfp(const rb_execution_context_t *ec, const rb_control_frame_t *cfp);
int rb_vm_get_sourceline(const rb_control_frame_t *);
VALUE rb_name_err_mesg_new(VALUE mesg, VALUE recv, VALUE method);
void rb_vm_stack_to_heap(rb_execution_context_t *ec);
void ruby_thread_init_stack(rb_thread_t *th);
int rb_vm_control_frame_id_and_class(const rb_control_frame_t *cfp, ID *idp, ID *called_idp, VALUE *klassp);
void rb_vm_rewind_cfp(rb_execution_context_t *ec, rb_control_frame_t *cfp);
static VALUE rb_vm_bh_to_procval(const rb_execution_context_t *ec, VALUE block_handler);
void rb_vm_register_special_exception_str(enum ruby_special_exceptions sp, VALUE exception_class, VALUE mesg);
void rb_gc_mark_machine_stack(const rb_execution_context_t *ec);static inline 
void rb_vm_rewrite_cref(rb_cref_t *node, VALUE old_klass, VALUE new_klass, rb_cref_t **new_cref_ptr);
static const rb_callable_method_entry_t *rb_vm_frame_method_entry(const rb_control_frame_t *cfp);
VALUE rb_catch_protect(VALUE t, rb_block_call_func *func, VALUE data, enum ruby_tag_type *stateptr);


extern rb_vm_t *ruby_current_vm_ptr;
extern rb_execution_context_t *ruby_current_execution_context_ptr;
extern rb_event_flag_t ruby_vm_event_flags;
extern rb_event_flag_t ruby_vm_event_enabled_global_flags;
extern unsigned int ruby_vm_event_local_num;


static inline rb_thread_t *
rb_ec_thread_ptr(const rb_execution_context_t *ec)
{
    return ec->thread_ptr;
}
static inline rb_vm_t *
rb_ec_vm_ptr(const rb_execution_context_t *ec)
{
    const rb_thread_t *th = rb_ec_thread_ptr(ec);
    if (th) {
 return th->vm;
    }
    else {
 return ((void *)0);
    }
}
static inline rb_execution_context_t *
rb_current_execution_context(void)
{
    return ruby_current_execution_context_ptr;
}
static inline rb_thread_t *
rb_current_thread(void)
{
    const rb_execution_context_t *ec = rb_current_execution_context();
    return rb_ec_thread_ptr(ec);
}
static inline rb_vm_t *
rb_current_vm(void)
{
    ((void)0);
    return ruby_current_vm_ptr;
}
static inline void
rb_thread_set_current_raw(const rb_thread_t *th)
{
    ruby_current_execution_context_ptr = th->ec;
}
static inline void
rb_thread_set_current(rb_thread_t *th)
{
    if (th->vm->running_thread != th) {
        th->running_time_us = 0;
    }
    rb_thread_set_current_raw(th);
    th->vm->running_thread = th;
}
enum {
    TIMER_INTERRUPT_MASK = 0x01,
    PENDING_INTERRUPT_MASK = 0x02,
    POSTPONED_JOB_INTERRUPT_MASK = 0x04,
    TRAP_INTERRUPT_MASK = 0x08
};
VALUE rb_exc_set_backtrace(VALUE exc, VALUE bt);
int rb_signal_buff_size(void);
int rb_signal_exec(rb_thread_t *th, int sig);
void rb_threadptr_check_signal(rb_thread_t *mth);
void rb_threadptr_signal_raise(rb_thread_t *th, int sig);
void rb_threadptr_signal_exit(rb_thread_t *th);
int rb_threadptr_execute_interrupts(rb_thread_t *, int);
void rb_threadptr_interrupt(rb_thread_t *th);
void rb_threadptr_unlock_all_locking_mutexes(rb_thread_t *th);
void rb_threadptr_pending_interrupt_clear(rb_thread_t *th);
void rb_threadptr_pending_interrupt_enque(rb_thread_t *th, VALUE v);
void rb_ec_error_print(rb_execution_context_t * volatile ec, volatile VALUE errinfo);
void rb_execution_context_mark(const rb_execution_context_t *ec);
void rb_fiber_close(rb_fiber_t *fib);
void Init_native_thread(rb_thread_t *th);
static inline void
rb_vm_check_ints(rb_execution_context_t *ec)
{
    ((void)0);
    if ((__builtin_expect(!!(((ec)->interrupt_flag & ~(ec)->interrupt_mask)), 0))) {
 rb_threadptr_execute_interrupts(rb_ec_thread_ptr(ec), 0);
    }
}
struct rb_trace_arg_struct {
    rb_event_flag_t event;
    rb_execution_context_t *ec;
    const rb_control_frame_t *cfp;
    VALUE self;
    ID id;
    ID called_id;
    VALUE klass;
    VALUE data;
    int klass_solved;
    int lineno;
    VALUE path;
};
void rb_hook_list_mark(rb_hook_list_t *hooks);
void rb_hook_list_free(rb_hook_list_t *hooks);
void rb_hook_list_connect_tracepoint(VALUE target, rb_hook_list_t *list, VALUE tpval, unsigned int target_line);
void rb_hook_list_remove_tracepoint(rb_hook_list_t *list, VALUE tpval);
void rb_exec_event_hooks(struct rb_trace_arg_struct *trace_arg, rb_hook_list_t *hooks, int pop_p);
static inline void
rb_exec_event_hook_orig(rb_execution_context_t *ec, rb_hook_list_t *hooks, rb_event_flag_t flag,
                        VALUE self, ID id, ID called_id, VALUE klass, VALUE data, int pop_p)
{
    struct rb_trace_arg_struct trace_arg;
    ((void)0);
    trace_arg.event = flag;
    trace_arg.ec = ec;
    trace_arg.cfp = ec->cfp;
    trace_arg.self = self;
    trace_arg.id = id;
    trace_arg.called_id = called_id;
    trace_arg.klass = klass;
    trace_arg.data = data;
    trace_arg.path = ((VALUE)RUBY_Qundef);
    trace_arg.klass_solved = 0;
    rb_exec_event_hooks(&trace_arg, hooks, pop_p);
}
static inline rb_hook_list_t *
rb_vm_global_hooks(const rb_execution_context_t *ec)
{
    return &rb_ec_vm_ptr(ec)->global_hooks;
}
static inline void
rb_exec_event_hook_script_compiled(rb_execution_context_t *ec, const rb_iseq_t *iseq, VALUE eval_script)
{
    do { const rb_event_flag_t flag_arg_ = (0x2000); rb_hook_list_t *hooks_arg_ = (rb_vm_global_hooks(ec)); if ((__builtin_expect(!!((hooks_arg_)->events & (flag_arg_)), 0))) { rb_exec_event_hook_orig(ec, hooks_arg_, flag_arg_, ec->cfp->self, 0, 0, 0, !((VALUE)(eval_script) != ((VALUE)RUBY_Qnil)) ? (VALUE)iseq : __extension__ ({ const VALUE args_to_new_ary[] = {eval_script, (VALUE)iseq}; if (__builtin_constant_p(2)) { __extension__ _Static_assert(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (2), "rb_ary_new_from_args" ": " "numberof(args_to_new_ary) == (2)"); } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }), 0); } } while (0);
}


int rb_thread_check_trap_pending(void);
extern VALUE rb_get_coverages(void);
extern void rb_set_coverages(VALUE, int, VALUE);
extern void rb_clear_coverages(void);
extern void rb_reset_coverages(void);
void rb_postponed_job_flush(rb_vm_t *vm);




VALUE ruby_debug_print_value(int level, int debug_level, const char *header, VALUE v);
ID ruby_debug_print_id(int level, int debug_level, const char *header, ID id);
NODE *ruby_debug_print_node(int level, int debug_level, const char *header, const NODE *node);
int ruby_debug_print_indent(int level, int debug_level, int indent_level);
void ruby_debug_breakpoint(void);
void ruby_debug_gc_check_func(void);
void ruby_set_debug_option(const char *str);


extern const int ruby_api_version[];
static inline size_t
rb_call_info_kw_arg_bytes(int keyword_len)
{
    return sizeof(struct rb_call_info_kw_arg) + sizeof(VALUE) * (keyword_len - 1);
}
static inline rb_snum_t
ISEQ_FLIP_CNT_INCREMENT(const rb_iseq_t *iseq)
{
    rb_snum_t cnt = iseq->body->variable.flip_count;
    iseq->body->variable.flip_count += 1;
    return cnt;
}
static inline VALUE *
ISEQ_ORIGINAL_ISEQ(const rb_iseq_t *iseq)
{
    return iseq->body->variable.original_iseq;
}
static inline void
ISEQ_ORIGINAL_ISEQ_CLEAR(const rb_iseq_t *iseq)
{
    void *ptr = iseq->body->variable.original_iseq;
    iseq->body->variable.original_iseq = ((void *)0);
    if (ptr) {
        ruby_xfree(ptr);
    }
}
static inline VALUE *
ISEQ_ORIGINAL_ISEQ_ALLOC(const rb_iseq_t *iseq, long size)
{
    return iseq->body->variable.original_iseq =
        ruby_xmalloc2(size, sizeof(VALUE));
}
struct iseq_compile_data {
    const VALUE err_info;
    VALUE mark_ary;
    const VALUE catch_table_ary;
    struct iseq_label_data *start_label;
    struct iseq_label_data *end_label;
    struct iseq_label_data *redo_label;
    const rb_iseq_t *current_block;
    VALUE ensure_node;
    VALUE for_iseq;
    struct iseq_compile_data_ensure_node_stack *ensure_node_stack;
    struct iseq_compile_data_storage *storage_head;
    struct iseq_compile_data_storage *storage_current;
    int loopval_popped;
    int last_line;
    int label_no;
    int node_level;
    unsigned int ci_index;
    unsigned int ci_kw_index;
    const rb_compile_option_t *option;
    struct rb_id_table *ivar_cache_table;
};
static inline struct iseq_compile_data *
ISEQ_COMPILE_DATA(const rb_iseq_t *iseq)
{
    if (iseq->flags & ((VALUE)RUBY_FL_USER6)) {
 return iseq->aux.compile_data;
    }
    else {
 return ((void *)0);
    }
}
static inline void
ISEQ_COMPILE_DATA_ALLOC(rb_iseq_t *iseq)
{
    iseq->aux.compile_data = (((struct iseq_compile_data*)ruby_xcalloc((size_t)(1),sizeof(struct iseq_compile_data))));
    iseq->flags |= ((VALUE)RUBY_FL_USER6);
}
static inline void
ISEQ_COMPILE_DATA_CLEAR(rb_iseq_t *iseq)
{
    iseq->flags &= ~((VALUE)RUBY_FL_USER6);
    iseq->aux.compile_data = ((void *)0);
}
static inline rb_iseq_t *
iseq_imemo_alloc(void)
{
    return (rb_iseq_t *)rb_imemo_new(imemo_iseq, 0, 0, 0, 0);
}
VALUE rb_iseq_ibf_dump(const rb_iseq_t *iseq, VALUE opt);
void rb_ibf_load_iseq_complete(rb_iseq_t *iseq);
const rb_iseq_t *rb_iseq_ibf_load(VALUE str);
VALUE rb_iseq_ibf_load_extra_data(VALUE str);
void rb_iseq_init_trace(rb_iseq_t *iseq);
int rb_iseq_add_local_tracepoint_recursively(const rb_iseq_t *iseq, rb_event_flag_t turnon_events, VALUE tpval, unsigned int target_line);
int rb_iseq_remove_local_tracepoint_recursively(const rb_iseq_t *iseq, VALUE tpval);
const rb_iseq_t *rb_iseq_load_iseq(VALUE fname);
unsigned int *rb_iseq_insns_info_decode_positions(const struct rb_iseq_constant_body *body);


VALUE rb_iseq_compile_node(rb_iseq_t *iseq, const NODE *node);
VALUE rb_iseq_compile_ifunc(rb_iseq_t *iseq, const struct vm_ifunc *ifunc);
int rb_iseq_translate_threaded_code(rb_iseq_t *iseq);
VALUE *rb_iseq_original_iseq(const rb_iseq_t *iseq);
void rb_iseq_build_from_ary(rb_iseq_t *iseq, VALUE misc,
       VALUE locals, VALUE args,
       VALUE exception, VALUE body);
VALUE rb_iseq_load(VALUE data, VALUE parent, VALUE opt);
VALUE rb_iseq_parameters(const rb_iseq_t *iseq, int is_proc);
struct st_table *ruby_insn_make_insn_table(void);
unsigned int rb_iseq_line_no(const rb_iseq_t *iseq, size_t pos);
void rb_iseq_trace_set(const rb_iseq_t *iseq, rb_event_flag_t turnon_events);
void rb_iseq_trace_set_all(rb_event_flag_t turnon_events);
void rb_iseq_trace_on_all(void);
void rb_iseq_insns_info_encode_positions(const rb_iseq_t *iseq);
VALUE rb_iseqw_new(const rb_iseq_t *iseq);
const rb_iseq_t *rb_iseqw_to_iseq(VALUE iseqw);
VALUE rb_iseq_absolute_path(const rb_iseq_t *iseq);
VALUE rb_iseq_label(const rb_iseq_t *iseq);
VALUE rb_iseq_base_label(const rb_iseq_t *iseq);
VALUE rb_iseq_first_lineno(const rb_iseq_t *iseq);
VALUE rb_iseq_method_name(const rb_iseq_t *iseq);
void rb_iseq_code_location(const rb_iseq_t *iseq, int *first_lineno, int *first_column, int *last_lineno, int *last_column);
void rb_iseq_remove_coverage_all(void);
const rb_iseq_t *rb_method_iseq(VALUE body);
const rb_iseq_t *rb_proc_get_iseq(VALUE proc, int *is_proc);
struct rb_compile_option_struct {
    unsigned int inline_const_cache: 1;
    unsigned int peephole_optimization: 1;
    unsigned int tailcall_optimization: 1;
    unsigned int specialized_instruction: 1;
    unsigned int operands_unification: 1;
    unsigned int instructions_unification: 1;
    unsigned int stack_caching: 1;
    unsigned int frozen_string_literal: 1;
    unsigned int debug_frozen_string_literal: 1;
    unsigned int coverage_enabled: 1;
    int debug_level;
};
struct iseq_insn_info_entry {
    int line_no;
    rb_event_flag_t events;
};
struct iseq_catch_table_entry {
    enum catch_type {
 CATCH_TYPE_RESCUE = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_ENSURE = (((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_RETRY = (((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_BREAK = (((VALUE)(4))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_REDO = (((VALUE)(5))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_NEXT = (((VALUE)(6))<<1 | RUBY_FIXNUM_FLAG)
    } type;
    const rb_iseq_t *iseq;
    unsigned int start;
    unsigned int end;
    unsigned int cont;
    unsigned int sp;
};
struct iseq_catch_table { unsigned int size; struct iseq_catch_table_entry entries[]; } __attribute__((packed));
static inline int
iseq_catch_table_bytes(int n)
{
    enum {
 catch_table_entry_size = sizeof(struct iseq_catch_table_entry),
 catch_table_entries_max = (0x7fffffff - __builtin_offsetof (struct iseq_catch_table, entries)) / catch_table_entry_size
    };
    if (n > catch_table_entries_max) rb_fatal("too large iseq_catch_table - %d", n);
    return (int)(__builtin_offsetof (struct iseq_catch_table, entries) +
   n * catch_table_entry_size);
}
struct iseq_compile_data_storage {
    struct iseq_compile_data_storage *next;
    unsigned int pos;
    unsigned int size;
    char buff[];
};
enum defined_type {
    DEFINED_NOT_DEFINED,
    DEFINED_NIL = 1,
    DEFINED_IVAR,
    DEFINED_LVAR,
    DEFINED_GVAR,
    DEFINED_CVAR,
    DEFINED_CONST,
    DEFINED_METHOD,
    DEFINED_YIELD,
    DEFINED_ZSUPER,
    DEFINED_SELF,
    DEFINED_TRUE,
    DEFINED_FALSE,
    DEFINED_ASGN,
    DEFINED_EXPR,
    DEFINED_IVAR2,
    DEFINED_REF,
    DEFINED_FUNC
};
VALUE rb_iseq_defined_string(enum defined_type type);
void rb_iseq_make_compile_option(struct rb_compile_option_struct *option, VALUE opt);
VALUE rb_iseq_local_variables(const rb_iseq_t *iseq);


static inline void
vm_passed_block_handler_set(rb_execution_context_t *ec, VALUE block_handler)
{
    vm_block_handler_verify(block_handler);
    ec->passed_block_handler = block_handler;
}
static inline void
pass_passed_block_handler(rb_execution_context_t *ec)
{
    VALUE block_handler = rb_vm_frame_block_handler(ec->cfp);
    vm_passed_block_handler_set(ec, block_handler);
    VM_ENV_FLAGS_SET(ec->cfp->ep, VM_FRAME_FLAG_PASSED);
}

extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern char *program_invocation_name;
extern char *program_invocation_short_name;
typedef int error_t;

static inline int
rb_ec_tag_state(const rb_execution_context_t *ec)
{
    enum ruby_tag_type state = ec->tag->state;
    ec->tag->state = RUBY_TAG_NONE;
    return state;
}
__attribute__ ((__noreturn__)) static inline void rb_ec_tag_jump(const rb_execution_context_t *ec, enum ruby_tag_type st);
static inline void
rb_ec_tag_jump(const rb_execution_context_t *ec, enum ruby_tag_type st)
{
    ec->tag->state = st;
    __builtin_longjmp(((ec->tag->buf)),(1));
}
static inline VALUE
CREF_CLASS(const rb_cref_t *cref)
{
    return cref->klass;
}
static inline rb_cref_t *
CREF_NEXT(const rb_cref_t *cref)
{
    return cref->next;
}
static inline const rb_scope_visibility_t *
CREF_SCOPE_VISI(const rb_cref_t *cref)
{
    return &cref->scope_visi;
}
static inline VALUE
CREF_REFINEMENTS(const rb_cref_t *cref)
{
    return cref->refinements;
}
static inline void
CREF_REFINEMENTS_SET(rb_cref_t *cref, VALUE refs)
{
    rb_obj_write((VALUE)(cref), (VALUE *)(&cref->refinements), (VALUE)(refs), "./eval_intern.h", 237);
}
static inline int
CREF_PUSHED_BY_EVAL(const rb_cref_t *cref)
{
    return cref->flags & ((VALUE)RUBY_FL_USER5);
}
static inline void
CREF_PUSHED_BY_EVAL_SET(rb_cref_t *cref)
{
    cref->flags |= ((VALUE)RUBY_FL_USER5);
}
static inline int
CREF_OMOD_SHARED(const rb_cref_t *cref)
{
    return cref->flags & ((VALUE)RUBY_FL_USER6);
}
static inline void
CREF_OMOD_SHARED_SET(rb_cref_t *cref)
{
    cref->flags |= ((VALUE)RUBY_FL_USER6);
}
static inline void
CREF_OMOD_SHARED_UNSET(rb_cref_t *cref)
{
    cref->flags &= ~((VALUE)RUBY_FL_USER6);
}
void rb_thread_cleanup(void);
void rb_thread_wait_other_threads(void);
enum {
    RAISED_EXCEPTION = 1,
    RAISED_STACKOVERFLOW = 2,
    RAISED_NOMEMORY = 4
};
int rb_ec_set_raised(rb_execution_context_t *ec);
int rb_ec_reset_raised(rb_execution_context_t *ec);
int rb_ec_stack_check(rb_execution_context_t *ec);
VALUE rb_f_eval(int argc, const VALUE *argv, VALUE self);
VALUE rb_make_exception(int argc, const VALUE *argv);
__attribute__ ((__noreturn__)) void rb_method_name_error(VALUE, VALUE);
__attribute__ ((__noreturn__)) void rb_fiber_start(void);
__attribute__ ((__noreturn__)) void rb_print_undef(VALUE, ID, rb_method_visibility_t);
__attribute__ ((__noreturn__)) void rb_print_undef_str(VALUE, VALUE);
__attribute__ ((__noreturn__)) void rb_print_inaccessible(VALUE, ID, rb_method_visibility_t);
__attribute__ ((__noreturn__)) void rb_vm_localjump_error(const char *,VALUE, int);
VALUE rb_vm_make_jump_tag_but_local_jump(int state, VALUE val);
rb_cref_t *rb_vm_cref(void);
rb_cref_t *rb_vm_cref_replace_with_duplicated_cref(void);
VALUE rb_vm_call_cfunc(VALUE recv, VALUE (*func)(VALUE), VALUE arg, VALUE block_handler, VALUE filename);
void rb_vm_set_progname(VALUE filename);
void rb_thread_terminate_all(void);
VALUE rb_vm_cbase(void);
VALUE rb_ec_backtrace_object(const rb_execution_context_t *ec);
VALUE rb_ec_backtrace_str_ary(const rb_execution_context_t *ec, long lev, long n);
struct ruby_dtrace_method_hook_args {
    const char *classname;
    const char *methodname;
    const char *filename;
    int line_no;
    volatile VALUE klass;
    volatile VALUE name;
};
__attribute__ ((__noinline__)) int rb_dtrace_setup(rb_execution_context_t *, VALUE, ID, struct ruby_dtrace_method_hook_args *);
VALUE rb_str_concat_literals(size_t, const VALUE*);
__attribute__ ((__pure__)) static inline const VALUE *VM_EP_LEP(const VALUE *);
static inline const VALUE *
VM_EP_LEP(const VALUE *ep)
{
    while (!VM_ENV_LOCAL_P(ep)) {
 ep = VM_ENV_PREV_EP(ep);
    }
    return ep;
}
static inline const rb_control_frame_t *
rb_vm_search_cf_from_ep(const rb_execution_context_t *ec, const rb_control_frame_t *cfp, const VALUE * const ep)
{
    if (!ep) {
 return ((void *)0);
    }
    else {
 const rb_control_frame_t * const eocfp = RUBY_VM_END_CONTROL_FRAME(ec);
 while (cfp < eocfp) {
     if (cfp->ep == ep) {
  return cfp;
     }
     cfp = ((cfp)+1);
 }
 return ((void *)0);
    }
}static inline 
const VALUE *
rb_vm_ep_local_ep(const VALUE *ep)
{
    return VM_EP_LEP(ep);
}
__attribute__ ((__pure__)) static inline const VALUE *VM_CF_LEP(const rb_control_frame_t * const cfp);
static inline const VALUE *
VM_CF_LEP(const rb_control_frame_t * const cfp)
{
    return VM_EP_LEP(cfp->ep);
}
static inline const VALUE *
VM_CF_PREV_EP(const rb_control_frame_t * const cfp)
{
    return VM_ENV_PREV_EP(cfp->ep);
}
__attribute__ ((__pure__)) static inline VALUE VM_CF_BLOCK_HANDLER(const rb_control_frame_t * const cfp);
static inline VALUE
VM_CF_BLOCK_HANDLER(const rb_control_frame_t * const cfp)
{
    const VALUE *ep = VM_CF_LEP(cfp);
    return VM_ENV_BLOCK_HANDLER(ep);
}static inline 
VALUE
rb_vm_frame_block_handler(const rb_control_frame_t *cfp)
{
    return VM_CF_BLOCK_HANDLER(cfp);
}
static struct rb_captured_block *
VM_CFP_TO_CAPTURED_BLOCK(const rb_control_frame_t *cfp)
{
    ((void)0);
    return (struct rb_captured_block *)&cfp->self;
}
static rb_control_frame_t *
VM_CAPTURED_BLOCK_TO_CFP(const struct rb_captured_block *captured)
{
    rb_control_frame_t *cfp = ((rb_control_frame_t *)((VALUE *)(captured) - 3));
    ((void)0);
    ((void)0);
    return cfp;
}
static int
VM_BH_FROM_CFP_P(VALUE block_handler, const rb_control_frame_t *cfp)
{
    const struct rb_captured_block *captured = VM_CFP_TO_CAPTURED_BLOCK(cfp);
    return ((void *)((block_handler) & ~0x03)) == captured;
}
static VALUE
vm_passed_block_handler(rb_execution_context_t *ec)
{
    VALUE block_handler = ec->passed_block_handler;
    ec->passed_block_handler = 0;
    vm_block_handler_verify(block_handler);
    return block_handler;
}
static rb_cref_t *
vm_cref_new0(VALUE klass, rb_method_visibility_t visi, int module_func, rb_cref_t *prev_cref, int pushed_by_eval, int use_prev_prev)
{
    VALUE refinements = ((VALUE)RUBY_Qnil);
    int omod_shared = 0;
    rb_cref_t *cref;
    union {
 rb_scope_visibility_t visi;
 VALUE value;
    } scope_visi;
    scope_visi.visi.method_visi = visi;
    scope_visi.visi.module_func = module_func;
    if (prev_cref != ((void *)0) && prev_cref != (void *)1 ) {
 refinements = CREF_REFINEMENTS(prev_cref);
 if (!!((VALUE)(refinements) != ((VALUE)RUBY_Qnil))) {
     omod_shared = 1;
     CREF_OMOD_SHARED_SET(prev_cref);
 }
    }
    cref = (rb_cref_t *)rb_imemo_new(imemo_cref, klass, (VALUE)(use_prev_prev ? CREF_NEXT(prev_cref) : prev_cref), scope_visi.value, refinements);
    if (pushed_by_eval) CREF_PUSHED_BY_EVAL_SET(cref);
    if (omod_shared) CREF_OMOD_SHARED_SET(cref);
    return cref;
}
static rb_cref_t *
vm_cref_new(VALUE klass, rb_method_visibility_t visi, int module_func, rb_cref_t *prev_cref, int pushed_by_eval)
{
    return vm_cref_new0(klass, visi, module_func, prev_cref, pushed_by_eval, 0);
}
static rb_cref_t *
vm_cref_new_use_prev(VALUE klass, rb_method_visibility_t visi, int module_func, rb_cref_t *prev_cref, int pushed_by_eval)
{
    return vm_cref_new0(klass, visi, module_func, prev_cref, pushed_by_eval, 1);
}
static int
ref_delete_symkey(VALUE key, VALUE value, VALUE unused)
{
    return ((((VALUE)(key)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(key) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(key) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(key))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) ? ST_DELETE : ST_CONTINUE;
}
static rb_cref_t *
vm_cref_dup(const rb_cref_t *cref)
{
    VALUE klass = CREF_CLASS(cref);
    const rb_scope_visibility_t *visi = CREF_SCOPE_VISI(cref);
    rb_cref_t *next_cref = CREF_NEXT(cref), *new_cref;
    int pushed_by_eval = CREF_PUSHED_BY_EVAL(cref);
    new_cref = vm_cref_new(klass, visi->method_visi, visi->module_func, next_cref, pushed_by_eval);
    if (!!((VALUE)(CREF_REFINEMENTS(cref)) != ((VALUE)RUBY_Qnil))) {
        VALUE ref = rb_hash_dup(CREF_REFINEMENTS(cref));
        rb_hash_foreach(ref, ref_delete_symkey, ((VALUE)RUBY_Qnil));
        CREF_REFINEMENTS_SET(new_cref, ref);
 CREF_OMOD_SHARED_UNSET(new_cref);
    }
    return new_cref;
}
static rb_cref_t *
vm_cref_new_toplevel(rb_execution_context_t *ec)
{
    rb_cref_t *cref = vm_cref_new(rb_cObject, METHOD_VISI_PRIVATE , 0, ((void *)0), 0);
    VALUE top_wrapper = rb_ec_thread_ptr(ec)->top_wrapper;
    if (top_wrapper) {
 cref = vm_cref_new(top_wrapper, METHOD_VISI_PRIVATE, 0, cref, 0);
    }
    return cref;
}static inline 
rb_cref_t *
rb_vm_cref_new_toplevel(void)
{
    return vm_cref_new_toplevel(rb_current_execution_context());
}
static void
vm_cref_dump(const char *mesg, const rb_cref_t *cref)
{
    fprintf(stderr, "vm_cref_dump: %s (%p)\n", mesg, (void *)cref);
    while (cref) {
 fprintf(stderr, "= cref| klass: %s\n", (!(((struct RBasic*)(rb_class_path(CREF_CLASS(cref))))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rb_class_path(CREF_CLASS(cref))))->as.ary : ((struct RString*)(rb_class_path(CREF_CLASS(cref))))->as.heap.ptr));
 cref = CREF_NEXT(cref);
    }
}static inline 
void
rb_vm_block_ep_update(VALUE obj, const struct rb_block *dst, const VALUE *ep)
{
    *((const VALUE **)&dst->as.captured.ep) = ep;
    rb_obj_written((VALUE)(obj), (VALUE)(((VALUE)RUBY_Qundef)), (VALUE)(VM_ENV_ENVVAL(ep)), "./vm.c", 292);
}
static void
vm_bind_update_env(VALUE bindval, rb_binding_t *bind, VALUE envval)
{
    const rb_env_t *env = (rb_env_t *)envval;
    rb_obj_write((VALUE)(bindval), (VALUE *)(&bind->block.as.captured.code.iseq), (VALUE)(env->iseq), "./vm.c", 299);
    rb_vm_block_ep_update(bindval, &bind->block, env->ep);
}
static VALUE vm_make_env_object(const rb_execution_context_t *ec, rb_control_frame_t *cfp);
extern VALUE rb_vm_invoke_bmethod(rb_execution_context_t *ec, rb_proc_t *proc, VALUE self,
                                  int argc, const VALUE *argv, VALUE block_handler,
                                  const rb_callable_method_entry_t *me);
static VALUE vm_invoke_proc(rb_execution_context_t *ec, rb_proc_t *proc, VALUE self, int argc, const VALUE *argv, VALUE block_handler);
static VALUE rb_block_param_proxy;
enum rb_mjit_iseq_func {
    NOT_ADDED_JIT_ISEQ_FUNC = 0,
    NOT_READY_JIT_ISEQ_FUNC = 1,
    NOT_COMPILED_JIT_ISEQ_FUNC = 2,
    LAST_JIT_ISEQ_FUNC = 3
};
struct mjit_options {
    char on;
    char save_temps;
    char warnings;
    char debug;
    unsigned int wait;
    unsigned int min_calls;
    int verbose;
    int max_cache_size;
};
typedef VALUE (*mjit_func_t)(rb_execution_context_t *, rb_control_frame_t *);


extern struct mjit_options mjit_opts;
extern int mjit_call_p;
extern void mjit_add_iseq_to_process(const rb_iseq_t *iseq);
extern VALUE mjit_wait_call(rb_execution_context_t *ec, struct rb_iseq_constant_body *body);


extern int mjit_compile(FILE *f, const struct rb_iseq_constant_body *body, const char *funcname, struct rb_call_cache *cc_entries, union iseq_inline_storage_entry *is_entries);
extern void mjit_init(struct mjit_options *opts);
extern void mjit_postponed_job_register_start_hook(void);
extern void mjit_postponed_job_register_finish_hook(void);
extern void mjit_gc_start_hook(void);
extern void mjit_gc_finish_hook(void);
extern void mjit_free_iseq(const rb_iseq_t *iseq);
extern void mjit_mark(void);
extern struct mjit_cont *mjit_cont_new(rb_execution_context_t *ec);
extern void mjit_cont_free(struct mjit_cont *cont);
extern void mjit_add_class_serial(rb_serial_t class_serial);
extern void mjit_remove_class_serial(rb_serial_t class_serial);
static inline int
mjit_target_iseq_p(struct rb_iseq_constant_body *body)
{
    return (body->type == ISEQ_TYPE_METHOD || body->type == ISEQ_TYPE_BLOCK)
        && body->iseq_size < 1000;
}
static inline VALUE
mjit_exec(rb_execution_context_t *ec)
{
    const rb_iseq_t *iseq;
    struct rb_iseq_constant_body *body;
    long unsigned total_calls;
    mjit_func_t func;
    if (!mjit_call_p)
        return ((VALUE)RUBY_Qundef);
    iseq = ec->cfp->iseq;
    body = iseq->body;
    total_calls = ++body->total_calls;
    func = body->jit_func;
    if ((__builtin_expect(!!((uintptr_t)func <= (uintptr_t)LAST_JIT_ISEQ_FUNC), 0))) {
        switch ((enum rb_mjit_iseq_func)func) {
          case NOT_ADDED_JIT_ISEQ_FUNC:
            if (total_calls == mjit_opts.min_calls && mjit_target_iseq_p(body)) {
                mjit_add_iseq_to_process(iseq);
                if ((__builtin_expect(!!(mjit_opts.wait), 0))) {
                    return mjit_wait_call(ec, body);
                }
            }
            return ((VALUE)RUBY_Qundef);
          case NOT_READY_JIT_ISEQ_FUNC:
          case NOT_COMPILED_JIT_ISEQ_FUNC:
            return ((VALUE)RUBY_Qundef);
          default:
            break;
        }
    }
    return func(ec, ec->cfp);
}
void mjit_child_after_fork(void);


extern VALUE ruby_vm_const_missing_count;
extern rb_serial_t ruby_vm_global_method_state;
extern rb_serial_t ruby_vm_global_constant_state;
extern rb_serial_t ruby_vm_class_serial;


static inline int
rb_obj_hidden_p(VALUE obj)
{
    if ((((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
        return 0;
    }
    else {
        return (((struct RBasic*)(obj))->klass) ? 0 : 1;
    }
}
enum vm_regan_regtype {
    VM_REGAN_PC = 0,
    VM_REGAN_SP = 1,
    VM_REGAN_EP = 2,
    VM_REGAN_CFP = 3,
    VM_REGAN_SELF = 4,
    VM_REGAN_ISEQ = 5
};
enum vm_regan_acttype {
    VM_REGAN_ACT_GET = 0,
    VM_REGAN_ACT_SET = 1
};
extern rb_method_definition_t *rb_method_definition_create(rb_method_type_t type, ID mid);
extern void rb_method_definition_set(const rb_method_entry_t *me, rb_method_definition_t *def, void *opts);
extern int rb_method_definition_eq(const rb_method_definition_t *d1, const rb_method_definition_t *d2);
extern VALUE rb_make_no_method_exception(VALUE exc, VALUE format, VALUE obj,
      int argc, const VALUE *argv, int priv);
static inline struct vm_throw_data *
THROW_DATA_NEW(VALUE val, const rb_control_frame_t *cf, VALUE st)
{
    return (struct vm_throw_data *)rb_imemo_new(imemo_throw_data, val, (VALUE)cf, st, 0);
}
static inline VALUE
THROW_DATA_VAL(const struct vm_throw_data *obj)
{
    ((void)0);
    return obj->throw_obj;
}
static inline const rb_control_frame_t *
THROW_DATA_CATCH_FRAME(const struct vm_throw_data *obj)
{
    ((void)0);
    return obj->catch_frame;
}
static inline int
THROW_DATA_STATE(const struct vm_throw_data *obj)
{
    ((void)0);
    return (int)obj->throw_state;
}
static inline int
THROW_DATA_CONSUMED_P(const struct vm_throw_data *obj)
{
    ((void)0);
    return obj->flags & ((VALUE)RUBY_FL_USER4);
}
static inline void
THROW_DATA_CATCH_FRAME_SET(struct vm_throw_data *obj, const rb_control_frame_t *cfp)
{
    ((void)0);
    obj->catch_frame = cfp;
}
static inline void
THROW_DATA_STATE_SET(struct vm_throw_data *obj, int st)
{
    ((void)0);
    obj->throw_state = (VALUE)st;
}
static inline void
THROW_DATA_CONSUMED_SET(struct vm_throw_data *obj)
{
    if (( ((RUBY_T_IMEMO) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(obj)))&RUBY_FIXNUM_FLAG) : ((RUBY_T_IMEMO) == RUBY_T_TRUE) ? (((VALUE)(obj)) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_IMEMO) == RUBY_T_FALSE) ? (((VALUE)(obj)) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_IMEMO) == RUBY_T_NIL) ? (((VALUE)(obj)) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_IMEMO) == RUBY_T_UNDEF) ? (((VALUE)(obj)) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_IMEMO) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(obj))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(obj)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(obj)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(obj)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_IMEMO) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(obj)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(obj)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(obj)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(obj)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(obj)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(obj)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(obj)))->flags & RUBY_T_MASK) == (RUBY_T_IMEMO))) &&
 THROW_DATA_STATE(obj) == RUBY_TAG_BREAK) {
 obj->flags |= ((VALUE)RUBY_FL_USER4);
    }
}
typedef long OFFSET;
typedef unsigned long lindex_t;
typedef VALUE GENTRY;
typedef rb_iseq_t *ISEQ;
enum ruby_vminsn_type {
    YARVINSN_nop,
    YARVINSN_getlocal,
    YARVINSN_setlocal,
    YARVINSN_getblockparam,
    YARVINSN_setblockparam,
    YARVINSN_getblockparamproxy,
    YARVINSN_getspecial,
    YARVINSN_setspecial,
    YARVINSN_getinstancevariable,
    YARVINSN_setinstancevariable,
    YARVINSN_getclassvariable,
    YARVINSN_setclassvariable,
    YARVINSN_getconstant,
    YARVINSN_setconstant,
    YARVINSN_getglobal,
    YARVINSN_setglobal,
    YARVINSN_putnil,
    YARVINSN_putself,
    YARVINSN_putobject,
    YARVINSN_putspecialobject,
    YARVINSN_putiseq,
    YARVINSN_putstring,
    YARVINSN_concatstrings,
    YARVINSN_tostring,
    YARVINSN_freezestring,
    YARVINSN_toregexp,
    YARVINSN_intern,
    YARVINSN_newarray,
    YARVINSN_duparray,
    YARVINSN_duphash,
    YARVINSN_expandarray,
    YARVINSN_concatarray,
    YARVINSN_splatarray,
    YARVINSN_newhash,
    YARVINSN_newrange,
    YARVINSN_pop,
    YARVINSN_dup,
    YARVINSN_dupn,
    YARVINSN_swap,
    YARVINSN_reverse,
    YARVINSN_reput,
    YARVINSN_topn,
    YARVINSN_setn,
    YARVINSN_adjuststack,
    YARVINSN_defined,
    YARVINSN_checkmatch,
    YARVINSN_checkkeyword,
    YARVINSN_checktype,
    YARVINSN_defineclass,
    YARVINSN_send,
    YARVINSN_opt_send_without_block,
    YARVINSN_opt_str_freeze,
    YARVINSN_opt_str_uminus,
    YARVINSN_opt_newarray_max,
    YARVINSN_opt_newarray_min,
    YARVINSN_invokesuper,
    YARVINSN_invokeblock,
    YARVINSN_leave,
    YARVINSN_throw,
    YARVINSN_jump,
    YARVINSN_branchif,
    YARVINSN_branchunless,
    YARVINSN_branchnil,
    YARVINSN_opt_getinlinecache,
    YARVINSN_opt_setinlinecache,
    YARVINSN_once,
    YARVINSN_opt_case_dispatch,
    YARVINSN_opt_plus,
    YARVINSN_opt_minus,
    YARVINSN_opt_mult,
    YARVINSN_opt_div,
    YARVINSN_opt_mod,
    YARVINSN_opt_eq,
    YARVINSN_opt_neq,
    YARVINSN_opt_lt,
    YARVINSN_opt_le,
    YARVINSN_opt_gt,
    YARVINSN_opt_ge,
    YARVINSN_opt_ltlt,
    YARVINSN_opt_and,
    YARVINSN_opt_or,
    YARVINSN_opt_aref,
    YARVINSN_opt_aset,
    YARVINSN_opt_aset_with,
    YARVINSN_opt_aref_with,
    YARVINSN_opt_length,
    YARVINSN_opt_size,
    YARVINSN_opt_empty_p,
    YARVINSN_opt_succ,
    YARVINSN_opt_not,
    YARVINSN_opt_regexpmatch1,
    YARVINSN_opt_regexpmatch2,
    YARVINSN_opt_call_c_function,
    YARVINSN_bitblt,
    YARVINSN_answer,
    YARVINSN_getlocal_WC_0,
    YARVINSN_getlocal_WC_1,
    YARVINSN_setlocal_WC_0,
    YARVINSN_setlocal_WC_1,
    YARVINSN_putobject_INT2FIX_0_,
    YARVINSN_putobject_INT2FIX_1_,
    YARVINSN_trace_nop,
    YARVINSN_trace_getlocal,
    YARVINSN_trace_setlocal,
    YARVINSN_trace_getblockparam,
    YARVINSN_trace_setblockparam,
    YARVINSN_trace_getblockparamproxy,
    YARVINSN_trace_getspecial,
    YARVINSN_trace_setspecial,
    YARVINSN_trace_getinstancevariable,
    YARVINSN_trace_setinstancevariable,
    YARVINSN_trace_getclassvariable,
    YARVINSN_trace_setclassvariable,
    YARVINSN_trace_getconstant,
    YARVINSN_trace_setconstant,
    YARVINSN_trace_getglobal,
    YARVINSN_trace_setglobal,
    YARVINSN_trace_putnil,
    YARVINSN_trace_putself,
    YARVINSN_trace_putobject,
    YARVINSN_trace_putspecialobject,
    YARVINSN_trace_putiseq,
    YARVINSN_trace_putstring,
    YARVINSN_trace_concatstrings,
    YARVINSN_trace_tostring,
    YARVINSN_trace_freezestring,
    YARVINSN_trace_toregexp,
    YARVINSN_trace_intern,
    YARVINSN_trace_newarray,
    YARVINSN_trace_duparray,
    YARVINSN_trace_duphash,
    YARVINSN_trace_expandarray,
    YARVINSN_trace_concatarray,
    YARVINSN_trace_splatarray,
    YARVINSN_trace_newhash,
    YARVINSN_trace_newrange,
    YARVINSN_trace_pop,
    YARVINSN_trace_dup,
    YARVINSN_trace_dupn,
    YARVINSN_trace_swap,
    YARVINSN_trace_reverse,
    YARVINSN_trace_reput,
    YARVINSN_trace_topn,
    YARVINSN_trace_setn,
    YARVINSN_trace_adjuststack,
    YARVINSN_trace_defined,
    YARVINSN_trace_checkmatch,
    YARVINSN_trace_checkkeyword,
    YARVINSN_trace_checktype,
    YARVINSN_trace_defineclass,
    YARVINSN_trace_send,
    YARVINSN_trace_opt_send_without_block,
    YARVINSN_trace_opt_str_freeze,
    YARVINSN_trace_opt_str_uminus,
    YARVINSN_trace_opt_newarray_max,
    YARVINSN_trace_opt_newarray_min,
    YARVINSN_trace_invokesuper,
    YARVINSN_trace_invokeblock,
    YARVINSN_trace_leave,
    YARVINSN_trace_throw,
    YARVINSN_trace_jump,
    YARVINSN_trace_branchif,
    YARVINSN_trace_branchunless,
    YARVINSN_trace_branchnil,
    YARVINSN_trace_opt_getinlinecache,
    YARVINSN_trace_opt_setinlinecache,
    YARVINSN_trace_once,
    YARVINSN_trace_opt_case_dispatch,
    YARVINSN_trace_opt_plus,
    YARVINSN_trace_opt_minus,
    YARVINSN_trace_opt_mult,
    YARVINSN_trace_opt_div,
    YARVINSN_trace_opt_mod,
    YARVINSN_trace_opt_eq,
    YARVINSN_trace_opt_neq,
    YARVINSN_trace_opt_lt,
    YARVINSN_trace_opt_le,
    YARVINSN_trace_opt_gt,
    YARVINSN_trace_opt_ge,
    YARVINSN_trace_opt_ltlt,
    YARVINSN_trace_opt_and,
    YARVINSN_trace_opt_or,
    YARVINSN_trace_opt_aref,
    YARVINSN_trace_opt_aset,
    YARVINSN_trace_opt_aset_with,
    YARVINSN_trace_opt_aref_with,
    YARVINSN_trace_opt_length,
    YARVINSN_trace_opt_size,
    YARVINSN_trace_opt_empty_p,
    YARVINSN_trace_opt_succ,
    YARVINSN_trace_opt_not,
    YARVINSN_trace_opt_regexpmatch1,
    YARVINSN_trace_opt_regexpmatch2,
    YARVINSN_trace_opt_call_c_function,
    YARVINSN_trace_bitblt,
    YARVINSN_trace_answer,
    YARVINSN_trace_getlocal_WC_0,
    YARVINSN_trace_getlocal_WC_1,
    YARVINSN_trace_setlocal_WC_0,
    YARVINSN_trace_setlocal_WC_1,
    YARVINSN_trace_putobject_INT2FIX_0_,
    YARVINSN_trace_putobject_INT2FIX_1_,
    VM_INSTRUCTION_SIZE
};
typedef enum {
    CONST_DEPRECATED = 0x100,
    CONST_VISIBILITY_MASK = 0xff,
    CONST_PUBLIC = 0x00,
    CONST_PRIVATE,
    CONST_VISIBILITY_MAX
} rb_const_flag_t;
typedef struct rb_const_entry_struct {
    rb_const_flag_t flag;
    int line;
    const VALUE value;
    const VALUE file;
} rb_const_entry_t;
VALUE rb_mod_private_constant(int argc, const VALUE *argv, VALUE obj);
VALUE rb_mod_public_constant(int argc, const VALUE *argv, VALUE obj);
VALUE rb_mod_deprecate_constant(int argc, const VALUE *argv, VALUE obj);
void rb_free_const_table(struct rb_id_table *tbl);
VALUE rb_public_const_get(VALUE klass, ID id);
VALUE rb_public_const_get_at(VALUE klass, ID id);
VALUE rb_public_const_get_from(VALUE klass, ID id);
int rb_public_const_defined(VALUE klass, ID id);
int rb_public_const_defined_at(VALUE klass, ID id);
int rb_public_const_defined_from(VALUE klass, ID id);
rb_const_entry_t *rb_const_lookup(VALUE klass, ID id);
int rb_autoloading_value(VALUE mod, ID id, VALUE *value, rb_const_flag_t *flag);
enum rb_debug_counter_type {
RB_DEBUG_COUNTER_mc_inline_hit,
RB_DEBUG_COUNTER_mc_inline_miss,
RB_DEBUG_COUNTER_mc_global_hit,
RB_DEBUG_COUNTER_mc_global_miss,
RB_DEBUG_COUNTER_mc_global_state_miss,
RB_DEBUG_COUNTER_mc_class_serial_miss,
RB_DEBUG_COUNTER_mc_cme_complement,
RB_DEBUG_COUNTER_mc_cme_complement_hit,
RB_DEBUG_COUNTER_mc_search_super,
RB_DEBUG_COUNTER_frame_push,
RB_DEBUG_COUNTER_frame_push_method,
RB_DEBUG_COUNTER_frame_push_block,
RB_DEBUG_COUNTER_frame_push_class,
RB_DEBUG_COUNTER_frame_push_top,
RB_DEBUG_COUNTER_frame_push_cfunc,
RB_DEBUG_COUNTER_frame_push_ifunc,
RB_DEBUG_COUNTER_frame_push_eval,
RB_DEBUG_COUNTER_frame_push_rescue,
RB_DEBUG_COUNTER_frame_push_dummy,
RB_DEBUG_COUNTER_frame_R2R,
RB_DEBUG_COUNTER_frame_R2C,
RB_DEBUG_COUNTER_frame_C2C,
RB_DEBUG_COUNTER_frame_C2R,
RB_DEBUG_COUNTER_ivar_get_ic_hit,
RB_DEBUG_COUNTER_ivar_get_ic_miss,
RB_DEBUG_COUNTER_ivar_get_ic_miss_serial,
RB_DEBUG_COUNTER_ivar_get_ic_miss_unset,
RB_DEBUG_COUNTER_ivar_get_ic_miss_noobject,
RB_DEBUG_COUNTER_ivar_set_ic_hit,
RB_DEBUG_COUNTER_ivar_set_ic_miss,
RB_DEBUG_COUNTER_ivar_set_ic_miss_serial,
RB_DEBUG_COUNTER_ivar_set_ic_miss_unset,
RB_DEBUG_COUNTER_ivar_set_ic_miss_oorange,
RB_DEBUG_COUNTER_ivar_set_ic_miss_noobject,
RB_DEBUG_COUNTER_ivar_get_base,
RB_DEBUG_COUNTER_ivar_set_base,
RB_DEBUG_COUNTER_lvar_get,
RB_DEBUG_COUNTER_lvar_get_dynamic,
RB_DEBUG_COUNTER_lvar_set,
RB_DEBUG_COUNTER_lvar_set_dynamic,
RB_DEBUG_COUNTER_lvar_set_slowpath,
RB_DEBUG_COUNTER_gc_count,
RB_DEBUG_COUNTER_gc_minor_newobj,
RB_DEBUG_COUNTER_gc_minor_malloc,
RB_DEBUG_COUNTER_gc_minor_method,
RB_DEBUG_COUNTER_gc_minor_capi,
RB_DEBUG_COUNTER_gc_minor_stress,
RB_DEBUG_COUNTER_gc_major_nofree,
RB_DEBUG_COUNTER_gc_major_oldgen,
RB_DEBUG_COUNTER_gc_major_shady,
RB_DEBUG_COUNTER_gc_major_force,
RB_DEBUG_COUNTER_gc_major_oldmalloc,
RB_DEBUG_COUNTER_obj_newobj,
RB_DEBUG_COUNTER_obj_newobj_slowpath,
RB_DEBUG_COUNTER_obj_newobj_wb_unprotected,
RB_DEBUG_COUNTER_obj_free,
RB_DEBUG_COUNTER_obj_promote,
RB_DEBUG_COUNTER_obj_wb_unprotect,
RB_DEBUG_COUNTER_obj_obj_embed,
RB_DEBUG_COUNTER_obj_obj_transient,
RB_DEBUG_COUNTER_obj_obj_ptr,
RB_DEBUG_COUNTER_obj_str_ptr,
RB_DEBUG_COUNTER_obj_str_embed,
RB_DEBUG_COUNTER_obj_str_shared,
RB_DEBUG_COUNTER_obj_str_nofree,
RB_DEBUG_COUNTER_obj_str_fstr,
RB_DEBUG_COUNTER_obj_ary_embed,
RB_DEBUG_COUNTER_obj_ary_transient,
RB_DEBUG_COUNTER_obj_ary_ptr,
RB_DEBUG_COUNTER_obj_hash_empty,
RB_DEBUG_COUNTER_obj_hash_under4,
RB_DEBUG_COUNTER_obj_hash_ge4,
RB_DEBUG_COUNTER_obj_hash_ge8,
RB_DEBUG_COUNTER_obj_hash_ar,
RB_DEBUG_COUNTER_obj_hash_st,
RB_DEBUG_COUNTER_obj_hash_transient,
RB_DEBUG_COUNTER_obj_hash_force_convert,
RB_DEBUG_COUNTER_obj_struct_embed,
RB_DEBUG_COUNTER_obj_struct_transient,
RB_DEBUG_COUNTER_obj_struct_ptr,
RB_DEBUG_COUNTER_obj_regexp_ptr,
RB_DEBUG_COUNTER_obj_data_empty,
RB_DEBUG_COUNTER_obj_data_xfree,
RB_DEBUG_COUNTER_obj_data_imm_free,
RB_DEBUG_COUNTER_obj_data_zombie,
RB_DEBUG_COUNTER_obj_match_ptr,
RB_DEBUG_COUNTER_obj_file_ptr,
RB_DEBUG_COUNTER_obj_bignum_ptr,
RB_DEBUG_COUNTER_obj_symbol,
RB_DEBUG_COUNTER_obj_imemo_ment,
RB_DEBUG_COUNTER_obj_imemo_iseq,
RB_DEBUG_COUNTER_obj_imemo_env,
RB_DEBUG_COUNTER_obj_imemo_tmpbuf,
RB_DEBUG_COUNTER_obj_imemo_ast,
RB_DEBUG_COUNTER_obj_imemo_cref,
RB_DEBUG_COUNTER_obj_imemo_svar,
RB_DEBUG_COUNTER_obj_imemo_throw_data,
RB_DEBUG_COUNTER_obj_imemo_ifunc,
RB_DEBUG_COUNTER_obj_imemo_memo,
RB_DEBUG_COUNTER_obj_imemo_parser_strterm,
RB_DEBUG_COUNTER_obj_iclass_ptr,
RB_DEBUG_COUNTER_obj_class_ptr,
RB_DEBUG_COUNTER_obj_module_ptr,
RB_DEBUG_COUNTER_heap_xmalloc,
RB_DEBUG_COUNTER_heap_xrealloc,
RB_DEBUG_COUNTER_heap_xfree,
RB_DEBUG_COUNTER_theap_alloc,
RB_DEBUG_COUNTER_theap_alloc_fail,
RB_DEBUG_COUNTER_theap_evacuate,
    RB_DEBUG_COUNTER_MAX
};
void rb_debug_counter_show_results(const char *msg);
static rb_control_frame_t *vm_get_ruby_level_caller_cfp(const rb_execution_context_t *ec, const rb_control_frame_t *cfp);
static VALUE
ruby_vm_special_exception_copy(VALUE exc)
{
    VALUE e = rb_obj_alloc(rb_class_real((((struct RBasic*)(exc))->klass)));
    rb_obj_copy_ivar(e, exc);
    return e;
}
__attribute__ ((__noreturn__)) static void ec_stack_overflow(rb_execution_context_t *ec, int);
static void
ec_stack_overflow(rb_execution_context_t *ec, int setup)
{
    VALUE mesg = rb_ec_vm_ptr(ec)->special_exceptions[ruby_error_sysstack];
    ec->raised_flag = RAISED_STACKOVERFLOW;
    if (setup) {
 VALUE at = rb_ec_backtrace_object(ec);
 mesg = ruby_vm_special_exception_copy(mesg);
 rb_ivar_set(mesg, idBt, at);
 rb_ivar_set(mesg, idBt_locations, at);
    }
    ec->errinfo = mesg;
    rb_ec_tag_jump(ec, RUBY_TAG_RAISE);
}
__attribute__ ((__noreturn__)) static void vm_stackoverflow(void);
static void
vm_stackoverflow(void)
{
    ec_stack_overflow(rb_current_execution_context(), 1);
}
__attribute__ ((__noreturn__)) static void rb_ec_stack_overflow(rb_execution_context_t *ec, int crit);
static void
rb_ec_stack_overflow(rb_execution_context_t *ec, int crit)
{
    if (crit || rb_during_gc()) {
 ec->raised_flag = RAISED_STACKOVERFLOW;
 ec->errinfo = rb_ec_vm_ptr(ec)->special_exceptions[ruby_error_stackfatal];
 rb_ec_tag_jump(ec, RUBY_TAG_RAISE);
    }
    ec_stack_overflow(ec, 1);
}
static inline rb_control_frame_t *
vm_push_frame(rb_execution_context_t *ec,
       const rb_iseq_t *iseq,
       VALUE type,
       VALUE self,
       VALUE specval,
       VALUE cref_or_me,
       const VALUE *pc,
       VALUE *sp,
       int local_size,
       int stack_max)
{
    rb_control_frame_t *const cfp = ec->cfp - 1;
    int i;
    ;
    ((void)0);
    if ((__builtin_expect(!!(!(!(1/!!(sizeof(*(sp)) == sizeof(VALUE))) || !(1/!!(sizeof(*(cfp)) == sizeof(rb_control_frame_t))) || ((rb_control_frame_t *)((sp) + (local_size + stack_max)) + 1) >= (cfp))), 1))) {(void)0;} else vm_stackoverflow();
    ec->cfp = cfp;
    cfp->pc = (VALUE *)pc;
    cfp->iseq = (rb_iseq_t *)iseq;
    cfp->self = self;
    cfp->block_code = ((void *)0);
    for (i=0; i < local_size; i++) {
 *sp++ = ((VALUE)RUBY_Qnil);
    }
    ((void)0);
    ((void)0);
    ((void)0);
    *sp++ = cref_or_me;
    *sp++ = specval ;
    *sp = type;
    cfp->ep = cfp->bp = sp;
    cfp->sp = sp + 1;
    if (0 == 2) {
 rb_vmdebug_stack_dump_raw(rb_current_execution_context(), rb_current_execution_context()->cfp);
    }
    return cfp;
}static inline 
rb_control_frame_t *
rb_vm_push_frame(rb_execution_context_t *ec,
   const rb_iseq_t *iseq,
   VALUE type,
   VALUE self,
   VALUE specval,
   VALUE cref_or_me,
   const VALUE *pc,
   VALUE *sp,
   int local_size,
   int stack_max)
{
    return vm_push_frame(ec, iseq, type, self, specval, cref_or_me, pc, sp, local_size, stack_max);
}
static inline int
vm_pop_frame(rb_execution_context_t *ec, rb_control_frame_t *cfp, const VALUE *ep)
{
    VALUE flags = ep[( 0)];
    if (0 >= 4) rb_gc_verify_internal_consistency();
    if (0 == 2) rb_vmdebug_stack_dump_raw(rb_current_execution_context(), rb_current_execution_context()->cfp);
    ec->cfp = ((cfp)+1);
    return flags & VM_FRAME_FLAG_FINISH;
}
static void
rb_vm_pop_frame(rb_execution_context_t *ec)
{
    vm_pop_frame(ec, ec->cfp, ec->cfp->ep);
}
static inline VALUE
rb_arity_error_new(int argc, int min, int max)
{
    VALUE err_mess = 0;
    if (min == max) {
 err_mess = rb_sprintf("wrong number of arguments (given %d, expected %d)", argc, min);
    }
    else if (max == (-1)) {
 err_mess = rb_sprintf("wrong number of arguments (given %d, expected %d+)", argc, min);
    }
    else {
 err_mess = rb_sprintf("wrong number of arguments (given %d, expected %d..%d)", argc, min, max);
    }
    return rb_exc_new_str(rb_eArgError, err_mess);
}
static void
rb_error_arity(int argc, int min, int max)
{
    rb_exc_raise(rb_arity_error_new(argc, min, max));
}
__attribute__ ((__noinline__)) static void vm_env_write_slowpath(const VALUE *ep, int index, VALUE v);
static void
vm_env_write_slowpath(const VALUE *ep, int index, VALUE v)
{
    rb_gc_writebarrier_remember(VM_ENV_ENVVAL(ep));
    VM_FORCE_WRITE(&ep[index], v);
    VM_ENV_FLAGS_UNSET(ep, VM_ENV_FLAG_WB_REQUIRED);
    ((void)0);
}
static inline void
vm_env_write(const VALUE *ep, int index, VALUE v)
{
    VALUE flags = ep[( 0)];
    if ((__builtin_expect(!!((flags & VM_ENV_FLAG_WB_REQUIRED) == 0), 1))) {
 VM_STACK_ENV_WRITE(ep, index, v);
    }
    else {
 vm_env_write_slowpath(ep, index, v);
    }
}
static VALUE
rb_vm_bh_to_procval(const rb_execution_context_t *ec, VALUE block_handler)
{
    if (block_handler == 0) {
 return ((VALUE)RUBY_Qnil);
    }
    else {
 switch (vm_block_handler_type(block_handler)) {
   case block_handler_type_iseq:
   case block_handler_type_ifunc:
     return rb_vm_make_proc(ec, VM_BH_TO_CAPT_BLOCK(block_handler), rb_cProc);
   case block_handler_type_symbol:
     return rb_sym_to_proc(VM_BH_TO_SYMBOL(block_handler));
   case block_handler_type_proc:
     return VM_BH_TO_PROC(block_handler);
   default:
     __builtin_unreachable();
 }
    }
}
static inline struct vm_svar *
lep_svar(const rb_execution_context_t *ec, const VALUE *lep)
{
    VALUE svar;
    if (lep && (ec == ((void *)0) || ec->root_lep != lep)) {
 svar = lep[(-2)];
    }
    else {
 svar = ec->root_svar;
    }
    ((void)0);
    return (struct vm_svar *)svar;
}
static inline void
lep_svar_write(const rb_execution_context_t *ec, const VALUE *lep, const struct vm_svar *svar)
{
    ((void)0);
    if (lep && (ec == ((void *)0) || ec->root_lep != lep)) {
 vm_env_write(lep, (-2), (VALUE)svar);
    }
    else {
 rb_obj_write((VALUE)(rb_ec_thread_ptr(ec)->self), (VALUE *)(&ec->root_svar), (VALUE)(svar), "./vm_insnhelper.c", 441);
    }
}
static VALUE
lep_svar_get(const rb_execution_context_t *ec, const VALUE *lep, rb_num_t key)
{
    const struct vm_svar *svar = lep_svar(ec, lep);
    if ((VALUE)svar == ((VALUE)RUBY_Qfalse) || imemo_type((VALUE)svar) != imemo_svar) return ((VALUE)RUBY_Qnil);
    switch (key) {
      case VM_SVAR_LASTLINE:
 return svar->lastline;
      case VM_SVAR_BACKREF:
 return svar->backref;
      default: {
 const VALUE ary = svar->others;
 if (!((VALUE)(ary) != ((VALUE)RUBY_Qnil))) {
     return ((VALUE)RUBY_Qnil);
 }
 else {
     return rb_ary_entry(ary, key - VM_SVAR_EXTRA_START);
 }
      }
    }
}
static struct vm_svar *
svar_new(VALUE obj)
{
    return (struct vm_svar *)rb_imemo_new(imemo_svar, ((VALUE)RUBY_Qnil), ((VALUE)RUBY_Qnil), ((VALUE)RUBY_Qnil), obj);
}
static void
lep_svar_set(const rb_execution_context_t *ec, const VALUE *lep, rb_num_t key, VALUE val)
{
    struct vm_svar *svar = lep_svar(ec, lep);
    if ((VALUE)svar == ((VALUE)RUBY_Qfalse) || imemo_type((VALUE)svar) != imemo_svar) {
 lep_svar_write(ec, lep, svar = svar_new((VALUE)svar));
    }
    switch (key) {
      case VM_SVAR_LASTLINE:
 rb_obj_write((VALUE)(svar), (VALUE *)(&svar->lastline), (VALUE)(val), "./vm_insnhelper.c", 487);
 return;
      case VM_SVAR_BACKREF:
 rb_obj_write((VALUE)(svar), (VALUE *)(&svar->backref), (VALUE)(val), "./vm_insnhelper.c", 490);
 return;
      default: {
 VALUE ary = svar->others;
 if (!((VALUE)(ary) != ((VALUE)RUBY_Qnil))) {
     rb_obj_write((VALUE)(svar), (VALUE *)(&svar->others), (VALUE)(ary = rb_ary_new()), "./vm_insnhelper.c", 496);
 }
 rb_ary_store(ary, key - VM_SVAR_EXTRA_START, val);
      }
    }
}
static inline VALUE
vm_getspecial(const rb_execution_context_t *ec, const VALUE *lep, rb_num_t key, rb_num_t type)
{
    VALUE val;
    if (type == 0) {
 val = lep_svar_get(ec, lep, key);
    }
    else {
 VALUE backref = lep_svar_get(ec, lep, VM_SVAR_BACKREF);
 if (type & 0x01) {
     switch (type >> 1) {
       case '&':
  val = rb_reg_last_match(backref);
  break;
       case '`':
  val = rb_reg_match_pre(backref);
  break;
       case '\'':
  val = rb_reg_match_post(backref);
  break;
       case '+':
  val = rb_reg_match_last(backref);
  break;
       default:
  rb_bug("unexpected back-ref");
     }
 }
 else {
     val = rb_reg_nth_match((int)(type >> 1), backref);
 }
    }
    return val;
}
__attribute__ ((__pure__)) static rb_callable_method_entry_t *check_method_entry(VALUE obj, int can_be_svar);
static rb_callable_method_entry_t *
check_method_entry(VALUE obj, int can_be_svar)
{
    if (obj == ((VALUE)RUBY_Qfalse)) return ((void *)0);
    switch (imemo_type(obj)) {
      case imemo_ment:
 return (rb_callable_method_entry_t *)obj;
      case imemo_cref:
 return ((void *)0);
      case imemo_svar:
 if (can_be_svar) {
     return check_method_entry(((struct vm_svar *)obj)->cref_or_me, 0);
 }
      default:
 return ((void *)0);
    }
}
static const rb_callable_method_entry_t *
rb_vm_frame_method_entry(const rb_control_frame_t *cfp)
{
    const VALUE *ep = cfp->ep;
    rb_callable_method_entry_t *me;
    while (!VM_ENV_LOCAL_P(ep)) {
 if ((me = check_method_entry(ep[(-2)], 0)) != ((void *)0)) return me;
 ep = VM_ENV_PREV_EP(ep);
    }
    return check_method_entry(ep[(-2)], 1);
}
static rb_cref_t *
method_entry_cref(rb_callable_method_entry_t *me)
{
    switch (me->def->type) {
      case VM_METHOD_TYPE_ISEQ:
 return me->def->body.iseq.cref;
      default:
 return ((void *)0);
    }
}
__attribute__ ((__pure__)) static rb_cref_t *check_cref(VALUE, int);
static rb_cref_t *
check_cref(VALUE obj, int can_be_svar)
{
    if (obj == ((VALUE)RUBY_Qfalse)) return ((void *)0);
    switch (imemo_type(obj)) {
      case imemo_ment:
 return method_entry_cref((rb_callable_method_entry_t *)obj);
      case imemo_cref:
 return (rb_cref_t *)obj;
      case imemo_svar:
 if (can_be_svar) {
     return check_cref(((struct vm_svar *)obj)->cref_or_me, 0);
 }
      default:
 return ((void *)0);
    }
}
static inline rb_cref_t *
vm_env_cref(const VALUE *ep)
{
    rb_cref_t *cref;
    while (!VM_ENV_LOCAL_P(ep)) {
 if ((cref = check_cref(ep[(-2)], 0)) != ((void *)0)) return cref;
 ep = VM_ENV_PREV_EP(ep);
    }
    return check_cref(ep[(-2)], 1);
}
static int
is_cref(const VALUE v, int can_be_svar)
{
    if (( ((RUBY_T_IMEMO) == RUBY_T_FIXNUM) ? (((int)(long)(v))&RUBY_FIXNUM_FLAG) : ((RUBY_T_IMEMO) == RUBY_T_TRUE) ? ((v) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_IMEMO) == RUBY_T_FALSE) ? ((v) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_IMEMO) == RUBY_T_NIL) ? ((v) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_IMEMO) == RUBY_T_UNDEF) ? ((v) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_IMEMO) == RUBY_T_SYMBOL) ? ((((VALUE)(v)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_IMEMO) == RUBY_T_FLOAT) ? ( ((((int)(long)(v))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == (RUBY_T_IMEMO)))) {
 switch (imemo_type(v)) {
   case imemo_cref:
     return 1;
   case imemo_svar:
     if (can_be_svar) return is_cref(((struct vm_svar *)v)->cref_or_me, 0);
   default:
     break;
 }
    }
    return 0;
}
static int
vm_env_cref_by_cref(const VALUE *ep)
{
    while (!VM_ENV_LOCAL_P(ep)) {
 if (is_cref(ep[(-2)], 0)) return 1;
 ep = VM_ENV_PREV_EP(ep);
    }
    return is_cref(ep[(-2)], 1);
}
static rb_cref_t *
cref_replace_with_duplicated_cref_each_frame(const VALUE *vptr, int can_be_svar, VALUE parent)
{
    const VALUE v = *vptr;
    rb_cref_t *cref, *new_cref;
    if (( ((RUBY_T_IMEMO) == RUBY_T_FIXNUM) ? (((int)(long)(v))&RUBY_FIXNUM_FLAG) : ((RUBY_T_IMEMO) == RUBY_T_TRUE) ? ((v) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_IMEMO) == RUBY_T_FALSE) ? ((v) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_IMEMO) == RUBY_T_NIL) ? ((v) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_IMEMO) == RUBY_T_UNDEF) ? ((v) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_IMEMO) == RUBY_T_SYMBOL) ? ((((VALUE)(v)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_IMEMO) == RUBY_T_FLOAT) ? ( ((((int)(long)(v))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == (RUBY_T_IMEMO)))) {
 switch (imemo_type(v)) {
   case imemo_cref:
     cref = (rb_cref_t *)v;
     new_cref = vm_cref_dup(cref);
     if (parent) {
  rb_obj_write((VALUE)(parent), (VALUE *)(vptr), (VALUE)(new_cref), "./vm_insnhelper.c", 671);
     }
     else {
  VM_FORCE_WRITE(vptr, (VALUE)new_cref);
     }
     return (rb_cref_t *)new_cref;
   case imemo_svar:
     if (can_be_svar) {
  return cref_replace_with_duplicated_cref_each_frame((const VALUE *)&((struct vm_svar *)v)->cref_or_me, 0, v);
     }
   case imemo_ment:
     rb_bug("cref_replace_with_duplicated_cref_each_frame: unreachable");
   default:
     break;
 }
    }
    return 0;
}
static rb_cref_t *
vm_cref_replace_with_duplicated_cref(const VALUE *ep)
{
    if (vm_env_cref_by_cref(ep)) {
 rb_cref_t *cref;
 VALUE envval;
 while (!VM_ENV_LOCAL_P(ep)) {
     envval = VM_ENV_ESCAPED_P(ep) ? VM_ENV_ENVVAL(ep) : ((VALUE)RUBY_Qfalse);
     if ((cref = cref_replace_with_duplicated_cref_each_frame(&ep[(-2)], 0, envval)) != ((void *)0)) {
  return cref;
     }
     ep = VM_ENV_PREV_EP(ep);
 }
 envval = VM_ENV_ESCAPED_P(ep) ? VM_ENV_ENVVAL(ep) : ((VALUE)RUBY_Qfalse);
 return cref_replace_with_duplicated_cref_each_frame(&ep[(-2)], 1, envval);
    }
    else {
 rb_bug("vm_cref_dup: unreachable");
    }
}
static rb_cref_t *
rb_vm_get_cref(const VALUE *ep)
{
    rb_cref_t *cref = vm_env_cref(ep);
    if (cref != ((void *)0)) {
 return cref;
    }
    else {
 rb_bug("rb_vm_get_cref: unreachable");
    }
}
static const rb_cref_t *
vm_get_const_key_cref(const VALUE *ep)
{
    const rb_cref_t *cref = rb_vm_get_cref(ep);
    const rb_cref_t *key_cref = cref;
    while (cref) {
 if (((!(((VALUE)(CREF_CLASS(cref)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(CREF_CLASS(cref)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(CREF_CLASS(cref)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((CREF_CLASS(cref))))->flags&((((VALUE)RUBY_FL_SINGLETON)))):0)) {
     return key_cref;
 }
 cref = CREF_NEXT(cref);
    }
    return ((void *)0);
}static inline 
void
rb_vm_rewrite_cref(rb_cref_t *cref, VALUE old_klass, VALUE new_klass, rb_cref_t **new_cref_ptr)
{
    rb_cref_t *new_cref;
    while (cref) {
 if (CREF_CLASS(cref) == old_klass) {
     new_cref = vm_cref_new_use_prev(new_klass, METHOD_VISI_UNDEF, 0, cref, 0);
     *new_cref_ptr = new_cref;
     return;
 }
 new_cref = vm_cref_new_use_prev(CREF_CLASS(cref), METHOD_VISI_UNDEF, 0, cref, 0);
 cref = CREF_NEXT(cref);
 *new_cref_ptr = new_cref;
 new_cref_ptr = (rb_cref_t **)&new_cref->next;
    }
    *new_cref_ptr = ((void *)0);
}
static rb_cref_t *
vm_cref_push(const rb_execution_context_t *ec, VALUE klass, const VALUE *ep, int pushed_by_eval)
{
    rb_cref_t *prev_cref = ((void *)0);
    if (ep) {
 prev_cref = vm_env_cref(ep);
    }
    else {
 rb_control_frame_t *cfp = vm_get_ruby_level_caller_cfp(ec, ec->cfp);
 if (cfp) {
     prev_cref = vm_env_cref(cfp->ep);
 }
    }
    return vm_cref_new(klass, METHOD_VISI_PUBLIC, 0, prev_cref, pushed_by_eval);
}
static inline VALUE
vm_get_cbase(const VALUE *ep)
{
    const rb_cref_t *cref = rb_vm_get_cref(ep);
    VALUE klass = ((VALUE)RUBY_Qundef);
    while (cref) {
 if ((klass = CREF_CLASS(cref)) != 0) {
     break;
 }
 cref = CREF_NEXT(cref);
    }
    return klass;
}
static inline VALUE
vm_get_const_base(const VALUE *ep)
{
    const rb_cref_t *cref = rb_vm_get_cref(ep);
    VALUE klass = ((VALUE)RUBY_Qundef);
    while (cref) {
 if (!CREF_PUSHED_BY_EVAL(cref) &&
     (klass = CREF_CLASS(cref)) != 0) {
     break;
 }
 cref = CREF_NEXT(cref);
    }
    return klass;
}
static inline void
vm_check_if_namespace(VALUE klass)
{
    if (!( ((RUBY_T_CLASS) == RUBY_T_FIXNUM) ? (((int)(long)(klass))&RUBY_FIXNUM_FLAG) : ((RUBY_T_CLASS) == RUBY_T_TRUE) ? ((klass) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_CLASS) == RUBY_T_FALSE) ? ((klass) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_CLASS) == RUBY_T_NIL) ? ((klass) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_CLASS) == RUBY_T_UNDEF) ? ((klass) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_CLASS) == RUBY_T_SYMBOL) ? ((((VALUE)(klass)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_CLASS) == RUBY_T_FLOAT) ? ( ((((int)(long)(klass))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_CLASS))) && !( ((RUBY_T_MODULE) == RUBY_T_FIXNUM) ? (((int)(long)(klass))&RUBY_FIXNUM_FLAG) : ((RUBY_T_MODULE) == RUBY_T_TRUE) ? ((klass) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_MODULE) == RUBY_T_FALSE) ? ((klass) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_MODULE) == RUBY_T_NIL) ? ((klass) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_MODULE) == RUBY_T_UNDEF) ? ((klass) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_MODULE) == RUBY_T_SYMBOL) ? ((((VALUE)(klass)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_MODULE) == RUBY_T_FLOAT) ? ( ((((int)(long)(klass))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_MODULE)))) {
 rb_raise(rb_eTypeError, "%+""l""i" "\v"" is not a class/module", klass);
    }
}
static inline void
vm_ensure_not_refinement_module(VALUE self)
{
    if (( ((RUBY_T_MODULE) == RUBY_T_FIXNUM) ? (((int)(long)(self))&RUBY_FIXNUM_FLAG) : ((RUBY_T_MODULE) == RUBY_T_TRUE) ? ((self) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_MODULE) == RUBY_T_FALSE) ? ((self) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_MODULE) == RUBY_T_NIL) ? ((self) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_MODULE) == RUBY_T_UNDEF) ? ((self) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_MODULE) == RUBY_T_SYMBOL) ? ((((VALUE)(self)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(self) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(self) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(self))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_MODULE) == RUBY_T_FLOAT) ? ( ((((int)(long)(self))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(self) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(self) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(self))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(self) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(self) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(self))->flags & RUBY_T_MASK) == (RUBY_T_MODULE))) && ((!(((VALUE)(self) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(self) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(self))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((self)))->flags&((RMODULE_IS_REFINEMENT))):0)) {
 rb_warn("not defined at the refinement, but at the outer class/module");
    }
}
static inline VALUE
vm_get_iclass(rb_control_frame_t *cfp, VALUE klass)
{
    return klass;
}
static inline VALUE
vm_get_ev_const(rb_execution_context_t *ec, VALUE orig_klass, ID id, int is_defined)
{
    void rb_const_warn_if_deprecated(const rb_const_entry_t *ce, VALUE klass, ID id);
    VALUE val;
    if (orig_klass == ((VALUE)RUBY_Qnil)) {
 const rb_cref_t *root_cref = rb_vm_get_cref(ec->cfp->ep);
 const rb_cref_t *cref;
 VALUE klass = ((VALUE)RUBY_Qnil);
 while (root_cref && CREF_PUSHED_BY_EVAL(root_cref)) {
     root_cref = CREF_NEXT(root_cref);
 }
 cref = root_cref;
 while (cref && CREF_NEXT(cref)) {
     if (CREF_PUSHED_BY_EVAL(cref)) {
  klass = ((VALUE)RUBY_Qnil);
     }
     else {
  klass = CREF_CLASS(cref);
     }
     cref = CREF_NEXT(cref);
     if (!!((VALUE)(klass) != ((VALUE)RUBY_Qnil))) {
  VALUE av, am = 0;
  rb_const_entry_t *ce;
       search_continue:
  if ((ce = rb_const_lookup(klass, id))) {
      rb_const_warn_if_deprecated(ce, klass, id);
      val = ce->value;
      if (val == ((VALUE)RUBY_Qundef)) {
   if (am == klass) break;
   am = klass;
   if (is_defined) return 1;
   if (rb_autoloading_value(klass, id, &av, ((void *)0))) return av;
   rb_autoload_load(klass, id);
   goto search_continue;
      }
      else {
   if (is_defined) {
       return 1;
   }
   else {
       return val;
   }
      }
  }
     }
 }
 if (root_cref && !!((VALUE)(CREF_CLASS(root_cref)) != ((VALUE)RUBY_Qnil))) {
     klass = vm_get_iclass(ec->cfp, CREF_CLASS(root_cref));
 }
 else {
     klass = rb_class_of((VALUE)(ec->cfp->self));
 }
 if (is_defined) {
     return rb_const_defined(klass, id);
 }
 else {
     return rb_const_get(klass, id);
 }
    }
    else {
 vm_check_if_namespace(orig_klass);
 if (is_defined) {
     return rb_public_const_defined_from(orig_klass, id);
 }
 else {
     return rb_public_const_get_from(orig_klass, id);
 }
    }
}
static inline VALUE
vm_get_cvar_base(const rb_cref_t *cref, rb_control_frame_t *cfp)
{
    VALUE klass;
    if (!cref) {
 rb_bug("vm_get_cvar_base: no cref");
    }
    while (CREF_NEXT(cref) &&
    (!((VALUE)(CREF_CLASS(cref)) != ((VALUE)RUBY_Qnil)) || ((!(((VALUE)(CREF_CLASS(cref)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(CREF_CLASS(cref)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(CREF_CLASS(cref)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((CREF_CLASS(cref))))->flags&((((VALUE)RUBY_FL_SINGLETON)))):0) ||
     CREF_PUSHED_BY_EVAL(cref))) {
 cref = CREF_NEXT(cref);
    }
    if (!CREF_NEXT(cref)) {
 rb_warn("class variable access from toplevel");
    }
    klass = vm_get_iclass(cfp, CREF_CLASS(cref));
    if (!((VALUE)(klass) != ((VALUE)RUBY_Qnil))) {
 rb_raise(rb_eTypeError, "no class variables available");
    }
    return klass;
}
static VALUE
vm_search_const_defined_class(const VALUE cbase, ID id)
{
    if (rb_const_defined_at(cbase, id)) return cbase;
    if (cbase == rb_cObject) {
 VALUE tmp = RCLASS_SUPER(cbase);
 while (tmp) {
     if (rb_const_defined_at(tmp, id)) return tmp;
     tmp = RCLASS_SUPER(tmp);
 }
    }
    return 0;
}
__attribute__ ((__always_inline__)) static VALUE vm_getivar(VALUE, ID, IC, struct rb_call_cache *, int);
static inline VALUE
vm_getivar(VALUE obj, ID id, IC ic, struct rb_call_cache *cc, int is_attr)
{
    if ((__builtin_expect(!!(( ((RUBY_T_OBJECT) == RUBY_T_FIXNUM) ? (((int)(long)(obj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_OBJECT) == RUBY_T_TRUE) ? ((obj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_OBJECT) == RUBY_T_FALSE) ? ((obj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_OBJECT) == RUBY_T_NIL) ? ((obj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_OBJECT) == RUBY_T_UNDEF) ? ((obj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_OBJECT) == RUBY_T_SYMBOL) ? ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_OBJECT) == RUBY_T_FLOAT) ? ( ((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_OBJECT)))), 1))) {
 VALUE val = ((VALUE)RUBY_Qundef);
        if ((__builtin_expect(!!(is_attr ? (cc->aux.index > 0) : (ic->ic_serial == ((((struct RClass*)(((struct RBasic*)(obj))->klass))->ptr)->class_serial))), 1))) {
            st_index_t index = !is_attr ? ic->ic_value.index : (cc->aux.index - 1);
     if ((__builtin_expect(!!(index < ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ROBJECT_EMBED_LEN_MAX : ((struct RObject*)(obj))->as.heap.numiv)), 1))) {
  val = ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ((struct RObject*)(obj))->as.ary : ((struct RObject*)(obj))->as.heap.ivptr)[index];
     }
 }
 else {
            st_data_t index;
     struct st_table *iv_index_tbl = ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ((((struct RClass*)(rb_obj_class(obj)))->ptr)->iv_index_tbl) : ((struct RObject*)(obj))->as.heap.iv_index_tbl);
     if (iv_index_tbl) {
  if (st_lookup(iv_index_tbl, id, &index)) {
      if (index < ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ROBJECT_EMBED_LEN_MAX : ((struct RObject*)(obj))->as.heap.numiv)) {
   val = ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ((struct RObject*)(obj))->as.ary : ((struct RObject*)(obj))->as.heap.ivptr)[index];
      }
                    if (!is_attr) {
                        ic->ic_value.index = index;
                        ic->ic_serial = ((((struct RClass*)(((struct RBasic*)(obj))->klass))->ptr)->class_serial);
                    }
                    else {
                        cc->aux.index = (int)index + 1;
                    }
  }
     }
 }
 if ((__builtin_expect(!!(val == ((VALUE)RUBY_Qundef)), 0))) {
     if (!is_attr && !(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))
  rb_warning("instance variable %""l""i" "\v"" not initialized", rb_id_quote_unprintable(id));
     val = ((VALUE)RUBY_Qnil);
 }
 ((void)0);
 return val;
    }
    else {
 ((void)0);
    }
    ((void)0);
    if (is_attr)
 return rb_attr_get(obj, id);
    return rb_ivar_get(obj, id);
}
ALWAYS_INLINE(static inline VALUE
vm_setivar(VALUE obj, ID id, VALUE val, IC ic, struct rb_call_cache *cc, int is_attr));
static inline VALUE
vm_setivar(VALUE obj, ID id, VALUE val, IC ic, struct rb_call_cache *cc, int is_attr) {
    do { VALUE frozen_obj = (obj); if ((__builtin_expect(!!((!(!(((VALUE)(frozen_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(frozen_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(frozen_obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(frozen_obj))->flags&RUBY_FL_FREEZE))), 0))) { rb_error_frozen_object(frozen_obj); } } while (0);
    if ((__builtin_expect(!!(( ((RUBY_T_OBJECT) == RUBY_T_FIXNUM) ? (((int)(long)(obj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_OBJECT) == RUBY_T_TRUE) ? ((obj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_OBJECT) == RUBY_T_FALSE) ? ((obj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_OBJECT) == RUBY_T_NIL) ? ((obj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_OBJECT) == RUBY_T_UNDEF) ? ((obj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_OBJECT) == RUBY_T_SYMBOL) ? ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_OBJECT) == RUBY_T_FLOAT) ? ( ((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_OBJECT)))), 1))) {
 VALUE klass = ((struct RBasic*)(obj))->klass;
 st_data_t index;
 if ((__builtin_expect(!!((!is_attr && (ic->ic_serial == ((((struct RClass*)(klass))->ptr)->class_serial))) || ( is_attr && (cc->aux.index > 0))), 1))) {
     VALUE *ptr = ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ((struct RObject*)(obj))->as.ary : ((struct RObject*)(obj))->as.heap.ivptr);
     index = !is_attr ? ic->ic_value.index : cc->aux.index-1;
     if ((index < ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ROBJECT_EMBED_LEN_MAX : ((struct RObject*)(obj))->as.heap.numiv))) {
  rb_obj_write((VALUE)(obj), (VALUE *)(&ptr[index]), (VALUE)(val), "./vm_insnhelper.c", 1025);
  ((void)0);
  return val;
     }
 }
 else {
     struct st_table *iv_index_tbl = ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ((((struct RClass*)(rb_obj_class(obj)))->ptr)->iv_index_tbl) : ((struct RObject*)(obj))->as.heap.iv_index_tbl);
     if (iv_index_tbl && st_lookup(iv_index_tbl, (st_data_t)id, &index)) {
                if (!is_attr) {
                    ic->ic_value.index = index;
                    ic->ic_serial = ((((struct RClass*)(klass))->ptr)->class_serial);
                }
  else if (index >= 0x7fffffff) {
      rb_raise(rb_eArgError, "too many instance variables");
  }
  else {
      cc->aux.index = (int)(index + 1);
  }
     }
 }
    }
    else {
 ((void)0);
    }
    ((void)0);
    return rb_ivar_set(obj, id, val);
}
ALWAYS_INLINE(static inline VALUE
vm_getinstancevariable(VALUE obj, ID id, IC ic));
static inline VALUE
vm_getinstancevariable(VALUE obj, ID id, IC ic) {
    return vm_getivar(obj, id, ic, ((void *)0), 0);
}
ALWAYS_INLINE(static inline void
vm_setinstancevariable(VALUE obj, ID id, VALUE val, IC ic));
static inline void
vm_setinstancevariable(VALUE obj, ID id, VALUE val, IC ic) {
    vm_setivar(obj, id, val, ic, 0, 0);
}
static VALUE
vm_throw_continue(const rb_execution_context_t *ec, VALUE err)
{
    if ((((int)(long)(err))&RUBY_FIXNUM_FLAG)) {
 ec->tag->state = ((int)rb_fix2int((VALUE)(err)));
    }
    else if (((((VALUE)(err)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(err) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(err) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(err))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 ec->tag->state = RUBY_TAG_THROW;
    }
    else if (( ((RUBY_T_IMEMO) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(err)))&RUBY_FIXNUM_FLAG) : ((RUBY_T_IMEMO) == RUBY_T_TRUE) ? (((VALUE)(err)) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_IMEMO) == RUBY_T_FALSE) ? (((VALUE)(err)) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_IMEMO) == RUBY_T_NIL) ? (((VALUE)(err)) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_IMEMO) == RUBY_T_UNDEF) ? (((VALUE)(err)) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_IMEMO) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(err))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(err)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(err)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(err)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_IMEMO) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(err)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(err)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(err)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(err)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(err)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(err)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(err)))->flags & RUBY_T_MASK) == (RUBY_T_IMEMO)))) {
 ec->tag->state = THROW_DATA_STATE((struct vm_throw_data *)err);
    }
    else {
 ec->tag->state = RUBY_TAG_RAISE;
    }
    return err;
}
static VALUE
vm_throw_start(const rb_execution_context_t *ec, rb_control_frame_t *const reg_cfp, enum ruby_tag_type state,
               const int flag, const VALUE throwobj)
{
    const rb_control_frame_t *escape_cfp = ((void *)0);
    const rb_control_frame_t * const eocfp = RUBY_VM_END_CONTROL_FRAME(ec);
    if (flag != 0) {
    }
    else if (state == RUBY_TAG_BREAK) {
 int is_orphan = 1;
 const VALUE *ep = ((((reg_cfp)->ep)));
 const rb_iseq_t *base_iseq = ((((reg_cfp)))->iseq);
 escape_cfp = reg_cfp;
 while (base_iseq->body->type != ISEQ_TYPE_BLOCK) {
     if (escape_cfp->iseq->body->type == ISEQ_TYPE_CLASS) {
  escape_cfp = ((escape_cfp)+1);
  ep = escape_cfp->ep;
  base_iseq = escape_cfp->iseq;
     }
     else {
  ep = VM_ENV_PREV_EP(ep);
  base_iseq = base_iseq->body->parent_iseq;
  escape_cfp = rb_vm_search_cf_from_ep(ec, escape_cfp, ep);
  ((void)0);
     }
 }
 if (VM_FRAME_LAMBDA_P(escape_cfp)) {
     is_orphan = 0;
     state = RUBY_TAG_RETURN;
 }
 else {
     ep = VM_ENV_PREV_EP(ep);
     while (escape_cfp < eocfp) {
  if (escape_cfp->ep == ep) {
      const rb_iseq_t *const iseq = escape_cfp->iseq;
      const VALUE epc = escape_cfp->pc - iseq->body->iseq_encoded;
      const struct iseq_catch_table *const ct = iseq->body->catch_table;
      unsigned int i;
      if (!ct) break;
      for (i=0; i < ct->size; i++) {
   const struct iseq_catch_table_entry * const entry = &ct->entries[i];
   if (entry->type == CATCH_TYPE_BREAK &&
       entry->iseq == base_iseq &&
       entry->start < epc && entry->end >= epc) {
       if (entry->cont == epc) {
    is_orphan = 0;
       }
       break;
   }
      }
      break;
  }
  escape_cfp = ((escape_cfp)+1);
     }
 }
 if (is_orphan) {
     rb_vm_localjump_error("break from proc-closure", throwobj, RUBY_TAG_BREAK);
 }
    }
    else if (state == RUBY_TAG_RETRY) {
 const VALUE *ep = VM_ENV_PREV_EP(((((reg_cfp)->ep))));
 escape_cfp = rb_vm_search_cf_from_ep(ec, reg_cfp, ep);
    }
    else if (state == RUBY_TAG_RETURN) {
 const VALUE *current_ep = ((((reg_cfp)->ep)));
 const VALUE *target_lep = VM_EP_LEP(current_ep);
 int in_class_frame = 0;
 int toplevel = 1;
 escape_cfp = reg_cfp;
 while (escape_cfp < eocfp) {
     const VALUE *lep = VM_CF_LEP(escape_cfp);
     if (!target_lep) {
  target_lep = lep;
     }
     if (lep == target_lep &&
  VM_FRAME_RUBYFRAME_P(escape_cfp) &&
  escape_cfp->iseq->body->type == ISEQ_TYPE_CLASS) {
  in_class_frame = 1;
  target_lep = 0;
     }
     if (lep == target_lep) {
  if (VM_FRAME_LAMBDA_P(escape_cfp)) {
      toplevel = 0;
      if (in_class_frame) {
   goto valid_return;
      }
      else {
   const VALUE *tep = current_ep;
   while (target_lep != tep) {
       if (escape_cfp->ep == tep) {
    goto valid_return;
       }
       tep = VM_ENV_PREV_EP(tep);
   }
      }
  }
  else if (VM_FRAME_RUBYFRAME_P(escape_cfp)) {
      switch (escape_cfp->iseq->body->type) {
        case ISEQ_TYPE_TOP:
        case ISEQ_TYPE_MAIN:
   if (toplevel) goto valid_return;
   break;
        case ISEQ_TYPE_EVAL:
        case ISEQ_TYPE_CLASS:
   toplevel = 0;
   break;
        default:
   break;
      }
  }
     }
     if (escape_cfp->ep == target_lep && escape_cfp->iseq->body->type == ISEQ_TYPE_METHOD) {
  goto valid_return;
     }
     escape_cfp = ((escape_cfp)+1);
 }
 rb_vm_localjump_error("unexpected return", throwobj, RUBY_TAG_RETURN);
      valid_return:;
    }
    else {
 rb_bug("isns(throw): unsupport throw type");
    }
    ec->tag->state = state;
    return (VALUE)THROW_DATA_NEW(throwobj, escape_cfp, state);
}
static VALUE
vm_throw(const rb_execution_context_t *ec, rb_control_frame_t *reg_cfp,
  rb_num_t throw_state, VALUE throwobj)
{
    const int state = (int)(throw_state & VM_THROW_STATE_MASK);
    const int flag = (int)(throw_state & VM_THROW_NO_ESCAPE_FLAG);
    if (state != 0) {
        return vm_throw_start(ec, reg_cfp, state, flag, throwobj);
    }
    else {
 return vm_throw_continue(ec, throwobj);
    }
}
static inline void
vm_expandarray(VALUE *sp, VALUE ary, rb_num_t num, int flag)
{
    int is_splat = flag & 0x01;
    rb_num_t space_size = num + is_splat;
    VALUE *base = sp - 1;
    const VALUE *ptr;
    rb_num_t len;
    const VALUE obj = ary;
    if (!( ((RUBY_T_ARRAY) == RUBY_T_FIXNUM) ? (((int)(long)(ary))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ARRAY) == RUBY_T_TRUE) ? ((ary) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ARRAY) == RUBY_T_FALSE) ? ((ary) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ARRAY) == RUBY_T_NIL) ? ((ary) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ARRAY) == RUBY_T_UNDEF) ? ((ary) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ARRAY) == RUBY_T_SYMBOL) ? ((((VALUE)(ary)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(ary) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(ary) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(ary))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ARRAY) == RUBY_T_FLOAT) ? ( ((((int)(long)(ary))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(ary) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(ary) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(ary))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(ary) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(ary) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(ary))->flags & RUBY_T_MASK) == (RUBY_T_ARRAY))) && !((VALUE)(ary = rb_check_array_type(ary)) != ((VALUE)RUBY_Qnil))) {
 ary = obj;
 ptr = &ary;
 len = 1;
    }
    else {
        ptr = rb_array_const_ptr_transient(ary);
 len = (rb_num_t)rb_array_len(ary);
    }
    if (space_size == 0) {
    }
    else if (flag & 0x02) {
 rb_num_t i = 0, j;
 if (len < num) {
     for (i=0; i<num-len; i++) {
  *base++ = ((VALUE)RUBY_Qnil);
     }
 }
 for (j=0; i<num; i++, j++) {
     VALUE v = ptr[len - j - 1];
     *base++ = v;
 }
 if (is_splat) {
     *base = rb_ary_new_from_values(len - j, ptr);
 }
    }
    else {
 rb_num_t i;
 VALUE *bptr = &base[space_size - 1];
 for (i=0; i<num; i++) {
     if (len <= i) {
  for (; i<num; i++) {
      *bptr-- = ((VALUE)RUBY_Qnil);
  }
  break;
     }
     *bptr-- = ptr[i];
 }
 if (is_splat) {
     if (num > len) {
  *bptr = rb_ary_new();
     }
     else {
  *bptr = rb_ary_new_from_values(len - num, ptr + num);
     }
 }
    }
    (*__extension__ ({ volatile VALUE *rb_gc_guarded_ptr = &(ary); __asm__("" : : "m"(rb_gc_guarded_ptr)); rb_gc_guarded_ptr; }));
}
static VALUE vm_call_general(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc);
__attribute__ ((__visibility__("default"))) extern void
rb_vm_search_method_slowpath(const struct rb_call_info *ci, struct rb_call_cache *cc, VALUE klass)
;
static void
vm_search_method(const struct rb_call_info *ci, struct rb_call_cache *cc, VALUE recv)
{
    VALUE klass = rb_class_of((VALUE)(recv));
    ((void)0);
    ((void)0);
    if ((__builtin_expect(!!(((ruby_vm_global_method_state) == cc->method_state) && (((((struct RClass*)(klass))->ptr)->class_serial) == cc->class_serial)), 1))) {
 ((void)0);
 ((void)0);
 return;
    }
    ((void)0);
    rb_vm_search_method_slowpath(ci, cc, klass);
}
static inline int
check_cfunc(const rb_callable_method_entry_t *me, VALUE (*func)())
{
    if (me && me->def->type == VM_METHOD_TYPE_CFUNC &&
 me->def->body.cfunc.func == func) {
 return 1;
    }
    else {
 return 0;
    }
}
static inline int
vm_method_cfunc_is(CALL_INFO ci, CALL_CACHE cc,
     VALUE recv, VALUE (*func)())
{
    vm_search_method(ci, cc, recv);
    return check_cfunc(cc->me, func);
}
static VALUE
opt_equal_fallback(VALUE recv, VALUE obj, CALL_INFO ci, CALL_CACHE cc)
{
    if (vm_method_cfunc_is(ci, cc, recv, rb_obj_equal)) {
 return recv == obj ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    return ((VALUE)RUBY_Qundef);
}
static inline int
comparable_by_identity(VALUE recv, VALUE obj)
{
    if (((recv) & (obj) & 1)) {
 return (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_EQ)]&((1 << 0))) == 0), 1))) != 0) * 2 - 1;
    }
    if ((((((recv)^2) | ((obj)^2)) & 3) == 0)) {
 return (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_EQ)]&((1 << 1))) == 0), 1))) != 0) * 2 - 1;
    }
    if (((((VALUE)(recv)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(recv))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) && ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 return (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_EQ)]&((1 << 6))) == 0), 1))) != 0) * 2 - 1;
    }
    return 0;
}
static
inline
VALUE
opt_eq_func(VALUE recv, VALUE obj, CALL_INFO ci, CALL_CACHE cc)
{
    switch (comparable_by_identity(recv, obj)) {
      case 1:
 return (recv == obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
      case -1:
 goto fallback;
    }
    if (0) {
    }
    else if ((!(((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (((struct RBasic*)(recv))->klass) == rb_cFloat)) {
 if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_EQ)]&((1 << 1))) == 0), 1)))) {
     return rb_float_equal(recv, obj);
 }
    }
    else if ((!(((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (((struct RBasic*)(recv))->klass) == rb_cString)) {
 if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_EQ)]&((1 << 2))) == 0), 1)))) {
     return rb_str_equal(recv, obj);
 }
    }
  fallback:
    return opt_equal_fallback(recv, obj, ci, cc);
}
static
inline
VALUE
opt_eql_func(VALUE recv, VALUE obj, CALL_INFO ci, CALL_CACHE cc)
{
    switch (comparable_by_identity(recv, obj)) {
      case 1:
 return (recv == obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
      case -1:
 goto fallback;
    }
    if (0) {
    }
    else if ((!(((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (((struct RBasic*)(recv))->klass) == rb_cFloat)) {
 if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_EQ)]&((1 << 1))) == 0), 1)))) {
     return rb_float_eql(recv, obj);
 }
    }
    else if ((!(((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (((struct RBasic*)(recv))->klass) == rb_cString)) {
 if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_EQ)]&((1 << 2))) == 0), 1)))) {
     return rb_str_eql(recv, obj);
 }
    }
  fallback:
    return opt_equal_fallback(recv, obj, ci, cc);
}
VALUE
rb_equal_opt(VALUE obj1, VALUE obj2)
;static inline 
VALUE
rb_eql_opt(VALUE obj1, VALUE obj2)
{
    struct rb_call_info ci;
    struct rb_call_cache cc;
    ci.mid = idEqlP;
    cc.method_state = 0;
    cc.class_serial = 0;
    cc.me = ((void *)0);
    return opt_eql_func(obj1, obj2, &ci, &cc);
}
extern VALUE rb_vm_call0(rb_execution_context_t *ec, VALUE, ID, int, const VALUE*, const rb_callable_method_entry_t *);
static VALUE
check_match(rb_execution_context_t *ec, VALUE pattern, VALUE target, enum vm_check_match_type type)
{
    switch (type) {
      case VM_CHECKMATCH_TYPE_WHEN:
 return pattern;
      case VM_CHECKMATCH_TYPE_RESCUE:
 if (!rb_obj_is_kind_of(pattern, rb_cModule)) {
     rb_raise(rb_eTypeError, "class or module required for rescue clause");
 }
      case VM_CHECKMATCH_TYPE_CASE: {
 const rb_callable_method_entry_t *me =
     rb_callable_method_entry_with_refinements(rb_class_of((VALUE)(pattern)), idEqq, ((void *)0));
 if (me) {
            return rb_vm_call0(ec, pattern, idEqq, 1, &target, me);
 }
 else {
     return rb_funcallv(pattern, idEqq, 1, &target);
 }
      }
      default:
 rb_bug("check_match: unreachable");
    }
}
static inline VALUE
double_cmp_lt(double a, double b)
{
    ;
    return a < b ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
static inline VALUE
double_cmp_le(double a, double b)
{
    ;
    return a <= b ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
static inline VALUE
double_cmp_gt(double a, double b)
{
    ;
    return a > b ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
static inline VALUE
double_cmp_ge(double a, double b)
{
    ;
    return a >= b ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
static VALUE *
vm_base_ptr(const rb_control_frame_t *cfp)
{
    const rb_control_frame_t *prev_cfp = ((cfp)+1);
    if (cfp->iseq && VM_FRAME_RUBYFRAME_P(cfp)) {
 VALUE *bp = prev_cfp->sp + cfp->iseq->body->local_table_size + ( 3);
 if (cfp->iseq->body->type == ISEQ_TYPE_METHOD) {
     bp += 1;
 }
 return bp;
    }
    else {
 return ((void *)0);
    }
}
__attribute__ ((__noreturn__)) static void raise_argument_error(rb_execution_context_t *ec, const rb_iseq_t *iseq, const VALUE exc);
__attribute__ ((__noreturn__)) static void argument_arity_error(rb_execution_context_t *ec, const rb_iseq_t *iseq, const int miss_argc, const int min_argc, const int max_argc);
__attribute__ ((__noreturn__)) static void argument_kw_error(rb_execution_context_t *ec, const rb_iseq_t *iseq, const char *error, const VALUE keys);
VALUE rb_keyword_error_new(const char *error, VALUE keys);
static VALUE method_missing(VALUE obj, ID id, int argc, const VALUE *argv,
       enum method_missing_reason call_status);
struct args_info {
    VALUE *argv;
    int argc;
    int rest_index;
    int rest_dupped;
    const struct rb_call_info_kw_arg *kw_arg;
    VALUE *kw_argv;
    VALUE rest;
};
enum arg_setup_type {
    arg_setup_method,
    arg_setup_block
};
static inline void
arg_rest_dup(struct args_info *args)
{
    if(!args->rest_dupped) {
        args->rest = rb_ary_dup(args->rest);
        args->rest_dupped = 1;
    }
}
static inline int
args_argc(struct args_info *args)
{
    if (args->rest == ((VALUE)RUBY_Qfalse)) {
 return args->argc;
    }
    else {
 return args->argc + rb_long2int_inline(rb_array_len(args->rest)) - args->rest_index;
    }
}
static inline void
args_extend(struct args_info *args, const int min_argc)
{
    int i;
    if (args->rest) {
        arg_rest_dup(args);
 ((void)0);
 for (i=args->argc + rb_long2int_inline(rb_array_len(args->rest)); i<min_argc; i++) {
     rb_ary_push(args->rest, ((VALUE)RUBY_Qnil));
 }
    }
    else {
 for (i=args->argc; i<min_argc; i++) {
     args->argv[args->argc++] = ((VALUE)RUBY_Qnil);
 }
    }
}
static inline void
args_reduce(struct args_info *args, int over_argc)
{
    if (args->rest) {
 const long len = rb_array_len(args->rest);
 if (len > over_argc) {
     arg_rest_dup(args);
     rb_ary_resize(args->rest, len - over_argc);
     return;
 }
 else {
     args->rest = ((VALUE)RUBY_Qfalse);
     over_argc -= len;
 }
    }
    ((void)0);
    args->argc -= over_argc;
}
static inline int
args_check_block_arg0(struct args_info *args)
{
    VALUE ary = ((VALUE)RUBY_Qnil);
    if (args->rest && rb_array_len(args->rest) == 1) {
 VALUE arg0 = (rb_array_const_ptr_transient(args->rest)[0]);
 ary = rb_check_array_type(arg0);
    }
    else if (args->argc == 1) {
 VALUE arg0 = args->argv[0];
 ary = rb_check_array_type(arg0);
 args->argv[0] = arg0;
    }
    if (!!((VALUE)(ary) != ((VALUE)RUBY_Qnil))) {
 args->rest = ary;
 args->rest_index = 0;
 args->argc = 0;
 return 1;
    }
    return 0;
}
static inline void
args_copy(struct args_info *args)
{
    if (args->rest != ((VALUE)RUBY_Qfalse)) {
 int argc = args->argc;
 args->argc = 0;
        arg_rest_dup(args);
 while (args->rest_index > 0 && argc > 0) {
     do { const VALUE _ary = (args->rest); const VALUE _v = (args->argv[--argc]); VALUE *ptr = (VALUE *)rb_array_ptr_use_start(_ary, 1); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[--args->rest_index]), (VALUE)(_v), "./vm_args.c", 150); rb_array_ptr_use_end(_ary, 1); } while (0);
 }
 while (argc > 0) {
     rb_ary_unshift(args->rest, args->argv[--argc]);
 }
    }
    else if (args->argc > 0) {
 args->rest = rb_ary_new_from_values(args->argc, args->argv);
 args->rest_index = 0;
        args->rest_dupped = 1;
 args->argc = 0;
    }
}
static inline const VALUE *
args_rest_argv(struct args_info *args)
{
    return rb_array_const_ptr_transient(args->rest) + args->rest_index;
}
static inline VALUE
args_rest_array(struct args_info *args)
{
    VALUE ary;
    if (args->rest) {
        ary = rb_ary_behead(args->rest, args->rest_index);
        args->rest_index = 0;
 args->rest = 0;
    }
    else {
 ary = rb_ary_new();
    }
    return ary;
}
static int
keyword_hash_p(VALUE *kw_hash_ptr, VALUE *rest_hash_ptr)
{
    *rest_hash_ptr = rb_check_hash_type(*kw_hash_ptr);
    if (!!((VALUE)(*rest_hash_ptr) != ((VALUE)RUBY_Qnil))) {
 VALUE hash = rb_extract_keywords(rest_hash_ptr);
 if (!hash) hash = ((VALUE)RUBY_Qnil);
 *kw_hash_ptr = hash;
 return 1;
    }
    else {
 *kw_hash_ptr = ((VALUE)RUBY_Qnil);
 return 0;
    }
}
static VALUE
args_pop_keyword_hash(struct args_info *args, VALUE *kw_hash_ptr)
{
    VALUE rest_hash;
    if (args->rest == ((VALUE)RUBY_Qfalse)) {
      from_argv:
 ((void)0);
 *kw_hash_ptr = args->argv[args->argc-1];
 if (keyword_hash_p(kw_hash_ptr, &rest_hash)) {
     if (rest_hash) {
  args->argv[args->argc-1] = rest_hash;
     }
     else {
  args->argc--;
  return 1;
     }
 }
    }
    else {
 long len = rb_array_len(args->rest);
 if (len > 0) {
     *kw_hash_ptr = (rb_array_const_ptr_transient(args->rest)[len - 1]);
     if (keyword_hash_p(kw_hash_ptr, &rest_hash)) {
  if (rest_hash) {
      do { const VALUE _ary = (args->rest); const VALUE _v = (rest_hash); VALUE *ptr = (VALUE *)rb_array_ptr_use_start(_ary, 1); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[len - 1]), (VALUE)(_v), "./vm_args.c", 231); rb_array_ptr_use_end(_ary, 1); } while (0);
  }
  else {
      arg_rest_dup(args);
      rb_ary_pop(args->rest);
      return 1;
  }
     }
 }
 else {
     goto from_argv;
 }
    }
    return 0;
}
static int
args_kw_argv_to_hash(struct args_info *args)
{
    const struct rb_call_info_kw_arg *kw_arg = args->kw_arg;
    const VALUE *const passed_keywords = kw_arg->keywords;
    const int kw_len = kw_arg->keyword_len;
    VALUE h = rb_hash_new_with_size(kw_len);
    const int kw_start = args->argc - kw_len;
    const VALUE * const kw_argv = args->argv + kw_start;
    int i;
    args->argc = kw_start + 1;
    for (i=0; i<kw_len; i++) {
 rb_hash_aset(h, passed_keywords[i], kw_argv[i]);
    }
    args->argv[args->argc - 1] = h;
    return args->argc;
}
static void
args_stored_kw_argv_to_hash(struct args_info *args)
{
    int i;
    const struct rb_call_info_kw_arg *kw_arg = args->kw_arg;
    const VALUE *const passed_keywords = kw_arg->keywords;
    const int passed_keyword_len = kw_arg->keyword_len;
    VALUE h = rb_hash_new_with_size(passed_keyword_len);
    for (i=0; i<passed_keyword_len; i++) {
 rb_hash_aset(h, passed_keywords[i], args->kw_argv[i]);
    }
    args->kw_argv = ((void *)0);
    if (args->rest) {
 arg_rest_dup(args);
 rb_ary_push(args->rest, h);
    }
    else {
 args->argv[args->argc++] = h;
    }
}
static inline void
args_setup_lead_parameters(struct args_info *args, int argc, VALUE *locals)
{
    if (args->argc >= argc) {
 args->argc -= argc;
 args->argv += argc;
    }
    else {
 int i, j;
 const VALUE *argv = args_rest_argv(args);
 for (i=args->argc, j=0; i<argc; i++, j++) {
     locals[i] = argv[j];
 }
 args->rest_index += argc - args->argc;
 args->argc = 0;
    }
}
static inline void
args_setup_post_parameters(struct args_info *args, int argc, VALUE *locals)
{
    long len;
    len = rb_array_len(args->rest);
    memcpy((locals), (rb_array_const_ptr_transient(args->rest) + len - argc), sizeof(VALUE)*(size_t)(argc));
    rb_ary_resize(args->rest, len - argc);
}
static inline int
args_setup_opt_parameters(struct args_info *args, int opt_max, VALUE *locals)
{
    int i;
    if (args->argc >= opt_max) {
 args->argc -= opt_max;
 args->argv += opt_max;
 i = opt_max;
    }
    else {
 int j;
 i = args->argc;
 args->argc = 0;
 if (args->rest) {
            int len = rb_long2int_inline(rb_array_len(args->rest));
            const VALUE *argv = rb_array_const_ptr_transient(args->rest);
            for (; i<opt_max && args->rest_index < len; i++, args->rest_index++) {
                locals[i] = argv[args->rest_index];
            }
        }
 for (j=i; j<opt_max; j++) {
     locals[j] = ((VALUE)RUBY_Qnil);
 }
    }
    return i;
}
static inline void
args_setup_rest_parameter(struct args_info *args, VALUE *locals)
{
    *locals = args_rest_array(args);
}
static VALUE
make_unknown_kw_hash(const VALUE *passed_keywords, int passed_keyword_len, const VALUE *kw_argv)
{
    int i;
    VALUE obj = rb_ary_tmp_new(1);
    for (i=0; i<passed_keyword_len; i++) {
 if (kw_argv[i] != ((VALUE)RUBY_Qundef)) {
     rb_ary_push(obj, passed_keywords[i]);
 }
    }
    return obj;
}
static VALUE
make_rest_kw_hash(const VALUE *passed_keywords, int passed_keyword_len, const VALUE *kw_argv)
{
    int i;
    VALUE obj = rb_hash_new_with_size(passed_keyword_len);
    for (i=0; i<passed_keyword_len; i++) {
 if (kw_argv[i] != ((VALUE)RUBY_Qundef)) {
     rb_hash_aset(obj, passed_keywords[i], kw_argv[i]);
 }
    }
    return obj;
}
static inline int
args_setup_kw_parameters_lookup(const ID key, VALUE *ptr, const VALUE *const passed_keywords, VALUE *passed_values, const int passed_keyword_len)
{
    int i;
    const VALUE keyname = (rb_id2sym(key));
    for (i=0; i<passed_keyword_len; i++) {
 if (keyname == passed_keywords[i]) {
     *ptr = passed_values[i];
     passed_values[i] = ((VALUE)RUBY_Qundef);
     return 1;
 }
    }
    return 0;
}
static void
args_setup_kw_parameters(rb_execution_context_t *const ec, const rb_iseq_t *const iseq,
    VALUE *const passed_values, const int passed_keyword_len, const VALUE *const passed_keywords,
    VALUE *const locals)
{
    const ID *acceptable_keywords = iseq->body->param.keyword->table;
    const int req_key_num = iseq->body->param.keyword->required_num;
    const int key_num = iseq->body->param.keyword->num;
    const VALUE * const default_values = iseq->body->param.keyword->default_values;
    VALUE missing = 0;
    int i, di, found = 0;
    int unspecified_bits = 0;
    VALUE unspecified_bits_value = ((VALUE)RUBY_Qnil);
    for (i=0; i<req_key_num; i++) {
 ID key = acceptable_keywords[i];
 if (args_setup_kw_parameters_lookup(key, &locals[i], passed_keywords, passed_values, passed_keyword_len)) {
     found++;
 }
 else {
     if (!missing) missing = rb_ary_tmp_new(1);
     rb_ary_push(missing, (rb_id2sym(key)));
 }
    }
    if (missing) argument_kw_error(ec, iseq, "missing", missing);
    for (di=0; i<key_num; i++, di++) {
 if (args_setup_kw_parameters_lookup(acceptable_keywords[i], &locals[i], passed_keywords, passed_values, passed_keyword_len)) {
     found++;
 }
 else {
     if (default_values[di] == ((VALUE)RUBY_Qundef)) {
  locals[i] = ((VALUE)RUBY_Qnil);
  if ((__builtin_expect(!!(i < (32-1)), 1))) {
      unspecified_bits |= 0x01 << di;
  }
  else {
      if (!((VALUE)(unspecified_bits_value) != ((VALUE)RUBY_Qnil))) {
   int j;
   unspecified_bits_value = rb_hash_new();
   for (j=0; j<(32-1); j++) {
       if (unspecified_bits & (0x01 << j)) {
    rb_hash_aset(unspecified_bits_value, (((VALUE)(j))<<1 | RUBY_FIXNUM_FLAG), ((VALUE)RUBY_Qtrue));
       }
   }
      }
      rb_hash_aset(unspecified_bits_value, (((VALUE)(di))<<1 | RUBY_FIXNUM_FLAG), ((VALUE)RUBY_Qtrue));
  }
     }
     else {
  locals[i] = default_values[di];
     }
 }
    }
    if (iseq->body->param.flags.has_kwrest) {
 const int rest_hash_index = key_num + 1;
 locals[rest_hash_index] = make_rest_kw_hash(passed_keywords, passed_keyword_len, passed_values);
    }
    else {
 if (found != passed_keyword_len) {
     VALUE keys = make_unknown_kw_hash(passed_keywords, passed_keyword_len, passed_values);
     argument_kw_error(ec, iseq, "unknown", keys);
 }
    }
    if (!((VALUE)(unspecified_bits_value) != ((VALUE)RUBY_Qnil))) {
 unspecified_bits_value = (((VALUE)(unspecified_bits))<<1 | RUBY_FIXNUM_FLAG);
    }
    locals[key_num] = unspecified_bits_value;
}
static inline void
args_setup_kw_rest_parameter(VALUE keyword_hash, VALUE *locals)
{
    locals[0] = !((VALUE)(keyword_hash) != ((VALUE)RUBY_Qnil)) ? rb_hash_new() : rb_hash_dup(keyword_hash);
}
static inline void
args_setup_block_parameter(const rb_execution_context_t *ec, struct rb_calling_info *calling, VALUE *locals)
{
    VALUE block_handler = calling->block_handler;
    *locals = rb_vm_bh_to_procval(ec, block_handler);
}
struct fill_values_arg {
    VALUE *keys;
    VALUE *vals;
    int argc;
};
static int
fill_keys_values(st_data_t key, st_data_t val, st_data_t ptr)
{
    struct fill_values_arg *arg = (struct fill_values_arg *)ptr;
    int i = arg->argc++;
    arg->keys[i] = (VALUE)key;
    arg->vals[i] = (VALUE)val;
    return ST_CONTINUE;
}
static int
setup_parameters_complex(rb_execution_context_t * const ec, const rb_iseq_t * const iseq,
    struct rb_calling_info *const calling,
    const struct rb_call_info *ci,
    VALUE * const locals, const enum arg_setup_type arg_setup_type)
{
    const int min_argc = iseq->body->param.lead_num + iseq->body->param.post_num;
    const int max_argc = (iseq->body->param.flags.has_rest == 0) ? min_argc + iseq->body->param.opt_num : (-1);
    int opt_pc = 0;
    int given_argc;
    int kw_splat = 0;
    struct args_info args_body, *args;
    VALUE keyword_hash = ((VALUE)RUBY_Qnil);
    VALUE * const orig_sp = ec->cfp->sp;
    unsigned int i;
    for (i=calling->argc; i<iseq->body->param.size; i++) {
 locals[i] = ((VALUE)RUBY_Qnil);
    }
    ec->cfp->sp = &locals[i];
    args = &args_body;
    given_argc = args->argc = calling->argc;
    args->argv = locals;
    args->rest_dupped = 0;
    if (ci->flag & (0x01 << VM_CALL_KWARG_bit)) {
 args->kw_arg = ((struct rb_call_info_with_kwarg *)ci)->kw_arg;
 if (iseq->body->param.flags.has_kw) {
     int kw_len = args->kw_arg->keyword_len;
     args->kw_argv = (VALUE*)__builtin_alloca_with_align((sizeof(VALUE)*(kw_len)), _Alignof(VALUE) * 8);
     args->argc -= kw_len;
     given_argc -= kw_len;
     memcpy((args->kw_argv), (locals + args->argc), sizeof(VALUE)*(size_t)(kw_len));
 }
 else {
     args->kw_argv = ((void *)0);
     given_argc = args_kw_argv_to_hash(args);
 }
    }
    else {
 args->kw_arg = ((void *)0);
 args->kw_argv = ((void *)0);
    }
    if (ci->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit)) {
 args->rest = locals[--args->argc];
 args->rest_index = 0;
 given_argc += rb_long2int_inline(rb_array_len(args->rest)) - 1;
    }
    else {
 args->rest = ((VALUE)RUBY_Qfalse);
    }
    switch (arg_setup_type) {
      case arg_setup_method:
 break;
      case arg_setup_block:
 if (given_argc == 1 &&
     (min_argc > 0 || iseq->body->param.opt_num > 1 ||
      iseq->body->param.flags.has_kw || iseq->body->param.flags.has_kwrest) &&
     !iseq->body->param.flags.ambiguous_param0 &&
     args_check_block_arg0(args)) {
     given_argc = rb_long2int_inline(rb_array_len(args->rest));
 }
 break;
    }
    if (given_argc < min_argc) {
 if (given_argc == min_argc - 1 && args->kw_argv) {
     args_stored_kw_argv_to_hash(args);
     given_argc = args_argc(args);
 }
 else {
     if (arg_setup_type == arg_setup_block) {
  if ((__builtin_expect(!!(!(!(1/!!(sizeof(*((ec->cfp)->sp)) == sizeof(VALUE))) || !(1/!!(sizeof(*(ec->cfp)) == sizeof(rb_control_frame_t))) || ((rb_control_frame_t *)(((ec->cfp)->sp) + (min_argc)) + 1) >= (ec->cfp))), 1))) {(void)0;} else vm_stackoverflow();
  given_argc = min_argc;
  args_extend(args, min_argc);
     }
     else {
  argument_arity_error(ec, iseq, given_argc, min_argc, max_argc);
     }
 }
    }
    if (ci->flag & (0x01 << VM_CALL_KW_SPLAT_bit)) {
 kw_splat = !iseq->body->param.flags.has_rest;
    }
    if (given_argc > min_argc &&
 (iseq->body->param.flags.has_kw || iseq->body->param.flags.has_kwrest ||
  (kw_splat && given_argc > max_argc)) &&
 args->kw_argv == ((void *)0)) {
 if (args_pop_keyword_hash(args, &keyword_hash)) {
     given_argc--;
 }
    }
    if (given_argc > max_argc && max_argc != (-1)) {
 if (arg_setup_type == arg_setup_block) {
     args_reduce(args, given_argc - max_argc);
     given_argc = max_argc;
 }
 else {
     argument_arity_error(ec, iseq, given_argc, min_argc, max_argc);
 }
    }
    if (iseq->body->param.flags.has_lead) {
 args_setup_lead_parameters(args, iseq->body->param.lead_num, locals + 0);
    }
    if (iseq->body->param.flags.has_rest || iseq->body->param.flags.has_post){
        args_copy(args);
    }
    if (iseq->body->param.flags.has_post) {
 args_setup_post_parameters(args, iseq->body->param.post_num, locals + iseq->body->param.post_start);
    }
    if (iseq->body->param.flags.has_opt) {
 int opt = args_setup_opt_parameters(args, iseq->body->param.opt_num, locals + iseq->body->param.lead_num);
 opt_pc = (int)iseq->body->param.opt_table[opt];
    }
    if (iseq->body->param.flags.has_rest) {
 args_setup_rest_parameter(args, locals + iseq->body->param.rest_start);
    }
    if (iseq->body->param.flags.has_kw) {
 VALUE * const klocals = locals + iseq->body->param.keyword->bits_start - iseq->body->param.keyword->num;
 if (args->kw_argv != ((void *)0)) {
     const struct rb_call_info_kw_arg *kw_arg = args->kw_arg;
     args_setup_kw_parameters(ec, iseq, args->kw_argv, kw_arg->keyword_len, kw_arg->keywords, klocals);
 }
 else if (!!((VALUE)(keyword_hash) != ((VALUE)RUBY_Qnil))) {
     int kw_len = rb_long2int_inline(((!(((struct RBasic*)((keyword_hash)))->flags&(RHASH_ST_TABLE_FLAG))) ? ((unsigned int)((((struct RBasic*)(keyword_hash))->flags & (VALUE)RHASH_AR_TABLE_SIZE_MASK) >> RHASH_AR_TABLE_SIZE_SHIFT)) : ((((struct RHash*)(keyword_hash))->as.st)->num_entries)));
     struct fill_values_arg arg;
     arg.keys = args->kw_argv = (VALUE*)__builtin_alloca_with_align((sizeof(VALUE)*(kw_len * 2)), _Alignof(VALUE) * 8);
     arg.vals = arg.keys + kw_len;
     arg.argc = 0;
     rb_hash_foreach(keyword_hash, fill_keys_values, (VALUE)&arg);
     ((void)0);
     args_setup_kw_parameters(ec, iseq, arg.vals, kw_len, arg.keys, klocals);
 }
 else {
     ((void)0);
     args_setup_kw_parameters(ec, iseq, ((void *)0), 0, ((void *)0), klocals);
 }
    }
    else if (iseq->body->param.flags.has_kwrest) {
 args_setup_kw_rest_parameter(keyword_hash, locals + iseq->body->param.keyword->rest_start);
    }
    else if (!!((VALUE)(keyword_hash) != ((VALUE)RUBY_Qnil)) && ((!(((struct RBasic*)((keyword_hash)))->flags&(RHASH_ST_TABLE_FLAG))) ? ((unsigned int)((((struct RBasic*)(keyword_hash))->flags & (VALUE)RHASH_AR_TABLE_SIZE_MASK) >> RHASH_AR_TABLE_SIZE_SHIFT)) : ((((struct RHash*)(keyword_hash))->as.st)->num_entries)) > 0) {
 argument_kw_error(ec, iseq, "unknown", rb_hash_keys(keyword_hash));
    }
    else if (kw_splat && !((VALUE)(keyword_hash) != ((VALUE)RUBY_Qnil))) {
 if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
     VALUE path = rb_iseq_path(iseq);
     VALUE line = rb_iseq_first_lineno(iseq);
     VALUE label = rb_iseq_label(iseq);
     rb_compile_warning(!((VALUE)(path) != ((VALUE)RUBY_Qnil)) ? ((void *)0) : (!(((struct RBasic*)(path))->flags & RSTRING_NOEMBED) ? ((struct RString*)(path))->as.ary : ((struct RString*)(path))->as.heap.ptr), ((int)rb_fix2int((VALUE)(line))),
          "in `%s': the last argument was passed as a single Hash",
          !((VALUE)(label) != ((VALUE)RUBY_Qnil)) ? ((void *)0) : (!(((struct RBasic*)(label))->flags & RSTRING_NOEMBED) ? ((struct RString*)(label))->as.ary : ((struct RString*)(label))->as.heap.ptr));
     rb_warning("although a splat keyword arguments here");
 }
    }
    if (iseq->body->param.flags.has_block) {
 if (iseq->body->local_iseq == iseq) {
 }
 else {
     args_setup_block_parameter(ec, calling, locals + iseq->body->param.block_start);
 }
    }
    ec->cfp->sp = orig_sp;
    return opt_pc;
}
void rb_backtrace_use_iseq_first_lineno_for_last_location(VALUE self);
static void
raise_argument_error(rb_execution_context_t *ec, const rb_iseq_t *iseq, const VALUE exc)
{
    VALUE at;
    if (iseq) {
 vm_push_frame(ec, iseq, VM_FRAME_MAGIC_DUMMY | VM_ENV_FLAG_LOCAL, ((VALUE)RUBY_Qnil) ,
        0 , ((VALUE)RUBY_Qfalse) ,
        iseq->body->iseq_encoded,
        ec->cfp->sp, 0, 0 );
 at = rb_ec_backtrace_object(ec);
 rb_backtrace_use_iseq_first_lineno_for_last_location(at);
 rb_vm_pop_frame(ec);
    }
    else {
 at = rb_ec_backtrace_object(ec);
    }
    rb_ivar_set(exc, idBt_locations, at);
    rb_exc_set_backtrace(exc, at);
    rb_exc_raise(exc);
}
static void
argument_arity_error(rb_execution_context_t *ec, const rb_iseq_t *iseq, const int miss_argc, const int min_argc, const int max_argc)
{
    VALUE exc = rb_arity_error_new(miss_argc, min_argc, max_argc);
    if (iseq->body->param.flags.has_kw) {
 const struct rb_iseq_param_keyword *const kw = iseq->body->param.keyword;
 const ID *keywords = kw->table;
 int req_key_num = kw->required_num;
 if (req_key_num > 0) {
     static const char required[] = "; required keywords";
     VALUE mesg = rb_attr_get(exc, idMesg);
     rb_str_resize(mesg, (!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(mesg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(mesg))->as.heap.len)-1);
     rb_str_cat(mesg, required, sizeof(required) - 1 - (req_key_num == 1));
     __extension__ ({ (__builtin_constant_p(":")) ? rb_str_cat((mesg), (":"), (long)strlen(":")) : rb_str_cat_cstr((mesg), (":")); });
     do {
  __extension__ ({ (__builtin_constant_p(" ")) ? rb_str_cat((mesg), (" "), (long)strlen(" ")) : rb_str_cat_cstr((mesg), (" ")); });
  rb_str_append(mesg, rb_id2str(*keywords++));
  __extension__ ({ (__builtin_constant_p(",")) ? rb_str_cat((mesg), (","), (long)strlen(",")) : rb_str_cat_cstr((mesg), (",")); });
     } while (--req_key_num);
     (!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(mesg))->as.ary : ((struct RString*)(mesg))->as.heap.ptr)[(!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(mesg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(mesg))->as.heap.len)-1] = ')';
 }
    }
    raise_argument_error(ec, iseq, exc);
}
static void
argument_kw_error(rb_execution_context_t *ec, const rb_iseq_t *iseq, const char *error, const VALUE keys)
{
    raise_argument_error(ec, iseq, rb_keyword_error_new(error, keys));
}
static inline void
vm_caller_setup_arg_splat(rb_control_frame_t *cfp, struct rb_calling_info *calling)
{
    int argc = calling->argc;
    VALUE *argv = cfp->sp - argc;
    VALUE ary = argv[argc-1];
    cfp->sp--;
    if (!!((VALUE)(ary) != ((VALUE)RUBY_Qnil))) {
        const VALUE *ptr = rb_array_const_ptr_transient(ary);
        long len = rb_array_len(ary), i;
        if ((__builtin_expect(!!(!(!(1/!!(sizeof(*((cfp)->sp)) == sizeof(VALUE))) || !(1/!!(sizeof(*(cfp)) == sizeof(rb_control_frame_t))) || ((rb_control_frame_t *)(((cfp)->sp) + (len)) + 1) >= (cfp))), 1))) {(void)0;} else vm_stackoverflow();
        for (i = 0; i < len; i++) {
            *cfp->sp++ = ptr[i];
        }
        calling->argc += i - 1;
    }
}
static inline void
vm_caller_setup_arg_kw(rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci)
{
    struct rb_call_info_with_kwarg *ci_kw = (struct rb_call_info_with_kwarg *)ci;
    const VALUE *const passed_keywords = ci_kw->kw_arg->keywords;
    const int kw_len = ci_kw->kw_arg->keyword_len;
    const VALUE h = rb_hash_new_with_size(kw_len);
    VALUE *sp = cfp->sp;
    int i;
    for (i=0; i<kw_len; i++) {
 rb_hash_aset(h, passed_keywords[i], (sp - kw_len)[i]);
    }
    (sp-kw_len)[0] = h;
    cfp->sp -= kw_len - 1;
    calling->argc -= kw_len - 1;
}
static VALUE
vm_to_proc(VALUE proc)
{
    if ((__builtin_expect(!!(!rb_obj_is_proc(proc)), 0))) {
 VALUE b;
 const rb_callable_method_entry_t *me =
     rb_callable_method_entry_with_refinements(rb_class_of((VALUE)(proc)), idTo_proc, ((void *)0));
 if (me) {
            b = rb_vm_call0(rb_current_execution_context(), proc, idTo_proc, 0, ((void *)0), me);
 }
 else {
     b = rb_check_convert_type_with_id(proc, RUBY_T_DATA, "Proc", idTo_proc);
 }
 if (!((VALUE)(b) != ((VALUE)RUBY_Qnil)) || !rb_obj_is_proc(b)) {
     rb_raise(rb_eTypeError,
       "wrong argument type %s (expected Proc)",
       rb_obj_classname(proc));
 }
 return b;
    }
    else {
 return proc;
    }
}
static VALUE
refine_sym_proc_call(VALUE yielded_arg, VALUE callback_arg, int argc, const VALUE *argv, VALUE blockarg)
{
    VALUE obj;
    ID mid;
    const rb_callable_method_entry_t *me;
    rb_execution_context_t *ec;
    const VALUE symbol = (rb_array_const_ptr_transient(callback_arg)[0]);
    const VALUE refinements = (rb_array_const_ptr_transient(callback_arg)[1]);
    VALUE klass;
    if (argc-- < 1) {
 rb_raise(rb_eArgError, "no receiver given");
    }
    obj = *argv++;
    mid = (rb_sym2id(symbol));
    for (klass = rb_class_of((VALUE)(obj)); klass; klass = RCLASS_SUPER(klass)) {
        me = rb_callable_method_entry(klass, mid);
        if (me) {
            me = rb_resolve_refined_method_callable(refinements, me);
            if (me) break;
        }
    }
    ec = rb_current_execution_context();
    if (!!((VALUE)(blockarg) != ((VALUE)RUBY_Qnil))) {
 vm_passed_block_handler_set(ec, blockarg);
    }
    if (!me) {
 return method_missing(obj, mid, argc, argv, MISSING_NOENTRY);
    }
    return rb_vm_call0(ec, obj, mid, argc, argv, me);
}
static VALUE
vm_caller_setup_arg_block(const rb_execution_context_t *ec, rb_control_frame_t *reg_cfp,
                          const struct rb_call_info *ci, rb_iseq_t *blockiseq, const int is_super)
{
    if (ci->flag & (0x01 << VM_CALL_ARGS_BLOCKARG_bit)) {
 VALUE block_code = *(--reg_cfp->sp);
 if (!((VALUE)(block_code) != ((VALUE)RUBY_Qnil))) {
            return 0;
        }
 else if (block_code == rb_block_param_proxy) {
            return VM_CF_BLOCK_HANDLER(reg_cfp);
        }
 else if (((((VALUE)(block_code)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(block_code) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(block_code) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(block_code))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) && rb_method_basic_definition_p(rb_cSymbol, idTo_proc)) {
     const rb_cref_t *cref = vm_env_cref(reg_cfp->ep);
     if (cref && !!((VALUE)(cref->refinements) != ((VALUE)RUBY_Qnil))) {
  VALUE ref = cref->refinements;
  VALUE func = rb_hash_lookup(ref, block_code);
  if (!((VALUE)(func) != ((VALUE)RUBY_Qnil))) {
                    VALUE callback_arg = rb_ary_tmp_new(2);
                    do { const VALUE _ary = (callback_arg); const VALUE _v = (block_code); VALUE *ptr = (VALUE *)rb_array_ptr_use_start(_ary, 1); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[0]), (VALUE)(_v), "./vm_args.c", 903); rb_array_ptr_use_end(_ary, 1); } while (0);
                    do { const VALUE _ary = (callback_arg); const VALUE _v = (ref); VALUE *ptr = (VALUE *)rb_array_ptr_use_start(_ary, 1); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[1]), (VALUE)(_v), "./vm_args.c", 904); rb_array_ptr_use_end(_ary, 1); } while (0);
                    (void)(((struct RBasic*)(callback_arg))->flags |= RUBY_FL_FREEZE);
                    func = rb_func_proc_new(refine_sym_proc_call, callback_arg);
      rb_hash_aset(ref, block_code, func);
  }
  block_code = func;
     }
            return block_code;
        }
        else {
            return vm_to_proc(block_code);
        }
    }
    else if (blockiseq != ((void *)0)) {
 struct rb_captured_block *captured = VM_CFP_TO_CAPTURED_BLOCK(reg_cfp);
 captured->code.iseq = blockiseq;
        return VM_BH_FROM_ISEQ_BLOCK(captured);
    }
    else {
 if (is_super) {
            return ((VM_EP_LEP(((((reg_cfp)->ep)))))[(-1)]);
        }
        else {
            return 0;
        }
    }
}
static inline VALUE vm_call_iseq_setup_2(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc, int opt_pc, int param_size, int local_size);
__attribute__ ((__always_inline__)) static VALUE vm_call_iseq_setup_normal(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const rb_callable_method_entry_t *me, int opt_pc, int param_size, int local_size);
static inline VALUE vm_call_iseq_setup_tailcall(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc, int opt_pc);
static VALUE vm_call_super_method(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc);
static VALUE vm_call_method_nome(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc);
static VALUE vm_call_method_each_type(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc);
static inline VALUE vm_call_method(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc);
static vm_call_handler vm_call_iseq_setup_func(const struct rb_call_info *ci, const int param_size, const int local_size);
static VALUE
vm_call_iseq_setup_tailcall_0start(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_tailcall(ec, cfp, calling, ci, cc, 0);
}
static VALUE
vm_call_iseq_setup_normal_0start(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    const rb_iseq_t *iseq = def_iseq_ptr(cc->me->def);
    int param = iseq->body->param.size;
    int local = iseq->body->local_table_size;
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, param, local);
}
static int
rb_simple_iseq_p(const rb_iseq_t *iseq)
{
    return iseq->body->param.flags.has_opt == 0 &&
           iseq->body->param.flags.has_rest == 0 &&
    iseq->body->param.flags.has_post == 0 &&
    iseq->body->param.flags.has_kw == 0 &&
    iseq->body->param.flags.has_kwrest == 0 &&
    iseq->body->param.flags.has_block == 0;
}
static inline int
vm_callee_setup_arg(rb_execution_context_t *ec, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc,
      const rb_iseq_t *iseq, VALUE *argv, int param_size, int local_size)
{
    if ((__builtin_expect(!!(rb_simple_iseq_p(iseq) && !(ci->flag & (0x01 << VM_CALL_KW_SPLAT_bit))), 1))) {
 rb_control_frame_t *cfp = ec->cfp;
 do { if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((cfp), (calling)); if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((cfp), (calling), (ci)); } while (0);
 if (calling->argc != iseq->body->param.lead_num) {
     argument_arity_error(ec, iseq, calling->argc, iseq->body->param.lead_num, iseq->body->param.lead_num);
 }
        do { if ((__builtin_expect(!!((!((ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit)) && !((ci)->flag & (0x01 << VM_CALL_KWARG_bit)) && !((rb_method_visibility_t)(((cc->me)->flags & (((VALUE)RUBY_FL_USER4) | ((VALUE)RUBY_FL_USER5))) >> ((((VALUE)RUBY_FL_USHIFT) + 4)+0)) == METHOD_VISI_PROTECTED))), 1))) ((cc)->call = (vm_call_iseq_setup_func(ci, param_size, local_size))); } while (0);
 return 0;
    }
    else {
 return setup_parameters_complex(ec, iseq, calling, ci, argv, arg_setup_method);
    }
}
static VALUE
vm_call_iseq_setup(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    const rb_iseq_t *iseq = def_iseq_ptr(cc->me->def);
    const int param_size = iseq->body->param.size;
    const int local_size = iseq->body->local_table_size;
    const int opt_pc = vm_callee_setup_arg(ec, calling, ci, cc, def_iseq_ptr(cc->me->def), cfp->sp - calling->argc, param_size, local_size);
    return vm_call_iseq_setup_2(ec, cfp, calling, ci, cc, opt_pc, param_size, local_size);
}
static inline VALUE
vm_call_iseq_setup_2(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc,
       int opt_pc, int param_size, int local_size)
{
    if ((__builtin_expect(!!(!(ci->flag & (0x01 << VM_CALL_TAILCALL_bit))), 1))) {
        return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, opt_pc, param_size, local_size);
    }
    else {
 return vm_call_iseq_setup_tailcall(ec, cfp, calling, ci, cc, opt_pc);
    }
}
static inline VALUE
vm_call_iseq_setup_normal(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const rb_callable_method_entry_t *me,
                          int opt_pc, int param_size, int local_size)
{
    const rb_iseq_t *iseq = def_iseq_ptr(me->def);
    VALUE *argv = cfp->sp - calling->argc;
    VALUE *sp = argv + param_size;
    cfp->sp = argv - 1 ;
    vm_push_frame(ec, iseq, VM_FRAME_MAGIC_METHOD | VM_ENV_FLAG_LOCAL, calling->recv,
                  calling->block_handler, (VALUE)me,
                  iseq->body->iseq_encoded + opt_pc, sp,
                  local_size - param_size,
                  iseq->body->stack_max);
    return ((VALUE)RUBY_Qundef);
}
static inline VALUE
vm_call_iseq_setup_tailcall(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc,
       int opt_pc)
{
    unsigned int i;
    VALUE *argv = cfp->sp - calling->argc;
    const rb_callable_method_entry_t *me = cc->me;
    const rb_iseq_t *iseq = def_iseq_ptr(me->def);
    VALUE *src_argv = argv;
    VALUE *sp_orig, *sp;
    VALUE finish_flag = VM_FRAME_FINISHED_P(cfp) ? VM_FRAME_FLAG_FINISH : 0;
    if (VM_BH_FROM_CFP_P(calling->block_handler, cfp)) {
 struct rb_captured_block *dst_captured = VM_CFP_TO_CAPTURED_BLOCK(((cfp)+1));
 const struct rb_captured_block *src_captured = VM_BH_TO_CAPT_BLOCK(calling->block_handler);
 dst_captured->code.val = src_captured->code.val;
 if (VM_BH_ISEQ_BLOCK_P(calling->block_handler)) {
     calling->block_handler = VM_BH_FROM_ISEQ_BLOCK(dst_captured);
 }
 else {
     calling->block_handler = VM_BH_FROM_IFUNC_BLOCK(dst_captured);
 }
    }
    vm_pop_frame(ec, cfp, cfp->ep);
    cfp = ec->cfp;
    sp_orig = sp = cfp->sp;
    sp[0] = calling->recv;
    sp++;
    for (i=0; i < iseq->body->param.size; i++) {
 *sp++ = src_argv[i];
    }
    vm_push_frame(ec, iseq, VM_FRAME_MAGIC_METHOD | VM_ENV_FLAG_LOCAL | finish_flag,
    calling->recv, calling->block_handler, (VALUE)me,
    iseq->body->iseq_encoded + opt_pc, sp,
    iseq->body->local_table_size - iseq->body->param.size,
    iseq->body->stack_max);
    cfp->sp = sp_orig;
    rb_vm_check_ints(ec);
    return ((VALUE)RUBY_Qundef);
}
static VALUE
call_cfunc_m2(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, rb_ary_new_from_values(argc, argv));
}
static VALUE
call_cfunc_m1(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(argc, argv, recv);
}
static VALUE
call_cfunc_0(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv);
}
static VALUE
call_cfunc_1(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0]);
}
static VALUE
call_cfunc_2(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1]);
}
static VALUE
call_cfunc_3(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2]);
}
static VALUE
call_cfunc_4(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3]);
}
static VALUE
call_cfunc_5(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4]);
}
static VALUE
call_cfunc_6(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5]);
}
static VALUE
call_cfunc_7(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6]);
}
static VALUE
call_cfunc_8(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7]);
}
static VALUE
call_cfunc_9(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7], argv[8]);
}
static VALUE
call_cfunc_10(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7], argv[8], argv[9]);
}
static VALUE
call_cfunc_11(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7], argv[8], argv[9], argv[10]);
}
static VALUE
call_cfunc_12(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7], argv[8], argv[9], argv[10], argv[11]);
}
static VALUE
call_cfunc_13(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7], argv[8], argv[9], argv[10], argv[11], argv[12]);
}
static VALUE
call_cfunc_14(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7], argv[8], argv[9], argv[10], argv[11], argv[12], argv[13]);
}
static VALUE
call_cfunc_15(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv)
{
    return (*func)(recv, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7], argv[8], argv[9], argv[10], argv[11], argv[12], argv[13], argv[14]);
}
static inline int
vm_cfp_consistent_p(rb_execution_context_t *ec, const rb_control_frame_t *reg_cfp)
{
    const int ov_flags = RAISED_STACKOVERFLOW;
    if ((__builtin_expect(!!(reg_cfp == ec->cfp + 1), 1))) return 1;
    if ((((ec)->raised_flag & (ov_flags)) != 0)) {
 ((ec)->raised_flag &= ~(ov_flags));
 return 1;
    }
    return 0;
}
static inline
const rb_method_cfunc_t *
vm_method_cfunc_entry(const rb_callable_method_entry_t *me)
{
    return &me->def->body.cfunc;
}
static VALUE
vm_call_cfunc_with_frame(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    VALUE val;
    const rb_callable_method_entry_t *me = cc->me;
    const rb_method_cfunc_t *cfunc = vm_method_cfunc_entry(me);
    int len = cfunc->argc;
    VALUE recv = calling->recv;
    VALUE block_handler = calling->block_handler;
    int argc = calling->argc;
    do { if ((__builtin_expect(!!(0), 0))) { struct ruby_dtrace_method_hook_args args; if (rb_dtrace_setup(ec, me->owner, me->def->original_id, &args)) { do {} while (0); } } } while (0);
    do { const rb_event_flag_t flag_arg_ = (0x0020); rb_hook_list_t *hooks_arg_ = (rb_vm_global_hooks(ec)); if ((__builtin_expect(!!((hooks_arg_)->events & (flag_arg_)), 0))) { rb_exec_event_hook_orig(ec, hooks_arg_, flag_arg_, recv, me->def->original_id, ci->mid, me->owner, ((VALUE)RUBY_Qundef), 0); } } while (0);
    vm_push_frame(ec, ((void *)0), VM_FRAME_MAGIC_CFUNC | VM_FRAME_FLAG_CFRAME | VM_ENV_FLAG_LOCAL, recv,
    block_handler, (VALUE)me,
    0, ec->cfp->sp, 0, 0);
    if (len >= 0) rb_check_arity(argc, len, len);
    reg_cfp->sp -= argc + 1;
    val = (*cfunc->invoker)(cfunc->func, recv, argc, reg_cfp->sp + 1);
    ((__builtin_expect(!!(vm_cfp_consistent_p(ec, reg_cfp)), 1)) ? (void)0 : rb_bug("vm_call_cfunc" ": cfp consistency error (%p, %p)", (void *)reg_cfp, (void *)(ec->cfp+1)));
    rb_vm_pop_frame(ec);
    do { const rb_event_flag_t flag_arg_ = (0x0040); rb_hook_list_t *hooks_arg_ = (rb_vm_global_hooks(ec)); if ((__builtin_expect(!!((hooks_arg_)->events & (flag_arg_)), 0))) { rb_exec_event_hook_orig(ec, hooks_arg_, flag_arg_, recv, me->def->original_id, ci->mid, me->owner, val, 0); } } while (0);
    do { if ((__builtin_expect(!!(0), 0))) { struct ruby_dtrace_method_hook_args args; if (rb_dtrace_setup(ec, me->owner, me->def->original_id, &args)) { do {} while (0); } } } while (0);
    return val;
}
static VALUE
vm_call_cfunc(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    do { if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((reg_cfp), (calling)); if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((reg_cfp), (calling), (ci)); } while (0);
    return vm_call_cfunc_with_frame(ec, reg_cfp, calling, ci, cc);
}
static VALUE
vm_call_ivar(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    cfp->sp -= 1;
    return vm_getivar(calling->recv, cc->me->def->body.attr.id, ((void *)0), cc, 1);
}
static VALUE
vm_call_attrset(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    VALUE val = *(cfp->sp - 1);
    cfp->sp -= 2;
    return vm_setivar(calling->recv, cc->me->def->body.attr.id, val, ((void *)0), cc, 1);
}
static inline VALUE
vm_call_bmethod_body(rb_execution_context_t *ec, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc, const VALUE *argv)
{
    rb_proc_t *proc;
    VALUE val;
    (((proc)) = (rb_proc_t*)(((struct RData*)(((cc->me->def->body.bmethod.proc))))->data));
    val = rb_vm_invoke_bmethod(ec, proc, calling->recv, calling->argc, argv, calling->block_handler, cc->me);
    return val;
}
static VALUE
vm_call_bmethod(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    VALUE *argv;
    int argc;
    do { if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((cfp), (calling)); if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((cfp), (calling), (ci)); } while (0);
    argc = calling->argc;
    argv = (VALUE*)__builtin_alloca_with_align((sizeof(VALUE)*(argc)), _Alignof(VALUE) * 8);
    memcpy((argv), (cfp->sp - argc), sizeof(VALUE)*(size_t)(argc));
    cfp->sp += - argc - 1;
    return vm_call_bmethod_body(ec, calling, ci, cc, argv);
}
static enum method_missing_reason
ci_missing_reason(const struct rb_call_info *ci)
{
    enum method_missing_reason stat = MISSING_NOENTRY;
    if (ci->flag & (0x01 << VM_CALL_VCALL_bit)) stat |= MISSING_VCALL;
    if (ci->flag & (0x01 << VM_CALL_FCALL_bit)) stat |= MISSING_FCALL;
    if (ci->flag & (0x01 << VM_CALL_SUPER_bit)) stat |= MISSING_SUPER;
    return stat;
}
static VALUE
vm_call_opt_send(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *orig_ci, struct rb_call_cache *orig_cc)
{
    int i;
    VALUE sym;
    struct rb_call_info *ci;
    struct rb_call_info_with_kwarg ci_entry;
    struct rb_call_cache cc_entry, *cc;
    do { if ((__builtin_expect(!!(((orig_ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((reg_cfp), (calling)); if ((__builtin_expect(!!(((orig_ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((reg_cfp), (calling), (orig_ci)); } while (0);
    i = calling->argc - 1;
    if (calling->argc == 0) {
 rb_raise(rb_eArgError, "no method name given");
    }
    if (orig_ci->flag & (0x01 << VM_CALL_KWARG_bit)) {
 ci = (struct rb_call_info *)&ci_entry;
 ci_entry = *(struct rb_call_info_with_kwarg *)orig_ci;
    }
    else {
 ci = &ci_entry.ci;
 ci_entry.ci = *orig_ci;
    }
    ci->flag = ci->flag & ~(0x01 << VM_CALL_KWARG_bit);
    cc_entry = *orig_cc;
    cc = &cc_entry;
    sym = (*(((((reg_cfp)->sp)))-(i)-1));
    if (!(ci->mid = rb_check_id(&sym))) {
 if (rb_method_basic_definition_p(rb_class_of((VALUE)(calling->recv)), idMethodMissing)) {
     VALUE exc =
  rb_make_no_method_exception(rb_eNoMethodError, 0, calling->recv,
         rb_long2int_inline(calling->argc), &(*(((((reg_cfp)->sp)))-(i)-1)),
         ci->flag & ((0x01 << VM_CALL_FCALL_bit)|(0x01 << VM_CALL_VCALL_bit)));
     rb_exc_raise(exc);
 }
 (*(((((reg_cfp)->sp)))-(i)-1)) = rb_str_intern(sym);
 ci->mid = idMethodMissing;
 ec->method_missing_reason = cc->aux.method_missing_reason = ci_missing_reason(ci);
    }
    else {
 if (i > 0) {
     memmove((&(*(((((reg_cfp)->sp)))-(i)-1))), (&(*(((((reg_cfp)->sp)))-(i-1)-1))), sizeof(VALUE)*(size_t)(i));
 }
 calling->argc -= 1;
 (((reg_cfp)->sp) -= (((1))));
    }
    cc->me = rb_callable_method_entry_with_refinements(rb_class_of((VALUE)(calling->recv)), ci->mid, ((void *)0));
    ci->flag = (0x01 << VM_CALL_FCALL_bit) | (0x01 << VM_CALL_OPT_SEND_bit);
    return vm_call_method(ec, reg_cfp, calling, ci, cc);
}
static inline VALUE vm_invoke_block(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, VALUE block_handler);
__attribute__ ((__noinline__)) static VALUE vm_invoke_block_opt_call(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, VALUE block_handler);
static VALUE
vm_invoke_block_opt_call(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp,
    struct rb_calling_info *calling, const struct rb_call_info *ci, VALUE block_handler)
{
    int argc = calling->argc;
    if (argc > 0) memmove((&(*(((((reg_cfp)->sp)))-(argc)-1))), (&(*(((((reg_cfp)->sp)))-(argc-1)-1))), sizeof(VALUE)*(size_t)(argc));
    (((reg_cfp)->sp) -= (((1))));
    return vm_invoke_block(ec, reg_cfp, calling, ci, block_handler);
}
static VALUE
vm_call_opt_call(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    VALUE procval = calling->recv;
    return vm_invoke_block_opt_call(ec, reg_cfp, calling, ci, VM_BH_FROM_PROC(procval));
}
static VALUE
vm_call_opt_block_call(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    VALUE block_handler = VM_ENV_BLOCK_HANDLER(VM_CF_LEP(reg_cfp));
    if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_CALL)]&((1 << 12))) == 0), 1)))) {
 return vm_invoke_block_opt_call(ec, reg_cfp, calling, ci, block_handler);
    }
    else {
 calling->recv = rb_vm_bh_to_procval(ec, block_handler);
 vm_search_method(ci, cc, calling->recv);
 return vm_call_general(ec, reg_cfp, calling, ci, cc);
    }
}
static VALUE
vm_call_method_missing(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *orig_ci, struct rb_call_cache *orig_cc)
{
    VALUE *argv = (((((reg_cfp)->sp)))-(calling->argc));
    struct rb_call_info ci_entry;
    const struct rb_call_info *ci;
    struct rb_call_cache cc_entry, *cc;
    unsigned int argc;
    do { if ((__builtin_expect(!!(((orig_ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((reg_cfp), (calling)); if ((__builtin_expect(!!(((orig_ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((reg_cfp), (calling), (orig_ci)); } while (0);
    argc = calling->argc+1;
    ci_entry.flag = (0x01 << VM_CALL_FCALL_bit) | (0x01 << VM_CALL_OPT_SEND_bit);
    ci_entry.mid = idMethodMissing;
    ci_entry.orig_argc = argc;
    ci = &ci_entry;
    cc_entry = *orig_cc;
    cc_entry.me =
 rb_callable_method_entry_without_refinements(rb_class_of((VALUE)(calling->recv)),
           idMethodMissing, ((void *)0));
    cc = &cc_entry;
    calling->argc = argc;
    if ((__builtin_expect(!!(!(!(1/!!(sizeof(*((reg_cfp)->sp)) == sizeof(VALUE))) || !(1/!!(sizeof(*(reg_cfp)) == sizeof(rb_control_frame_t))) || ((rb_control_frame_t *)(((reg_cfp)->sp) + (1)) + 1) >= (reg_cfp))), 1))) {(void)0;} else vm_stackoverflow();
    if (argc > 1) {
 memmove((argv+1), (argv), sizeof(VALUE)*(size_t)(argc-1));
    }
    argv[0] = (rb_id2sym(orig_ci->mid));
    (((reg_cfp)->sp) += (((1))));
    ec->method_missing_reason = orig_cc->aux.method_missing_reason;
    return vm_call_method(ec, reg_cfp, calling, ci, cc);
}
static const rb_callable_method_entry_t *refined_method_callable_without_refinement(const rb_callable_method_entry_t *me);
static VALUE
vm_call_zsuper(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc, VALUE klass)
{
    klass = RCLASS_SUPER(klass);
    cc->me = klass ? rb_callable_method_entry(klass, ci->mid) : ((void *)0);
    if (!cc->me) {
 return vm_call_method_nome(ec, cfp, calling, ci, cc);
    }
    if (cc->me->def->type == VM_METHOD_TYPE_REFINED &&
 cc->me->def->body.refined.orig_me) {
 cc->me = refined_method_callable_without_refinement(cc->me);
    }
    return vm_call_method_each_type(ec, cfp, calling, ci, cc);
}
static inline VALUE
find_refinement(VALUE refinements, VALUE klass)
{
    if (!((VALUE)(refinements) != ((VALUE)RUBY_Qnil))) {
 return ((VALUE)RUBY_Qnil);
    }
    return rb_hash_lookup(refinements, klass);
}
__attribute__ ((__pure__)) static rb_control_frame_t * current_method_entry(const rb_execution_context_t *ec, rb_control_frame_t *cfp);
static rb_control_frame_t *
current_method_entry(const rb_execution_context_t *ec, rb_control_frame_t *cfp)
{
    rb_control_frame_t *top_cfp = cfp;
    if (cfp->iseq && cfp->iseq->body->type == ISEQ_TYPE_BLOCK) {
 const rb_iseq_t *local_iseq = cfp->iseq->body->local_iseq;
 do {
     cfp = ((cfp)+1);
     if (RUBY_VM_CONTROL_FRAME_STACK_OVERFLOW_P(ec, cfp)) {
  return top_cfp;
     }
 } while (cfp->iseq != local_iseq);
    }
    return cfp;
}
static VALUE
find_defined_class_by_owner(VALUE current_class, VALUE target_owner)
{
    VALUE klass = current_class;
    if (( ((RUBY_T_ICLASS) == RUBY_T_FIXNUM) ? (((int)(long)(klass))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ICLASS) == RUBY_T_TRUE) ? ((klass) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ICLASS) == RUBY_T_FALSE) ? ((klass) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ICLASS) == RUBY_T_NIL) ? ((klass) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ICLASS) == RUBY_T_UNDEF) ? ((klass) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ICLASS) == RUBY_T_SYMBOL) ? ((((VALUE)(klass)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ICLASS) == RUBY_T_FLOAT) ? ( ((((int)(long)(klass))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_ICLASS))) && ((!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((klass)))->flags&((((VALUE)RUBY_FL_USER5)))):0)) klass = (((struct RBasic*)(klass))->klass);
    while (!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 VALUE owner = ( ((RUBY_T_ICLASS) == RUBY_T_FIXNUM) ? (((int)(long)(klass))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ICLASS) == RUBY_T_TRUE) ? ((klass) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ICLASS) == RUBY_T_FALSE) ? ((klass) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ICLASS) == RUBY_T_NIL) ? ((klass) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ICLASS) == RUBY_T_UNDEF) ? ((klass) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ICLASS) == RUBY_T_SYMBOL) ? ((((VALUE)(klass)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ICLASS) == RUBY_T_FLOAT) ? ( ((((int)(long)(klass))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_ICLASS))) ? (((struct RBasic*)(klass))->klass) : klass;
 if (owner == target_owner) {
     return klass;
 }
 klass = RCLASS_SUPER(klass);
    }
    return current_class;
}
static const rb_callable_method_entry_t *
aliased_callable_method_entry(const rb_callable_method_entry_t *me)
{
    const rb_method_entry_t *orig_me = me->def->body.alias.original_me;
    const rb_callable_method_entry_t *cme;
    if (orig_me->defined_class == 0) {
 VALUE defined_class = find_defined_class_by_owner(me->defined_class, orig_me->owner);
 ((void)0);
 cme = rb_method_entry_complement_defined_class(orig_me, me->called_id, defined_class);
 if (me->def->alias_count + me->def->complemented_count == 0) {
     rb_obj_write((VALUE)(me), (VALUE *)(&me->def->body.alias.original_me), (VALUE)(cme), "./vm_insnhelper.c", 2195);
 }
 else {
     rb_method_definition_t *def =
  rb_method_definition_create(VM_METHOD_TYPE_ALIAS, me->def->original_id);
     rb_method_definition_set((rb_method_entry_t *)me, def, (void *)cme);
 }
    }
    else {
 cme = (const rb_callable_method_entry_t *)orig_me;
    }
    ((void)0);
    return cme;
}
static const rb_callable_method_entry_t *
refined_method_callable_without_refinement(const rb_callable_method_entry_t *me)
{
    const rb_method_entry_t *orig_me = me->def->body.refined.orig_me;
    const rb_callable_method_entry_t *cme;
    if (orig_me->defined_class == 0) {
 cme = ((void *)0);
 rb_notimplement();
    }
    else {
 cme = (const rb_callable_method_entry_t *)orig_me;
    }
    ((void)0);
    if ((!(cme) || !(cme)->def || (cme)->def->type == VM_METHOD_TYPE_UNDEF)) {
 cme = ((void *)0);
    }
    return cme;
}
static VALUE
vm_call_method_each_type(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    switch (cc->me->def->type) {
      case VM_METHOD_TYPE_ISEQ:
        do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_iseq_setup)); } while (0);
 return vm_call_iseq_setup(ec, cfp, calling, ci, cc);
      case VM_METHOD_TYPE_NOTIMPLEMENTED:
      case VM_METHOD_TYPE_CFUNC:
        do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_cfunc)); } while (0);
 return vm_call_cfunc(ec, cfp, calling, ci, cc);
      case VM_METHOD_TYPE_ATTRSET:
 do { if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((cfp), (calling)); if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((cfp), (calling), (ci)); } while (0);
 rb_check_arity(calling->argc, 1, 1);
 cc->aux.index = 0;
        do { if ((__builtin_expect(!!(!((ci->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit)) || (ci->flag & (0x01 << VM_CALL_KWARG_bit)))), 1))) ((cc)->call = (vm_call_attrset)); } while (0);
 return vm_call_attrset(ec, cfp, calling, ci, cc);
      case VM_METHOD_TYPE_IVAR:
 do { if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((cfp), (calling)); if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((cfp), (calling), (ci)); } while (0);
 rb_check_arity(calling->argc, 0, 0);
 cc->aux.index = 0;
        do { if ((__builtin_expect(!!(!(ci->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 1))) ((cc)->call = (vm_call_ivar)); } while (0);
 return vm_call_ivar(ec, cfp, calling, ci, cc);
      case VM_METHOD_TYPE_MISSING:
 cc->aux.method_missing_reason = 0;
        do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_method_missing)); } while (0);
 return vm_call_method_missing(ec, cfp, calling, ci, cc);
      case VM_METHOD_TYPE_BMETHOD:
        do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_bmethod)); } while (0);
 return vm_call_bmethod(ec, cfp, calling, ci, cc);
      case VM_METHOD_TYPE_ALIAS:
 cc->me = aliased_callable_method_entry(cc->me);
 ((void)0);
 return vm_call_method_each_type(ec, cfp, calling, ci, cc);
      case VM_METHOD_TYPE_OPTIMIZED:
 switch (cc->me->def->body.optimize_type) {
   case OPTIMIZED_METHOD_TYPE_SEND:
            do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_opt_send)); } while (0);
     return vm_call_opt_send(ec, cfp, calling, ci, cc);
   case OPTIMIZED_METHOD_TYPE_CALL:
            do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_opt_call)); } while (0);
     return vm_call_opt_call(ec, cfp, calling, ci, cc);
   case OPTIMIZED_METHOD_TYPE_BLOCK_CALL:
            do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_opt_block_call)); } while (0);
     return vm_call_opt_block_call(ec, cfp, calling, ci, cc);
   default:
     rb_bug("vm_call_method: unsupported optimized method type (%d)",
     cc->me->def->body.optimize_type);
 }
      case VM_METHOD_TYPE_UNDEF:
 break;
      case VM_METHOD_TYPE_ZSUPER:
        return vm_call_zsuper(ec, cfp, calling, ci, cc, ((((struct RClass*)(cc->me->defined_class))->ptr)->origin_));
      case VM_METHOD_TYPE_REFINED: {
 const rb_cref_t *cref = rb_vm_get_cref(cfp->ep);
 VALUE refinements = cref ? CREF_REFINEMENTS(cref) : ((VALUE)RUBY_Qnil);
 VALUE refinement;
 const rb_callable_method_entry_t *ref_me;
 refinement = find_refinement(refinements, cc->me->owner);
 if (!((VALUE)(refinement) != ((VALUE)RUBY_Qnil))) {
     goto no_refinement_dispatch;
 }
 ref_me = rb_callable_method_entry(refinement, ci->mid);
 if (ref_me) {
     if (cc->call == vm_call_super_method) {
  const rb_control_frame_t *top_cfp = current_method_entry(ec, cfp);
  const rb_callable_method_entry_t *top_me = rb_vm_frame_method_entry(top_cfp);
  if (top_me && rb_method_definition_eq(ref_me->def, top_me->def)) {
      goto no_refinement_dispatch;
  }
     }
            if (cc->me->def->type != VM_METHOD_TYPE_REFINED ||
                 cc->me->def != ref_me->def) {
                 cc->me = ref_me;
            }
     if (ref_me->def->type != VM_METHOD_TYPE_REFINED) {
  return vm_call_method(ec, cfp, calling, ci, cc);
     }
 }
 else {
     cc->me = ((void *)0);
     return vm_call_method_nome(ec, cfp, calling, ci, cc);
 }
      no_refinement_dispatch:
 if (cc->me->def->body.refined.orig_me) {
     cc->me = refined_method_callable_without_refinement(cc->me);
 }
 else {
     VALUE klass = RCLASS_SUPER(cc->me->defined_class);
     cc->me = klass ? rb_callable_method_entry(klass, ci->mid) : ((void *)0);
 }
 return vm_call_method(ec, cfp, calling, ci, cc);
      }
    }
    rb_bug("vm_call_method: unsupported method type (%d)", cc->me->def->type);
}
__attribute__ ((__noreturn__)) static void vm_raise_method_missing(rb_execution_context_t *ec, int argc, const VALUE *argv, VALUE obj, int call_status);
static VALUE
vm_call_method_nome(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    const int stat = ci_missing_reason(ci);
    if (ci->mid == idMethodMissing) {
 rb_control_frame_t *reg_cfp = cfp;
 VALUE *argv = (((((reg_cfp)->sp)))-(calling->argc));
 vm_raise_method_missing(ec, calling->argc, argv, calling->recv, stat);
    }
    else {
 cc->aux.method_missing_reason = stat;
        do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_method_missing)); } while (0);
 return vm_call_method_missing(ec, cfp, calling, ci, cc);
    }
}
static inline VALUE
vm_call_method(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    ((void)0);
    if (cc->me != ((void *)0)) {
 switch ((rb_method_visibility_t)(((cc->me)->flags & (((VALUE)RUBY_FL_USER4) | ((VALUE)RUBY_FL_USER5))) >> ((((VALUE)RUBY_FL_USHIFT) + 4)+0))) {
   case METHOD_VISI_PUBLIC:
     return vm_call_method_each_type(ec, cfp, calling, ci, cc);
   case METHOD_VISI_PRIVATE:
     if (!(ci->flag & (0x01 << VM_CALL_FCALL_bit))) {
  enum method_missing_reason stat = MISSING_PRIVATE;
  if (ci->flag & (0x01 << VM_CALL_VCALL_bit)) stat |= MISSING_VCALL;
  cc->aux.method_missing_reason = stat;
                do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_method_missing)); } while (0);
  return vm_call_method_missing(ec, cfp, calling, ci, cc);
     }
     return vm_call_method_each_type(ec, cfp, calling, ci, cc);
   case METHOD_VISI_PROTECTED:
     if (!(ci->flag & (0x01 << VM_CALL_OPT_SEND_bit))) {
  if (!rb_obj_is_kind_of(cfp->self, cc->me->defined_class)) {
      cc->aux.method_missing_reason = MISSING_PROTECTED;
      return vm_call_method_missing(ec, cfp, calling, ci, cc);
  }
  else {
      struct rb_call_cache cc_entry;
      cc_entry = *cc;
      cc = &cc_entry;
      ((void)0);
      return vm_call_method_each_type(ec, cfp, calling, ci, cc);
  }
     }
     return vm_call_method_each_type(ec, cfp, calling, ci, cc);
   default:
     rb_bug("unreachable");
 }
    }
    else {
 return vm_call_method_nome(ec, cfp, calling, ci, cc);
    }
}
static VALUE
vm_call_general(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_method(ec, reg_cfp, calling, ci, cc);
}
static VALUE
vm_call_super_method(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    if (cc->call != vm_call_super_method) rb_bug("bug");
    return vm_call_method(ec, reg_cfp, calling, ci, cc);
}
static inline VALUE
vm_search_normal_superclass(VALUE klass)
{
    if ((int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == RUBY_T_ICLASS &&
 ((!(((VALUE)(((struct RBasic*)(klass))->klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(((struct RBasic*)(klass))->klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(((struct RBasic*)(klass))->klass))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((((struct RBasic*)(klass))->klass)))->flags&((RMODULE_IS_REFINEMENT))):0)) {
 klass = ((struct RBasic*)(klass))->klass;
    }
    klass = ((((struct RClass*)(klass))->ptr)->origin_);
    return RCLASS_SUPER(klass);
}
__attribute__ ((__noreturn__)) static void vm_super_outside(void);
static void
vm_super_outside(void)
{
    rb_raise(rb_eNoMethodError, "super called outside of method");
}
static void
vm_search_super_method(const rb_execution_context_t *ec, rb_control_frame_t *reg_cfp,
         struct rb_calling_info *calling, struct rb_call_info *ci, struct rb_call_cache *cc)
{
    VALUE current_defined_class, klass;
    const rb_callable_method_entry_t *me = rb_vm_frame_method_entry(reg_cfp);
    if (!me) {
 vm_super_outside();
    }
    current_defined_class = me->defined_class;
    if (!!((VALUE)(((((struct RClass*)(current_defined_class))->ptr)->refined_class)) != ((VALUE)RUBY_Qnil))) {
 current_defined_class = ((((struct RClass*)(current_defined_class))->ptr)->refined_class);
    }
    if ((int)(((struct RBasic*)(current_defined_class))->flags & RUBY_T_MASK) != RUBY_T_MODULE &&
 (int)(((struct RBasic*)(current_defined_class))->flags & RUBY_T_MASK) != RUBY_T_ICLASS &&
 !((!(((VALUE)(current_defined_class) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(current_defined_class) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(current_defined_class))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((current_defined_class)))->flags&((RMODULE_INCLUDED_INTO_REFINEMENT))):0) &&
 !rb_obj_is_kind_of(calling->recv, current_defined_class)) {
 VALUE m = ( ((RUBY_T_ICLASS) == RUBY_T_FIXNUM) ? (((int)(long)(current_defined_class))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ICLASS) == RUBY_T_TRUE) ? ((current_defined_class) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ICLASS) == RUBY_T_FALSE) ? ((current_defined_class) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ICLASS) == RUBY_T_NIL) ? ((current_defined_class) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ICLASS) == RUBY_T_UNDEF) ? ((current_defined_class) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ICLASS) == RUBY_T_SYMBOL) ? ((((VALUE)(current_defined_class)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(current_defined_class) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(current_defined_class) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(current_defined_class))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ICLASS) == RUBY_T_FLOAT) ? ( ((((int)(long)(current_defined_class))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(current_defined_class) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(current_defined_class) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(current_defined_class))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(current_defined_class) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(current_defined_class) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(current_defined_class))->flags & RUBY_T_MASK) == (RUBY_T_ICLASS))) ?
     ((struct RBasic*)(current_defined_class))->klass : current_defined_class;
 rb_raise(rb_eTypeError,
   "self has wrong type to call super in this context: "
   "%""l""i" "\v"" (expected %""l""i" "\v"")",
   rb_obj_class(calling->recv), m);
    }
    if (me->def->type == VM_METHOD_TYPE_BMETHOD && (ci->flag & (0x01 << VM_CALL_ZSUPER_bit))) {
 rb_raise(rb_eRuntimeError,
   "implicit argument passing of super from method defined"
   " by define_method() is not supported."
   " Specify all arguments explicitly.");
    }
    ci->mid = me->def->original_id;
    klass = vm_search_normal_superclass(me->defined_class);
    if (!klass) {
 cc->aux.method_missing_reason = MISSING_SUPER;
        do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_method_missing)); } while (0);
    }
    else {
 cc->me = rb_callable_method_entry(klass, ci->mid);
        do { if ((__builtin_expect(!!(1), 1))) ((cc)->call = (vm_call_super_method)); } while (0);
    }
}
static inline int
block_proc_is_lambda(const VALUE procval)
{
    rb_proc_t *proc;
    if (procval) {
 (((proc)) = (rb_proc_t*)(((struct RData*)(((procval))))->data));
 return proc->is_lambda;
    }
    else {
 return 0;
    }
}
static VALUE
vm_yield_with_cfunc(rb_execution_context_t *ec,
      const struct rb_captured_block *captured,
                    VALUE self, int argc, const VALUE *argv, VALUE block_handler,
                    const rb_callable_method_entry_t *me)
{
    int is_lambda = 0;
    VALUE val, arg, blockarg;
    const struct vm_ifunc *ifunc = captured->code.ifunc;
    if (is_lambda) {
 arg = rb_ary_new_from_values(argc, argv);
    }
    else if (argc == 0) {
 arg = ((VALUE)RUBY_Qnil);
    }
    else {
 arg = argv[0];
    }
    blockarg = rb_vm_bh_to_procval(ec, block_handler);
    vm_push_frame(ec, (const rb_iseq_t *)captured->code.ifunc,
                  VM_FRAME_MAGIC_IFUNC | VM_FRAME_FLAG_CFRAME |
                  (me ? VM_FRAME_FLAG_BMETHOD : 0),
    self,
    ((VALUE)((captured->ep)) | (0x01)),
                  (VALUE)me,
    0, ec->cfp->sp, 0, 0);
    val = (*ifunc->func)(arg, ifunc->data, argc, argv, blockarg);
    rb_vm_pop_frame(ec);
    return val;
}
static VALUE
vm_yield_with_symbol(rb_execution_context_t *ec, VALUE symbol, int argc, const VALUE *argv, VALUE block_handler)
{
    return rb_sym_proc_call((rb_sym2id(symbol)), argc, argv, rb_vm_bh_to_procval(ec, block_handler));
}
static inline int
vm_callee_setup_block_arg_arg0_splat(rb_control_frame_t *cfp, const rb_iseq_t *iseq, VALUE *argv, VALUE ary)
{
    int i;
    long len = rb_array_len(ary);
    if ((__builtin_expect(!!(!(!(1/!!(sizeof(*((cfp)->sp)) == sizeof(VALUE))) || !(1/!!(sizeof(*(cfp)) == sizeof(rb_control_frame_t))) || ((rb_control_frame_t *)(((cfp)->sp) + (iseq->body->param.lead_num)) + 1) >= (cfp))), 1))) {(void)0;} else vm_stackoverflow();
    for (i=0; i<len && i<iseq->body->param.lead_num; i++) {
 argv[i] = (rb_array_const_ptr_transient(ary)[i]);
    }
    return i;
}
static inline VALUE
vm_callee_setup_block_arg_arg0_check(VALUE *argv)
{
    VALUE ary, arg0 = argv[0];
    ary = rb_check_array_type(arg0);
    ((void)0);
    return ary;
}
static int
vm_callee_setup_block_arg(rb_execution_context_t *ec, struct rb_calling_info *calling, const struct rb_call_info *ci, const rb_iseq_t *iseq, VALUE *argv, const enum arg_setup_type arg_setup_type)
{
    if (rb_simple_iseq_p(iseq)) {
 rb_control_frame_t *cfp = ec->cfp;
 VALUE arg0;
 do { if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((cfp), (calling)); if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((cfp), (calling), (ci)); } while (0);
 if (arg_setup_type == arg_setup_block &&
     calling->argc == 1 &&
     iseq->body->param.flags.has_lead &&
     !iseq->body->param.flags.ambiguous_param0 &&
     !!((VALUE)(arg0 = vm_callee_setup_block_arg_arg0_check(argv)) != ((VALUE)RUBY_Qnil))) {
     calling->argc = vm_callee_setup_block_arg_arg0_splat(cfp, iseq, argv, arg0);
 }
 if (calling->argc != iseq->body->param.lead_num) {
     if (arg_setup_type == arg_setup_block) {
  if (calling->argc < iseq->body->param.lead_num) {
      int i;
      if ((__builtin_expect(!!(!(!(1/!!(sizeof(*((cfp)->sp)) == sizeof(VALUE))) || !(1/!!(sizeof(*(cfp)) == sizeof(rb_control_frame_t))) || ((rb_control_frame_t *)(((cfp)->sp) + (iseq->body->param.lead_num)) + 1) >= (cfp))), 1))) {(void)0;} else vm_stackoverflow();
      for (i=calling->argc; i<iseq->body->param.lead_num; i++) argv[i] = ((VALUE)RUBY_Qnil);
      calling->argc = iseq->body->param.lead_num;
  }
  else if (calling->argc > iseq->body->param.lead_num) {
      calling->argc = iseq->body->param.lead_num;
  }
     }
     else {
  argument_arity_error(ec, iseq, calling->argc, iseq->body->param.lead_num, iseq->body->param.lead_num);
     }
 }
 return 0;
    }
    else {
 return setup_parameters_complex(ec, iseq, calling, ci, argv, arg_setup_type);
    }
}
static int
vm_yield_setup_args(rb_execution_context_t *ec, const rb_iseq_t *iseq, const int argc, VALUE *argv, VALUE block_handler, enum arg_setup_type arg_setup_type)
{
    struct rb_calling_info calling_entry, *calling;
    struct rb_call_info ci_entry, *ci;
    calling = &calling_entry;
    calling->argc = argc;
    calling->block_handler = block_handler;
    ci_entry.flag = 0;
    ci = &ci_entry;
    return vm_callee_setup_block_arg(ec, calling, ci, iseq, argv, arg_setup_type);
}
static VALUE
vm_invoke_iseq_block(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp,
       struct rb_calling_info *calling, const struct rb_call_info *ci,
       int is_lambda, const struct rb_captured_block *captured)
{
    const rb_iseq_t *iseq = rb_iseq_check(captured->code.iseq);
    const int arg_size = iseq->body->param.size;
    VALUE * const rsp = ((((reg_cfp)->sp))) - calling->argc;
    int opt_pc = vm_callee_setup_block_arg(ec, calling, ci, iseq, rsp, is_lambda ? arg_setup_method : arg_setup_block);
    (((reg_cfp)->sp) = (((rsp))));
    vm_push_frame(ec, iseq,
    VM_FRAME_MAGIC_BLOCK | (is_lambda ? VM_FRAME_FLAG_LAMBDA : 0),
    captured->self,
    ((VALUE)((captured->ep)) | (0x01)), 0,
    iseq->body->iseq_encoded + opt_pc,
    rsp + arg_size,
    iseq->body->local_table_size - arg_size, iseq->body->stack_max);
    return ((VALUE)RUBY_Qundef);
}
static VALUE
vm_invoke_symbol_block(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp,
         struct rb_calling_info *calling, const struct rb_call_info *ci,
         VALUE symbol)
{
    VALUE val;
    int argc;
    do { if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((ec->cfp), (calling)); if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((ec->cfp), (calling), (ci)); } while (0);
    argc = calling->argc;
    val = vm_yield_with_symbol(ec, symbol, argc, (((((reg_cfp)->sp)))-(argc)), calling->block_handler);
    ((((reg_cfp)->sp) -= (((argc)))));
    return val;
}
static VALUE
vm_invoke_ifunc_block(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp,
        struct rb_calling_info *calling, const struct rb_call_info *ci,
        const struct rb_captured_block *captured)
{
    VALUE val;
    int argc;
    do { if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit))), 0))) vm_caller_setup_arg_splat((ec->cfp), (calling)); if ((__builtin_expect(!!(((ci)->flag & (0x01 << VM_CALL_KWARG_bit))), 0))) vm_caller_setup_arg_kw((ec->cfp), (calling), (ci)); } while (0);
    argc = calling->argc;
    val = vm_yield_with_cfunc(ec, captured, captured->self, argc, (((((reg_cfp)->sp)))-(argc)), calling->block_handler, ((void *)0));
    ((((reg_cfp)->sp) -= (((argc)))));
    return val;
}
static VALUE
vm_proc_to_block_handler(VALUE procval)
{
    const struct rb_block *block = vm_proc_block(procval);
    switch (vm_block_type(block)) {
      case block_type_iseq:
 return VM_BH_FROM_ISEQ_BLOCK(&block->as.captured);
      case block_type_ifunc:
 return VM_BH_FROM_IFUNC_BLOCK(&block->as.captured);
      case block_type_symbol:
 return VM_BH_FROM_SYMBOL(block->as.symbol);
      case block_type_proc:
 return VM_BH_FROM_PROC(block->as.proc);
    }
    __builtin_unreachable();
    return ((VALUE)RUBY_Qundef);
}
static inline VALUE
vm_invoke_block(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp,
  struct rb_calling_info *calling, const struct rb_call_info *ci, VALUE block_handler)
{
    int is_lambda = 0;
  again:
    switch (vm_block_handler_type(block_handler)) {
      case block_handler_type_iseq:
 {
     const struct rb_captured_block *captured = VM_BH_TO_ISEQ_BLOCK(block_handler);
     return vm_invoke_iseq_block(ec, reg_cfp, calling, ci, is_lambda, captured);
 }
      case block_handler_type_ifunc:
 {
     const struct rb_captured_block *captured = VM_BH_TO_IFUNC_BLOCK(block_handler);
     return vm_invoke_ifunc_block(ec, reg_cfp, calling, ci, captured);
 }
      case block_handler_type_proc:
 is_lambda = block_proc_is_lambda(VM_BH_TO_PROC(block_handler));
 block_handler = vm_proc_to_block_handler(VM_BH_TO_PROC(block_handler));
 goto again;
      case block_handler_type_symbol:
 return vm_invoke_symbol_block(ec, reg_cfp, calling, ci, VM_BH_TO_SYMBOL(block_handler));
    }
    __builtin_unreachable();
    return ((VALUE)RUBY_Qnil);
}
static VALUE
vm_make_proc_with_iseq(const rb_iseq_t *blockiseq)
{
    const rb_execution_context_t *ec = rb_current_execution_context();
    const rb_control_frame_t *cfp = rb_vm_get_ruby_level_next_cfp(ec, ec->cfp);
    struct rb_captured_block *captured;
    if (cfp == 0) {
 rb_bug("vm_make_proc_with_iseq: unreachable");
    }
    captured = VM_CFP_TO_CAPTURED_BLOCK(cfp);
    captured->code.iseq = blockiseq;
    return rb_vm_make_proc(ec, captured, rb_cProc);
}
static VALUE
vm_once_exec(VALUE iseq)
{
    VALUE proc = vm_make_proc_with_iseq((rb_iseq_t *)iseq);
    return rb_proc_call_with_block(proc, 0, 0, ((VALUE)RUBY_Qnil));
}
static VALUE
vm_once_clear(VALUE data)
{
    union iseq_inline_storage_entry *is = (union iseq_inline_storage_entry *)data;
    is->once.running_thread = ((void *)0);
    return ((VALUE)RUBY_Qnil);
}static inline 
rb_control_frame_t *
rb_vm_opt_struct_aref(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp)
{
    (*(((((reg_cfp)->sp)))-(0)-1)) = rb_struct_aref((((((reg_cfp)))->self)), (*(((((reg_cfp)->sp)))-(0)-1)));
    return reg_cfp;
}static inline 
rb_control_frame_t *
rb_vm_opt_struct_aset(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp)
{
    rb_struct_aset((((((reg_cfp)))->self)), (*(((((reg_cfp)->sp)))-(0)-1)), (*(((((reg_cfp)->sp)))-(1)-1)));
    return reg_cfp;
}
static enum defined_type
check_respond_to_missing(VALUE obj, VALUE v)
{
    VALUE args[2];
    VALUE r;
    args[0] = obj; args[1] = ((VALUE)RUBY_Qfalse);
    r = rb_check_funcall(v, idRespond_to_missing, 2, args);
    if (r != ((VALUE)RUBY_Qundef) && !(((VALUE)(r) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 return DEFINED_METHOD;
    }
    else {
 return DEFINED_NOT_DEFINED;
    }
}
static VALUE
vm_defined(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, rb_num_t op_type, VALUE obj, VALUE needstr, VALUE v)
{
    VALUE klass;
    enum defined_type expr_type = DEFINED_NOT_DEFINED;
    enum defined_type type = (enum defined_type)op_type;
    switch (type) {
      case DEFINED_IVAR:
 if (rb_ivar_defined((((((reg_cfp)))->self)), (rb_sym2id(obj)))) {
     expr_type = DEFINED_IVAR;
 }
 break;
      case DEFINED_IVAR2:
 klass = vm_get_cbase(((((reg_cfp)->ep))));
 break;
      case DEFINED_GVAR:
 if (rb_gvar_defined(rb_global_entry((rb_sym2id(obj))))) {
     expr_type = DEFINED_GVAR;
 }
 break;
      case DEFINED_CVAR: {
 const rb_cref_t *cref = rb_vm_get_cref(((((reg_cfp)->ep))));
 klass = vm_get_cvar_base(cref, (((reg_cfp))));
 if (rb_cvar_defined(klass, (rb_sym2id(obj)))) {
     expr_type = DEFINED_CVAR;
 }
 break;
      }
      case DEFINED_CONST:
 klass = v;
 if (vm_get_ev_const(ec, klass, (rb_sym2id(obj)), 1)) {
     expr_type = DEFINED_CONST;
 }
 break;
      case DEFINED_FUNC:
 klass = rb_class_of((VALUE)(v));
 if (rb_method_boundp(klass, (rb_sym2id(obj)), 0)) {
     expr_type = DEFINED_METHOD;
 }
 else {
     expr_type = check_respond_to_missing(obj, v);
 }
 break;
      case DEFINED_METHOD:{
 VALUE klass = rb_class_of((VALUE)(v));
 const rb_method_entry_t *me = rb_method_entry(klass, (rb_sym2id(obj)));
 if (me) {
     switch ((rb_method_visibility_t)(((me)->flags & (((VALUE)RUBY_FL_USER4) | ((VALUE)RUBY_FL_USER5))) >> ((((VALUE)RUBY_FL_USHIFT) + 4)+0))) {
       case METHOD_VISI_PRIVATE:
  break;
       case METHOD_VISI_PROTECTED:
  if (!rb_obj_is_kind_of((((((reg_cfp)))->self)), rb_class_real(klass))) {
      break;
  }
       case METHOD_VISI_PUBLIC:
  expr_type = DEFINED_METHOD;
  break;
       default:
  rb_bug("vm_defined: unreachable: %u", (unsigned int)(rb_method_visibility_t)(((me)->flags & (((VALUE)RUBY_FL_USER4) | ((VALUE)RUBY_FL_USER5))) >> ((((VALUE)RUBY_FL_USHIFT) + 4)+0)));
     }
 }
 else {
     expr_type = check_respond_to_missing(obj, v);
 }
 break;
      }
      case DEFINED_YIELD:
 if (((VM_EP_LEP(((((reg_cfp)->ep)))))[(-1)]) != 0) {
     expr_type = DEFINED_YIELD;
 }
 break;
      case DEFINED_ZSUPER:
 {
     const rb_callable_method_entry_t *me = rb_vm_frame_method_entry((((reg_cfp))));
     if (me) {
  VALUE klass = vm_search_normal_superclass(me->defined_class);
  ID id = me->def->original_id;
  if (rb_method_boundp(klass, id, 0)) {
      expr_type = DEFINED_ZSUPER;
  }
     }
 }
 break;
      case DEFINED_REF:{
 if (vm_getspecial(ec, (VM_EP_LEP(((((reg_cfp)->ep))))), ((VALUE)RUBY_Qfalse), ((int)rb_fix2int((VALUE)(obj)))) != ((VALUE)RUBY_Qnil)) {
     expr_type = DEFINED_GVAR;
 }
 break;
      }
      default:
 rb_bug("unimplemented defined? type (VM)");
 break;
    }
    if (expr_type != 0) {
 if (needstr != ((VALUE)RUBY_Qfalse)) {
     return rb_iseq_defined_string(expr_type);
 }
 else {
     return ((VALUE)RUBY_Qtrue);
 }
    }
    else {
 return ((VALUE)RUBY_Qnil);
    }
}
static const VALUE *
vm_get_ep(const VALUE *const reg_ep, rb_num_t lv)
{
    rb_num_t i;
    const VALUE *ep = reg_ep;
    for (i = 0; i < lv; i++) {
 ep = ((VALUE *)((ep)[(-1)] & ~0x03));
    }
    return ep;
}
static VALUE
vm_get_special_object(const VALUE *const reg_ep,
        enum vm_special_object_type type)
{
    switch (type) {
      case VM_SPECIAL_OBJECT_VMCORE:
 return rb_mRubyVMFrozenCore;
      case VM_SPECIAL_OBJECT_CBASE:
 return vm_get_cbase(reg_ep);
      case VM_SPECIAL_OBJECT_CONST_BASE:
 return vm_get_const_base(reg_ep);
      default:
 rb_bug("putspecialobject insn: unknown value_type %d", type);
    }
}
static void
vm_freezestring(VALUE str, VALUE debug)
{
    if (!!((VALUE)(debug) != ((VALUE)RUBY_Qnil))) {
 rb_ivar_set(str, id_debug_created_info, debug);
    }
    rb_str_freeze(str);
}
static VALUE
vm_concat_array(VALUE ary1, VALUE ary2st)
{
    const VALUE ary2 = ary2st;
    VALUE tmp1 = rb_check_to_array(ary1);
    VALUE tmp2 = rb_check_to_array(ary2);
    if (!((VALUE)(tmp1) != ((VALUE)RUBY_Qnil))) {
 tmp1 = __extension__ ({ const VALUE args_to_new_ary[] = {ary1}; if (__builtin_constant_p(1)) { __extension__ _Static_assert(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (1), "rb_ary_new_from_args" ": " "numberof(args_to_new_ary) == (1)"); } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
    }
    if (!((VALUE)(tmp2) != ((VALUE)RUBY_Qnil))) {
 tmp2 = __extension__ ({ const VALUE args_to_new_ary[] = {ary2}; if (__builtin_constant_p(1)) { __extension__ _Static_assert(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (1), "rb_ary_new_from_args" ": " "numberof(args_to_new_ary) == (1)"); } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
    }
    if (tmp1 == ary1) {
 tmp1 = rb_ary_dup(ary1);
    }
    return rb_ary_concat(tmp1, tmp2);
}
static VALUE
vm_splat_array(VALUE flag, VALUE ary)
{
    VALUE tmp = rb_check_to_array(ary);
    if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
 return __extension__ ({ const VALUE args_to_new_ary[] = {ary}; if (__builtin_constant_p(1)) { __extension__ _Static_assert(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (1), "rb_ary_new_from_args" ": " "numberof(args_to_new_ary) == (1)"); } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
    }
    else if (!(((VALUE)(flag) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 return rb_ary_dup(tmp);
    }
    else {
 return tmp;
    }
}
static VALUE
vm_check_match(rb_execution_context_t *ec, VALUE target, VALUE pattern, rb_num_t flag)
{
    enum vm_check_match_type type = ((int)flag) & 0x03;
    if (flag & 0x04) {
 long i;
 const long n = rb_array_len(pattern);
 for (i = 0; i < n; i++) {
     VALUE v = (rb_array_const_ptr_transient(pattern)[i]);
     VALUE c = check_match(ec, v, target, type);
     if (!(((VALUE)(c) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
  return c;
     }
 }
 return ((VALUE)RUBY_Qfalse);
    }
    else {
 return check_match(ec, pattern, target, type);
    }
}
static VALUE
vm_check_keyword(lindex_t bits, lindex_t idx, const VALUE *ep)
{
    const VALUE kw_bits = *(ep - bits);
    if ((((int)(long)(kw_bits))&RUBY_FIXNUM_FLAG)) {
 unsigned int b = (unsigned int)((unsigned long)((long)(((long)(kw_bits))>>(int)(1))));
 if ((idx < (32-1)) && (b & (0x01 << idx)))
     return ((VALUE)RUBY_Qfalse);
    }
    else {
 ((void)0);
 if (rb_hash_has_key(kw_bits, (((VALUE)(idx))<<1 | RUBY_FIXNUM_FLAG))) return ((VALUE)RUBY_Qfalse);
    }
    return ((VALUE)RUBY_Qtrue);
}
static void
vm_dtrace(rb_event_flag_t flag, rb_execution_context_t *ec)
{
    if (0 ||
 0 ||
 0 ||
 0) {
 switch (flag) {
   case 0x0008:
     do { if ((__builtin_expect(!!(0), 0))) { struct ruby_dtrace_method_hook_args args; if (rb_dtrace_setup(ec, 0, 0, &args)) { do {} while (0); } } } while (0);
     return;
   case 0x0020:
     do { if ((__builtin_expect(!!(0), 0))) { struct ruby_dtrace_method_hook_args args; if (rb_dtrace_setup(ec, 0, 0, &args)) { do {} while (0); } } } while (0);
     return;
   case 0x0010:
     do { if ((__builtin_expect(!!(0), 0))) { struct ruby_dtrace_method_hook_args args; if (rb_dtrace_setup(ec, 0, 0, &args)) { do {} while (0); } } } while (0);
     return;
   case 0x0040:
     do { if ((__builtin_expect(!!(0), 0))) { struct ruby_dtrace_method_hook_args args; if (rb_dtrace_setup(ec, 0, 0, &args)) { do {} while (0); } } } while (0);
     return;
 }
    }
}
static VALUE
vm_const_get_under(ID id, rb_num_t flags, VALUE cbase)
{
    VALUE ns;
    if ((ns = vm_search_const_defined_class(cbase, id)) == 0) {
 return ns;
    }
    else if (((flags) & 0x08)) {
 return rb_public_const_get_at(ns, id);
    }
    else {
 return rb_const_get_at(ns, id);
    }
}
static VALUE
vm_check_if_class(ID id, rb_num_t flags, VALUE super, VALUE klass)
{
    if (!( ((RUBY_T_CLASS) == RUBY_T_FIXNUM) ? (((int)(long)(klass))&RUBY_FIXNUM_FLAG) : ((RUBY_T_CLASS) == RUBY_T_TRUE) ? ((klass) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_CLASS) == RUBY_T_FALSE) ? ((klass) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_CLASS) == RUBY_T_NIL) ? ((klass) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_CLASS) == RUBY_T_UNDEF) ? ((klass) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_CLASS) == RUBY_T_SYMBOL) ? ((((VALUE)(klass)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_CLASS) == RUBY_T_FLOAT) ? ( ((((int)(long)(klass))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) == (RUBY_T_CLASS)))) {
 rb_raise(rb_eTypeError, "%""l""i" "\v"" is not a class", rb_id2str(id));
    }
    else if (((flags) & 0x10)) {
 VALUE tmp = rb_class_real(RCLASS_SUPER(klass));
 if (tmp != super) {
     rb_raise(rb_eTypeError,
       "superclass mismatch for class %""l""i" "\v""",
       rb_id2str(id));
 }
 else {
     return klass;
 }
    }
    else {
 return klass;
    }
}
static VALUE
vm_check_if_module(ID id, VALUE mod)
{
    if (!( ((RUBY_T_MODULE) == RUBY_T_FIXNUM) ? (((int)(long)(mod))&RUBY_FIXNUM_FLAG) : ((RUBY_T_MODULE) == RUBY_T_TRUE) ? ((mod) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_MODULE) == RUBY_T_FALSE) ? ((mod) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_MODULE) == RUBY_T_NIL) ? ((mod) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_MODULE) == RUBY_T_UNDEF) ? ((mod) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_MODULE) == RUBY_T_SYMBOL) ? ((((VALUE)(mod)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(mod) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(mod) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(mod))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_MODULE) == RUBY_T_FLOAT) ? ( ((((int)(long)(mod))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(mod) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(mod) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(mod))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(mod) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(mod) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(mod))->flags & RUBY_T_MASK) == (RUBY_T_MODULE)))) {
 rb_raise(rb_eTypeError, "%""l""i" "\v"" is not a module", rb_id2str(id));
    }
    else {
 return mod;
    }
}
static VALUE
vm_declare_class(ID id, rb_num_t flags, VALUE cbase, VALUE super)
{
    VALUE s = ((flags) & 0x10) ? super : rb_cObject;
    VALUE c = rb_define_class_id(id, s);
    rb_set_class_path_string(c, cbase, rb_id2str(id));
    rb_const_set(cbase, id, c);
    rb_class_inherited(s, c);
    return c;
}
static VALUE
vm_declare_module(ID id, VALUE cbase)
{
    VALUE mod = rb_define_module_id(id);
    rb_set_class_path_string(mod, cbase, rb_id2str(id));
    rb_const_set(cbase, id, mod);
    return mod;
}
static VALUE
vm_define_class(ID id, rb_num_t flags, VALUE cbase, VALUE super)
{
    VALUE klass;
    if (((flags) & 0x10) && !( ((RUBY_T_CLASS) == RUBY_T_FIXNUM) ? (((int)(long)(super))&RUBY_FIXNUM_FLAG) : ((RUBY_T_CLASS) == RUBY_T_TRUE) ? ((super) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_CLASS) == RUBY_T_FALSE) ? ((super) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_CLASS) == RUBY_T_NIL) ? ((super) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_CLASS) == RUBY_T_UNDEF) ? ((super) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_CLASS) == RUBY_T_SYMBOL) ? ((((VALUE)(super)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(super) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(super) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(super))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_CLASS) == RUBY_T_FLOAT) ? ( ((((int)(long)(super))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(super) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(super) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(super))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(super) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(super) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(super))->flags & RUBY_T_MASK) == (RUBY_T_CLASS)))) {
 rb_raise(rb_eTypeError,
   "superclass must be a Class (%""l""i" "\v"" given)",
   rb_obj_class(super));
    }
    vm_check_if_namespace(cbase);
    rb_autoload_load(cbase, id);
    if ((klass = vm_const_get_under(id, flags, cbase)) != 0) {
 return vm_check_if_class(id, flags, super, klass);
    }
    else {
 return vm_declare_class(id, flags, cbase, super);
    }
}
static VALUE
vm_define_module(ID id, rb_num_t flags, VALUE cbase)
{
    VALUE mod;
    vm_check_if_namespace(cbase);
    if ((mod = vm_const_get_under(id, flags, cbase)) != 0) {
 return vm_check_if_module(id, mod);
    }
    else {
 return vm_declare_module(id, cbase);
    }
}
static VALUE
vm_find_or_create_class_by_id(ID id,
         rb_num_t flags,
         VALUE cbase,
         VALUE super)
{
    rb_vm_defineclass_type_t type = ((rb_vm_defineclass_type_t)(flags) & VM_DEFINECLASS_TYPE_MASK);
    switch (type) {
      case VM_DEFINECLASS_TYPE_CLASS:
 return vm_define_class(id, flags, cbase, super);
      case VM_DEFINECLASS_TYPE_SINGLETON_CLASS:
 return rb_singleton_class(cbase);
      case VM_DEFINECLASS_TYPE_MODULE:
 return vm_define_module(id, flags, cbase);
      default:
 rb_bug("unknown defineclass type: %d", (int)type);
    }
}
static VALUE
vm_opt_str_freeze(VALUE str, int bop, ID id)
{
    if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(bop)]&((1 << 2))) == 0), 1)))) {
 return str;
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
static VALUE
vm_opt_newarray_max(rb_num_t num, const VALUE *ptr)
{
    if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MAX)]&((1 << 3))) == 0), 1)))) {
 if (num == 0) {
     return ((VALUE)RUBY_Qnil);
 }
 else {
     struct cmp_opt_data cmp_opt = { 0, 0 };
     VALUE result = *ptr;
            rb_snum_t i = num - 1;
     while (i-- > 0) {
  const VALUE v = *++ptr;
  if ((((((int)(long)(v))&RUBY_FIXNUM_FLAG) && (((int)(long)(result))&RUBY_FIXNUM_FLAG) && (((cmp_opt).opt_inited & (1U << cmp_opt_Fixnum)) ? ((cmp_opt).opt_methods & (1U << cmp_opt_Fixnum)) : (((cmp_opt).opt_inited |= (1U << cmp_opt_Fixnum)), rb_method_basic_definition_p(rb_cInteger, idCmp) && ((cmp_opt).opt_methods |= (1U << cmp_opt_Fixnum))))) ? (((long)v > (long)result) ? 1 : ((long)v < (long)result) ? -1 : 0) : ((( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)((v)))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? (((v)) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? (((v)) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? (((v)) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? (((v)) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)((v))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((v)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((v)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((v)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)((v)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((v)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((v)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((v)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((v)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((v)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((v)))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) && rb_class_of((VALUE)(v)) == rb_cString) && (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)((result)))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? (((result)) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? (((result)) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? (((result)) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? (((result)) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)((result))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((result)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((result)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((result)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)((result)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((result)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((result)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((result)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((result)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((result)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((result)))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) && rb_class_of((VALUE)(result)) == rb_cString) && (((cmp_opt).opt_inited & (1U << cmp_opt_String)) ? ((cmp_opt).opt_methods & (1U << cmp_opt_String)) : (((cmp_opt).opt_inited |= (1U << cmp_opt_String)), rb_method_basic_definition_p(rb_cString, idCmp) && ((cmp_opt).opt_methods |= (1U << cmp_opt_String))))) ? rb_str_cmp(v, result) : (( ((((int)(long)(v))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) && ( ((((int)(long)(result))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(result) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(result) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(result))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) && (((cmp_opt).opt_inited & (1U << cmp_opt_Float)) ? ((cmp_opt).opt_methods & (1U << cmp_opt_Float)) : (((cmp_opt).opt_inited |= (1U << cmp_opt_Float)), rb_method_basic_definition_p(rb_cFloat, idCmp) && ((cmp_opt).opt_methods |= (1U << cmp_opt_Float))))) ? rb_float_cmp(v, result) : rb_cmpint(rb_funcallv(v, idCmp, 1, &result), v, result)) > 0) {
      result = v;
  }
     }
     return result;
 }
    }
    else {
 VALUE ary = rb_ary_new_from_values(num, ptr);
 return __extension__({ const int rb_funcall_argc = (0); const VALUE rb_funcall_args[] = {}; const int rb_funcall_nargs = (int)(sizeof(rb_funcall_args) / sizeof(VALUE)); rb_funcallv(ary, idMax, __builtin_choose_expr(__builtin_constant_p(rb_funcall_argc), (((rb_funcall_argc) == 0 ? (rb_funcall_nargs) <= 1 : (rb_funcall_argc) == (rb_funcall_nargs)) ? (rb_funcall_argc) : rb_varargs_bad_length(rb_funcall_argc, rb_funcall_nargs)), (((rb_funcall_argc) <= (rb_funcall_nargs)) ? (rb_funcall_argc) : (rb_fatal("argc(%d) exceeds actual arguments(%d)", rb_funcall_argc, rb_funcall_nargs), 0))), rb_funcall_nargs ? rb_funcall_args : ((void *)0)); });
    }
}
static VALUE
vm_opt_newarray_min(rb_num_t num, const VALUE *ptr)
{
    if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MIN)]&((1 << 3))) == 0), 1)))) {
 if (num == 0) {
     return ((VALUE)RUBY_Qnil);
 }
 else {
     struct cmp_opt_data cmp_opt = { 0, 0 };
     VALUE result = *ptr;
            rb_snum_t i = num - 1;
     while (i-- > 0) {
  const VALUE v = *++ptr;
  if ((((((int)(long)(v))&RUBY_FIXNUM_FLAG) && (((int)(long)(result))&RUBY_FIXNUM_FLAG) && (((cmp_opt).opt_inited & (1U << cmp_opt_Fixnum)) ? ((cmp_opt).opt_methods & (1U << cmp_opt_Fixnum)) : (((cmp_opt).opt_inited |= (1U << cmp_opt_Fixnum)), rb_method_basic_definition_p(rb_cInteger, idCmp) && ((cmp_opt).opt_methods |= (1U << cmp_opt_Fixnum))))) ? (((long)v > (long)result) ? 1 : ((long)v < (long)result) ? -1 : 0) : ((( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)((v)))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? (((v)) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? (((v)) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? (((v)) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? (((v)) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)((v))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((v)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((v)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((v)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)((v)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((v)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((v)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((v)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((v)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((v)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((v)))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) && rb_class_of((VALUE)(v)) == rb_cString) && (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)((result)))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? (((result)) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? (((result)) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? (((result)) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? (((result)) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)((result))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((result)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((result)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((result)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)((result)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((result)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((result)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((result)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((result)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((result)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((result)))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) && rb_class_of((VALUE)(result)) == rb_cString) && (((cmp_opt).opt_inited & (1U << cmp_opt_String)) ? ((cmp_opt).opt_methods & (1U << cmp_opt_String)) : (((cmp_opt).opt_inited |= (1U << cmp_opt_String)), rb_method_basic_definition_p(rb_cString, idCmp) && ((cmp_opt).opt_methods |= (1U << cmp_opt_String))))) ? rb_str_cmp(v, result) : (( ((((int)(long)(v))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) && ( ((((int)(long)(result))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(result) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(result) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(result))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) && (((cmp_opt).opt_inited & (1U << cmp_opt_Float)) ? ((cmp_opt).opt_methods & (1U << cmp_opt_Float)) : (((cmp_opt).opt_inited |= (1U << cmp_opt_Float)), rb_method_basic_definition_p(rb_cFloat, idCmp) && ((cmp_opt).opt_methods |= (1U << cmp_opt_Float))))) ? rb_float_cmp(v, result) : rb_cmpint(rb_funcallv(v, idCmp, 1, &result), v, result)) < 0) {
      result = v;
  }
     }
     return result;
 }
    }
    else {
 VALUE ary = rb_ary_new_from_values(num, ptr);
 return __extension__({ const int rb_funcall_argc = (0); const VALUE rb_funcall_args[] = {}; const int rb_funcall_nargs = (int)(sizeof(rb_funcall_args) / sizeof(VALUE)); rb_funcallv(ary, idMin, __builtin_choose_expr(__builtin_constant_p(rb_funcall_argc), (((rb_funcall_argc) == 0 ? (rb_funcall_nargs) <= 1 : (rb_funcall_argc) == (rb_funcall_nargs)) ? (rb_funcall_argc) : rb_varargs_bad_length(rb_funcall_argc, rb_funcall_nargs)), (((rb_funcall_argc) <= (rb_funcall_nargs)) ? (rb_funcall_argc) : (rb_fatal("argc(%d) exceeds actual arguments(%d)", rb_funcall_argc, rb_funcall_nargs), 0))), rb_funcall_nargs ? rb_funcall_args : ((void *)0)); });
    }
}
static int
vm_ic_hit_p(IC ic, const VALUE *reg_ep)
{
    if (ic->ic_serial == (ruby_vm_global_constant_state)) {
 return (ic->ic_cref == ((void *)0) || ic->ic_cref == rb_vm_get_cref(reg_ep));
    }
    return 0;
}
static void
vm_ic_update(IC ic, VALUE val, const VALUE *reg_ep)
{
    ((void)0);
    ic->ic_value.value = val;
    ic->ic_serial = (ruby_vm_global_constant_state) - ruby_vm_const_missing_count;
    ic->ic_cref = vm_get_const_key_cref(reg_ep);
    ruby_vm_const_missing_count = 0;
}
static VALUE
vm_once_dispatch(rb_execution_context_t *ec, ISEQ iseq, ISE is)
{
    rb_thread_t *th = rb_ec_thread_ptr(ec);
    rb_thread_t *const RUNNING_THREAD_ONCE_DONE = (rb_thread_t *)(0x1);
  again:
    if (is->once.running_thread == RUNNING_THREAD_ONCE_DONE) {
 return is->once.value;
    }
    else if (is->once.running_thread == ((void *)0)) {
 VALUE val;
 is->once.running_thread = th;
 val = rb_ensure(vm_once_exec, (VALUE)iseq, vm_once_clear, (VALUE)is);
 rb_obj_write((VALUE)(ec->cfp->iseq), (VALUE *)(&is->once.value), (VALUE)(val), "./vm_insnhelper.c", 3294);
 is->once.running_thread = RUNNING_THREAD_ONCE_DONE;
 return val;
    }
    else if (is->once.running_thread == th) {
 return vm_once_exec((VALUE)iseq);
    }
    else {
 rb_vm_check_ints(ec);
 rb_thread_schedule();
 goto again;
    }
}
static OFFSET
vm_case_dispatch(CDHASH hash, OFFSET else_offset, VALUE key)
{
    switch (__extension__({ VALUE arg_obj = (key); (((VALUE)(arg_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) ? -1 : (int)(((struct RBasic*)(arg_obj))->flags & RUBY_T_MASK); })) {
      case -1:
      case RUBY_T_FLOAT:
      case RUBY_T_SYMBOL:
      case RUBY_T_BIGNUM:
      case RUBY_T_STRING:
 if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_EQQ)]&((1 << 6) | (1 << 0) | (1 << 1) | (1 << 9) | (1 << 10) | (1 << 11) | (1 << 2))) == 0), 1)))) {
     st_data_t val;
     if (( ((((int)(long)(key))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(key) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(key) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(key))->flags & RUBY_T_MASK) == RUBY_T_FLOAT))) {
  double kval = rb_float_value_inline(key);
  if (!__builtin_isinf_sign (kval) && modf(kval, &kval) == 0.0) {
      key = (((kval) < (0x7fffffffffffffffL>>1)+1) && ((kval) >= (((long)(-0x7fffffffffffffffL - 1L))>>(int)(1)))) ? (((VALUE)((long)kval))<<1 | RUBY_FIXNUM_FLAG) : rb_dbl2big(kval);
  }
     }
            if (rb_hash_stlike_lookup(hash, key, &val)) {
  return ((long)(((long)((VALUE)val))>>(int)(1)));
     }
     else {
  return else_offset;
     }
 }
    }
    return 0;
}
__attribute__ ((__noreturn__)) static void vm_stack_consistency_error(const rb_execution_context_t *ec, const rb_control_frame_t *, const VALUE *);
static void
vm_stack_consistency_error(const rb_execution_context_t *ec,
      const rb_control_frame_t *cfp,
      const VALUE *bp)
{
    const ptrdiff_t nsp = ((cfp->sp) - (ec)->vm_stack);
    const ptrdiff_t nbp = ((bp) - (ec)->vm_stack);
    static const char stack_consistency_error[] =
 "Stack consistency error (sp: %""t""d"", bp: %""t""d"")";
    rb_bug(stack_consistency_error, nsp, nbp);
}
ALWAYS_INLINE(static inline VALUE
vm_opt_plus(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_plus(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_PLUS)]&((1 << 0))) == 0), 1)))) {
 return rb_fix_plus_fix(recv, obj);
    }
    else if ((((((recv)^2) | ((obj)^2)) & 3) == 0) &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_PLUS)]&((1 << 1))) == 0), 1)))) {
 return rb_float_new_inline(rb_float_value_inline(recv) + rb_float_value_inline(obj));
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cFloat &&
      (((struct RBasic*)(obj))->klass) == rb_cFloat &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_PLUS)]&((1 << 1))) == 0), 1)))) {
 return rb_float_new_inline(rb_float_value_inline(recv) + rb_float_value_inline(obj));
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cString &&
      (((struct RBasic*)(obj))->klass) == rb_cString &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_PLUS)]&((1 << 2))) == 0), 1)))) {
 return rb_str_plus(recv, obj);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cArray &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_PLUS)]&((1 << 3))) == 0), 1)))) {
 return rb_ary_plus(recv, obj);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_minus(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_minus(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MINUS)]&((1 << 0))) == 0), 1)))) {
 return rb_fix_minus_fix(recv, obj);
    }
    else if ((((((recv)^2) | ((obj)^2)) & 3) == 0) &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MINUS)]&((1 << 1))) == 0), 1)))) {
 return rb_float_new_inline(rb_float_value_inline(recv) - rb_float_value_inline(obj));
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cFloat &&
      (((struct RBasic*)(obj))->klass) == rb_cFloat &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MINUS)]&((1 << 1))) == 0), 1)))) {
 return rb_float_new_inline(rb_float_value_inline(recv) - rb_float_value_inline(obj));
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_mult(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_mult(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MULT)]&((1 << 0))) == 0), 1)))) {
 return rb_fix_mul_fix(recv, obj);
    }
    else if ((((((recv)^2) | ((obj)^2)) & 3) == 0) &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MULT)]&((1 << 1))) == 0), 1)))) {
 return rb_float_new_inline(rb_float_value_inline(recv) * rb_float_value_inline(obj));
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cFloat &&
      (((struct RBasic*)(obj))->klass) == rb_cFloat &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MULT)]&((1 << 1))) == 0), 1)))) {
 return rb_float_new_inline(rb_float_value_inline(recv) * rb_float_value_inline(obj));
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_div(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_div(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_DIV)]&((1 << 0))) == 0), 1)))) {
 return (((long)(((long)(obj))>>(int)(1))) == 0) ? ((VALUE)RUBY_Qundef) : rb_fix_div_fix(recv, obj);
    }
    else if ((((((recv)^2) | ((obj)^2)) & 3) == 0) &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_DIV)]&((1 << 1))) == 0), 1)))) {
        return rb_flo_div_flo(recv, obj);
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cFloat &&
      (((struct RBasic*)(obj))->klass) == rb_cFloat &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_DIV)]&((1 << 1))) == 0), 1)))) {
        return rb_flo_div_flo(recv, obj);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_mod(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_mod(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MOD)]&((1 << 0))) == 0), 1)))) {
 return (((long)(((long)(obj))>>(int)(1))) == 0) ? ((VALUE)RUBY_Qundef) : rb_fix_mod_fix(recv, obj);
    }
    else if ((((((recv)^2) | ((obj)^2)) & 3) == 0) &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MOD)]&((1 << 1))) == 0), 1)))) {
 return rb_float_new_inline(ruby_float_mod(rb_float_value_inline(recv), rb_float_value_inline(obj)));
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cFloat &&
      (((struct RBasic*)(obj))->klass) == rb_cFloat &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MOD)]&((1 << 1))) == 0), 1)))) {
 return rb_float_new_inline(ruby_float_mod(rb_float_value_inline(recv), rb_float_value_inline(obj)));
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_neq(CALL_INFO ci, CALL_CACHE cc,
    CALL_INFO ci_eq, CALL_CACHE cc_eq,
    VALUE recv, VALUE obj));
static inline VALUE
vm_opt_neq(CALL_INFO ci, CALL_CACHE cc,
    CALL_INFO ci_eq, CALL_CACHE cc_eq,
    VALUE recv, VALUE obj) {
    if (vm_method_cfunc_is(ci, cc, recv, rb_obj_not_equal)) {
 VALUE val = opt_eq_func(recv, obj, ci_eq, cc_eq);
 if (val != ((VALUE)RUBY_Qundef)) {
     return !(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0) ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qtrue);
 }
    }
    return ((VALUE)RUBY_Qundef);
}
ALWAYS_INLINE(static inline VALUE
vm_opt_lt(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_lt(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_LT)]&((1 << 0))) == 0), 1)))) {
 return (long)recv < (long)obj ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else if ((((((recv)^2) | ((obj)^2)) & 3) == 0) &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_LT)]&((1 << 1))) == 0), 1)))) {
 return rb_float_value_inline(recv) < rb_float_value_inline(obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cFloat &&
      (((struct RBasic*)(obj))->klass) == rb_cFloat &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_LT)]&((1 << 1))) == 0), 1)))) {
 ;
 return rb_float_value_inline(recv) < rb_float_value_inline(obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_le(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_le(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_LE)]&((1 << 0))) == 0), 1)))) {
 return (long)recv <= (long)obj ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else if ((((((recv)^2) | ((obj)^2)) & 3) == 0) &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_LE)]&((1 << 1))) == 0), 1)))) {
 return rb_float_value_inline(recv) <= rb_float_value_inline(obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cFloat &&
      (((struct RBasic*)(obj))->klass) == rb_cFloat &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_LE)]&((1 << 1))) == 0), 1)))) {
 ;
 return rb_float_value_inline(recv) <= rb_float_value_inline(obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_gt(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_gt(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_GT)]&((1 << 0))) == 0), 1)))) {
 return (long)recv > (long)obj ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else if ((((((recv)^2) | ((obj)^2)) & 3) == 0) &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_GT)]&((1 << 1))) == 0), 1)))) {
 return rb_float_value_inline(recv) > rb_float_value_inline(obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cFloat &&
      (((struct RBasic*)(obj))->klass) == rb_cFloat &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_GT)]&((1 << 1))) == 0), 1)))) {
 ;
 return rb_float_value_inline(recv) > rb_float_value_inline(obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_ge(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_ge(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_GE)]&((1 << 0))) == 0), 1)))) {
 return (long)recv >= (long)obj ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else if ((((((recv)^2) | ((obj)^2)) & 3) == 0) &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_GE)]&((1 << 1))) == 0), 1)))) {
 return rb_float_value_inline(recv) >= rb_float_value_inline(obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cFloat &&
      (((struct RBasic*)(obj))->klass) == rb_cFloat &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_GE)]&((1 << 1))) == 0), 1)))) {
 ;
 return rb_float_value_inline(recv) >= rb_float_value_inline(obj) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_ltlt(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_ltlt(VALUE recv, VALUE obj) {
    if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cString &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_LTLT)]&((1 << 2))) == 0), 1)))) {
 return rb_str_concat(recv, obj);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cArray &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_LTLT)]&((1 << 3))) == 0), 1)))) {
 return rb_ary_push(recv, obj);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_and(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_and(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
        ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_AND)]&((1 << 0))) == 0), 1)))) {
        return rb_long2num_inline(((long)(((long)(recv))>>(int)(1))) & ((long)(((long)(obj))>>(int)(1))));
    }
    else {
        return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_or(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_or(VALUE recv, VALUE obj) {
    if (((recv) & (obj) & 1) &&
        ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_OR)]&((1 << 0))) == 0), 1)))) {
        return rb_long2num_inline(((long)(((long)(recv))>>(int)(1))) | ((long)(((long)(obj))>>(int)(1))));
    }
    else {
        return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_aref(VALUE recv, VALUE obj));
static inline VALUE
vm_opt_aref(VALUE recv, VALUE obj) {
    if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cArray &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_AREF)]&((1 << 3))) == 0), 1)))) {
        if ((((int)(long)(obj))&RUBY_FIXNUM_FLAG)) {
            return rb_ary_entry_internal(recv, ((long)(((long)(obj))>>(int)(1))));
        }
        else {
            return rb_ary_aref1(recv, obj);
        }
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cHash &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_AREF)]&((1 << 4))) == 0), 1)))) {
 return rb_hash_aref(recv, obj);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_aset(VALUE recv, VALUE obj, VALUE set));
static inline VALUE
vm_opt_aset(VALUE recv, VALUE obj, VALUE set) {
    if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cArray &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_ASET)]&((1 << 3))) == 0), 1))) &&
      (((int)(long)(obj))&RUBY_FIXNUM_FLAG)) {
 rb_ary_store(recv, ((long)(((long)(obj))>>(int)(1))), set);
 return set;
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cHash &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_ASET)]&((1 << 4))) == 0), 1)))) {
 rb_hash_aset(recv, obj, set);
 return set;
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_aref_with(VALUE recv, VALUE key));
static inline VALUE
vm_opt_aref_with(VALUE recv, VALUE key) {
    if (!(((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (((struct RBasic*)(recv))->klass) == rb_cHash &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_AREF)]&((1 << 4))) == 0), 1))) &&
 rb_hash_compare_by_id_p(recv) == ((VALUE)RUBY_Qfalse)) {
 return rb_hash_aref(recv, key);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_aset_with(VALUE recv, VALUE key, VALUE val));
static inline VALUE
vm_opt_aset_with(VALUE recv, VALUE key, VALUE val) {
    if (!(((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (((struct RBasic*)(recv))->klass) == rb_cHash &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_ASET)]&((1 << 4))) == 0), 1))) &&
 rb_hash_compare_by_id_p(recv) == ((VALUE)RUBY_Qfalse)) {
 return rb_hash_aset(recv, key, val);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
static VALUE
vm_opt_length(VALUE recv, int bop)
{
    if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cString &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(bop)]&((1 << 2))) == 0), 1)))) {
 if (bop == BOP_EMPTY_P) {
     return rb_long2num_inline((!(((struct RBasic*)(recv))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(recv))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(recv))->as.heap.len));
 }
 else {
     return rb_str_length(recv);
 }
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cArray &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(bop)]&((1 << 3))) == 0), 1)))) {
 return rb_long2num_inline(rb_array_len(recv));
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cHash &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(bop)]&((1 << 4))) == 0), 1)))) {
 return (((VALUE)(((!(((struct RBasic*)((recv)))->flags&(RHASH_ST_TABLE_FLAG))) ? ((unsigned int)((((struct RBasic*)(recv))->flags & (VALUE)RHASH_AR_TABLE_SIZE_MASK) >> RHASH_AR_TABLE_SIZE_SHIFT)) : ((((struct RHash*)(recv))->as.st)->num_entries))))<<1 | RUBY_FIXNUM_FLAG);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
static VALUE
vm_opt_empty_p(VALUE recv)
{
    switch (vm_opt_length(recv, BOP_EMPTY_P)) {
      case ((VALUE)RUBY_Qundef): return ((VALUE)RUBY_Qundef);
      case (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG): return ((VALUE)RUBY_Qtrue);
      default: return ((VALUE)RUBY_Qfalse);
    }
}
static VALUE
fix_succ(VALUE x)
{
    switch (x) {
      case ~0UL:
        return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
      case ((~0UL)>>(int)(1)):
        return rb_uint2big(1UL << (8 * 8 - 2));
      default:
        return x + 2;
    }
}
static VALUE
vm_opt_succ(VALUE recv)
{
    if ((((int)(long)(recv))&RUBY_FIXNUM_FLAG) &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_SUCC)]&((1 << 0))) == 0), 1)))) {
        return fix_succ(recv);
    }
    else if ((((VALUE)(recv) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return ((VALUE)RUBY_Qundef);
    }
    else if ((((struct RBasic*)(recv))->klass) == rb_cString &&
      ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_SUCC)]&((1 << 2))) == 0), 1)))) {
 return rb_str_succ(recv);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
ALWAYS_INLINE(static inline VALUE
vm_opt_not(CALL_INFO ci, CALL_CACHE cc, VALUE recv));
static inline VALUE
vm_opt_not(CALL_INFO ci, CALL_CACHE cc, VALUE recv) {
    if (vm_method_cfunc_is(ci, cc, recv, rb_obj_not)) {
 return !(((VALUE)(recv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0) ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qtrue);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
static VALUE
vm_opt_regexpmatch1(VALUE recv, VALUE obj)
{
    if (((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MATCH)]&((1 << 8))) == 0), 1)))) {
 return rb_reg_match(recv, obj);
    }
    else {
 return __extension__({ const int rb_funcall_argc = (1); const VALUE rb_funcall_args[] = {obj}; const int rb_funcall_nargs = (int)(sizeof(rb_funcall_args) / sizeof(VALUE)); rb_funcallv(recv, idEqTilde, __builtin_choose_expr(__builtin_constant_p(rb_funcall_argc), (((rb_funcall_argc) == 0 ? (rb_funcall_nargs) <= 1 : (rb_funcall_argc) == (rb_funcall_nargs)) ? (rb_funcall_argc) : rb_varargs_bad_length(rb_funcall_argc, rb_funcall_nargs)), (((rb_funcall_argc) <= (rb_funcall_nargs)) ? (rb_funcall_argc) : (rb_fatal("argc(%d) exceeds actual arguments(%d)", rb_funcall_argc, rb_funcall_nargs), 0))), rb_funcall_nargs ? rb_funcall_args : ((void *)0)); });
    }
}
static VALUE
vm_opt_regexpmatch2(VALUE recv, VALUE obj)
{
    if (rb_class_of((VALUE)(recv)) == rb_cString &&
 ((__builtin_expect(!!((rb_current_vm()->redefined_flag[(BOP_MATCH)]&((1 << 2))) == 0), 1)))) {
 return rb_reg_match(obj, recv);
    }
    else {
 return ((VALUE)RUBY_Qundef);
    }
}
rb_event_flag_t rb_iseq_event_flags(const rb_iseq_t *iseq, size_t pos);
__attribute__ ((__noinline__)) static void vm_trace(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, const VALUE *pc);
static inline void
vm_trace_hook(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, const VALUE *pc,
              rb_event_flag_t pc_events, rb_event_flag_t target_event,
              rb_hook_list_t *global_hooks, rb_hook_list_t *local_hooks, VALUE val)
{
    rb_event_flag_t event = pc_events & target_event;
    VALUE self = (((((reg_cfp)))->self));
    ((void)0);
    if (event & global_hooks->events) {
        reg_cfp->pc++;
        vm_dtrace(event, ec);
        rb_exec_event_hook_orig(ec, global_hooks, event, self, 0, 0, 0 , val, 0);
        reg_cfp->pc--;
    }
    if (local_hooks != ((void *)0)) {
        if (event & local_hooks->events) {
            reg_cfp->pc++;
            rb_exec_event_hook_orig(ec, local_hooks, event, self, 0, 0, 0 , val, 0);
            reg_cfp->pc--;
        }
    }
}
static void
vm_trace(rb_execution_context_t *ec, rb_control_frame_t *reg_cfp, const VALUE *pc)
{
    rb_event_flag_t enabled_flags = ruby_vm_event_flags & (0x0001 | 0x0002 | 0x0004 | 0x0008 | 0x0010| 0x0100| 0x0200| 0x010000| 0x020000);
    if (enabled_flags == 0 && ruby_vm_event_local_num == 0) {
        return;
    }
    else {
 const rb_iseq_t *iseq = reg_cfp->iseq;
 size_t pos = pc - iseq->body->iseq_encoded;
        rb_event_flag_t pc_events = rb_iseq_event_flags(iseq, pos);
        rb_hook_list_t *local_hooks = iseq->aux.exec.local_hooks;
        rb_event_flag_t local_hook_events = local_hooks != ((void *)0) ? local_hooks->events : 0;
        enabled_flags |= local_hook_events;
        ((void)0);
        if ((pc_events & enabled_flags) == 0) {
     return;
        }
        else if (ec->trace_arg != ((void *)0)) {
            return;
        }
        else {
            rb_hook_list_t *global_hooks = rb_vm_global_hooks(ec);
            if (0) {
                fprintf(stderr, "vm_trace>>%4d (%4x) - %s:%d %s\n",
                        (int)pos,
                        (int)pc_events,
                        (!(((struct RBasic*)(rb_iseq_path(iseq)))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rb_iseq_path(iseq)))->as.ary : ((struct RString*)(rb_iseq_path(iseq)))->as.heap.ptr),
                        (int)rb_iseq_line_no(iseq, pos),
                        (!(((struct RBasic*)(rb_iseq_label(iseq)))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rb_iseq_label(iseq)))->as.ary : ((struct RString*)(rb_iseq_label(iseq)))->as.heap.ptr));
            }
            ((void)0);
            ((void)0);
            ((void)0);
            do { if ((pc_events & (0x0002 | 0x0008 | 0x0100)) & enabled_flags) { vm_trace_hook(ec, reg_cfp, pc, pc_events, (0x0002 | 0x0008 | 0x0100), global_hooks, local_hooks, (((VALUE)RUBY_Qundef))); } } while (0);
            do { if ((pc_events & (0x0001)) & enabled_flags) { vm_trace_hook(ec, reg_cfp, pc, pc_events, (0x0001), global_hooks, local_hooks, (((VALUE)RUBY_Qundef))); } } while (0);
            do { if ((pc_events & (0x010000)) & enabled_flags) { vm_trace_hook(ec, reg_cfp, pc, pc_events, (0x010000), global_hooks, local_hooks, (((VALUE)RUBY_Qundef))); } } while (0);
            do { if ((pc_events & (0x020000)) & enabled_flags) { vm_trace_hook(ec, reg_cfp, pc, pc_events, (0x020000), global_hooks, local_hooks, (((VALUE)RUBY_Qundef))); } } while (0);
            do { if ((pc_events & (0x0004 | 0x0010 | 0x0200)) & enabled_flags) { vm_trace_hook(ec, reg_cfp, pc, pc_events, (0x0004 | 0x0010 | 0x0200), global_hooks, local_hooks, ((*(((((reg_cfp)->sp)))-(0)-1)))); } } while (0);
        }
    }
}static inline 
void Init_vm_stack_canary(void) { }
struct local_var_list {
    VALUE tbl;
};
static inline VALUE method_missing(VALUE obj, ID id, int argc, const VALUE *argv, enum method_missing_reason call_status);
static inline VALUE vm_yield_with_cref(rb_execution_context_t *ec, int argc, const VALUE *argv, const rb_cref_t *cref, int is_lambda);
static inline VALUE vm_yield(rb_execution_context_t *ec, int argc, const VALUE *argv);
static inline VALUE vm_yield_with_block(rb_execution_context_t *ec, int argc, const VALUE *argv, VALUE block_handler);
static inline VALUE vm_yield_force_blockarg(rb_execution_context_t *ec, VALUE args);
VALUE rb_vm_exec(rb_execution_context_t *ec, int mjit_enable_p);
static void vm_set_eval_stack(rb_execution_context_t * th, const rb_iseq_t *iseq, const rb_cref_t *cref, const struct rb_block *base_block);
static int vm_collect_local_variables_in_heap(const VALUE *dfp, const struct local_var_list *vars);
static VALUE rb_eUncaughtThrow;
static ID id_result, id_tag, id_value;
typedef enum call_type {
    CALL_PUBLIC,
    CALL_FCALL,
    CALL_VCALL,
    CALL_TYPE_MAX
} call_type;
static VALUE send_internal(int argc, const VALUE *argv, VALUE recv, call_type scope);
static VALUE vm_call0_body(rb_execution_context_t* ec, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc, const VALUE *argv);
static inline void
stack_check(rb_execution_context_t *ec)
{
    if (!(((ec)->raised_flag & (RAISED_STACKOVERFLOW)) != 0) &&
 rb_ec_stack_check(ec)) {
 ((ec)->raised_flag |= (RAISED_STACKOVERFLOW));
 rb_ec_stack_overflow(ec, 0);
    }
}
static void
raise_method_missing(rb_execution_context_t *ec, int argc, const VALUE *argv, VALUE obj,
       enum method_missing_reason last_call_status)
{
    VALUE exc = rb_eNoMethodError;
    VALUE format = 0;
    if ((__builtin_expect(!!(argc == 0), 0))) {
 rb_raise(rb_eArgError, "no method name given");
    }
    else if ((__builtin_expect(!!(!((((VALUE)(argv[0])&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))), 0))) {
 const VALUE e = rb_eArgError;
 rb_raise(e, "method name must be a Symbol but %""l""i" "\v"" is given",
   rb_obj_class(argv[0]));
    }
    stack_check(ec);
    if (last_call_status & MISSING_PRIVATE) {
 format = rb_fstring_new(("private method `%s' called for %s%s%s"), (sizeof("private method `%s' called for %s%s%s" "") - 1));
    }
    else if (last_call_status & MISSING_PROTECTED) {
 format = rb_fstring_new(("protected method `%s' called for %s%s%s"), (sizeof("protected method `%s' called for %s%s%s" "") - 1));
    }
    else if (last_call_status & MISSING_VCALL) {
 format = rb_fstring_new(("undefined local variable or method `%s' for %s%s%s"), (sizeof("undefined local variable or method `%s' for %s%s%s" "") - 1));
 exc = rb_eNameError;
    }
    else if (last_call_status & MISSING_SUPER) {
 format = rb_fstring_new(("super: no superclass method `%s' for %s%s%s"), (sizeof("super: no superclass method `%s' for %s%s%s" "") - 1));
    }
    {
 exc = rb_make_no_method_exception(exc, format, obj, argc, argv,
       last_call_status & (MISSING_FCALL|MISSING_VCALL));
 if (!(last_call_status & MISSING_MISSING)) {
     rb_vm_pop_cfunc_frame();
 }
 rb_exc_raise(exc);
    }
}
static void
vm_raise_method_missing(rb_execution_context_t *ec, int argc, const VALUE *argv,
   VALUE obj, int call_status)
{
    vm_passed_block_handler_set(ec, 0);
    raise_method_missing(ec, argc, argv, obj, call_status | MISSING_MISSING);
}
static inline VALUE
method_missing(VALUE obj, ID id, int argc, const VALUE *argv, enum method_missing_reason call_status)
{
    VALUE *nargv, result, work, klass;
    rb_execution_context_t *ec = rb_current_execution_context();
    VALUE block_handler = vm_passed_block_handler(ec);
    const rb_callable_method_entry_t *me;
    ec->method_missing_reason = call_status;
    if (id == idMethodMissing) {
      missing:
 raise_method_missing(ec, argc, argv, obj, call_status | MISSING_MISSING);
    }
    nargv = ((VALUE*)(((size_t)(argc + 1) < 1024 / sizeof(VALUE)) ? ((work) = 0, __builtin_alloca ((size_t)(argc + 1) * sizeof(VALUE))) : rb_alloc_tmp_buffer2(&(work), (long)(argc + 1), sizeof(VALUE))));
    nargv[0] = (rb_id2sym(id));
    memcpy((nargv + 1), (argv), sizeof(VALUE)*(size_t)(argc));
    ++argc;
    argv = nargv;
    klass = rb_class_of((VALUE)(obj));
    if (!klass) goto missing;
    me = rb_callable_method_entry(klass, idMethodMissing);
    if (!me || (int) (((me)->flags & (((VALUE)RUBY_FL_USER6) )) >> ((((VALUE)RUBY_FL_USHIFT) + 4)+2))) goto missing;
    vm_passed_block_handler_set(ec, block_handler);
    result = rb_vm_call0(ec, obj, idMethodMissing, argc, argv, me);
    if (work) rb_free_tmp_buffer(&(work));
    return result;
}
static rb_control_frame_t *
vm_get_ruby_level_caller_cfp(const rb_execution_context_t *ec, const rb_control_frame_t *cfp)
{
    if (VM_FRAME_RUBYFRAME_P(cfp)) {
 return (rb_control_frame_t *)cfp;
    }
    cfp = ((cfp)+1);
    while (!RUBY_VM_CONTROL_FRAME_STACK_OVERFLOW_P(ec, cfp)) {
 if (VM_FRAME_RUBYFRAME_P(cfp)) {
     return (rb_control_frame_t *)cfp;
 }
 if (VM_ENV_FLAGS(cfp->ep, VM_FRAME_FLAG_PASSED) == 0) {
     break;
 }
 cfp = ((cfp)+1);
    }
    return 0;
}
static void
rb_vm_pop_cfunc_frame(void)
{
    rb_execution_context_t *ec = rb_current_execution_context();
    rb_control_frame_t *cfp = ec->cfp;
    const rb_callable_method_entry_t *me = rb_vm_frame_method_entry(cfp);
    do { const rb_event_flag_t flag_arg_ = (0x0040); rb_hook_list_t *hooks_arg_ = (rb_vm_global_hooks(ec)); if ((__builtin_expect(!!((hooks_arg_)->events & (flag_arg_)), 0))) { rb_exec_event_hook_orig(ec, hooks_arg_, flag_arg_, cfp->self, me->def->original_id, me->called_id, me->owner, ((VALUE)RUBY_Qnil), 0); } } while (0);
    do { if ((__builtin_expect(!!(0), 0))) { struct ruby_dtrace_method_hook_args args; if (rb_dtrace_setup(ec, me->owner, me->def->original_id, &args)) { do {} while (0); } } } while (0);
    vm_pop_frame(ec, cfp, cfp->ep);
}
static VALUE
vm_call_iseq_setup_normal_0start_0params_0locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 0, 0);
}
static VALUE
vm_call_iseq_setup_normal_0start_0params_1locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 0, 1);
}
static VALUE
vm_call_iseq_setup_normal_0start_0params_2locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 0, 2);
}
static VALUE
vm_call_iseq_setup_normal_0start_0params_3locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 0, 3);
}
static VALUE
vm_call_iseq_setup_normal_0start_0params_4locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 0, 4);
}
static VALUE
vm_call_iseq_setup_normal_0start_0params_5locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 0, 5);
}
static VALUE
vm_call_iseq_setup_normal_0start_1params_0locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 1, 0);
}
static VALUE
vm_call_iseq_setup_normal_0start_1params_1locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 1, 1);
}
static VALUE
vm_call_iseq_setup_normal_0start_1params_2locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 1, 2);
}
static VALUE
vm_call_iseq_setup_normal_0start_1params_3locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 1, 3);
}
static VALUE
vm_call_iseq_setup_normal_0start_1params_4locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 1, 4);
}
static VALUE
vm_call_iseq_setup_normal_0start_1params_5locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 1, 5);
}
static VALUE
vm_call_iseq_setup_normal_0start_2params_0locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 2, 0);
}
static VALUE
vm_call_iseq_setup_normal_0start_2params_1locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 2, 1);
}
static VALUE
vm_call_iseq_setup_normal_0start_2params_2locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 2, 2);
}
static VALUE
vm_call_iseq_setup_normal_0start_2params_3locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 2, 3);
}
static VALUE
vm_call_iseq_setup_normal_0start_2params_4locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 2, 4);
}
static VALUE
vm_call_iseq_setup_normal_0start_2params_5locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 2, 5);
}
static VALUE
vm_call_iseq_setup_normal_0start_3params_0locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 3, 0);
}
static VALUE
vm_call_iseq_setup_normal_0start_3params_1locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 3, 1);
}
static VALUE
vm_call_iseq_setup_normal_0start_3params_2locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 3, 2);
}
static VALUE
vm_call_iseq_setup_normal_0start_3params_3locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 3, 3);
}
static VALUE
vm_call_iseq_setup_normal_0start_3params_4locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 3, 4);
}
static VALUE
vm_call_iseq_setup_normal_0start_3params_5locals(rb_execution_context_t *ec, rb_control_frame_t *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc)
{
    return vm_call_iseq_setup_normal(ec, cfp, calling, cc->me, 0, 3, 5);
}
static const vm_call_handler vm_call_iseq_handlers[][6] = {
{vm_call_iseq_setup_normal_0start_0params_0locals,
 vm_call_iseq_setup_normal_0start_0params_1locals,
 vm_call_iseq_setup_normal_0start_0params_2locals,
 vm_call_iseq_setup_normal_0start_0params_3locals,
 vm_call_iseq_setup_normal_0start_0params_4locals,
 vm_call_iseq_setup_normal_0start_0params_5locals},
{vm_call_iseq_setup_normal_0start_1params_0locals,
 vm_call_iseq_setup_normal_0start_1params_1locals,
 vm_call_iseq_setup_normal_0start_1params_2locals,
 vm_call_iseq_setup_normal_0start_1params_3locals,
 vm_call_iseq_setup_normal_0start_1params_4locals,
 vm_call_iseq_setup_normal_0start_1params_5locals},
{vm_call_iseq_setup_normal_0start_2params_0locals,
 vm_call_iseq_setup_normal_0start_2params_1locals,
 vm_call_iseq_setup_normal_0start_2params_2locals,
 vm_call_iseq_setup_normal_0start_2params_3locals,
 vm_call_iseq_setup_normal_0start_2params_4locals,
 vm_call_iseq_setup_normal_0start_2params_5locals},
{vm_call_iseq_setup_normal_0start_3params_0locals,
 vm_call_iseq_setup_normal_0start_3params_1locals,
 vm_call_iseq_setup_normal_0start_3params_2locals,
 vm_call_iseq_setup_normal_0start_3params_3locals,
 vm_call_iseq_setup_normal_0start_3params_4locals,
 vm_call_iseq_setup_normal_0start_3params_5locals}
};
static inline vm_call_handler
vm_call_iseq_setup_func(const struct rb_call_info *ci, const int param_size, const int local_size)
{
    if ((__builtin_expect(!!(ci->flag & (0x01 << VM_CALL_TAILCALL_bit)), 0))) {
 return &vm_call_iseq_setup_tailcall_0start;
    }
    else if (0) {
        return &vm_call_iseq_setup_normal_0start;
    }
    else {
 if (param_size <= 3 &&
     local_size <= 5) {
     ((void)0);
     return vm_call_iseq_handlers[param_size][local_size];
 }
 return &vm_call_iseq_setup_normal_0start;
    }
}
#define MJIT_HEADER 1
#define _FORTIFY_SOURCE 2
#define RUBY_EXPORT 1
#define CANONICALIZATION_FOR_MATHN 1
#define _STDC_PREDEF_H 1
#define __STDC_IEC_559__ 1
#define __STDC_IEC_60559_BFP__ 201404L
#define __STDC_IEC_559_COMPLEX__ 1
#define __STDC_IEC_60559_COMPLEX__ 201404L
#define __STDC_ISO_10646__ 201706L
#define RUBY_INTERNAL_H 1
#define RUBY_H 1
#define HAVE_RUBY_DEFINES_H 1
#define HAVE_RUBY_ENCODING_H 1
#define HAVE_RUBY_INTERN_H 1
#define HAVE_RUBY_IO_H 1
#define HAVE_RUBY_MISSING_H 1
#define HAVE_RUBY_ONIGURUMA_H 1
#define HAVE_RUBY_RE_H 1
#define HAVE_RUBY_REGEX_H 1
#define HAVE_RUBY_RUBY_H 1
#define HAVE_RUBY_ST_H 1
#define HAVE_RUBY_THREAD_H 1
#define HAVE_RUBY_UTIL_H 1
#define HAVE_RUBY_VERSION_H 1
#define HAVE_RUBY_VM_H 1
#define RUBY_RUBY_H 1
#define INCLUDE_RUBY_CONFIG_H 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define __EXTENSIONS__ 1
#define _ALL_SOURCE 1
#define _GNU_SOURCE 1
#define _POSIX_PTHREAD_SEMANTICS 1
#define _TANDEM_SOURCE 1
#define RUBY_SYMBOL_EXPORT_BEGIN _Pragma("GCC visibility push(default)")
#define RUBY_SYMBOL_EXPORT_END _Pragma("GCC visibility pop")
#define HAVE_STMT_AND_DECL_IN_EXPR 1
#define HAVE_LIBCRYPT 1
#define HAVE_LIBDL 1
#define HAVE_DIRENT_H 1
#define HAVE__BOOL 1
#define HAVE_STDBOOL_H 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_A_OUT_H 1
#define HAVE_GRP_H 1
#define HAVE_FCNTL_H 1
#define HAVE_FLOAT_H 1
#define HAVE_LANGINFO_H 1
#define HAVE_LIMITS_H 1
#define HAVE_LOCALE_H 1
#define HAVE_MALLOC_H 1
#define HAVE_PWD_H 1
#define HAVE_SANITIZER_ASAN_INTERFACE_H 1
#define HAVE_STDALIGN_H 1
#define HAVE_SYS_EVENTFD_H 1
#define HAVE_SYS_FCNTL_H 1
#define HAVE_SYS_FILE_H 1
#define HAVE_SYS_IOCTL_H 1
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_PRCTL_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SENDFILE_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_SYSCALL_H 1
#define HAVE_SYS_SYSMACROS_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TIMES_H 1
#define HAVE_SYS_UIO_H 1
#define HAVE_SYSCALL_H 1
#define HAVE_TIME_H 1
#define HAVE_UCONTEXT_H 1
#define HAVE_UTIME_H 1
#define HAVE_GMP_H 1
#define HAVE_LIBGMP 1
#define HAVE_TYPEOF 1
#define HAVE_LONG_LONG 1
#define HAVE_OFF_T 1
#define SIZEOF_INT 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONG 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF___INT64 0
#define SIZEOF___INT128 16
#define SIZEOF_OFF_T 8
#define SIZEOF_VOIDP 8
#define SIZEOF_FLOAT 4
#define SIZEOF_DOUBLE 8
#define SIZEOF_TIME_T 8
#define SIZEOF_CLOCK_T 8
#define PACKED_STRUCT(x) x __attribute__((packed))
#define USE_UNALIGNED_MEMBER_ACCESS 1
#define PRI_LL_PREFIX "ll"
#define HAVE_PID_T 1
#define rb_pid_t pid_t
#define SIGNEDNESS_OF_PID_T -1
#define PIDT2NUM(v) INT2NUM(v)
#define NUM2PIDT(v) NUM2INT(v)
#define PRI_PIDT_PREFIX PRI_INT_PREFIX
#define HAVE_UID_T 1
#define rb_uid_t uid_t
#define SIGNEDNESS_OF_UID_T +1
#define UIDT2NUM(v) UINT2NUM(v)
#define NUM2UIDT(v) NUM2UINT(v)
#define PRI_UIDT_PREFIX PRI_INT_PREFIX
#define HAVE_GID_T 1
#define rb_gid_t gid_t
#define SIGNEDNESS_OF_GID_T +1
#define GIDT2NUM(v) UINT2NUM(v)
#define NUM2GIDT(v) NUM2UINT(v)
#define PRI_GIDT_PREFIX PRI_INT_PREFIX
#define HAVE_TIME_T 1
#define rb_time_t time_t
#define SIGNEDNESS_OF_TIME_T -1
#define TIMET2NUM(v) LONG2NUM(v)
#define NUM2TIMET(v) NUM2LONG(v)
#define PRI_TIMET_PREFIX PRI_LONG_PREFIX
#define HAVE_DEV_T 1
#define rb_dev_t dev_t
#define SIGNEDNESS_OF_DEV_T +1
#define DEVT2NUM(v) ULONG2NUM(v)
#define NUM2DEVT(v) NUM2ULONG(v)
#define PRI_DEVT_PREFIX PRI_LONG_PREFIX
#define HAVE_MODE_T 1
#define rb_mode_t mode_t
#define SIGNEDNESS_OF_MODE_T +1
#define MODET2NUM(v) UINT2NUM(v)
#define NUM2MODET(v) NUM2UINT(v)
#define PRI_MODET_PREFIX PRI_INT_PREFIX
#define HAVE_RLIM_T 1
#define rb_rlim_t rlim_t
#define SIGNEDNESS_OF_RLIM_T +1
#define RLIM2NUM(v) ULONG2NUM(v)
#define NUM2RLIM(v) NUM2ULONG(v)
#define PRI_RLIM_PREFIX PRI_LONG_PREFIX
#define HAVE_OFF_T 1
#define rb_off_t off_t
#define SIGNEDNESS_OF_OFF_T -1
#define OFFT2NUM(v) LONG2NUM(v)
#define NUM2OFFT(v) NUM2LONG(v)
#define PRI_OFFT_PREFIX PRI_LONG_PREFIX
#define HAVE_CLOCKID_T 1
#define rb_clockid_t clockid_t
#define SIGNEDNESS_OF_CLOCKID_T -1
#define CLOCKID2NUM(v) INT2NUM(v)
#define NUM2CLOCKID(v) NUM2INT(v)
#define PRI_CLOCKID_PREFIX PRI_INT_PREFIX
#define HAVE_PROTOTYPES 1
#define TOKEN_PASTE(x,y) x ##y
#define STRINGIZE(expr) STRINGIZE0(expr)
#define HAVE_STDARG_PROTOTYPES 1
#define HAVE_VA_ARGS_MACRO 1
#define RUBY_ALIGNAS(x) __attribute__((__aligned__(x)))
#define RUBY_ALIGNOF alignof
#define CONSTFUNC(x) __attribute__ ((__const__)) x
#define PUREFUNC(x) __attribute__ ((__pure__)) x
#define NORETURN(x) __attribute__ ((__noreturn__)) x
#define DEPRECATED(x) __attribute__ ((__deprecated__)) x
#define DEPRECATED_BY(n,x) __attribute__ ((__deprecated__("by "#n))) x
#define DEPRECATED_TYPE(mesg,x) __attribute__ ((__deprecated__ mesg)) x
#define NOINLINE(x) __attribute__ ((__noinline__)) x
#define NO_SANITIZE(san,x) __attribute__ ((__no_sanitize__(san))) x
#define NO_SANITIZE_ADDRESS(x) __attribute__ ((__no_sanitize_address__)) x
#define NO_ADDRESS_SAFETY_ANALYSIS(x) __attribute__ ((__no_address_safety_analysis__)) x
#define WARN_UNUSED_RESULT(x) __attribute__ ((__warn_unused_result__)) x
#define MAYBE_UNUSED(x) __attribute__ ((__unused__)) x
#define ERRORFUNC(mesg,x) __attribute__ ((__error__ mesg)) x
#define WARNINGFUNC(mesg,x) __attribute__ ((__warning__ mesg)) x
#define WEAK(x) __attribute__ ((__weak__)) x
#define HAVE_FUNC_WEAK 1
#define FUNC_UNOPTIMIZED(x) __attribute__ ((__optimize__("O0"))) x
#define FUNC_MINIMIZED(x) __attribute__ ((__optimize__("-Os","-fomit-frame-pointer"))) x
#define HAVE_ATTRIBUTE_FUNCTION_ALIAS 1
#define RUBY_ALIAS_FUNCTION_TYPE(type,prot,name,args) type prot __attribute__((alias(#name)));
#define RUBY_ALIAS_FUNCTION_VOID(prot,name,args) RUBY_ALIAS_FUNCTION_TYPE(void, prot, name, args)
#define HAVE_GCC_ATOMIC_BUILTINS 1
#define HAVE_GCC_SYNC_BUILTINS 1
#define UNREACHABLE __builtin_unreachable()
#define RUBY_FUNC_EXPORTED __attribute__ ((__visibility__("default"))) extern
#define RUBY_FUNCTION_NAME_STRING __func__
#define ENUM_OVER_INT 1
#define HAVE_DECL_SYS_NERR 0
#define HAVE_DECL_GETENV 1
#define SIZEOF_SIZE_T 8
#define SIZEOF_PTRDIFF_T 8
#define PRI_SIZE_PREFIX "z"
#define PRI_PTRDIFF_PREFIX "t"
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1
#define HAVE_ST_BLKSIZE 1
#define HAVE_STRUCT_STAT_ST_BLOCKS 1
#define HAVE_ST_BLOCKS 1
#define HAVE_STRUCT_STAT_ST_RDEV 1
#define HAVE_ST_RDEV 1
#define SIZEOF_STRUCT_STAT_ST_SIZE SIZEOF_OFF_T
#define SIZEOF_STRUCT_STAT_ST_BLOCKS SIZEOF_OFF_T
#define SIZEOF_STRUCT_STAT_ST_INO SIZEOF_LONG
#define HAVE_STRUCT_STAT_ST_ATIM 1
#define HAVE_STRUCT_STAT_ST_MTIM 1
#define HAVE_STRUCT_STAT_ST_CTIM 1
#define HAVE_STRUCT_TIMEVAL 1
#define SIZEOF_STRUCT_TIMEVAL_TV_SEC SIZEOF_TIME_T
#define HAVE_STRUCT_TIMESPEC 1
#define HAVE_STRUCT_TIMEZONE 1
#define HAVE_RB_FD_INIT 1
#define HAVE_INT8_T 1
#define SIZEOF_INT8_T 1
#define HAVE_UINT8_T 1
#define SIZEOF_UINT8_T 1
#define HAVE_INT16_T 1
#define SIZEOF_INT16_T 2
#define HAVE_UINT16_T 1
#define SIZEOF_UINT16_T 2
#define HAVE_INT32_T 1
#define SIZEOF_INT32_T 4
#define HAVE_UINT32_T 1
#define SIZEOF_UINT32_T 4
#define HAVE_INT64_T 1
#define SIZEOF_INT64_T 8
#define HAVE_UINT64_T 1
#define SIZEOF_UINT64_T 8
#define HAVE_INT128_T 1
#define int128_t __int128
#define SIZEOF_INT128_T SIZEOF___INT128
#define HAVE_UINT128_T 1
#define uint128_t unsigned __int128
#define SIZEOF_UINT128_T SIZEOF___INT128
#define HAVE_INTPTR_T 1
#define SIZEOF_INTPTR_T 8
#define HAVE_UINTPTR_T 1
#define SIZEOF_UINTPTR_T 8
#define HAVE_SSIZE_T 1
#define SIZEOF_SSIZE_T 8
#define STACK_END_ADDRESS __libc_stack_end
#define GETGROUPS_T gid_t
#define RETSIGTYPE void
#define HAVE_ALLOCA_H 1
#define HAVE_ALLOCA 1
#define HAVE_ACOSH 1
#define HAVE_CBRT 1
#define HAVE_CRYPT 1
#define HAVE_DUP2 1
#define HAVE_ERF 1
#define HAVE_EXPLICIT_BZERO 1
#define HAVE_FFS 1
#define HAVE_FINITE 1
#define HAVE_FLOCK 1
#define HAVE_HYPOT 1
#define HAVE_ISINF 1
#define HAVE_ISNAN 1
#define HAVE_LGAMMA_R 1
#define HAVE_MEMMOVE 1
#define HAVE_NAN 1
#define HAVE_NEXTAFTER 1
#define HAVE_STRCHR 1
#define HAVE_STRERROR 1
#define HAVE_STRSTR 1
#define HAVE_TGAMMA 1
#define SPT_TYPE SPT_REUSEARGV
#define HAVE_SIGNBIT 1
#define HAVE_FORK 1
#define HAVE_VFORK 1
#define HAVE_WORKING_VFORK 1
#define HAVE_WORKING_FORK 1
#define HAVE__LONGJMP 1
#define HAVE_ATAN2L 1
#define HAVE_ATAN2F 1
#define HAVE_CHROOT 1
#define HAVE_CLOCK_GETTIME 1
#define HAVE_COSH 1
#define HAVE_CRYPT_R 1
#define HAVE_DIRFD 1
#define HAVE_DL_ITERATE_PHDR 1
#define HAVE_DLOPEN 1
#define HAVE_DLADDR 1
#define HAVE_DUP 1
#define HAVE_DUP3 1
#define HAVE_EACCESS 1
#define HAVE_ENDGRENT 1
#define HAVE_EVENTFD 1
#define HAVE_FCHMOD 1
#define HAVE_FCHOWN 1
#define HAVE_FCNTL 1
#define HAVE_FDATASYNC 1
#define HAVE_FDOPENDIR 1
#define HAVE_FMOD 1
#define HAVE_FSTATAT 1
#define HAVE_FSYNC 1
#define HAVE_FTRUNCATE 1
#define HAVE_FTRUNCATE64 1
#define HAVE_GETCWD 1
#define HAVE_GETGRNAM 1
#define HAVE_GETGRNAM_R 1
#define HAVE_GETGROUPS 1
#define HAVE_GETPGID 1
#define HAVE_GETPGRP 1
#define HAVE_GETPRIORITY 1
#define HAVE_GETPWNAM_R 1
#define HAVE_GETRESGID 1
#define HAVE_GETRESUID 1
#define HAVE_GETRLIMIT 1
#define HAVE_GETSID 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_GMTIME_R 1
#define HAVE_GRANTPT 1
#define HAVE_INITGROUPS 1
#define HAVE_IOCTL 1
#define HAVE_KILLPG 1
#define HAVE_LCHMOD 1
#define HAVE_LCHOWN 1
#define HAVE_LINK 1
#define HAVE_LLABS 1
#define HAVE_LOCKF 1
#define HAVE_LOG2 1
#define HAVE_LSTAT 1
#define HAVE_LUTIMES 1
#define HAVE_MALLOC_USABLE_SIZE 1
#define HAVE_MBLEN 1
#define HAVE_MEMALIGN 1
#define HAVE_WRITEV 1
#define HAVE_MEMRCHR 1
#define HAVE_MEMMEM 1
#define HAVE_MKFIFO 1
#define HAVE_MKNOD 1
#define HAVE_MKTIME 1
#define HAVE_OPENAT 1
#define HAVE_PIPE2 1
#define HAVE_POLL 1
#define HAVE_POSIX_FADVISE 1
#define HAVE_POSIX_MEMALIGN 1
#define HAVE_PPOLL 1
#define HAVE_PREAD 1
#define HAVE_PWRITE 1
#define HAVE_QSORT_R 1
#define HAVE_READLINK 1
#define HAVE_ROUND 1
#define HAVE_SCHED_GETAFFINITY 1
#define HAVE_SEEKDIR 1
#define HAVE_SENDFILE 1
#define HAVE_SETEGID 1
#define HAVE_SETENV 1
#define HAVE_SETEUID 1
#define HAVE_SETGID 1
#define HAVE_SETGROUPS 1
#define HAVE_SETPGID 1
#define HAVE_SETPGRP 1
#define HAVE_SETREGID 1
#define HAVE_SETRESGID 1
#define HAVE_SETRESUID 1
#define HAVE_SETREUID 1
#define HAVE_SETRLIMIT 1
#define HAVE_SETSID 1
#define HAVE_SETUID 1
#define HAVE_SHUTDOWN 1
#define HAVE_SIGACTION 1
#define HAVE_SIGALTSTACK 1
#define HAVE_SIGPROCMASK 1
#define HAVE_SINH 1
#define HAVE_SYMLINK 1
#define HAVE_SYSCALL 1
#define HAVE_SYSCONF 1
#define HAVE_TANH 1
#define HAVE_TELLDIR 1
#define HAVE_TIMEGM 1
#define HAVE_TIMES 1
#define HAVE_TRUNCATE 1
#define HAVE_TRUNCATE64 1
#define HAVE_UNSETENV 1
#define HAVE_UTIMENSAT 1
#define HAVE_UTIMES 1
#define HAVE_WAIT4 1
#define HAVE_WAITPID 1
#define HAVE_CRYPT_H 1
#define HAVE_STRUCT_CRYPT_DATA_INITIALIZED 1
#define HAVE_BUILTIN___BUILTIN_ALLOCA_WITH_ALIGN 1
#define HAVE_BUILTIN___BUILTIN_ASSUME_ALIGNED 1
#define HAVE_BUILTIN___BUILTIN_BSWAP16 1
#define HAVE_BUILTIN___BUILTIN_BSWAP32 1
#define HAVE_BUILTIN___BUILTIN_BSWAP64 1
#define HAVE_BUILTIN___BUILTIN_POPCOUNT 1
#define HAVE_BUILTIN___BUILTIN_POPCOUNTLL 1
#define HAVE_BUILTIN___BUILTIN_CLZ 1
#define HAVE_BUILTIN___BUILTIN_CLZL 1
#define HAVE_BUILTIN___BUILTIN_CLZLL 1
#define HAVE_BUILTIN___BUILTIN_CTZ 1
#define HAVE_BUILTIN___BUILTIN_CTZLL 1
#define HAVE_BUILTIN___BUILTIN_ADD_OVERFLOW 1
#define HAVE_BUILTIN___BUILTIN_SUB_OVERFLOW 1
#define HAVE_BUILTIN___BUILTIN_MUL_OVERFLOW 1
#define HAVE_BUILTIN___BUILTIN_MUL_OVERFLOW_P 1
#define HAVE_BUILTIN___BUILTIN_CONSTANT_P 1
#define HAVE_BUILTIN___BUILTIN_CHOOSE_EXPR 1
#define HAVE_BUILTIN___BUILTIN_CHOOSE_EXPR_CONSTANT_P 1
#define HAVE_BUILTIN___BUILTIN_TYPES_COMPATIBLE_P 1
#define HAVE_BUILTIN___BUILTIN_TRAP 1
#define HAVE_GNU_QSORT_R 1
#define ATAN2_INF_C99 1
#define HAVE_CLOCK_GETRES 1
#define HAVE_LIBRT 1
#define HAVE_LIBRT 1
#define HAVE_TIMER_CREATE 1
#define HAVE_TIMER_SETTIME 1
#define HAVE_STRUCT_TM_TM_ZONE 1
#define HAVE_TM_ZONE 1
#define HAVE_STRUCT_TM_TM_GMTOFF 1
#define HAVE_DAYLIGHT 1
#define NEGATIVE_TIME_T 1
#define POSIX_SIGNAL 1
#define HAVE_SIG_T 1
#define RSHIFT(x,y) ((x)>>(int)(y))
#define HAVE__SC_CLK_TCK 1
#define STACK_GROW_DIRECTION -1
#define FIBER_USE_COROUTINE "coroutine/amd64/Context.h"
#define _REENTRANT 1
#define _THREAD_SAFE 1
#define HAVE_LIBPTHREAD 1
#define HAVE_SCHED_YIELD 1
#define HAVE_PTHREAD_ATTR_SETINHERITSCHED 1
#define HAVE_PTHREAD_ATTR_GETSTACK 1
#define HAVE_PTHREAD_ATTR_GETGUARDSIZE 1
#define HAVE_PTHREAD_CONDATTR_SETCLOCK 1
#define HAVE_PTHREAD_SIGMASK 1
#define HAVE_PTHREAD_SETNAME_NP 1
#define HAVE_PTHREAD_GETATTR_NP 1
#define SET_CURRENT_THREAD_NAME(name) pthread_setname_np(pthread_self(), name)
#define SET_ANOTHER_THREAD_NAME(thid,name) pthread_setname_np(thid, name)
#define DEFINE_MCONTEXT_PTR(mc,uc) mcontext_t *mc = &(uc)->uc_mcontext
#define HAVE_GETCONTEXT 1
#define HAVE_SETCONTEXT 1
#define USE_ELF 1
#define HAVE_ELF_H 1
#define HAVE_LIBZ 1
#define HAVE_BACKTRACE 1
#define DLEXT_MAXLEN 3
#define DLEXT ".so"
#define LIBDIR_BASENAME "lib"
#define HAVE__SETJMP 1
#define RUBY_SETJMP(env) __builtin_setjmp((env))
#define RUBY_LONGJMP(env,val) __builtin_longjmp((env),val)
#define RUBY_JMP_BUF jmp_buf
#define USE_MJIT 1
#define HAVE_PTHREAD_H 1
#define RUBY_PLATFORM "x86_64-linux"
#define RUBY_DEFINES_H 1
#define HAVE_ATTRIBUTE_ERRORFUNC 1
#define HAVE_ATTRIBUTE_WARNINGFUNC 1
#define GCC_VERSION_SINCE(major,minor,patchlevel) ((__GNUC__ > (major)) || ((__GNUC__ == (major) && ((__GNUC_MINOR__ > (minor)) || (__GNUC_MINOR__ == (minor) && __GNUC_PATCHLEVEL__ >= (patchlevel))))))
#define GCC_VERSION_BEFORE(major,minor,patchlevel) ((__GNUC__ < (major)) || ((__GNUC__ == (major) && ((__GNUC_MINOR__ < (minor)) || (__GNUC_MINOR__ == (minor) && __GNUC_PATCHLEVEL__ <= (patchlevel))))))
#define RB_LIKELY(x) (__builtin_expect(!!(x), 1))
#define RB_UNLIKELY(x) (__builtin_expect(!!(x), 0))
#define COLDFUNC __attribute__((cold))
#define PRINTF_ARGS(decl,string_index,first_to_check) decl __attribute__((format(printf, string_index, first_to_check)))
#define RB_GNUC_EXTENSION __extension__
#define RB_GNUC_EXTENSION_BLOCK(x) __extension__ ({ x; })
#define _STDIO_H 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#define _FEATURES_H 1
#undef __USE_ISOC11
#undef __USE_ISOC99
#undef __USE_ISOC95
#undef __USE_ISOCXX11
#undef __USE_POSIX
#undef __USE_POSIX2
#undef __USE_POSIX199309
#undef __USE_POSIX199506
#undef __USE_XOPEN
#undef __USE_XOPEN_EXTENDED
#undef __USE_UNIX98
#undef __USE_XOPEN2K
#undef __USE_XOPEN2KXSI
#undef __USE_XOPEN2K8
#undef __USE_XOPEN2K8XSI
#undef __USE_LARGEFILE
#undef __USE_LARGEFILE64
#undef __USE_FILE_OFFSET64
#undef __USE_MISC
#undef __USE_ATFILE
#undef __USE_DYNAMIC_STACK_SIZE
#undef __USE_GNU
#undef __USE_FORTIFY_LEVEL
#undef __KERNEL_STRICT_NAMES
#undef __GLIBC_USE_ISOC2X
#undef __GLIBC_USE_DEPRECATED_GETS
#undef __GLIBC_USE_DEPRECATED_SCANF
#define __KERNEL_STRICT_NAMES 
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define __glibc_clang_prereq(maj,min) 0
#define __GLIBC_USE(F) __GLIBC_USE_ ## F
#undef _ISOC95_SOURCE
#define _ISOC95_SOURCE 1
#undef _ISOC99_SOURCE
#define _ISOC99_SOURCE 1
#undef _ISOC11_SOURCE
#define _ISOC11_SOURCE 1
#undef _ISOC2X_SOURCE
#define _ISOC2X_SOURCE 1
#undef _POSIX_SOURCE
#define _POSIX_SOURCE 1
#undef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200809L
#undef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#undef _XOPEN_SOURCE_EXTENDED
#define _XOPEN_SOURCE_EXTENDED 1
#undef _LARGEFILE64_SOURCE
#define _LARGEFILE64_SOURCE 1
#undef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE 1
#undef _ATFILE_SOURCE
#define _ATFILE_SOURCE 1
#undef _DYNAMIC_STACK_SIZE_SOURCE
#define _DYNAMIC_STACK_SIZE_SOURCE 1
#undef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE 1
#define __GLIBC_USE_ISOC2X 1
#define __USE_ISOC11 1
#define __USE_ISOC99 1
#define __USE_ISOC95 1
#undef _POSIX_SOURCE
#define _POSIX_SOURCE 1
#undef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200809L
#define __USE_POSIX 1
#define __USE_POSIX2 1
#define __USE_POSIX199309 1
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#undef __USE_ISOC95
#define __USE_ISOC95 1
#undef __USE_ISOC99
#define __USE_ISOC99 1
#define __USE_XOPEN2K8 1
#undef _ATFILE_SOURCE
#define _ATFILE_SOURCE 1
#define __USE_XOPEN 1
#define __USE_XOPEN_EXTENDED 1
#define __USE_UNIX98 1
#undef _LARGEFILE_SOURCE
#define _LARGEFILE_SOURCE 1
#define __USE_XOPEN2K8 1
#define __USE_XOPEN2K8XSI 1
#define __USE_XOPEN2K 1
#define __USE_XOPEN2KXSI 1
#undef __USE_ISOC95
#define __USE_ISOC95 1
#undef __USE_ISOC99
#define __USE_ISOC99 1
#define __USE_LARGEFILE 1
#define __USE_LARGEFILE64 1
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define __TIMESIZE __WORDSIZE
#define __USE_MISC 1
#define __USE_ATFILE 1
#define __USE_DYNAMIC_STACK_SIZE 1
#define __USE_GNU 1
#define __USE_FORTIFY_LEVEL 2
#define __GLIBC_USE_DEPRECATED_GETS 0
#define __GLIBC_USE_DEPRECATED_SCANF 0
#undef __GNU_LIBRARY__
#define __GNU_LIBRARY__ 6
#define __GLIBC__ 2
#define __GLIBC_MINOR__ 35
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_CDEFS_H 1
#undef __P
#undef __PMT
#define __glibc_has_attribute(attr) __has_attribute (attr)
#define __glibc_has_builtin(name) __has_builtin (name)
#define __glibc_has_extension(ext) 0
#define __LEAF , __leaf__
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define __THROWNL __attribute__ ((__nothrow__))
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
#define __P(args) args
#define __PMT(args) args
#define __CONCAT(x,y) x ## y
#define __STRING(x) #x
#define __ptr_t void *
#define __BEGIN_DECLS 
#define __END_DECLS 
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __glibc_objsize0(__o) __bos0 (__o)
#define __glibc_objsize(__o) __bos (__o)
#define __glibc_safe_len_cond(__l,__s,__osz) ((__l) <= (__osz) / (__s))
#define __glibc_unsigned_or_positive(__l) ((__typeof (__l)) 0 < (__typeof (__l)) -1 || (__builtin_constant_p (__l) && (__l) > 0))
#define __glibc_safe_or_unknown_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && __glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define __glibc_unsafe_len(__l,__s,__osz) (__glibc_unsigned_or_positive (__l) && __builtin_constant_p (__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz)) && !__glibc_safe_len_cond ((__SIZE_TYPE__) (__l), __s, __osz))
#define __glibc_fortify(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, __osz) : __ ## f ## _chk (__VA_ARGS__, __osz)))
#define __glibc_fortify_n(f,__l,__s,__osz,...) (__glibc_safe_or_unknown_len (__l, __s, __osz) ? __ ## f ## _alias (__VA_ARGS__) : (__glibc_unsafe_len (__l, __s, __osz) ? __ ## f ## _chk_warn (__VA_ARGS__, (__osz) / (__s)) : __ ## f ## _chk (__VA_ARGS__, (__osz) / (__s))))
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define __flexarr []
#define __glibc_c99_flexarr_available 1
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define __attribute_alloc_align__(param) __attribute__ ((__alloc_align__ param))
#define __attribute_pure__ __attribute__ ((__pure__))
#define __attribute_const__ __attribute__ ((__const__))
#define __attribute_maybe_unused__ __attribute__ ((__unused__))
#define __attribute_used__ __attribute__ ((__used__))
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define __attribute_nonnull__(params) __attribute__ ((__nonnull__ params))
#define __nonnull(params) __attribute_nonnull__ (params)
#define __returns_nonnull __attribute__ ((__returns_nonnull__))
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define __wur __attribute_warn_unused_result__
#undef __always_inline
#define __always_inline __inline __attribute__ ((__always_inline__))
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __fortify_function __extern_always_inline __attribute_artificial__
#define __va_arg_pack() __builtin_va_arg_pack ()
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __restrict_arr __restrict
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#undef __attribute_copy__
#define __attribute_copy__(arg) __attribute__ ((__copy__ (arg)))
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define __LDBL_REDIR1(name,proto,alias) name proto
#define __LDBL_REDIR(name,proto) name proto
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __LDBL_REDIR2_DECL(name) 
#define __LDBL_REDIR_DECL(name) 
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#define __HAVE_GENERIC_SELECTION 1
#define __attr_access(x) __attribute__ ((__access__ x))
#define __fortified_attr_access(a,o,s) __attr_access ((a, o, s))
#define __attr_access_none(argno) __attribute__ ((__access__ (__none__, argno)))
#define __attr_dealloc(dealloc,argno) __attribute__ ((__malloc__ (dealloc, argno)))
#define __attr_dealloc_free __attr_dealloc (__builtin_free, 1)
#define __attribute_returns_twice__ __attribute__ ((__returns_twice__))
#define __USE_EXTERN_INLINES 1
#define __stub___compat_bdflush 
#define __stub_chflags 
#define __stub_fchflags 
#define __stub_gtty 
#define __stub_revoke 
#define __stub_setlogin 
#define __stub_sigreturn 
#define __stub_stty 
#undef __GLIBC_USE_LIB_EXT2
#define __GLIBC_USE_LIB_EXT2 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT_C2X
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_EXT
#define __GLIBC_USE_IEC_60559_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define __need_size_t 
#define __need_NULL 
#define __size_t__ 
#define __SIZE_T__ 
#define _SIZE_T 
#define _SYS_SIZE_T_H 
#define _T_SIZE_ 
#define _T_SIZE 
#define __SIZE_T 
#define _SIZE_T_ 
#define _BSD_SIZE_T_ 
#define _SIZE_T_DEFINED_ 
#define _SIZE_T_DEFINED 
#define _BSD_SIZE_T_DEFINED_ 
#define _SIZE_T_DECLARED 
#define ___int_size_t_h 
#define _GCC_SIZE_T 
#define _SIZET_ 
#define __size_t 
#undef __need_size_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define __need___va_list 
#undef __need___va_list
#define __GNUC_VA_LIST 
#define _BITS_TYPES_H 1
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define __TIMESIZE __WORDSIZE
#define __S16_TYPE short int
#define __U16_TYPE unsigned short int
#define __S32_TYPE int
#define __U32_TYPE unsigned int
#define __SLONGWORD_TYPE long int
#define __ULONGWORD_TYPE unsigned long int
#define __SQUAD_TYPE long int
#define __UQUAD_TYPE unsigned long int
#define __SWORD_TYPE long int
#define __UWORD_TYPE unsigned long int
#define __SLONG32_TYPE int
#define __ULONG32_TYPE unsigned int
#define __S64_TYPE long int
#define __U64_TYPE unsigned long int
#define __STD_TYPE typedef
#define _BITS_TYPESIZES_H 1
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define __DEV_T_TYPE __UQUAD_TYPE
#define __UID_T_TYPE __U32_TYPE
#define __GID_T_TYPE __U32_TYPE
#define __INO_T_TYPE __SYSCALL_ULONG_TYPE
#define __INO64_T_TYPE __UQUAD_TYPE
#define __MODE_T_TYPE __U32_TYPE
#define __NLINK_T_TYPE __SYSCALL_ULONG_TYPE
#define __FSWORD_T_TYPE __SYSCALL_SLONG_TYPE
#define __OFF_T_TYPE __SYSCALL_SLONG_TYPE
#define __OFF64_T_TYPE __SQUAD_TYPE
#define __PID_T_TYPE __S32_TYPE
#define __RLIM_T_TYPE __SYSCALL_ULONG_TYPE
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define __BLKCNT_T_TYPE __SYSCALL_SLONG_TYPE
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __FSBLKCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define __FSFILCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __ID_T_TYPE __U32_TYPE
#define __CLOCK_T_TYPE __SYSCALL_SLONG_TYPE
#define __TIME_T_TYPE __SYSCALL_SLONG_TYPE
#define __USECONDS_T_TYPE __U32_TYPE
#define __SUSECONDS_T_TYPE __SYSCALL_SLONG_TYPE
#define __SUSECONDS64_T_TYPE __SQUAD_TYPE
#define __DADDR_T_TYPE __S32_TYPE
#define __KEY_T_TYPE __S32_TYPE
#define __CLOCKID_T_TYPE __S32_TYPE
#define __TIMER_T_TYPE void *
#define __BLKSIZE_T_TYPE __SYSCALL_SLONG_TYPE
#define __FSID_T_TYPE struct { int __val[2]; }
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __CPU_MASK_TYPE __SYSCALL_ULONG_TYPE
#define __OFF_T_MATCHES_OFF64_T 1
#define __INO_T_MATCHES_INO64_T 1
#define __RLIM_T_MATCHES_RLIM64_T 1
#define __STATFS_MATCHES_STATFS64 1
#define __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 1
#define __FD_SETSIZE 1024
#define _BITS_TIME64_H 1
#define __TIME64_T_TYPE __TIME_T_TYPE
#undef __STD_TYPE
#define _____fpos_t_defined 1
#define ____mbstate_t_defined 1
#define _____fpos64_t_defined 1
#define ____FILE_defined 1
#define __FILE_defined 1
#define __struct_FILE_defined 1
#define __getc_unlocked_body(_fp) (__glibc_unlikely ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define __putc_unlocked_body(_ch,_fp) (__glibc_unlikely ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define _IO_EOF_SEEN 0x0010
#define __feof_unlocked_body(_fp) (((_fp)->_flags & _IO_EOF_SEEN) != 0)
#define _IO_ERR_SEEN 0x0020
#define __ferror_unlocked_body(_fp) (((_fp)->_flags & _IO_ERR_SEEN) != 0)
#define _IO_USER_LOCK 0x8000
#define __cookie_io_functions_t_defined 1
#define _VA_LIST_DEFINED 
#define __off_t_defined 
#define __off64_t_defined 
#define __ssize_t_defined 
#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2
#define BUFSIZ 8192
#define EOF (-1)
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#define SEEK_DATA 3
#define SEEK_HOLE 4
#define P_tmpdir "/tmp"
#define _BITS_STDIO_LIM_H 1
#define L_tmpnam 20
#define TMP_MAX 238328
#define FILENAME_MAX 4096
#define L_ctermid 9
#define L_cuserid 9
#undef FOPEN_MAX
#define FOPEN_MAX 16
#define _PRINTF_NAN_LEN_MAX 4
#define stdin stdin
#define stdout stdout
#define stderr stderr
#define RENAME_NOREPLACE (1 << 0)
#define RENAME_EXCHANGE (1 << 1)
#define RENAME_WHITEOUT (1 << 2)
#undef __attr_dealloc_fclose
#define __attr_dealloc_fclose __attr_dealloc (fclose, 1)
#define _BITS_FLOATN_H 
#define __HAVE_FLOAT128 1
#define __HAVE_DISTINCT_FLOAT128 1
#define __HAVE_FLOAT64X 1
#define __HAVE_FLOAT64X_LONG_DOUBLE 1
#define __f128(x) x ##f128
#define __CFLOAT128 _Complex _Float128
#define _BITS_FLOATN_COMMON_H 
#define __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI 0
#define __HAVE_FLOAT16 0
#define __HAVE_FLOAT32 1
#define __HAVE_FLOAT64 1
#define __HAVE_FLOAT32X 1
#define __HAVE_FLOAT128X 0
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __HAVE_DISTINCT_FLOAT32 0
#define __HAVE_DISTINCT_FLOAT64 0
#define __HAVE_DISTINCT_FLOAT32X 0
#define __HAVE_DISTINCT_FLOAT64X 0
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#define __HAVE_FLOAT128_UNLIKE_LDBL (__HAVE_DISTINCT_FLOAT128 && __LDBL_MANT_DIG__ != 113)
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#define __f32(x) x ##f32
#define __f64(x) x ##f64
#define __f32x(x) x ##f32x
#define __f64x(x) x ##f64x
#define __CFLOAT32 _Complex _Float32
#define __CFLOAT64 _Complex _Float64
#define __CFLOAT32X _Complex _Float32x
#define __CFLOAT64X _Complex _Float64x
#define _BITS_STDIO_H 1
#define __STDIO_INLINE __extern_inline
#define fread_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ char *__ptr = (char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) { int __c = getc_unlocked (__stream); if (__c == EOF) break; *__ptr++ = __c; } ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fread_unlocked (ptr, size, n, stream))))
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#undef __STDIO_INLINE
#define _BITS_STDIO2_H 1
#undef fread_unlocked
#define _SYS_TYPES_H 1
#define __u_char_defined 
#define __ino_t_defined 
#define __ino64_t_defined 
#define __dev_t_defined 
#define __gid_t_defined 
#define __mode_t_defined 
#define __nlink_t_defined 
#define __uid_t_defined 
#define __pid_t_defined 
#define __id_t_defined 
#define __daddr_t_defined 
#define __key_t_defined 
#define __clock_t_defined 1
#define __clockid_t_defined 1
#define __time_t_defined 1
#define __timer_t_defined 1
#define __useconds_t_defined 
#define __suseconds_t_defined 
#define __need_size_t 
#undef __need_size_t
#undef __need_NULL
#define _BITS_STDINT_INTN_H 1
#define __BIT_TYPES_DEFINED__ 1
#define _ENDIAN_H 1
#define _BITS_ENDIAN_H 1
#define __LITTLE_ENDIAN 1234
#define __BIG_ENDIAN 4321
#define __PDP_ENDIAN 3412
#define _BITS_ENDIANNESS_H 1
#define __BYTE_ORDER __LITTLE_ENDIAN
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define BIG_ENDIAN __BIG_ENDIAN
#define PDP_ENDIAN __PDP_ENDIAN
#define BYTE_ORDER __BYTE_ORDER
#define _BITS_BYTESWAP_H 1
#define __bswap_constant_16(x) ((__uint16_t) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __bswap_constant_32(x) ((((x) & 0xff000000u) >> 24) | (((x) & 0x00ff0000u) >> 8) | (((x) & 0x0000ff00u) << 8) | (((x) & 0x000000ffu) << 24))
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#define _BITS_UINTN_IDENTITY_H 1
#define htobe16(x) __bswap_16 (x)
#define htole16(x) __uint16_identity (x)
#define be16toh(x) __bswap_16 (x)
#define le16toh(x) __uint16_identity (x)
#define htobe32(x) __bswap_32 (x)
#define htole32(x) __uint32_identity (x)
#define be32toh(x) __bswap_32 (x)
#define le32toh(x) __uint32_identity (x)
#define htobe64(x) __bswap_64 (x)
#define htole64(x) __uint64_identity (x)
#define be64toh(x) __bswap_64 (x)
#define le64toh(x) __uint64_identity (x)
#define _SYS_SELECT_H 1
#define __FD_ZERO(s) do { unsigned int __i; fd_set *__arr = (s); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#define __FD_SET(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] |= __FD_MASK(d)))
#define __FD_CLR(d,s) ((void) (__FDS_BITS (s)[__FD_ELT(d)] &= ~__FD_MASK(d)))
#define __FD_ISSET(d,s) ((__FDS_BITS (s)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __sigset_t_defined 1
#define ____sigset_t_defined 
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define __timeval_defined 1
#define _STRUCT_TIMESPEC 1
#undef __NFDBITS
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define __FD_ELT(d) ((d) / __NFDBITS)
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define __FDS_BITS(set) ((set)->fds_bits)
#define FD_SETSIZE __FD_SETSIZE
#define NFDBITS __NFDBITS
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#undef __FD_ELT
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
#define __blksize_t_defined 
#define __blkcnt_t_defined 
#define __fsblkcnt_t_defined 
#define __fsfilcnt_t_defined 
#define _BITS_PTHREADTYPES_COMMON_H 1
#define _THREAD_SHARED_TYPES_H 1
#define _BITS_PTHREADTYPES_ARCH_H 1
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define __SIZEOF_PTHREAD_MUTEX_T 40
#define __SIZEOF_PTHREAD_ATTR_T 56
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#define __SIZEOF_PTHREAD_COND_T 48
#define __SIZEOF_PTHREAD_CONDATTR_T 4
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define __SIZEOF_PTHREAD_BARRIERATTR_T 4
#define __LOCK_ALIGNMENT 
#define __ONCE_ALIGNMENT 
#define _BITS_ATOMIC_WIDE_COUNTER_H 
#define _THREAD_MUTEX_INTERNAL_H 1
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __PTHREAD_MUTEX_INITIALIZER(__kind) 0, 0, 0, 0, __kind, 0, 0, { 0, 0 }
#define _RWLOCK_INTERNAL_H 
#define __PTHREAD_RWLOCK_ELISION_EXTRA 0, { 0, 0, 0, 0, 0, 0, 0 }
#define __PTHREAD_RWLOCK_INITIALIZER(__flags) 0, 0, 0, 0, 0, 0, 0, 0, __PTHREAD_RWLOCK_ELISION_EXTRA, 0, __flags
#define __ONCE_FLAG_INIT { 0 }
#define __have_pthread_attr_t 1
#define _SYS_STAT_H 1
#define _BITS_STAT_H 1
#define _BITS_STRUCT_STAT_H 1
#define st_atime st_atim.tv_sec
#define st_mtime st_mtim.tv_sec
#define st_ctime st_ctim.tv_sec
#define _STATBUF_ST_BLKSIZE 
#define _STATBUF_ST_RDEV 
#define _STATBUF_ST_NSEC 
#define __S_IFMT 0170000
#define __S_IFDIR 0040000
#define __S_IFCHR 0020000
#define __S_IFBLK 0060000
#define __S_IFREG 0100000
#define __S_IFIFO 0010000
#define __S_IFLNK 0120000
#define __S_IFSOCK 0140000
#define __S_TYPEISMQ(buf) ((buf)->st_mode - (buf)->st_mode)
#define __S_TYPEISSEM(buf) ((buf)->st_mode - (buf)->st_mode)
#define __S_TYPEISSHM(buf) ((buf)->st_mode - (buf)->st_mode)
#define __S_ISUID 04000
#define __S_ISGID 02000
#define __S_ISVTX 01000
#define __S_IREAD 0400
#define __S_IWRITE 0200
#define __S_IEXEC 0100
#define UTIME_NOW ((1l << 30) - 1l)
#define UTIME_OMIT ((1l << 30) - 2l)
#define S_IFMT __S_IFMT
#define S_IFDIR __S_IFDIR
#define S_IFCHR __S_IFCHR
#define S_IFBLK __S_IFBLK
#define S_IFREG __S_IFREG
#define S_IFIFO __S_IFIFO
#define S_IFLNK __S_IFLNK
#define S_IFSOCK __S_IFSOCK
#define __S_ISTYPE(mode,mask) (((mode) & __S_IFMT) == (mask))
#define S_ISDIR(mode) __S_ISTYPE((mode), __S_IFDIR)
#define S_ISCHR(mode) __S_ISTYPE((mode), __S_IFCHR)
#define S_ISBLK(mode) __S_ISTYPE((mode), __S_IFBLK)
#define S_ISREG(mode) __S_ISTYPE((mode), __S_IFREG)
#define S_ISFIFO(mode) __S_ISTYPE((mode), __S_IFIFO)
#define S_ISLNK(mode) __S_ISTYPE((mode), __S_IFLNK)
#define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
#define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
#define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
#define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
#define S_ISUID __S_ISUID
#define S_ISGID __S_ISGID
#define S_ISVTX __S_ISVTX
#define S_IRUSR __S_IREAD
#define S_IWUSR __S_IWRITE
#define S_IXUSR __S_IEXEC
#define S_IRWXU (__S_IREAD|__S_IWRITE|__S_IEXEC)
#define S_IREAD S_IRUSR
#define S_IWRITE S_IWUSR
#define S_IEXEC S_IXUSR
#define S_IRGRP (S_IRUSR >> 3)
#define S_IWGRP (S_IWUSR >> 3)
#define S_IXGRP (S_IXUSR >> 3)
#define S_IRWXG (S_IRWXU >> 3)
#define S_IROTH (S_IRGRP >> 3)
#define S_IWOTH (S_IWGRP >> 3)
#define S_IXOTH (S_IXGRP >> 3)
#define S_IRWXO (S_IRWXG >> 3)
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define S_BLKSIZE 512
#define _LINUX_STAT_H 
#define _LINUX_TYPES_H 
#define _ASM_GENERIC_TYPES_H 
#define _ASM_GENERIC_INT_LL64_H 
#define __ASM_X86_BITSPERLONG_H 
#define __BITS_PER_LONG 64
#define __ASM_GENERIC_BITS_PER_LONG 
#define _LINUX_POSIX_TYPES_H 
#define _LINUX_STDDEF_H 
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct TAG { MEMBERS } ATTRS NAME; } ATTRS
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ## NAME; TYPE NAME[]; }
#undef __FD_SETSIZE
#define __FD_SETSIZE 1024
#define _ASM_X86_POSIX_TYPES_64_H 
#define __kernel_old_uid_t __kernel_old_uid_t
#define __kernel_old_dev_t __kernel_old_dev_t
#define __ASM_GENERIC_POSIX_TYPES_H 
#define __bitwise__ 
#define __bitwise __bitwise__
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define STATX_TYPE 0x00000001U
#define STATX_MODE 0x00000002U
#define STATX_NLINK 0x00000004U
#define STATX_UID 0x00000008U
#define STATX_GID 0x00000010U
#define STATX_ATIME 0x00000020U
#define STATX_MTIME 0x00000040U
#define STATX_CTIME 0x00000080U
#define STATX_INO 0x00000100U
#define STATX_SIZE 0x00000200U
#define STATX_BLOCKS 0x00000400U
#define STATX_BASIC_STATS 0x000007ffU
#define STATX_BTIME 0x00000800U
#define STATX_MNT_ID 0x00001000U
#define STATX__RESERVED 0x80000000U
#define STATX_ALL 0x00000fffU
#define STATX_ATTR_COMPRESSED 0x00000004
#define STATX_ATTR_IMMUTABLE 0x00000010
#define STATX_ATTR_APPEND 0x00000020
#define STATX_ATTR_NODUMP 0x00000040
#define STATX_ATTR_ENCRYPTED 0x00000800
#define STATX_ATTR_AUTOMOUNT 0x00001000
#define STATX_ATTR_MOUNT_ROOT 0x00002000
#define STATX_ATTR_VERITY 0x00100000
#define STATX_ATTR_DAX 0x00200000
#define __statx_timestamp_defined 1
#define __statx_defined 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#undef __GLIBC_USE_LIB_EXT2
#define __GLIBC_USE_LIB_EXT2 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT_C2X
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_EXT
#define __GLIBC_USE_IEC_60559_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define __need_size_t 
#define __need_wchar_t 
#define __need_NULL 
#undef __need_size_t
#define __wchar_t__ 
#define __WCHAR_T__ 
#define _WCHAR_T 
#define _T_WCHAR_ 
#define _T_WCHAR 
#define __WCHAR_T 
#define _WCHAR_T_ 
#define _BSD_WCHAR_T_ 
#define _WCHAR_T_DEFINED_ 
#define _WCHAR_T_DEFINED 
#define _WCHAR_T_H 
#define ___int_wchar_t_h 
#define __INT_WCHAR_T_H 
#define _GCC_WCHAR_T 
#define _WCHAR_T_DECLARED 
#undef _BSD_WCHAR_T_
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define _STDLIB_H 1
#define WNOHANG 1
#define WUNTRACED 2
#define WSTOPPED 2
#define WEXITED 4
#define WCONTINUED 8
#define WNOWAIT 0x01000000
#define __WNOTHREAD 0x20000000
#define __WALL 0x40000000
#define __WCLONE 0x80000000
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define __WTERMSIG(status) ((status) & 0x7f)
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define __W_CONTINUED 0xffff
#define __WCOREFLAG 0x80
#define WEXITSTATUS(status) __WEXITSTATUS (status)
#define WTERMSIG(status) __WTERMSIG (status)
#define WSTOPSIG(status) __WSTOPSIG (status)
#define WIFEXITED(status) __WIFEXITED (status)
#define WIFSIGNALED(status) __WIFSIGNALED (status)
#define WIFSTOPPED(status) __WIFSTOPPED (status)
#define WIFCONTINUED(status) __WIFCONTINUED (status)
#define __ldiv_t_defined 1
#define __lldiv_t_defined 1
#define RAND_MAX 2147483647
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define _BITS_TYPES_LOCALE_T_H 1
#define _BITS_TYPES___LOCALE_T_H 1
#define _ALLOCA_H 1
#define __need_size_t 
#undef __need_size_t
#undef __need_NULL
#undef alloca
#define alloca(size) __builtin_alloca (size)
#define __COMPAR_FN_T 
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#pragma GCC diagnostic pop
#define __STDLIB_MB_LEN_MAX 16
#define _STDDEF_H 
#define _STDDEF_H_ 
#define _ANSI_STDDEF_H 
#define _PTRDIFF_T 
#define _T_PTRDIFF_ 
#define _T_PTRDIFF 
#define __PTRDIFF_T 
#define _PTRDIFF_T_ 
#define _BSD_PTRDIFF_T_ 
#define ___int_ptrdiff_t_h 
#define _GCC_PTRDIFF_T 
#define _PTRDIFF_T_DECLARED 
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define _STRING_H 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#undef __GLIBC_USE_LIB_EXT2
#define __GLIBC_USE_LIB_EXT2 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT_C2X
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_EXT
#define __GLIBC_USE_IEC_60559_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define __need_size_t 
#define __need_NULL 
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define strdupa(s) (__extension__ ({ const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define strndupa(s,n) (__extension__ ({ const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define _STRINGS_H 1
#define __need_size_t 
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define __STRINGS_FORTIFIED 1
#define _BITS_STRING_FORTIFIED_H 1
#define _INTTYPES_H 1
#define _STDINT_H 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#undef __GLIBC_USE_LIB_EXT2
#define __GLIBC_USE_LIB_EXT2 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT_C2X
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_EXT
#define __GLIBC_USE_IEC_60559_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _BITS_WCHAR_H 1
#define __WCHAR_MAX __WCHAR_MAX__
#define __WCHAR_MIN __WCHAR_MIN__
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define _BITS_STDINT_UINTN_H 1
#define __intptr_t_defined 
#define __INT64_C(c) c ## L
#define __UINT64_C(c) c ## UL
#define INT8_MIN (-128)
#define INT16_MIN (-32767-1)
#define INT32_MIN (-2147483647-1)
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define INT8_MAX (127)
#define INT16_MAX (32767)
#define INT32_MAX (2147483647)
#define INT64_MAX (__INT64_C(9223372036854775807))
#define UINT8_MAX (255)
#define UINT16_MAX (65535)
#define UINT32_MAX (4294967295U)
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define INT_LEAST8_MIN (-128)
#define INT_LEAST16_MIN (-32767-1)
#define INT_LEAST32_MIN (-2147483647-1)
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define INT_LEAST8_MAX (127)
#define INT_LEAST16_MAX (32767)
#define INT_LEAST32_MAX (2147483647)
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define UINT_LEAST8_MAX (255)
#define UINT_LEAST16_MAX (65535)
#define UINT_LEAST32_MAX (4294967295U)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define INT_FAST8_MIN (-128)
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define INT_FAST8_MAX (127)
#define INT_FAST16_MAX (9223372036854775807L)
#define INT_FAST32_MAX (9223372036854775807L)
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define UINT_FAST8_MAX (255)
#define UINT_FAST16_MAX (18446744073709551615UL)
#define UINT_FAST32_MAX (18446744073709551615UL)
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define INTPTR_MIN (-9223372036854775807L-1)
#define INTPTR_MAX (9223372036854775807L)
#define UINTPTR_MAX (18446744073709551615UL)
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define PTRDIFF_MAX (9223372036854775807L)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define SIG_ATOMIC_MAX (2147483647)
#define SIZE_MAX (18446744073709551615UL)
#define WCHAR_MIN __WCHAR_MIN
#define WCHAR_MAX __WCHAR_MAX
#define WINT_MIN (0u)
#define WINT_MAX (4294967295u)
#define INT8_C(c) c
#define INT16_C(c) c
#define INT32_C(c) c
#define INT64_C(c) c ## L
#define UINT8_C(c) c
#define UINT16_C(c) c
#define UINT32_C(c) c ## U
#define UINT64_C(c) c ## UL
#define INTMAX_C(c) c ## L
#define UINTMAX_C(c) c ## UL
#define INT8_WIDTH 8
#define UINT8_WIDTH 8
#define INT16_WIDTH 16
#define UINT16_WIDTH 16
#define INT32_WIDTH 32
#define UINT32_WIDTH 32
#define INT64_WIDTH 64
#define UINT64_WIDTH 64
#define INT_LEAST8_WIDTH 8
#define UINT_LEAST8_WIDTH 8
#define INT_LEAST16_WIDTH 16
#define UINT_LEAST16_WIDTH 16
#define INT_LEAST32_WIDTH 32
#define UINT_LEAST32_WIDTH 32
#define INT_LEAST64_WIDTH 64
#define UINT_LEAST64_WIDTH 64
#define INT_FAST8_WIDTH 8
#define UINT_FAST8_WIDTH 8
#define INT_FAST16_WIDTH __WORDSIZE
#define UINT_FAST16_WIDTH __WORDSIZE
#define INT_FAST32_WIDTH __WORDSIZE
#define UINT_FAST32_WIDTH __WORDSIZE
#define INT_FAST64_WIDTH 64
#define UINT_FAST64_WIDTH 64
#define INTPTR_WIDTH __WORDSIZE
#define UINTPTR_WIDTH __WORDSIZE
#define INTMAX_WIDTH 64
#define UINTMAX_WIDTH 64
#define PTRDIFF_WIDTH __WORDSIZE
#define SIG_ATOMIC_WIDTH 32
#define SIZE_WIDTH __WORDSIZE
#define WCHAR_WIDTH 32
#define WINT_WIDTH 32
#define _GCC_WRAP_STDINT_H 
#define ____gwchar_t_defined 1
#define __PRI64_PREFIX "l"
#define __PRIPTR_PREFIX "l"
#define PRId8 "d"
#define PRId16 "d"
#define PRId32 "d"
#define PRId64 __PRI64_PREFIX "d"
#define PRIdLEAST8 "d"
#define PRIdLEAST16 "d"
#define PRIdLEAST32 "d"
#define PRIdLEAST64 __PRI64_PREFIX "d"
#define PRIdFAST8 "d"
#define PRIdFAST16 __PRIPTR_PREFIX "d"
#define PRIdFAST32 __PRIPTR_PREFIX "d"
#define PRIdFAST64 __PRI64_PREFIX "d"
#define PRIi8 "i"
#define PRIi16 "i"
#define PRIi32 "i"
#define PRIi64 __PRI64_PREFIX "i"
#define PRIiLEAST8 "i"
#define PRIiLEAST16 "i"
#define PRIiLEAST32 "i"
#define PRIiLEAST64 __PRI64_PREFIX "i"
#define PRIiFAST8 "i"
#define PRIiFAST16 __PRIPTR_PREFIX "i"
#define PRIiFAST32 __PRIPTR_PREFIX "i"
#define PRIiFAST64 __PRI64_PREFIX "i"
#define PRIo8 "o"
#define PRIo16 "o"
#define PRIo32 "o"
#define PRIo64 __PRI64_PREFIX "o"
#define PRIoLEAST8 "o"
#define PRIoLEAST16 "o"
#define PRIoLEAST32 "o"
#define PRIoLEAST64 __PRI64_PREFIX "o"
#define PRIoFAST8 "o"
#define PRIoFAST16 __PRIPTR_PREFIX "o"
#define PRIoFAST32 __PRIPTR_PREFIX "o"
#define PRIoFAST64 __PRI64_PREFIX "o"
#define PRIu8 "u"
#define PRIu16 "u"
#define PRIu32 "u"
#define PRIu64 __PRI64_PREFIX "u"
#define PRIuLEAST8 "u"
#define PRIuLEAST16 "u"
#define PRIuLEAST32 "u"
#define PRIuLEAST64 __PRI64_PREFIX "u"
#define PRIuFAST8 "u"
#define PRIuFAST16 __PRIPTR_PREFIX "u"
#define PRIuFAST32 __PRIPTR_PREFIX "u"
#define PRIuFAST64 __PRI64_PREFIX "u"
#define PRIx8 "x"
#define PRIx16 "x"
#define PRIx32 "x"
#define PRIx64 __PRI64_PREFIX "x"
#define PRIxLEAST8 "x"
#define PRIxLEAST16 "x"
#define PRIxLEAST32 "x"
#define PRIxLEAST64 __PRI64_PREFIX "x"
#define PRIxFAST8 "x"
#define PRIxFAST16 __PRIPTR_PREFIX "x"
#define PRIxFAST32 __PRIPTR_PREFIX "x"
#define PRIxFAST64 __PRI64_PREFIX "x"
#define PRIX8 "X"
#define PRIX16 "X"
#define PRIX32 "X"
#define PRIX64 __PRI64_PREFIX "X"
#define PRIXLEAST8 "X"
#define PRIXLEAST16 "X"
#define PRIXLEAST32 "X"
#define PRIXLEAST64 __PRI64_PREFIX "X"
#define PRIXFAST8 "X"
#define PRIXFAST16 __PRIPTR_PREFIX "X"
#define PRIXFAST32 __PRIPTR_PREFIX "X"
#define PRIXFAST64 __PRI64_PREFIX "X"
#define PRIdMAX __PRI64_PREFIX "d"
#define PRIiMAX __PRI64_PREFIX "i"
#define PRIoMAX __PRI64_PREFIX "o"
#define PRIuMAX __PRI64_PREFIX "u"
#define PRIxMAX __PRI64_PREFIX "x"
#define PRIXMAX __PRI64_PREFIX "X"
#define PRIdPTR __PRIPTR_PREFIX "d"
#define PRIiPTR __PRIPTR_PREFIX "i"
#define PRIoPTR __PRIPTR_PREFIX "o"
#define PRIuPTR __PRIPTR_PREFIX "u"
#define PRIxPTR __PRIPTR_PREFIX "x"
#define PRIXPTR __PRIPTR_PREFIX "X"
#define SCNd8 "hhd"
#define SCNd16 "hd"
#define SCNd32 "d"
#define SCNd64 __PRI64_PREFIX "d"
#define SCNdLEAST8 "hhd"
#define SCNdLEAST16 "hd"
#define SCNdLEAST32 "d"
#define SCNdLEAST64 __PRI64_PREFIX "d"
#define SCNdFAST8 "hhd"
#define SCNdFAST16 __PRIPTR_PREFIX "d"
#define SCNdFAST32 __PRIPTR_PREFIX "d"
#define SCNdFAST64 __PRI64_PREFIX "d"
#define SCNi8 "hhi"
#define SCNi16 "hi"
#define SCNi32 "i"
#define SCNi64 __PRI64_PREFIX "i"
#define SCNiLEAST8 "hhi"
#define SCNiLEAST16 "hi"
#define SCNiLEAST32 "i"
#define SCNiLEAST64 __PRI64_PREFIX "i"
#define SCNiFAST8 "hhi"
#define SCNiFAST16 __PRIPTR_PREFIX "i"
#define SCNiFAST32 __PRIPTR_PREFIX "i"
#define SCNiFAST64 __PRI64_PREFIX "i"
#define SCNu8 "hhu"
#define SCNu16 "hu"
#define SCNu32 "u"
#define SCNu64 __PRI64_PREFIX "u"
#define SCNuLEAST8 "hhu"
#define SCNuLEAST16 "hu"
#define SCNuLEAST32 "u"
#define SCNuLEAST64 __PRI64_PREFIX "u"
#define SCNuFAST8 "hhu"
#define SCNuFAST16 __PRIPTR_PREFIX "u"
#define SCNuFAST32 __PRIPTR_PREFIX "u"
#define SCNuFAST64 __PRI64_PREFIX "u"
#define SCNo8 "hho"
#define SCNo16 "ho"
#define SCNo32 "o"
#define SCNo64 __PRI64_PREFIX "o"
#define SCNoLEAST8 "hho"
#define SCNoLEAST16 "ho"
#define SCNoLEAST32 "o"
#define SCNoLEAST64 __PRI64_PREFIX "o"
#define SCNoFAST8 "hho"
#define SCNoFAST16 __PRIPTR_PREFIX "o"
#define SCNoFAST32 __PRIPTR_PREFIX "o"
#define SCNoFAST64 __PRI64_PREFIX "o"
#define SCNx8 "hhx"
#define SCNx16 "hx"
#define SCNx32 "x"
#define SCNx64 __PRI64_PREFIX "x"
#define SCNxLEAST8 "hhx"
#define SCNxLEAST16 "hx"
#define SCNxLEAST32 "x"
#define SCNxLEAST64 __PRI64_PREFIX "x"
#define SCNxFAST8 "hhx"
#define SCNxFAST16 __PRIPTR_PREFIX "x"
#define SCNxFAST32 __PRIPTR_PREFIX "x"
#define SCNxFAST64 __PRI64_PREFIX "x"
#define SCNdMAX __PRI64_PREFIX "d"
#define SCNiMAX __PRI64_PREFIX "i"
#define SCNoMAX __PRI64_PREFIX "o"
#define SCNuMAX __PRI64_PREFIX "u"
#define SCNxMAX __PRI64_PREFIX "x"
#define SCNdPTR __PRIPTR_PREFIX "d"
#define SCNiPTR __PRIPTR_PREFIX "i"
#define SCNoPTR __PRIPTR_PREFIX "o"
#define SCNuPTR __PRIPTR_PREFIX "u"
#define SCNxPTR __PRIPTR_PREFIX "x"
#define _STDALIGN_H 
#define alignas _Alignas
#define alignof _Alignof
#define __alignas_is_defined 1
#define __alignof_is_defined 1
#define _UNISTD_H 1
#define _POSIX_VERSION 200809L
#define __POSIX2_THIS_VERSION 200809L
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define _POSIX2_C_VERSION __POSIX2_THIS_VERSION
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define _XOPEN_VERSION 700
#define _XOPEN_XCU_VERSION 4
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define _XOPEN_UNIX 1
#define _XOPEN_ENH_I18N 1
#define _XOPEN_LEGACY 1
#define _BITS_POSIX_OPT_H 1
#define _POSIX_JOB_CONTROL 1
#define _POSIX_SAVED_IDS 1
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define _POSIX_SYNCHRONIZED_IO 200809L
#define _POSIX_FSYNC 200809L
#define _POSIX_MAPPED_FILES 200809L
#define _POSIX_MEMLOCK 200809L
#define _POSIX_MEMLOCK_RANGE 200809L
#define _POSIX_MEMORY_PROTECTION 200809L
#define _POSIX_CHOWN_RESTRICTED 0
#define _POSIX_VDISABLE '\0'
#define _POSIX_NO_TRUNC 1
#define _XOPEN_REALTIME 1
#define _XOPEN_REALTIME_THREADS 1
#define _XOPEN_SHM 1
#define _POSIX_THREADS 200809L
#define _POSIX_REENTRANT_FUNCTIONS 1
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define _POSIX_SEMAPHORES 200809L
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define _POSIX_ASYNC_IO 1
#define _LFS_ASYNCHRONOUS_IO 1
#define _POSIX_PRIORITIZED_IO 200809L
#define _LFS64_ASYNCHRONOUS_IO 1
#define _LFS_LARGEFILE 1
#define _LFS64_LARGEFILE 1
#define _LFS64_STDIO 1
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define _POSIX_CPUTIME 0
#define _POSIX_THREAD_CPUTIME 0
#define _POSIX_REGEXP 1
#define _POSIX_READER_WRITER_LOCKS 200809L
#define _POSIX_SHELL 1
#define _POSIX_TIMEOUTS 200809L
#define _POSIX_SPIN_LOCKS 200809L
#define _POSIX_SPAWN 200809L
#define _POSIX_TIMERS 200809L
#define _POSIX_BARRIERS 200809L
#define _POSIX_MESSAGE_PASSING 200809L
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define _POSIX_MONOTONIC_CLOCK 0
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_ADVISORY_INFO 200809L
#define _POSIX_IPV6 200809L
#define _POSIX_RAW_SOCKETS 200809L
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX_SPORADIC_SERVER -1
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define _POSIX_TRACE -1
#define _POSIX_TRACE_EVENT_FILTER -1
#define _POSIX_TRACE_INHERIT -1
#define _POSIX_TRACE_LOG -1
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define _POSIX_V7_LPBIG_OFFBIG -1
#define _POSIX_V6_LPBIG_OFFBIG -1
#define _XBS5_LPBIG_OFFBIG -1
#define _POSIX_V7_LP64_OFF64 1
#define _POSIX_V6_LP64_OFF64 1
#define _XBS5_LP64_OFF64 1
#define __ILP32_OFF32_CFLAGS "-m32"
#define __ILP32_OFF32_LDFLAGS "-m32"
#define __ILP32_OFFBIG_CFLAGS "-m32 -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64"
#define __ILP32_OFFBIG_LDFLAGS "-m32"
#define __LP64_OFF64_CFLAGS "-m64"
#define __LP64_OFF64_LDFLAGS "-m64"
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#define __need_size_t 
#define __need_NULL 
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define __socklen_t_defined 
#define R_OK 4
#define W_OK 2
#define X_OK 1
#define F_OK 0
#define L_SET SEEK_SET
#define L_INCR SEEK_CUR
#define L_XTND SEEK_END
#define _PC_LINK_MAX _PC_LINK_MAX
#define _PC_MAX_CANON _PC_MAX_CANON
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _PC_NAME_MAX _PC_NAME_MAX
#define _PC_PATH_MAX _PC_PATH_MAX
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define _PC_VDISABLE _PC_VDISABLE
#define _PC_SYNC_IO _PC_SYNC_IO
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define _PC_PRIO_IO _PC_PRIO_IO
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define _SC_ARG_MAX _SC_ARG_MAX
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _SC_CLK_TCK _SC_CLK_TCK
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define _SC_TIMERS _SC_TIMERS
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define _SC_FSYNC _SC_FSYNC
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define _SC_AIO_MAX _SC_AIO_MAX
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define _SC_VERSION _SC_VERSION
#define _SC_PAGESIZE _SC_PAGESIZE
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _SC_LINE_MAX _SC_LINE_MAX
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define _SC_2_VERSION _SC_2_VERSION
#define _SC_2_C_BIND _SC_2_C_BIND
#define _SC_2_C_DEV _SC_2_C_DEV
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define _SC_PII _SC_PII
#define _SC_PII_XTI _SC_PII_XTI
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define _SC_PII_OSI _SC_PII_OSI
#define _SC_POLL _SC_POLL
#define _SC_SELECT _SC_SELECT
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define _SC_IOV_MAX _SC_IOV_MAX
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define _SC_THREADS _SC_THREADS
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define _SC_PASS_MAX _SC_PASS_MAX
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define _SC_2_UPE _SC_2_UPE
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define _SC_INT_MAX _SC_INT_MAX
#define _SC_INT_MIN _SC_INT_MIN
#define _SC_LONG_BIT _SC_LONG_BIT
#define _SC_WORD_BIT _SC_WORD_BIT
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _SC_NZERO _SC_NZERO
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define _SC_UINT_MAX _SC_UINT_MAX
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define _SC_NL_NMAX _SC_NL_NMAX
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define _SC_BARRIERS _SC_BARRIERS
#define _SC_BASE _SC_BASE
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define _SC_CPUTIME _SC_CPUTIME
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define _SC_FD_MGMT _SC_FD_MGMT
#define _SC_FIFO _SC_FIFO
#define _SC_PIPE _SC_PIPE
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define _SC_NETWORKING _SC_NETWORKING
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define _SC_REGEXP _SC_REGEXP
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define _SC_SHELL _SC_SHELL
#define _SC_SIGNALS _SC_SIGNALS
#define _SC_SPAWN _SC_SPAWN
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define _SC_2_PBS _SC_2_PBS
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define _SC_STREAMS _SC_STREAMS
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define _SC_TRACE _SC_TRACE
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _SC_IPV6 _SC_IPV6
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define _SC_MINSIGSTKSZ _SC_MINSIGSTKSZ
#define _SC_SIGSTKSZ _SC_SIGSTKSZ
#define _CS_PATH _CS_PATH
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _CS_V6_ENV _CS_V6_ENV
#define _CS_V7_ENV _CS_V7_ENV
#define _GETOPT_POSIX_H 1
#define _GETOPT_CORE_H 1
#define F_ULOCK 0
#define F_LOCK 1
#define F_TLOCK 2
#define F_TEST 3
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define _LINUX_CLOSE_RANGE_H 
#define CLOSE_RANGE_UNSHARE (1U << 1)
#define CLOSE_RANGE_CLOEXEC (1U << 2)
#define RUBY_MISSING_H 1
#define _MATH_H 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#undef __GLIBC_USE_LIB_EXT2
#define __GLIBC_USE_LIB_EXT2 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT_C2X
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_EXT
#define __GLIBC_USE_IEC_60559_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define _BITS_LIBM_SIMD_DECL_STUBS_H 1
#define __DECL_SIMD_cos 
#define __DECL_SIMD_cosf 
#define __DECL_SIMD_cosl 
#define __DECL_SIMD_cosf16 
#define __DECL_SIMD_cosf32 
#define __DECL_SIMD_cosf64 
#define __DECL_SIMD_cosf128 
#define __DECL_SIMD_cosf32x 
#define __DECL_SIMD_cosf64x 
#define __DECL_SIMD_cosf128x 
#define __DECL_SIMD_sin 
#define __DECL_SIMD_sinf 
#define __DECL_SIMD_sinl 
#define __DECL_SIMD_sinf16 
#define __DECL_SIMD_sinf32 
#define __DECL_SIMD_sinf64 
#define __DECL_SIMD_sinf128 
#define __DECL_SIMD_sinf32x 
#define __DECL_SIMD_sinf64x 
#define __DECL_SIMD_sinf128x 
#define __DECL_SIMD_sincos 
#define __DECL_SIMD_sincosf 
#define __DECL_SIMD_sincosl 
#define __DECL_SIMD_sincosf16 
#define __DECL_SIMD_sincosf32 
#define __DECL_SIMD_sincosf64 
#define __DECL_SIMD_sincosf128 
#define __DECL_SIMD_sincosf32x 
#define __DECL_SIMD_sincosf64x 
#define __DECL_SIMD_sincosf128x 
#define __DECL_SIMD_log 
#define __DECL_SIMD_logf 
#define __DECL_SIMD_logl 
#define __DECL_SIMD_logf16 
#define __DECL_SIMD_logf32 
#define __DECL_SIMD_logf64 
#define __DECL_SIMD_logf128 
#define __DECL_SIMD_logf32x 
#define __DECL_SIMD_logf64x 
#define __DECL_SIMD_logf128x 
#define __DECL_SIMD_exp 
#define __DECL_SIMD_expf 
#define __DECL_SIMD_expl 
#define __DECL_SIMD_expf16 
#define __DECL_SIMD_expf32 
#define __DECL_SIMD_expf64 
#define __DECL_SIMD_expf128 
#define __DECL_SIMD_expf32x 
#define __DECL_SIMD_expf64x 
#define __DECL_SIMD_expf128x 
#define __DECL_SIMD_pow 
#define __DECL_SIMD_powf 
#define __DECL_SIMD_powl 
#define __DECL_SIMD_powf16 
#define __DECL_SIMD_powf32 
#define __DECL_SIMD_powf64 
#define __DECL_SIMD_powf128 
#define __DECL_SIMD_powf32x 
#define __DECL_SIMD_powf64x 
#define __DECL_SIMD_powf128x 
#define __DECL_SIMD_acos 
#define __DECL_SIMD_acosf 
#define __DECL_SIMD_acosl 
#define __DECL_SIMD_acosf16 
#define __DECL_SIMD_acosf32 
#define __DECL_SIMD_acosf64 
#define __DECL_SIMD_acosf128 
#define __DECL_SIMD_acosf32x 
#define __DECL_SIMD_acosf64x 
#define __DECL_SIMD_acosf128x 
#define __DECL_SIMD_atan 
#define __DECL_SIMD_atanf 
#define __DECL_SIMD_atanl 
#define __DECL_SIMD_atanf16 
#define __DECL_SIMD_atanf32 
#define __DECL_SIMD_atanf64 
#define __DECL_SIMD_atanf128 
#define __DECL_SIMD_atanf32x 
#define __DECL_SIMD_atanf64x 
#define __DECL_SIMD_atanf128x 
#define __DECL_SIMD_asin 
#define __DECL_SIMD_asinf 
#define __DECL_SIMD_asinl 
#define __DECL_SIMD_asinf16 
#define __DECL_SIMD_asinf32 
#define __DECL_SIMD_asinf64 
#define __DECL_SIMD_asinf128 
#define __DECL_SIMD_asinf32x 
#define __DECL_SIMD_asinf64x 
#define __DECL_SIMD_asinf128x 
#define __DECL_SIMD_hypot 
#define __DECL_SIMD_hypotf 
#define __DECL_SIMD_hypotl 
#define __DECL_SIMD_hypotf16 
#define __DECL_SIMD_hypotf32 
#define __DECL_SIMD_hypotf64 
#define __DECL_SIMD_hypotf128 
#define __DECL_SIMD_hypotf32x 
#define __DECL_SIMD_hypotf64x 
#define __DECL_SIMD_hypotf128x 
#define __DECL_SIMD_exp2 
#define __DECL_SIMD_exp2f 
#define __DECL_SIMD_exp2l 
#define __DECL_SIMD_exp2f16 
#define __DECL_SIMD_exp2f32 
#define __DECL_SIMD_exp2f64 
#define __DECL_SIMD_exp2f128 
#define __DECL_SIMD_exp2f32x 
#define __DECL_SIMD_exp2f64x 
#define __DECL_SIMD_exp2f128x 
#define __DECL_SIMD_exp10 
#define __DECL_SIMD_exp10f 
#define __DECL_SIMD_exp10l 
#define __DECL_SIMD_exp10f16 
#define __DECL_SIMD_exp10f32 
#define __DECL_SIMD_exp10f64 
#define __DECL_SIMD_exp10f128 
#define __DECL_SIMD_exp10f32x 
#define __DECL_SIMD_exp10f64x 
#define __DECL_SIMD_exp10f128x 
#define __DECL_SIMD_cosh 
#define __DECL_SIMD_coshf 
#define __DECL_SIMD_coshl 
#define __DECL_SIMD_coshf16 
#define __DECL_SIMD_coshf32 
#define __DECL_SIMD_coshf64 
#define __DECL_SIMD_coshf128 
#define __DECL_SIMD_coshf32x 
#define __DECL_SIMD_coshf64x 
#define __DECL_SIMD_coshf128x 
#define __DECL_SIMD_expm1 
#define __DECL_SIMD_expm1f 
#define __DECL_SIMD_expm1l 
#define __DECL_SIMD_expm1f16 
#define __DECL_SIMD_expm1f32 
#define __DECL_SIMD_expm1f64 
#define __DECL_SIMD_expm1f128 
#define __DECL_SIMD_expm1f32x 
#define __DECL_SIMD_expm1f64x 
#define __DECL_SIMD_expm1f128x 
#define __DECL_SIMD_sinh 
#define __DECL_SIMD_sinhf 
#define __DECL_SIMD_sinhl 
#define __DECL_SIMD_sinhf16 
#define __DECL_SIMD_sinhf32 
#define __DECL_SIMD_sinhf64 
#define __DECL_SIMD_sinhf128 
#define __DECL_SIMD_sinhf32x 
#define __DECL_SIMD_sinhf64x 
#define __DECL_SIMD_sinhf128x 
#define __DECL_SIMD_cbrt 
#define __DECL_SIMD_cbrtf 
#define __DECL_SIMD_cbrtl 
#define __DECL_SIMD_cbrtf16 
#define __DECL_SIMD_cbrtf32 
#define __DECL_SIMD_cbrtf64 
#define __DECL_SIMD_cbrtf128 
#define __DECL_SIMD_cbrtf32x 
#define __DECL_SIMD_cbrtf64x 
#define __DECL_SIMD_cbrtf128x 
#define __DECL_SIMD_atan2 
#define __DECL_SIMD_atan2f 
#define __DECL_SIMD_atan2l 
#define __DECL_SIMD_atan2f16 
#define __DECL_SIMD_atan2f32 
#define __DECL_SIMD_atan2f64 
#define __DECL_SIMD_atan2f128 
#define __DECL_SIMD_atan2f32x 
#define __DECL_SIMD_atan2f64x 
#define __DECL_SIMD_atan2f128x 
#define __DECL_SIMD_log10 
#define __DECL_SIMD_log10f 
#define __DECL_SIMD_log10l 
#define __DECL_SIMD_log10f16 
#define __DECL_SIMD_log10f32 
#define __DECL_SIMD_log10f64 
#define __DECL_SIMD_log10f128 
#define __DECL_SIMD_log10f32x 
#define __DECL_SIMD_log10f64x 
#define __DECL_SIMD_log10f128x 
#define __DECL_SIMD_log2 
#define __DECL_SIMD_log2f 
#define __DECL_SIMD_log2l 
#define __DECL_SIMD_log2f16 
#define __DECL_SIMD_log2f32 
#define __DECL_SIMD_log2f64 
#define __DECL_SIMD_log2f128 
#define __DECL_SIMD_log2f32x 
#define __DECL_SIMD_log2f64x 
#define __DECL_SIMD_log2f128x 
#define __DECL_SIMD_log1p 
#define __DECL_SIMD_log1pf 
#define __DECL_SIMD_log1pl 
#define __DECL_SIMD_log1pf16 
#define __DECL_SIMD_log1pf32 
#define __DECL_SIMD_log1pf64 
#define __DECL_SIMD_log1pf128 
#define __DECL_SIMD_log1pf32x 
#define __DECL_SIMD_log1pf64x 
#define __DECL_SIMD_log1pf128x 
#define __DECL_SIMD_atanh 
#define __DECL_SIMD_atanhf 
#define __DECL_SIMD_atanhl 
#define __DECL_SIMD_atanhf16 
#define __DECL_SIMD_atanhf32 
#define __DECL_SIMD_atanhf64 
#define __DECL_SIMD_atanhf128 
#define __DECL_SIMD_atanhf32x 
#define __DECL_SIMD_atanhf64x 
#define __DECL_SIMD_atanhf128x 
#define __DECL_SIMD_acosh 
#define __DECL_SIMD_acoshf 
#define __DECL_SIMD_acoshl 
#define __DECL_SIMD_acoshf16 
#define __DECL_SIMD_acoshf32 
#define __DECL_SIMD_acoshf64 
#define __DECL_SIMD_acoshf128 
#define __DECL_SIMD_acoshf32x 
#define __DECL_SIMD_acoshf64x 
#define __DECL_SIMD_acoshf128x 
#define __DECL_SIMD_erf 
#define __DECL_SIMD_erff 
#define __DECL_SIMD_erfl 
#define __DECL_SIMD_erff16 
#define __DECL_SIMD_erff32 
#define __DECL_SIMD_erff64 
#define __DECL_SIMD_erff128 
#define __DECL_SIMD_erff32x 
#define __DECL_SIMD_erff64x 
#define __DECL_SIMD_erff128x 
#define __DECL_SIMD_tanh 
#define __DECL_SIMD_tanhf 
#define __DECL_SIMD_tanhl 
#define __DECL_SIMD_tanhf16 
#define __DECL_SIMD_tanhf32 
#define __DECL_SIMD_tanhf64 
#define __DECL_SIMD_tanhf128 
#define __DECL_SIMD_tanhf32x 
#define __DECL_SIMD_tanhf64x 
#define __DECL_SIMD_tanhf128x 
#define __DECL_SIMD_asinh 
#define __DECL_SIMD_asinhf 
#define __DECL_SIMD_asinhl 
#define __DECL_SIMD_asinhf16 
#define __DECL_SIMD_asinhf32 
#define __DECL_SIMD_asinhf64 
#define __DECL_SIMD_asinhf128 
#define __DECL_SIMD_asinhf32x 
#define __DECL_SIMD_asinhf64x 
#define __DECL_SIMD_asinhf128x 
#define __DECL_SIMD_erfc 
#define __DECL_SIMD_erfcf 
#define __DECL_SIMD_erfcl 
#define __DECL_SIMD_erfcf16 
#define __DECL_SIMD_erfcf32 
#define __DECL_SIMD_erfcf64 
#define __DECL_SIMD_erfcf128 
#define __DECL_SIMD_erfcf32x 
#define __DECL_SIMD_erfcf64x 
#define __DECL_SIMD_erfcf128x 
#define __DECL_SIMD_tan 
#define __DECL_SIMD_tanf 
#define __DECL_SIMD_tanl 
#define __DECL_SIMD_tanf16 
#define __DECL_SIMD_tanf32 
#define __DECL_SIMD_tanf64 
#define __DECL_SIMD_tanf128 
#define __DECL_SIMD_tanf32x 
#define __DECL_SIMD_tanf64x 
#define __DECL_SIMD_tanf128x 
#define HUGE_VAL (__builtin_huge_val ())
#define HUGE_VALF (__builtin_huge_valf ())
#define HUGE_VALL (__builtin_huge_vall ())
#define HUGE_VAL_F32 (__builtin_huge_valf32 ())
#define HUGE_VAL_F64 (__builtin_huge_valf64 ())
#define HUGE_VAL_F128 (__builtin_huge_valf128 ())
#define HUGE_VAL_F32X (__builtin_huge_valf32x ())
#define HUGE_VAL_F64X (__builtin_huge_valf64x ())
#define INFINITY (__builtin_inff ())
#define NAN (__builtin_nanf (""))
#define SNANF (__builtin_nansf (""))
#define SNAN (__builtin_nans (""))
#define SNANL (__builtin_nansl (""))
#define SNANF32 (__builtin_nansf32 (""))
#define SNANF64 (__builtin_nansf64 (""))
#define SNANF128 (__builtin_nansf128 (""))
#define SNANF32X (__builtin_nansf32x (""))
#define SNANF64X (__builtin_nansf64x (""))
#define __GLIBC_FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define __FP_LOGB0_IS_MIN 1
#define __FP_LOGBNAN_IS_MIN 1
#define FP_ILOGB0 (-2147483647 - 1)
#define FP_ILOGBNAN (-2147483647 - 1)
#define __FP_LONG_MAX 0x7fffffffffffffffL
#define FP_LLOGB0 (-__FP_LONG_MAX - 1)
#define FP_LLOGBNAN (-__FP_LONG_MAX - 1)
#define FP_INT_UPWARD 0
#define FP_INT_DOWNWARD 1
#define FP_INT_TOWARDZERO 2
#define FP_INT_TONEARESTFROMZERO 3
#define FP_INT_TONEAREST 4
#define __SIMD_DECL(function) __CONCAT (__DECL_SIMD_, function)
#define __MATHCALL_VEC(function,suffix,args) __SIMD_DECL (__MATH_PRECNAME (function, suffix)) __MATHCALL (function, suffix, args)
#define __MATHDECL_VEC(type,function,suffix,args) __SIMD_DECL (__MATH_PRECNAME (function, suffix)) __MATHDECL(type, function,suffix, args)
#define __MATHCALL(function,suffix,args) __MATHDECL (_Mdouble_,function,suffix, args)
#define __MATHDECL(type,function,suffix,args) __MATHDECL_1(type, function,suffix, args); __MATHDECL_1(type, __CONCAT(__,function),suffix, args)
#define __MATHCALLX(function,suffix,args,attrib) __MATHDECLX (_Mdouble_,function,suffix, args, attrib)
#define __MATHDECLX(type,function,suffix,args,attrib) __MATHDECL_1(type, function,suffix, args) __attribute__ (attrib); __MATHDECL_1(type, __CONCAT(__,function),suffix, args) __attribute__ (attrib)
#define __MATHDECL_1_IMPL(type,function,suffix,args) extern type __MATH_PRECNAME(function,suffix) args __THROW
#define __MATHDECL_1(type,function,suffix,args) __MATHDECL_1_IMPL(type, function, suffix, args)
#define __MATHDECL_ALIAS(type,function,suffix,args,alias) __MATHDECL_1(type, function, suffix, args)
#define __MATHREDIR(type,function,suffix,args,to) extern type __REDIRECT_NTH (__MATH_PRECNAME (function, suffix), args, to)
#define _Mdouble_ double
#define __MATH_PRECNAME(name,r) __CONCAT(name,r)
#define __MATH_DECLARING_DOUBLE 1
#define __MATH_DECLARING_FLOATN 0
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#define _Mdouble_ float
#define __MATH_PRECNAME(name,r) name ##f ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 0
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#define _Mdouble_ long double
#define __MATH_PRECNAME(name,r) name ##l ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 0
#define __MATH_DECLARE_LDOUBLE 1
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#define _Mdouble_ _Float32
#define __MATH_PRECNAME(name,r) name ##f32 ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#define _Mdouble_ _Float64
#define __MATH_PRECNAME(name,r) name ##f64 ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#define _Mdouble_ _Float128
#define __MATH_PRECNAME(name,r) name ##f128 ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#define _Mdouble_ _Float32x
#define __MATH_PRECNAME(name,r) name ##f32x ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#define _Mdouble_ _Float64x
#define __MATH_PRECNAME(name,r) name ##f64x ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __MATHDECL_1_IMPL
#undef __MATHDECL_1
#undef __MATHDECL_ALIAS
#undef __MATHDECL
#undef __MATHCALL
#define __MATHCALL_NARROW_ARGS_1 (_Marg_ __x)
#define __MATHCALL_NARROW_ARGS_2 (_Marg_ __x, _Marg_ __y)
#define __MATHCALL_NARROW_ARGS_3 (_Marg_ __x, _Marg_ __y, _Marg_ __z)
#define __MATHCALL_NARROW_NORMAL(func,nargs) extern _Mret_ func __MATHCALL_NARROW_ARGS_ ## nargs __THROW
#define __MATHCALL_NARROW_REDIR(func,redir,nargs) extern _Mret_ __REDIRECT_NTH (func, __MATHCALL_NARROW_ARGS_ ## nargs, redir)
#define __MATHCALL_NARROW(func,redir,nargs) __MATHCALL_NARROW_NORMAL (func, nargs)
#define _Mret_ float
#define _Marg_ double
#define __MATHCALL_NAME(name) f ## name
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ float
#define _Marg_ long double
#define __MATHCALL_NAME(name) f ## name ## l
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ double
#define _Marg_ long double
#define __MATHCALL_NAME(name) d ## name ## l
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float32
#define _Marg_ _Float32x
#define __MATHCALL_NAME(name) f32 ## name ## f32x
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float32
#define _Marg_ _Float64
#define __MATHCALL_NAME(name) f32 ## name ## f64
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float32
#define _Marg_ _Float64x
#define __MATHCALL_NAME(name) f32 ## name ## f64x
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float32
#define _Marg_ _Float128
#define __MATHCALL_NAME(name) f32 ## name ## f128
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float32x
#define _Marg_ _Float64
#define __MATHCALL_NAME(name) f32x ## name ## f64
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float32x
#define _Marg_ _Float64x
#define __MATHCALL_NAME(name) f32x ## name ## f64x
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float32x
#define _Marg_ _Float128
#define __MATHCALL_NAME(name) f32x ## name ## f128
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float64
#define _Marg_ _Float64x
#define __MATHCALL_NAME(name) f64 ## name ## f64x
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float64
#define _Marg_ _Float128
#define __MATHCALL_NAME(name) f64 ## name ## f128
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#define _Mret_ _Float64x
#define _Marg_ _Float128
#define __MATHCALL_NAME(name) f64x ## name ## f128
#undef _Mret_
#undef _Marg_
#undef __MATHCALL_NAME
#undef __MATHCALL_NARROW_ARGS_1
#undef __MATHCALL_NARROW_ARGS_2
#undef __MATHCALL_NARROW_ARGS_3
#undef __MATHCALL_NARROW_NORMAL
#undef __MATHCALL_NARROW_REDIR
#undef __MATHCALL_NARROW
#define __MATH_TG_F32(FUNC,ARGS) _Float32: FUNC ## f ARGS,
#define __MATH_TG_F64X(FUNC,ARGS) _Float64x: FUNC ## l ARGS,
#define __MATH_TG(TG_ARG,FUNC,ARGS) _Generic ((TG_ARG), float: FUNC ## f ARGS, __MATH_TG_F32 (FUNC, ARGS) default: FUNC ARGS, long double: FUNC ## l ARGS, __MATH_TG_F64X (FUNC, ARGS) _Float128: FUNC ## f128 ARGS)
#define FP_NAN 0
#define FP_INFINITE 1
#define FP_ZERO 2
#define FP_SUBNORMAL 3
#define FP_NORMAL 4
#define fpclassify(x) __builtin_fpclassify (FP_NAN, FP_INFINITE, FP_NORMAL, FP_SUBNORMAL, FP_ZERO, x)
#define signbit(x) __builtin_signbit (x)
#define isfinite(x) __builtin_isfinite (x)
#define isnormal(x) __builtin_isnormal (x)
#define isnan(x) __builtin_isnan (x)
#define isinf(x) __builtin_isinf_sign (x)
#define MATH_ERRNO 1
#define MATH_ERREXCEPT 2
#define math_errhandling (MATH_ERRNO | MATH_ERREXCEPT)
#define __iscanonicalf(x) ((void) (__typeof (x)) (x), 1)
#define __iscanonical(x) ((void) (__typeof (x)) (x), 1)
#define __iscanonicalf128(x) ((void) (__typeof (x)) (x), 1)
#define iscanonical(x) __MATH_TG ((x), __iscanonical, (x))
#define issignaling(x) __MATH_TG ((x), __issignaling, (x))
#define issubnormal(x) (fpclassify (x) == FP_SUBNORMAL)
#define iszero(x) (((__typeof (x)) (x)) == 0)
#define MAXFLOAT 3.40282347e+38F
#define M_E 2.7182818284590452354
#define M_LOG2E 1.4426950408889634074
#define M_LOG10E 0.43429448190325182765
#define M_LN2 0.69314718055994530942
#define M_LN10 2.30258509299404568402
#define M_PI 3.14159265358979323846
#define M_PI_2 1.57079632679489661923
#define M_PI_4 0.78539816339744830962
#define M_1_PI 0.31830988618379067154
#define M_2_PI 0.63661977236758134308
#define M_2_SQRTPI 1.12837916709551257390
#define M_SQRT2 1.41421356237309504880
#define M_SQRT1_2 0.70710678118654752440
#define M_Ef 2.7182818284590452354f
#define M_LOG2Ef 1.4426950408889634074f
#define M_LOG10Ef 0.43429448190325182765f
#define M_LN2f 0.69314718055994530942f
#define M_LN10f 2.30258509299404568402f
#define M_PIf 3.14159265358979323846f
#define M_PI_2f 1.57079632679489661923f
#define M_PI_4f 0.78539816339744830962f
#define M_1_PIf 0.31830988618379067154f
#define M_2_PIf 0.63661977236758134308f
#define M_2_SQRTPIf 1.12837916709551257390f
#define M_SQRT2f 1.41421356237309504880f
#define M_SQRT1_2f 0.70710678118654752440f
#define M_El 2.718281828459045235360287471352662498L
#define M_LOG2El 1.442695040888963407359924681001892137L
#define M_LOG10El 0.434294481903251827651128918916605082L
#define M_LN2l 0.693147180559945309417232121458176568L
#define M_LN10l 2.302585092994045684017991454684364208L
#define M_PIl 3.141592653589793238462643383279502884L
#define M_PI_2l 1.570796326794896619231321691639751442L
#define M_PI_4l 0.785398163397448309615660845819875721L
#define M_1_PIl 0.318309886183790671537767526745028724L
#define M_2_PIl 0.636619772367581343075535053490057448L
#define M_2_SQRTPIl 1.128379167095512573896158903121545172L
#define M_SQRT2l 1.414213562373095048801688724209698079L
#define M_SQRT1_2l 0.707106781186547524400844362104849039L
#define M_Ef32 __f32 (2.718281828459045235360287471352662498)
#define M_LOG2Ef32 __f32 (1.442695040888963407359924681001892137)
#define M_LOG10Ef32 __f32 (0.434294481903251827651128918916605082)
#define M_LN2f32 __f32 (0.693147180559945309417232121458176568)
#define M_LN10f32 __f32 (2.302585092994045684017991454684364208)
#define M_PIf32 __f32 (3.141592653589793238462643383279502884)
#define M_PI_2f32 __f32 (1.570796326794896619231321691639751442)
#define M_PI_4f32 __f32 (0.785398163397448309615660845819875721)
#define M_1_PIf32 __f32 (0.318309886183790671537767526745028724)
#define M_2_PIf32 __f32 (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf32 __f32 (1.128379167095512573896158903121545172)
#define M_SQRT2f32 __f32 (1.414213562373095048801688724209698079)
#define M_SQRT1_2f32 __f32 (0.707106781186547524400844362104849039)
#define M_Ef64 __f64 (2.718281828459045235360287471352662498)
#define M_LOG2Ef64 __f64 (1.442695040888963407359924681001892137)
#define M_LOG10Ef64 __f64 (0.434294481903251827651128918916605082)
#define M_LN2f64 __f64 (0.693147180559945309417232121458176568)
#define M_LN10f64 __f64 (2.302585092994045684017991454684364208)
#define M_PIf64 __f64 (3.141592653589793238462643383279502884)
#define M_PI_2f64 __f64 (1.570796326794896619231321691639751442)
#define M_PI_4f64 __f64 (0.785398163397448309615660845819875721)
#define M_1_PIf64 __f64 (0.318309886183790671537767526745028724)
#define M_2_PIf64 __f64 (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf64 __f64 (1.128379167095512573896158903121545172)
#define M_SQRT2f64 __f64 (1.414213562373095048801688724209698079)
#define M_SQRT1_2f64 __f64 (0.707106781186547524400844362104849039)
#define M_Ef128 __f128 (2.718281828459045235360287471352662498)
#define M_LOG2Ef128 __f128 (1.442695040888963407359924681001892137)
#define M_LOG10Ef128 __f128 (0.434294481903251827651128918916605082)
#define M_LN2f128 __f128 (0.693147180559945309417232121458176568)
#define M_LN10f128 __f128 (2.302585092994045684017991454684364208)
#define M_PIf128 __f128 (3.141592653589793238462643383279502884)
#define M_PI_2f128 __f128 (1.570796326794896619231321691639751442)
#define M_PI_4f128 __f128 (0.785398163397448309615660845819875721)
#define M_1_PIf128 __f128 (0.318309886183790671537767526745028724)
#define M_2_PIf128 __f128 (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf128 __f128 (1.128379167095512573896158903121545172)
#define M_SQRT2f128 __f128 (1.414213562373095048801688724209698079)
#define M_SQRT1_2f128 __f128 (0.707106781186547524400844362104849039)
#define M_Ef32x __f32x (2.718281828459045235360287471352662498)
#define M_LOG2Ef32x __f32x (1.442695040888963407359924681001892137)
#define M_LOG10Ef32x __f32x (0.434294481903251827651128918916605082)
#define M_LN2f32x __f32x (0.693147180559945309417232121458176568)
#define M_LN10f32x __f32x (2.302585092994045684017991454684364208)
#define M_PIf32x __f32x (3.141592653589793238462643383279502884)
#define M_PI_2f32x __f32x (1.570796326794896619231321691639751442)
#define M_PI_4f32x __f32x (0.785398163397448309615660845819875721)
#define M_1_PIf32x __f32x (0.318309886183790671537767526745028724)
#define M_2_PIf32x __f32x (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf32x __f32x (1.128379167095512573896158903121545172)
#define M_SQRT2f32x __f32x (1.414213562373095048801688724209698079)
#define M_SQRT1_2f32x __f32x (0.707106781186547524400844362104849039)
#define M_Ef64x __f64x (2.718281828459045235360287471352662498)
#define M_LOG2Ef64x __f64x (1.442695040888963407359924681001892137)
#define M_LOG10Ef64x __f64x (0.434294481903251827651128918916605082)
#define M_LN2f64x __f64x (0.693147180559945309417232121458176568)
#define M_LN10f64x __f64x (2.302585092994045684017991454684364208)
#define M_PIf64x __f64x (3.141592653589793238462643383279502884)
#define M_PI_2f64x __f64x (1.570796326794896619231321691639751442)
#define M_PI_4f64x __f64x (0.785398163397448309615660845819875721)
#define M_1_PIf64x __f64x (0.318309886183790671537767526745028724)
#define M_2_PIf64x __f64x (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf64x __f64x (1.128379167095512573896158903121545172)
#define M_SQRT2f64x __f64x (1.414213562373095048801688724209698079)
#define M_SQRT1_2f64x __f64x (0.707106781186547524400844362104849039)
#define isgreater(x,y) __builtin_isgreater(x, y)
#define isgreaterequal(x,y) __builtin_isgreaterequal(x, y)
#define isless(x,y) __builtin_isless(x, y)
#define islessequal(x,y) __builtin_islessequal(x, y)
#define islessgreater(x,y) __builtin_islessgreater(x, y)
#define isunordered(x,y) __builtin_isunordered(x, y)
#define __MATH_EVAL_FMT2(x,y) ((x) + (y) + 0.0f)
#define iseqsig(x,y) __MATH_TG (__MATH_EVAL_FMT2 (x, y), __iseqsig, ((x), (y)))
#undef RUBY_EXTERN
#define RUBY_EXTERN extern
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define RUBY 
#undef _
#define _(args) args
#undef __
#define __(args) args
#define ANYARGS 
#pragma GCC visibility push(default)
#define xmalloc ruby_xmalloc
#define xmalloc2 ruby_xmalloc2
#define xcalloc ruby_xcalloc
#define xrealloc ruby_xrealloc
#define xrealloc2 ruby_xrealloc2
#define xfree ruby_xfree
#define RUBY_ATTR_ALLOC_SIZE(params) __attribute__ ((alloc_size params))
#define USE_GC_MALLOC_OBJ_INFO_DETAILS 0
#define STRINGIZE(expr) STRINGIZE0(expr)
#define STRINGIZE0(expr) #expr
#define HAVE_TRUE_LONG_LONG 1
#define LONG_LONG long long
#undef RUBY_EXTERN
#define FALSE 0
#define TRUE 1
#define MJIT_FUNC_EXPORTED RUBY_FUNC_EXPORTED
#define MJIT_SYMBOL_EXPORT_BEGIN RUBY_SYMBOL_EXPORT_BEGIN
#define MJIT_SYMBOL_EXPORT_END RUBY_SYMBOL_EXPORT_END
#define RUBY_EXTERN extern
#define EXTERN _Pragma("message \"EXTERN is deprecated, use RUBY_EXTERN instead\""); RUBY_EXTERN
#define RUBY_MBCHAR_MAXSIZE INT_MAX
#define FLUSH_REGISTER_WINDOWS ((void)0)
#define PATH_SEP ":"
#define PATH_SEP_CHAR PATH_SEP[0]
#define PATH_ENV "PATH"
#define CASEFOLD_FILESYSTEM 0
#define RUBY_ALIAS_FUNCTION(prot,name,args) RUBY_ALIAS_FUNCTION_TYPE(VALUE, prot, name, args)
#define UNALIGNED_WORD_ACCESS 1
#define PACKED_STRUCT_UNALIGNED(x) PACKED_STRUCT(x)
#define NORETURN_STYLE_NEW 1
#pragma GCC visibility pop
#define ASSUME(x) (RB_LIKELY(!!(x)) ? (void)0 : UNREACHABLE)
#define UNREACHABLE_RETURN(val) UNREACHABLE
#define RUBY_MACRO_SELECT(base,n) TOKEN_PASTE(base, n)
#define _STDARG_H 
#define _ANSI_STDARG_H_ 
#undef __need___va_list
#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define va_copy(d,s) __builtin_va_copy(d,s)
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define _VA_LIST_ 
#define _VA_LIST 
#define _VA_LIST_T_H 
#define __va_list__ 
#pragma GCC visibility push(default)
#define SIGNED_VALUE long
#define SIZEOF_VALUE SIZEOF_LONG
#define PRI_VALUE_PREFIX "l"
#define PRI_INT_PREFIX ""
#define PRI_LONG_PREFIX "l"
#define PRI_SHORT_PREFIX "h"
#define PRI_64_PREFIX PRI_LONG_PREFIX
#define RUBY_PRI_VALUE_MARK "\v"
#define PRIdVALUE PRI_VALUE_PREFIX"d"
#define PRIoVALUE PRI_VALUE_PREFIX"o"
#define PRIuVALUE PRI_VALUE_PREFIX"u"
#define PRIxVALUE PRI_VALUE_PREFIX"x"
#define PRIXVALUE PRI_VALUE_PREFIX"X"
#define PRIsVALUE PRI_VALUE_PREFIX"i" RUBY_PRI_VALUE_MARK
#define PRIdPTRDIFF PRI_PTRDIFF_PREFIX"d"
#define PRIiPTRDIFF PRI_PTRDIFF_PREFIX"i"
#define PRIoPTRDIFF PRI_PTRDIFF_PREFIX"o"
#define PRIuPTRDIFF PRI_PTRDIFF_PREFIX"u"
#define PRIxPTRDIFF PRI_PTRDIFF_PREFIX"x"
#define PRIXPTRDIFF PRI_PTRDIFF_PREFIX"X"
#define PRIdSIZE PRI_SIZE_PREFIX"d"
#define PRIiSIZE PRI_SIZE_PREFIX"i"
#define PRIoSIZE PRI_SIZE_PREFIX"o"
#define PRIuSIZE PRI_SIZE_PREFIX"u"
#define PRIxSIZE PRI_SIZE_PREFIX"x"
#define PRIXSIZE PRI_SIZE_PREFIX"X"
#define _GCC_LIMITS_H_ 
#define _GCC_NEXT_LIMITS_H 
#define _LIBC_LIMITS_H_ 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#undef __GLIBC_USE_LIB_EXT2
#define __GLIBC_USE_LIB_EXT2 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#define __GLIBC_USE_IEC_60559_BFP_EXT 1
#undef __GLIBC_USE_IEC_60559_BFP_EXT_C2X
#define __GLIBC_USE_IEC_60559_BFP_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_EXT
#define __GLIBC_USE_IEC_60559_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X
#define __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X 1
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#define MB_LEN_MAX 16
#define LLONG_MIN (-LLONG_MAX-1)
#define LLONG_MAX __LONG_LONG_MAX__
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1)
#define CHAR_WIDTH 8
#define SCHAR_WIDTH 8
#define UCHAR_WIDTH 8
#define SHRT_WIDTH 16
#define USHRT_WIDTH 16
#define INT_WIDTH 32
#define UINT_WIDTH 32
#define LONG_WIDTH __WORDSIZE
#define ULONG_WIDTH __WORDSIZE
#define LLONG_WIDTH 64
#define ULLONG_WIDTH 64
#define BOOL_MAX 1
#define BOOL_WIDTH 1
#define _BITS_POSIX1_LIM_H 1
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define _POSIX_AIO_LISTIO_MAX 2
#define _POSIX_AIO_MAX 1
#define _POSIX_ARG_MAX 4096
#define _POSIX_CHILD_MAX 25
#define _POSIX_DELAYTIMER_MAX 32
#define _POSIX_HOST_NAME_MAX 255
#define _POSIX_LINK_MAX 8
#define _POSIX_LOGIN_NAME_MAX 9
#define _POSIX_MAX_CANON 255
#define _POSIX_MAX_INPUT 255
#define _POSIX_MQ_OPEN_MAX 8
#define _POSIX_MQ_PRIO_MAX 32
#define _POSIX_NAME_MAX 14
#define _POSIX_NGROUPS_MAX 8
#define _POSIX_OPEN_MAX 20
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define _POSIX_PATH_MAX 256
#define _POSIX_PIPE_BUF 512
#define _POSIX_RE_DUP_MAX 255
#define _POSIX_RTSIG_MAX 8
#define _POSIX_SEM_NSEMS_MAX 256
#define _POSIX_SEM_VALUE_MAX 32767
#define _POSIX_SIGQUEUE_MAX 32
#define _POSIX_SSIZE_MAX 32767
#define _POSIX_STREAM_MAX 8
#define _POSIX_SYMLINK_MAX 255
#define _POSIX_SYMLOOP_MAX 8
#define _POSIX_TIMER_MAX 32
#define _POSIX_TTY_NAME_MAX 9
#define _POSIX_TZNAME_MAX 6
#define _POSIX_QLIMIT 1
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define _POSIX_UIO_MAXIOV 16
#define _POSIX_CLOCKRES_MIN 20000000
#define __undef_NR_OPEN 
#define __undef_LINK_MAX 
#define __undef_OPEN_MAX 
#define __undef_ARG_MAX 
#define _LINUX_LIMITS_H 
#define NR_OPEN 1024
#define NGROUPS_MAX 65536
#define ARG_MAX 131072
#define LINK_MAX 127
#define MAX_CANON 255
#define MAX_INPUT 255
#define NAME_MAX 255
#define PATH_MAX 4096
#define PIPE_BUF 4096
#define XATTR_NAME_MAX 255
#define XATTR_SIZE_MAX 65536
#define XATTR_LIST_MAX 65536
#define RTSIG_MAX 32
#undef NR_OPEN
#undef __undef_NR_OPEN
#undef LINK_MAX
#undef __undef_LINK_MAX
#undef OPEN_MAX
#undef __undef_OPEN_MAX
#undef ARG_MAX
#undef __undef_ARG_MAX
#define _POSIX_THREAD_KEYS_MAX 128
#define PTHREAD_KEYS_MAX 1024
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define _POSIX_THREAD_THREADS_MAX 64
#undef PTHREAD_THREADS_MAX
#define AIO_PRIO_DELTA_MAX 20
#define __SC_THREAD_STACK_MIN_VALUE 75
#define PTHREAD_STACK_MIN __sysconf (__SC_THREAD_STACK_MIN_VALUE)
#define DELAYTIMER_MAX 2147483647
#define TTY_NAME_MAX 32
#define LOGIN_NAME_MAX 256
#define HOST_NAME_MAX 64
#define MQ_PRIO_MAX 32768
#define SEM_VALUE_MAX (2147483647)
#define SSIZE_MAX LONG_MAX
#define _BITS_POSIX2_LIM_H 1
#define _POSIX2_BC_BASE_MAX 99
#define _POSIX2_BC_DIM_MAX 2048
#define _POSIX2_BC_SCALE_MAX 99
#define _POSIX2_BC_STRING_MAX 1000
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define _POSIX2_EXPR_NEST_MAX 32
#define _POSIX2_LINE_MAX 2048
#define _POSIX2_RE_DUP_MAX 255
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define COLL_WEIGHTS_MAX 255
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define LINE_MAX _POSIX2_LINE_MAX
#define CHARCLASS_NAME_MAX 2048
#define RE_DUP_MAX (0x7fff)
#define _XOPEN_LIM_H 1
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define _BITS_UIO_LIM_H 1
#define __IOV_MAX 1024
#define IOV_MAX __IOV_MAX
#define NL_ARGMAX _POSIX_ARG_MAX
#define NL_LANGMAX _POSIX2_LINE_MAX
#define NL_MSGMAX INT_MAX
#define NL_NMAX INT_MAX
#define NL_SETMAX INT_MAX
#define NL_TEXTMAX INT_MAX
#define NZERO 20
#define WORD_BIT 32
#define LONG_BIT 64
#undef _GCC_NEXT_LIMITS_H
#define _LIMITS_H___ 
#undef CHAR_BIT
#define CHAR_BIT __CHAR_BIT__
#undef SCHAR_MIN
#define SCHAR_MIN (-SCHAR_MAX - 1)
#undef SCHAR_MAX
#define SCHAR_MAX __SCHAR_MAX__
#undef UCHAR_MAX
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#undef CHAR_MIN
#define CHAR_MIN SCHAR_MIN
#undef CHAR_MAX
#define CHAR_MAX SCHAR_MAX
#undef SHRT_MIN
#define SHRT_MIN (-SHRT_MAX - 1)
#undef SHRT_MAX
#define SHRT_MAX __SHRT_MAX__
#undef USHRT_MAX
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#undef INT_MIN
#define INT_MIN (-INT_MAX - 1)
#undef INT_MAX
#define INT_MAX __INT_MAX__
#undef UINT_MAX
#define UINT_MAX (INT_MAX * 2U + 1U)
#undef LONG_MIN
#define LONG_MIN (-LONG_MAX - 1L)
#undef LONG_MAX
#define LONG_MAX __LONG_MAX__
#undef ULONG_MAX
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#undef LLONG_MIN
#define LLONG_MIN (-LLONG_MAX - 1LL)
#undef LLONG_MAX
#define LLONG_MAX __LONG_LONG_MAX__
#undef ULLONG_MAX
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#undef LONG_LONG_MIN
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#undef LONG_LONG_MAX
#define LONG_LONG_MAX __LONG_LONG_MAX__
#undef ULONG_LONG_MAX
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define RUBY_FIXNUM_MAX (LONG_MAX>>1)
#define RUBY_FIXNUM_MIN RSHIFT((long)LONG_MIN,1)
#define FIXNUM_MAX RUBY_FIXNUM_MAX
#define FIXNUM_MIN RUBY_FIXNUM_MIN
#define RB_INT2FIX(i) (((VALUE)(i))<<1 | RUBY_FIXNUM_FLAG)
#define INT2FIX(i) RB_INT2FIX(i)
#define RB_LONG2FIX(i) RB_INT2FIX(i)
#define LONG2FIX(i) RB_INT2FIX(i)
#define rb_fix_new(v) RB_INT2FIX(v)
#define rb_int_new(v) rb_int2inum(v)
#define rb_uint_new(v) rb_uint2inum(v)
#define LL2NUM(v) rb_ll2inum(v)
#define ULL2NUM(v) rb_ull2inum(v)
#define SIZET2NUM(v) ULONG2NUM(v)
#define SSIZET2NUM(v) LONG2NUM(v)
#define rb_long2int(n) rb_long2int_inline(n)
#define RB_FIX2LONG(x) ((long)RSHIFT((SIGNED_VALUE)(x),1))
#define RB_FIX2ULONG(x) ((unsigned long)RB_FIX2LONG(x))
#define RB_FIXNUM_P(f) (((int)(SIGNED_VALUE)(f))&RUBY_FIXNUM_FLAG)
#define RB_POSFIXABLE(f) ((f) < RUBY_FIXNUM_MAX+1)
#define RB_NEGFIXABLE(f) ((f) >= RUBY_FIXNUM_MIN)
#define RB_FIXABLE(f) (RB_POSFIXABLE(f) && RB_NEGFIXABLE(f))
#define FIX2LONG(x) RB_FIX2LONG(x)
#define FIX2ULONG(x) RB_FIX2ULONG(x)
#define FIXNUM_P(f) RB_FIXNUM_P(f)
#define POSFIXABLE(f) RB_POSFIXABLE(f)
#define NEGFIXABLE(f) RB_NEGFIXABLE(f)
#define FIXABLE(f) RB_FIXABLE(f)
#define RB_IMMEDIATE_P(x) ((VALUE)(x) & RUBY_IMMEDIATE_MASK)
#define IMMEDIATE_P(x) RB_IMMEDIATE_P(x)
#define RB_STATIC_SYM_P(x) (((VALUE)(x)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)
#define RB_DYNAMIC_SYM_P(x) (!RB_SPECIAL_CONST_P(x) && RB_BUILTIN_TYPE(x) == (RUBY_T_SYMBOL))
#define RB_SYMBOL_P(x) (RB_STATIC_SYM_P(x)||RB_DYNAMIC_SYM_P(x))
#define RB_ID2SYM(x) (rb_id2sym(x))
#define RB_SYM2ID(x) (rb_sym2id(x))
#define STATIC_SYM_P(x) RB_STATIC_SYM_P(x)
#define DYNAMIC_SYM_P(x) RB_DYNAMIC_SYM_P(x)
#define SYMBOL_P(x) RB_SYMBOL_P(x)
#define ID2SYM(x) RB_ID2SYM(x)
#define SYM2ID(x) RB_SYM2ID(x)
#define USE_FLONUM 1
#define RB_FLONUM_P(x) ((((int)(SIGNED_VALUE)(x))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)
#define FLONUM_P(x) RB_FLONUM_P(x)
#define USE_SYMBOL_AS_METHOD_NAME 1
#define RUBY_Qfalse ((VALUE)RUBY_Qfalse)
#define RUBY_Qtrue ((VALUE)RUBY_Qtrue)
#define RUBY_Qnil ((VALUE)RUBY_Qnil)
#define RUBY_Qundef ((VALUE)RUBY_Qundef)
#define Qfalse RUBY_Qfalse
#define Qtrue RUBY_Qtrue
#define Qnil RUBY_Qnil
#define Qundef RUBY_Qundef
#define IMMEDIATE_MASK RUBY_IMMEDIATE_MASK
#define FIXNUM_FLAG RUBY_FIXNUM_FLAG
#define FLONUM_MASK RUBY_FLONUM_MASK
#define FLONUM_FLAG RUBY_FLONUM_FLAG
#define SYMBOL_FLAG RUBY_SYMBOL_FLAG
#define RB_TEST(v) !(((VALUE)(v) & (VALUE)~RUBY_Qnil) == 0)
#define RB_NIL_P(v) !((VALUE)(v) != RUBY_Qnil)
#define RTEST(v) RB_TEST(v)
#define NIL_P(v) RB_NIL_P(v)
#define CLASS_OF(v) rb_class_of((VALUE)(v))
#define T_NONE RUBY_T_NONE
#define T_NIL RUBY_T_NIL
#define T_OBJECT RUBY_T_OBJECT
#define T_CLASS RUBY_T_CLASS
#define T_ICLASS RUBY_T_ICLASS
#define T_MODULE RUBY_T_MODULE
#define T_FLOAT RUBY_T_FLOAT
#define T_STRING RUBY_T_STRING
#define T_REGEXP RUBY_T_REGEXP
#define T_ARRAY RUBY_T_ARRAY
#define T_HASH RUBY_T_HASH
#define T_STRUCT RUBY_T_STRUCT
#define T_BIGNUM RUBY_T_BIGNUM
#define T_FILE RUBY_T_FILE
#define T_FIXNUM RUBY_T_FIXNUM
#define T_TRUE RUBY_T_TRUE
#define T_FALSE RUBY_T_FALSE
#define T_DATA RUBY_T_DATA
#define T_MATCH RUBY_T_MATCH
#define T_SYMBOL RUBY_T_SYMBOL
#define T_RATIONAL RUBY_T_RATIONAL
#define T_COMPLEX RUBY_T_COMPLEX
#define T_IMEMO RUBY_T_IMEMO
#define T_UNDEF RUBY_T_UNDEF
#define T_NODE RUBY_T_NODE
#define T_ZOMBIE RUBY_T_ZOMBIE
#define T_MASK RUBY_T_MASK
#define RB_BUILTIN_TYPE(x) (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK)
#define BUILTIN_TYPE(x) RB_BUILTIN_TYPE(x)
#define TYPE(x) rb_type((VALUE)(x))
#define RB_FLOAT_TYPE_P(obj) ( RB_FLONUM_P(obj) || (!RB_SPECIAL_CONST_P(obj) && RB_BUILTIN_TYPE(obj) == RUBY_T_FLOAT))
#define RB_TYPE_P(obj,type) ( ((type) == RUBY_T_FIXNUM) ? RB_FIXNUM_P(obj) : ((type) == RUBY_T_TRUE) ? ((obj) == RUBY_Qtrue) : ((type) == RUBY_T_FALSE) ? ((obj) == RUBY_Qfalse) : ((type) == RUBY_T_NIL) ? ((obj) == RUBY_Qnil) : ((type) == RUBY_T_UNDEF) ? ((obj) == RUBY_Qundef) : ((type) == RUBY_T_SYMBOL) ? RB_SYMBOL_P(obj) : ((type) == RUBY_T_FLOAT) ? RB_FLOAT_TYPE_P(obj) : (!RB_SPECIAL_CONST_P(obj) && RB_BUILTIN_TYPE(obj) == (type)))
#define RB_GC_GUARD(v) (*__extension__ ({ volatile VALUE *rb_gc_guarded_ptr = &(v); __asm__("" : : "m"(rb_gc_guarded_ptr)); rb_gc_guarded_ptr; }))
#define RB_UNUSED_VAR(x) x __attribute__ ((unused))
#define Check_Type(v,t) rb_check_type((VALUE)(v),(t))
#define StringValue(v) rb_string_value(&(v))
#define StringValuePtr(v) rb_string_value_ptr(&(v))
#define StringValueCStr(v) rb_string_value_cstr(&(v))
#define SafeStringValue(v) do { StringValue(v); rb_check_safe_obj(v);} while (0)
#define Check_SafeStr(v) rb_check_safe_str((VALUE)(v))
#define ExportStringValue(v) do { SafeStringValue(v); (v) = rb_str_export(v);} while (0)
#define FilePathValue(v) (RB_GC_GUARD(v) = rb_get_path(v))
#define FilePathStringValue(v) ((v) = rb_get_path_no_checksafe(v))
#define RUBY_SAFE_LEVEL_MAX 1
#define ruby_safe_level_2_warning() ruby_safe_level_2_error()
#define RUBY_SAFE_LEVEL_INVALID_P(level) __extension__( __builtin_choose_expr( __builtin_constant_p(level), ((level) < 0 || RUBY_SAFE_LEVEL_MAX < (level)), 0))
#define RUBY_SAFE_LEVEL_CHECK(level,type) __extension__(__builtin_choose_expr(RUBY_SAFE_LEVEL_INVALID_P(level), ruby_safe_level_2_ ##type(), (level)))
#define rb_secure(level) rb_secure(RUBY_SAFE_LEVEL_CHECK(level, warning))
#define rb_set_safe_level(level) rb_set_safe_level(RUBY_SAFE_LEVEL_CHECK(level, error))
#define RB_NUM2LONG(x) rb_num2long_inline(x)
#define NUM2LONG(x) RB_NUM2LONG(x)
#define RB_NUM2ULONG(x) rb_num2ulong_inline(x)
#define NUM2ULONG(x) RB_NUM2ULONG(x)
#define RB_FIX2INT(x) ((int)rb_fix2int((VALUE)(x)))
#define RB_NUM2INT(x) rb_num2int_inline(x)
#define RB_NUM2UINT(x) ((unsigned int)rb_num2uint(x))
#define RB_FIX2UINT(x) ((unsigned int)rb_fix2uint(x))
#define NUM2INT(x) RB_NUM2INT(x)
#define NUM2UINT(x) RB_NUM2UINT(x)
#define FIX2INT(x) RB_FIX2INT(x)
#define FIX2UINT(x) RB_FIX2UINT(x)
#define RB_FIX2SHORT(x) (rb_fix2short((VALUE)(x)))
#define FIX2SHORT(x) RB_FIX2SHORT(x)
#define RB_NUM2SHORT(x) rb_num2short_inline(x)
#define RB_NUM2USHORT(x) rb_num2ushort(x)
#define NUM2SHORT(x) RB_NUM2SHORT(x)
#define NUM2USHORT(x) RB_NUM2USHORT(x)
#define RB_NUM2LL(x) rb_num2ll_inline(x)
#define RB_NUM2ULL(x) rb_num2ull(x)
#define NUM2LL(x) RB_NUM2LL(x)
#define NUM2ULL(x) RB_NUM2ULL(x)
#define NUM2SIZET(x) NUM2ULONG(x)
#define NUM2SSIZET(x) NUM2LONG(x)
#define NUM2DBL(x) rb_num2dbl((VALUE)(x))
#define RB_NEWOBJ(obj,type) type *(obj) = (type*)rb_newobj()
#define RB_NEWOBJ_OF(obj,type,klass,flags) type *(obj) = (type*)rb_newobj_of(klass, flags)
#define NEWOBJ(obj,type) RB_NEWOBJ(obj,type)
#define NEWOBJ_OF(obj,type,klass,flags) RB_NEWOBJ_OF(obj,type,klass,flags)
#define OBJSETUP(obj,c,t) rb_obj_setup(obj, c, t)
#define CLONESETUP(clone,obj) rb_clone_setup(clone,obj)
#define DUPSETUP(dup,obj) rb_dup_setup(dup,obj)
#define USE_RGENGC 1
#define USE_RINCGC 1
#define RGENGC_WB_PROTECTED_ARRAY 1
#define RGENGC_WB_PROTECTED_HASH 1
#define RGENGC_WB_PROTECTED_STRUCT 1
#define RGENGC_WB_PROTECTED_STRING 1
#define RGENGC_WB_PROTECTED_OBJECT 1
#define RGENGC_WB_PROTECTED_REGEXP 1
#define RGENGC_WB_PROTECTED_CLASS 1
#define RGENGC_WB_PROTECTED_FLOAT 1
#define RGENGC_WB_PROTECTED_COMPLEX 1
#define RGENGC_WB_PROTECTED_RATIONAL 1
#define RGENGC_WB_PROTECTED_BIGNUM 1
#define RGENGC_WB_PROTECTED_NODE_CREF 1
#define RUBY_FL_USER_N(n) RUBY_FL_USER ##n = (1<<(RUBY_FL_USHIFT+n))
#define RB_OBJ_WB_UNPROTECT_FOR(type,obj) __extension__( __builtin_choose_expr( RGENGC_WB_PROTECTED_ ##type, OBJ_WB_UNPROTECT((VALUE)(obj)), ((VALUE)(obj))))
#define RBASIC_CLASS(obj) (RBASIC(obj)->klass)
#define ROBJECT_EMBED_LEN_MAX ROBJECT_EMBED_LEN_MAX
#define ROBJECT_EMBED ROBJECT_EMBED
#define ROBJECT_NUMIV(o) ((RBASIC(o)->flags & ROBJECT_EMBED) ? ROBJECT_EMBED_LEN_MAX : ROBJECT(o)->as.heap.numiv)
#define ROBJECT_IVPTR(o) ((RBASIC(o)->flags & ROBJECT_EMBED) ? ROBJECT(o)->as.ary : ROBJECT(o)->as.heap.ivptr)
#define ROBJECT_IV_INDEX_TBL(o) ((RBASIC(o)->flags & ROBJECT_EMBED) ? RCLASS_IV_INDEX_TBL(rb_obj_class(o)) : ROBJECT(o)->as.heap.iv_index_tbl)
#define RCLASS_SUPER(c) rb_class_get_superclass(c)
#define RMODULE_IV_TBL(m) RCLASS_IV_TBL(m)
#define RMODULE_CONST_TBL(m) RCLASS_CONST_TBL(m)
#define RMODULE_M_TBL(m) RCLASS_M_TBL(m)
#define RMODULE_SUPER(m) RCLASS_SUPER(m)
#define RMODULE_IS_OVERLAID RMODULE_IS_OVERLAID
#define RMODULE_IS_REFINEMENT RMODULE_IS_REFINEMENT
#define RMODULE_INCLUDED_INTO_REFINEMENT RMODULE_INCLUDED_INTO_REFINEMENT
#define RFLOAT_VALUE(v) rb_float_value(v)
#define DBL2NUM(dbl) rb_float_new(dbl)
#define RUBY_ELTS_SHARED RUBY_ELTS_SHARED
#define ELTS_SHARED RUBY_ELTS_SHARED
#define RSTRING_NOEMBED RSTRING_NOEMBED
#define RSTRING_EMBED_LEN_MASK RSTRING_EMBED_LEN_MASK
#define RSTRING_EMBED_LEN_SHIFT RSTRING_EMBED_LEN_SHIFT
#define RSTRING_EMBED_LEN_MAX RSTRING_EMBED_LEN_MAX
#define RSTRING_FSTR RSTRING_FSTR
#define RSTRING_EMBED_LEN(str) (long)((RBASIC(str)->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))
#define RSTRING_LEN(str) (!(RBASIC(str)->flags & RSTRING_NOEMBED) ? RSTRING_EMBED_LEN(str) : RSTRING(str)->as.heap.len)
#define RSTRING_PTR(str) (!(RBASIC(str)->flags & RSTRING_NOEMBED) ? RSTRING(str)->as.ary : RSTRING(str)->as.heap.ptr)
#define RSTRING_END(str) (!(RBASIC(str)->flags & RSTRING_NOEMBED) ? (RSTRING(str)->as.ary + RSTRING_EMBED_LEN(str)) : (RSTRING(str)->as.heap.ptr + RSTRING(str)->as.heap.len))
#define RSTRING_LENINT(str) rb_long2int(RSTRING_LEN(str))
#define RSTRING_GETMEM(str,ptrvar,lenvar) (!(RBASIC(str)->flags & RSTRING_NOEMBED) ? ((ptrvar) = RSTRING(str)->as.ary, (lenvar) = RSTRING_EMBED_LEN(str)) : ((ptrvar) = RSTRING(str)->as.heap.ptr, (lenvar) = RSTRING(str)->as.heap.len))
#define USE_TRANSIENT_HEAP 1
#define RARRAY_TRANSIENT_FLAG RARRAY_TRANSIENT_FLAG
#define RARRAY_EMBED_FLAG (VALUE)RARRAY_EMBED_FLAG
#define RARRAY_EMBED_LEN_MASK (VALUE)RARRAY_EMBED_LEN_MASK
#define RARRAY_EMBED_LEN_MAX RARRAY_EMBED_LEN_MAX
#define RARRAY_EMBED_LEN_SHIFT RARRAY_EMBED_LEN_SHIFT
#define RARRAY_EMBED_LEN(a) (long)((RBASIC(a)->flags >> RARRAY_EMBED_LEN_SHIFT) & (RARRAY_EMBED_LEN_MASK >> RARRAY_EMBED_LEN_SHIFT))
#define RARRAY_LEN(a) rb_array_len(a)
#define RARRAY_LENINT(ary) rb_long2int(RARRAY_LEN(ary))
#define RARRAY_CONST_PTR(a) rb_array_const_ptr(a)
#define RARRAY_CONST_PTR_TRANSIENT(a) rb_array_const_ptr_transient(a)
#define RARRAY_TRANSIENT_P(ary) FL_TEST_RAW((ary), RARRAY_TRANSIENT_FLAG)
#define RARRAY_PTR_USE_START_TRANSIENT(a) rb_array_ptr_use_start(a, 1)
#define RARRAY_PTR_USE_END_TRANSIENT(a) rb_array_ptr_use_end(a, 1)
#define RARRAY_PTR_USE_TRANSIENT(ary,ptr_name,expr) do { const VALUE _ary = (ary); VALUE *ptr_name = (VALUE *)RARRAY_PTR_USE_START_TRANSIENT(_ary); expr; RARRAY_PTR_USE_END_TRANSIENT(_ary); } while (0)
#define RARRAY_PTR_USE_START(a) rb_array_ptr_use_start(a, 0)
#define RARRAY_PTR_USE_END(a) rb_array_ptr_use_end(a, 0)
#define RARRAY_PTR_USE(ary,ptr_name,expr) do { const VALUE _ary = (ary); VALUE *ptr_name = (VALUE *)RARRAY_PTR_USE_START(_ary); expr; RARRAY_PTR_USE_END(_ary); } while (0)
#define RARRAY_AREF(a,i) (RARRAY_CONST_PTR_TRANSIENT(a)[i])
#define RARRAY_ASET(a,i,v) do { const VALUE _ary = (a); const VALUE _v = (v); VALUE *ptr = (VALUE *)RARRAY_PTR_USE_START_TRANSIENT(_ary); RB_OBJ_WRITE(_ary, &ptr[i], _v); RARRAY_PTR_USE_END_TRANSIENT(_ary); } while (0)
#define RARRAY_PTR(a) ((VALUE *)RARRAY_CONST_PTR(RB_OBJ_WB_UNPROTECT_FOR(ARRAY, a)))
#define RREGEXP_PTR(r) (RREGEXP(r)->ptr)
#define RREGEXP_SRC(r) (RREGEXP(r)->src)
#define RREGEXP_SRC_PTR(r) RSTRING_PTR(RREGEXP(r)->src)
#define RREGEXP_SRC_LEN(r) RSTRING_LEN(RREGEXP(r)->src)
#define RREGEXP_SRC_END(r) RSTRING_END(RREGEXP(r)->src)
#define RHASH_TBL(h) rb_hash_tbl(h, __FILE__, __LINE__)
#define RHASH_ITER_LEV(h) rb_hash_iter_lev(h)
#define RHASH_IFNONE(h) rb_hash_ifnone(h)
#define RHASH_SIZE(h) rb_hash_size_num(h)
#define RHASH_EMPTY_P(h) (RHASH_SIZE(h) == 0)
#define RHASH_SET_IFNONE(h,ifnone) rb_hash_set_ifnone((VALUE)h, ifnone)
#define HAVE_TYPE_RB_DATA_TYPE_T 1
#define HAVE_RB_DATA_TYPE_T_FUNCTION 1
#define HAVE_RB_DATA_TYPE_T_PARENT 1
#define DATA_PTR(dta) (RDATA(dta)->data)
#define RTYPEDDATA_P(v) (RTYPEDDATA(v)->typed_flag == 1)
#define RTYPEDDATA_TYPE(v) (RTYPEDDATA(v)->type)
#define RTYPEDDATA_DATA(v) (RTYPEDDATA(v)->data)
#define RUBY_UNTYPED_DATA_WARNING 1
#define Check_TypedStruct(v,t) rb_check_typeddata((VALUE)(v),(t))
#define RUBY_DEFAULT_FREE ((RUBY_DATA_FUNC)-1)
#define RUBY_NEVER_FREE ((RUBY_DATA_FUNC)0)
#define RUBY_TYPED_DEFAULT_FREE RUBY_DEFAULT_FREE
#define RUBY_TYPED_NEVER_FREE RUBY_NEVER_FREE
#define RUBY_TYPED_FREE_IMMEDIATELY 1
#define RUBY_TYPED_WB_PROTECTED RUBY_FL_WB_PROTECTED
#define RUBY_TYPED_PROMOTED1 RUBY_FL_PROMOTED1
#define Data_Wrap_Struct(klass,mark,free,sval) rb_data_object_wrap((klass),(sval),(RUBY_DATA_FUNC)(mark),(RUBY_DATA_FUNC)(free))
#define Data_Make_Struct0(result,klass,type,size,mark,free,sval) VALUE result = rb_data_object_zalloc((klass), (size), (RUBY_DATA_FUNC)(mark), (RUBY_DATA_FUNC)(free)); (void)((sval) = (type *)DATA_PTR(result));
#define Data_Make_Struct(klass,type,mark,free,sval) RB_GNUC_EXTENSION_BLOCK( Data_Make_Struct0(data_struct_obj, klass, type, sizeof(type), mark, free, sval); data_struct_obj )
#define TypedData_Wrap_Struct(klass,data_type,sval) rb_data_typed_object_wrap((klass),(sval),(data_type))
#define TypedData_Make_Struct0(result,klass,type,size,data_type,sval) VALUE result = rb_data_typed_object_zalloc(klass, size, data_type); (void)((sval) = (type *)DATA_PTR(result));
#define TypedData_Make_Struct(klass,type,data_type,sval) RB_GNUC_EXTENSION_BLOCK( TypedData_Make_Struct0(data_struct_obj, klass, type, sizeof(type), data_type, sval); data_struct_obj )
#define Data_Get_Struct(obj,type,sval) ((sval) = (type*)rb_data_object_get(obj))
#define TypedData_Get_Struct(obj,type,data_type,sval) ((sval) = (type*)rb_check_typeddata((obj), (data_type)))
#define RSTRUCT_LEN(st) NUM2LONG(rb_struct_size(st))
#define RSTRUCT_PTR(st) rb_struct_ptr(st)
#define RSTRUCT_SET(st,idx,v) rb_struct_aset(st, INT2NUM(idx), (v))
#define RSTRUCT_GET(st,idx) rb_struct_aref(st, INT2NUM(idx))
#define RBIGNUM_SIGN(b) (rb_big_sign(b))
#define RBIGNUM_POSITIVE_P(b) (RBIGNUM_SIGN(b)!=0)
#define RBIGNUM_NEGATIVE_P(b) (RBIGNUM_SIGN(b)==0)
#define R_CAST(st) (struct st*)
#define RBASIC(obj) (R_CAST(RBasic)(obj))
#define ROBJECT(obj) (R_CAST(RObject)(obj))
#define RCLASS(obj) (R_CAST(RClass)(obj))
#define RMODULE(obj) RCLASS(obj)
#define RSTRING(obj) (R_CAST(RString)(obj))
#define RREGEXP(obj) (R_CAST(RRegexp)(obj))
#define RARRAY(obj) (R_CAST(RArray)(obj))
#define RDATA(obj) (R_CAST(RData)(obj))
#define RTYPEDDATA(obj) (R_CAST(RTypedData)(obj))
#define RFILE(obj) (R_CAST(RFile)(obj))
#define FL_SINGLETON ((VALUE)RUBY_FL_SINGLETON)
#define FL_WB_PROTECTED ((VALUE)RUBY_FL_WB_PROTECTED)
#define FL_PROMOTED0 ((VALUE)RUBY_FL_PROMOTED0)
#define FL_PROMOTED1 ((VALUE)RUBY_FL_PROMOTED1)
#define FL_FINALIZE ((VALUE)RUBY_FL_FINALIZE)
#define FL_TAINT ((VALUE)RUBY_FL_TAINT)
#define FL_UNTRUSTED ((VALUE)RUBY_FL_UNTRUSTED)
#define FL_EXIVAR ((VALUE)RUBY_FL_EXIVAR)
#define FL_FREEZE ((VALUE)RUBY_FL_FREEZE)
#define FL_USHIFT ((VALUE)RUBY_FL_USHIFT)
#define FL_USER0 ((VALUE)RUBY_FL_USER0)
#define FL_USER1 ((VALUE)RUBY_FL_USER1)
#define FL_USER2 ((VALUE)RUBY_FL_USER2)
#define FL_USER3 ((VALUE)RUBY_FL_USER3)
#define FL_USER4 ((VALUE)RUBY_FL_USER4)
#define FL_USER5 ((VALUE)RUBY_FL_USER5)
#define FL_USER6 ((VALUE)RUBY_FL_USER6)
#define FL_USER7 ((VALUE)RUBY_FL_USER7)
#define FL_USER8 ((VALUE)RUBY_FL_USER8)
#define FL_USER9 ((VALUE)RUBY_FL_USER9)
#define FL_USER10 ((VALUE)RUBY_FL_USER10)
#define FL_USER11 ((VALUE)RUBY_FL_USER11)
#define FL_USER12 ((VALUE)RUBY_FL_USER12)
#define FL_USER13 ((VALUE)RUBY_FL_USER13)
#define FL_USER14 ((VALUE)RUBY_FL_USER14)
#define FL_USER15 ((VALUE)RUBY_FL_USER15)
#define FL_USER16 ((VALUE)RUBY_FL_USER16)
#define FL_USER17 ((VALUE)RUBY_FL_USER17)
#define FL_USER18 ((VALUE)RUBY_FL_USER18)
#define FL_USER19 ((VALUE)RUBY_FL_USER19)
#define RB_SPECIAL_CONST_P(x) (RB_IMMEDIATE_P(x) || !RB_TEST(x))
#define SPECIAL_CONST_P(x) RB_SPECIAL_CONST_P(x)
#define RB_FL_ABLE(x) (!RB_SPECIAL_CONST_P(x) && RB_BUILTIN_TYPE(x) != RUBY_T_NODE)
#define RB_FL_TEST_RAW(x,f) (RBASIC(x)->flags&(f))
#define RB_FL_TEST(x,f) (RB_FL_ABLE(x)?RB_FL_TEST_RAW((x),(f)):0)
#define RB_FL_ANY_RAW(x,f) RB_FL_TEST_RAW((x),(f))
#define RB_FL_ANY(x,f) RB_FL_TEST((x),(f))
#define RB_FL_ALL_RAW(x,f) (RB_FL_TEST_RAW((x),(f)) == (f))
#define RB_FL_ALL(x,f) (RB_FL_TEST((x),(f)) == (f))
#define RB_FL_SET_RAW(x,f) (void)(RBASIC(x)->flags |= (f))
#define RB_FL_SET(x,f) (RB_FL_ABLE(x) ? RB_FL_SET_RAW(x, f) : (void)0)
#define RB_FL_UNSET_RAW(x,f) (void)(RBASIC(x)->flags &= ~(VALUE)(f))
#define RB_FL_UNSET(x,f) (RB_FL_ABLE(x) ? RB_FL_UNSET_RAW(x, f) : (void)0)
#define RB_FL_REVERSE_RAW(x,f) (void)(RBASIC(x)->flags ^= (f))
#define RB_FL_REVERSE(x,f) (RB_FL_ABLE(x) ? RB_FL_REVERSE_RAW(x, f) : (void)0)
#define RB_OBJ_TAINTABLE(x) (RB_FL_ABLE(x) && RB_BUILTIN_TYPE(x) != RUBY_T_BIGNUM && RB_BUILTIN_TYPE(x) != RUBY_T_FLOAT)
#define RB_OBJ_TAINTED_RAW(x) RB_FL_TEST_RAW(x, RUBY_FL_TAINT)
#define RB_OBJ_TAINTED(x) (!!RB_FL_TEST((x), RUBY_FL_TAINT))
#define RB_OBJ_TAINT_RAW(x) RB_FL_SET_RAW(x, RUBY_FL_TAINT)
#define RB_OBJ_TAINT(x) (RB_OBJ_TAINTABLE(x) ? RB_OBJ_TAINT_RAW(x) : (void)0)
#define RB_OBJ_UNTRUSTED(x) RB_OBJ_TAINTED(x)
#define RB_OBJ_UNTRUST(x) RB_OBJ_TAINT(x)
#define RB_OBJ_INFECT_RAW(x,s) RB_FL_SET_RAW(x, RB_OBJ_TAINTED_RAW(s))
#define RB_OBJ_INFECT(x,s) ( (RB_OBJ_TAINTABLE(x) && RB_FL_ABLE(s)) ? RB_OBJ_INFECT_RAW(x, s) : (void)0)
#define RB_OBJ_FROZEN_RAW(x) (RBASIC(x)->flags&RUBY_FL_FREEZE)
#define RB_OBJ_FROZEN(x) (!RB_FL_ABLE(x) || RB_OBJ_FROZEN_RAW(x))
#define RB_OBJ_FREEZE_RAW(x) (void)(RBASIC(x)->flags |= RUBY_FL_FREEZE)
#define RB_OBJ_FREEZE(x) rb_obj_freeze_inline((VALUE)x)
#define FL_ABLE(x) RB_FL_ABLE(x)
#define FL_TEST_RAW(x,f) RB_FL_TEST_RAW(x,f)
#define FL_TEST(x,f) RB_FL_TEST(x,f)
#define FL_ANY_RAW(x,f) RB_FL_ANY_RAW(x,f)
#define FL_ANY(x,f) RB_FL_ANY(x,f)
#define FL_ALL_RAW(x,f) RB_FL_ALL_RAW(x,f)
#define FL_ALL(x,f) RB_FL_ALL(x,f)
#define FL_SET_RAW(x,f) RB_FL_SET_RAW(x,f)
#define FL_SET(x,f) RB_FL_SET(x,f)
#define FL_UNSET_RAW(x,f) RB_FL_UNSET_RAW(x,f)
#define FL_UNSET(x,f) RB_FL_UNSET(x,f)
#define FL_REVERSE_RAW(x,f) RB_FL_REVERSE_RAW(x,f)
#define FL_REVERSE(x,f) RB_FL_REVERSE(x,f)
#define OBJ_TAINTABLE(x) RB_OBJ_TAINTABLE(x)
#define OBJ_TAINTED_RAW(x) RB_OBJ_TAINTED_RAW(x)
#define OBJ_TAINTED(x) RB_OBJ_TAINTED(x)
#define OBJ_TAINT_RAW(x) RB_OBJ_TAINT_RAW(x)
#define OBJ_TAINT(x) RB_OBJ_TAINT(x)
#define OBJ_UNTRUSTED(x) RB_OBJ_UNTRUSTED(x)
#define OBJ_UNTRUST(x) RB_OBJ_UNTRUST(x)
#define OBJ_INFECT_RAW(x,s) RB_OBJ_INFECT_RAW(x,s)
#define OBJ_INFECT(x,s) RB_OBJ_INFECT(x,s)
#define OBJ_FROZEN_RAW(x) RB_OBJ_FROZEN_RAW(x)
#define OBJ_FROZEN(x) RB_OBJ_FROZEN(x)
#define OBJ_FREEZE_RAW(x) RB_OBJ_FREEZE_RAW(x)
#define OBJ_FREEZE(x) RB_OBJ_FREEZE(x)
#define RUBY_UNTYPED_DATA_FUNC(func) func __attribute__((warning("untyped Data is unsafe; use TypedData instead")))
#define rb_data_object_wrap_warning(klass,ptr,mark,free) __extension__( __builtin_choose_expr( __builtin_constant_p(klass) && !(klass), rb_data_object_wrap(klass, ptr, mark, free), rb_data_object_wrap_warning(klass, ptr, mark, free)))
#define rb_data_object_wrap_0 rb_data_object_wrap
#define rb_data_object_wrap_1 rb_data_object_wrap_warning
#define rb_data_object_wrap RUBY_MACRO_SELECT(rb_data_object_wrap_, RUBY_UNTYPED_DATA_WARNING)
#define rb_data_object_get_0 rb_data_object_get
#define rb_data_object_get_1 rb_data_object_get_warning
#define rb_data_object_get RUBY_MACRO_SELECT(rb_data_object_get_, RUBY_UNTYPED_DATA_WARNING)
#define rb_data_object_make_0 rb_data_object_make
#define rb_data_object_make_1 rb_data_object_make_warning
#define rb_data_object_make RUBY_MACRO_SELECT(rb_data_object_make_, RUBY_UNTYPED_DATA_WARNING)
#define RB_OBJ_PROMOTED_RAW(x) RB_FL_ALL_RAW(x, RUBY_FL_PROMOTED)
#define RB_OBJ_PROMOTED(x) (RB_SPECIAL_CONST_P(x) ? 0 : RB_OBJ_PROMOTED_RAW(x))
#define RB_OBJ_WB_UNPROTECT(x) rb_obj_wb_unprotect(x, __FILE__, __LINE__)
#define OBJ_PROMOTED_RAW(x) RB_OBJ_PROMOTED_RAW(x)
#define OBJ_PROMOTED(x) RB_OBJ_PROMOTED(x)
#define OBJ_WB_UNPROTECT(x) RB_OBJ_WB_UNPROTECT(x)
#define RB_OBJ_WRITE(a,slot,b) rb_obj_write((VALUE)(a), (VALUE *)(slot), (VALUE)(b), __FILE__, __LINE__)
#define RB_OBJ_WRITTEN(a,oldv,b) rb_obj_written((VALUE)(a), (VALUE)(oldv), (VALUE)(b), __FILE__, __LINE__)
#define USE_RGENGC_LOGGING_WB_UNPROTECT 0
#define RUBY_INTEGER_UNIFICATION 1
#define RB_INTEGER_TYPE_P(obj) rb_integer_type_p(obj)
#define RB_INT2NUM(v) RB_INT2FIX((int)(v))
#define RB_UINT2NUM(v) RB_LONG2FIX((unsigned int)(v))
#define INT2NUM(x) RB_INT2NUM(x)
#define UINT2NUM(x) RB_UINT2NUM(x)
#define RB_LONG2NUM(x) rb_long2num_inline(x)
#define RB_ULONG2NUM(x) rb_ulong2num_inline(x)
#define RB_NUM2CHR(x) rb_num2char_inline(x)
#define RB_CHR2FIX(x) RB_INT2FIX((long)((x)&0xff))
#define LONG2NUM(x) RB_LONG2NUM(x)
#define ULONG2NUM(x) RB_ULONG2NUM(x)
#define USHORT2NUM(x) RB_INT2FIX(x)
#define NUM2CHR(x) RB_NUM2CHR(x)
#define CHR2FIX(x) RB_CHR2FIX(x)
#define RB_ST2FIX(h) RB_LONG2FIX((long)(h))
#define ST2FIX(h) RB_ST2FIX(h)
#define RB_ALLOC_N(type,n) ((type*)ruby_xmalloc2((size_t)(n),sizeof(type)))
#define RB_ALLOC(type) ((type*)ruby_xmalloc(sizeof(type)))
#define RB_ZALLOC_N(type,n) ((type*)ruby_xcalloc((size_t)(n),sizeof(type)))
#define RB_ZALLOC(type) (RB_ZALLOC_N(type,1))
#define RB_REALLOC_N(var,type,n) ((var)=(type*)ruby_xrealloc2((char*)(var),(size_t)(n),sizeof(type)))
#define ALLOC_N(type,n) RB_ALLOC_N(type,n)
#define ALLOC(type) RB_ALLOC(type)
#define ZALLOC_N(type,n) RB_ZALLOC_N(type,n)
#define ZALLOC(type) RB_ZALLOC(type)
#define REALLOC_N(var,type,n) RB_REALLOC_N(var,type,n)
#define ALLOCA_N(type,n) (type*)__builtin_alloca_with_align((sizeof(type)*(n)), RUBY_ALIGNOF(type) * CHAR_BIT)
#define DSIZE_T uint128_t
#define RUBY_ALLOCV_LIMIT 1024
#define RB_ALLOCV(v,n) ((n) < RUBY_ALLOCV_LIMIT ? ((v) = 0, alloca(n)) : rb_alloc_tmp_buffer(&(v), (n)))
#define RB_ALLOCV_N(type,v,n) ((type*)(((size_t)(n) < RUBY_ALLOCV_LIMIT / sizeof(type)) ? ((v) = 0, alloca((size_t)(n) * sizeof(type))) : rb_alloc_tmp_buffer2(&(v), (long)(n), sizeof(type))))
#define RB_ALLOCV_END(v) rb_free_tmp_buffer(&(v))
#define ALLOCV(v,n) RB_ALLOCV(v, n)
#define ALLOCV_N(type,v,n) RB_ALLOCV_N(type, v, n)
#define ALLOCV_END(v) RB_ALLOCV_END(v)
#define MEMZERO(p,type,n) memset((p), 0, sizeof(type)*(size_t)(n))
#define MEMCPY(p1,p2,type,n) memcpy((p1), (p2), sizeof(type)*(size_t)(n))
#define MEMMOVE(p1,p2,type,n) memmove((p1), (p2), sizeof(type)*(size_t)(n))
#define MEMCMP(p1,p2,type,n) memcmp((p1), (p2), sizeof(type)*(size_t)(n))
#define RUBY_METHOD_FUNC(func) ((VALUE (*)(ANYARGS))(func))
#define RUBY_CONST_ID_CACHE(result,str) { static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((str), (long)strlen(str)); result rb_intern_id_cache; }
#define RUBY_CONST_ID(var,str) do RUBY_CONST_ID_CACHE((var) =, (str)) while (0)
#define CONST_ID_CACHE(result,str) RUBY_CONST_ID_CACHE(result, str)
#define CONST_ID(var,str) RUBY_CONST_ID(var, str)
#define rb_intern(str) (__builtin_constant_p(str) ? __extension__ (RUBY_CONST_ID_CACHE((ID), (str))) : rb_intern(str))
#define rb_intern_const(str) (__builtin_constant_p(str) ? __extension__ (rb_intern2((str), (long)strlen(str))) : (rb_intern)(str))
#define rb_varargs_argc_check_runtime(argc,vargc) (((argc) <= (vargc)) ? (argc) : (rb_fatal("argc(%d) exceeds actual arguments(%d)", argc, vargc), 0))
#define rb_varargs_argc_valid_p(argc,vargc) ((argc) == 0 ? (vargc) <= 1 : (argc) == (vargc))
#define rb_varargs_argc_check(argc,vargc) __builtin_choose_expr(__builtin_constant_p(argc), (rb_varargs_argc_valid_p(argc, vargc) ? (argc) : rb_varargs_bad_length(argc, vargc)), rb_varargs_argc_check_runtime(argc, vargc))
#define rb_funcall2 rb_funcallv
#define rb_funcall3 rb_funcallv_public
#define HAVE_RB_SCAN_ARGS_OPTIONAL_HASH 1
#define ruby_verbose (*rb_ruby_verbose_ptr())
#define ruby_debug (*rb_ruby_debug_ptr())
#define RB_IO_WAIT_READABLE RB_IO_WAIT_READABLE
#define RB_IO_WAIT_WRITABLE RB_IO_WAIT_WRITABLE
#define RUBY_BLOCK_CALL_FUNC_TAKES_BLOCKARG 1
#define RB_BLOCK_CALL_FUNC_ARGLIST(yielded_arg,callback_arg) VALUE yielded_arg, VALUE callback_arg, int argc, const VALUE *argv, VALUE blockarg
#define rb_type_p(obj,type) __extension__ (__builtin_constant_p(type) ? RB_TYPE_P((obj), (type)) : rb_type(obj) == (type))
#define rb_special_const_p(obj) __extension__ ({ VALUE special_const_obj = (obj); (int)(RB_SPECIAL_CONST_P(special_const_obj) ? RUBY_Qtrue : RUBY_Qfalse); })
#define RUBY_INTERN_H 1
#define RUBY_ST_H 1
#pragma GCC visibility push(default)
#define ST_DATA_T_DEFINED 
#define MAX_ST_INDEX_VAL (~(st_index_t) 0)
#define SIZEOF_ST_INDEX_T SIZEOF_VOIDP
#define ST_INDEX_BITS (SIZEOF_ST_INDEX_T * CHAR_BIT)
#define ST_DATA_COMPATIBLE_P(type) __builtin_choose_expr(__builtin_types_compatible_p(type, st_data_t), 1, 0)
#define st_is_member(table,key) st_lookup((table),(key),(st_data_t *)0)
#define st_strcasecmp st_locale_insensitive_strcasecmp
#define st_strncasecmp st_locale_insensitive_strncasecmp
#define st_hash_start(h) ((st_index_t)(h))
#pragma GCC visibility pop
#define MJIT_STATIC static
#pragma GCC visibility push(default)
#define UNLIMITED_ARGUMENTS (-1)
#define rb_ary_new2 rb_ary_new_capa
#define rb_ary_new3 rb_ary_new_from_args
#define rb_ary_new4 rb_ary_new_from_values
#define rb_big2int(x) rb_big2long(x)
#define rb_big2uint(x) rb_big2ulong(x)
#define INTEGER_PACK_MSWORD_FIRST 0x01
#define INTEGER_PACK_LSWORD_FIRST 0x02
#define INTEGER_PACK_MSBYTE_FIRST 0x10
#define INTEGER_PACK_LSBYTE_FIRST 0x20
#define INTEGER_PACK_NATIVE_BYTE_ORDER 0x40
#define INTEGER_PACK_2COMP 0x80
#define INTEGER_PACK_FORCE_GENERIC_IMPLEMENTATION 0x400
#define INTEGER_PACK_FORCE_BIGNUM 0x100
#define INTEGER_PACK_NEGATIVE 0x200
#define INTEGER_PACK_LITTLE_ENDIAN (INTEGER_PACK_LSWORD_FIRST | INTEGER_PACK_LSBYTE_FIRST)
#define INTEGER_PACK_BIG_ENDIAN (INTEGER_PACK_MSWORD_FIRST | INTEGER_PACK_MSBYTE_FIRST)
#define rb_rational_raw1(x) rb_rational_raw((x), INT2FIX(1))
#define rb_rational_raw2(x,y) rb_rational_raw((x), (y))
#define rb_rational_new1(x) rb_rational_new((x), INT2FIX(1))
#define rb_rational_new2(x,y) rb_rational_new((x), (y))
#define rb_Rational1(x) rb_Rational((x), INT2FIX(1))
#define rb_Rational2(x,y) rb_Rational((x), (y))
#define rb_complex_raw1(x) rb_complex_raw((x), INT2FIX(0))
#define rb_complex_raw2(x,y) rb_complex_raw((x), (y))
#define rb_complex_new1(x) rb_complex_new((x), INT2FIX(0))
#define rb_complex_new2(x,y) rb_complex_new((x), (y))
#define rb_complex_add rb_complex_plus
#define rb_complex_sub rb_complex_minus
#define rb_complex_nagate rb_complex_uminus
#define rb_Complex1(x) rb_Complex((x), INT2FIX(0))
#define rb_Complex2(x,y) rb_Complex((x), (y))
#define SIZED_ENUMERATOR(obj,argc,argv,size_fn) rb_enumeratorize_with_size((obj), ID2SYM(rb_frame_this_func()), (argc), (argv), (size_fn))
#define RETURN_SIZED_ENUMERATOR(obj,argc,argv,size_fn) do { if (!rb_block_given_p()) return SIZED_ENUMERATOR(obj, argc, argv, size_fn); } while (0)
#define RETURN_ENUMERATOR(obj,argc,argv) RETURN_SIZED_ENUMERATOR(obj, argc, argv, 0)
#define rb_exc_new2 rb_exc_new_cstr
#define rb_exc_new3 rb_exc_new_str
#define rb_check_frozen_internal(obj) do { VALUE frozen_obj = (obj); if (RB_UNLIKELY(RB_OBJ_FROZEN(frozen_obj))) { rb_error_frozen_object(frozen_obj); } } while (0)
#define rb_check_trusted_internal(obj) ((void) 0)
#define rb_check_frozen(obj) __extension__({rb_check_frozen_internal(obj);})
#define rb_check_trusted(obj) __extension__({rb_check_trusted_internal(obj);})
#define RB_OBJ_INIT_COPY(obj,orig) ((obj) != (orig) && (rb_obj_init_copy((obj), (orig)), 1))
#define OBJ_INIT_COPY(obj,orig) RB_OBJ_INIT_COPY(obj, orig)
#define rb_check_arity rb_check_arity
#define rb_fd_ptr(f) ((f)->fdset)
#define rb_fd_max(f) ((f)->maxfd)
#define HAVE_RB_DEFINE_ALLOC_FUNC 1
#define rb_defout rb_stdout
#define RB_RESERVED_FD_P(fd) rb_reserved_fd_p(fd)
#define RB_NUM_COERCE_FUNCS_NEED_OPID 1
#define rb_memcmp memcmp
#define HAVE_RB_REG_NEW_STR 1
#define rb_argv rb_get_argv()
#define posix_signal ruby_posix_signal
#define rb_str_dup_frozen rb_str_new_frozen
#define rb_hash_uint32(h,i) st_hash_uint32((h), (i))
#define rb_hash_uint(h,i) st_hash_uint((h), (i))
#define rb_hash_end(h) st_hash_end(h)
#define rb_str_new(str,len) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str) && __builtin_constant_p(len)) ? rb_str_new_static((str), (len)) : rb_str_new((str), (len)) )
#define rb_str_new_cstr(str) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str)) ? rb_str_new_static((str), (long)strlen(str)) : rb_str_new_cstr(str) )
#define rb_usascii_str_new(str,len) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str) && __builtin_constant_p(len)) ? rb_usascii_str_new_static((str), (len)) : rb_usascii_str_new((str), (len)) )
#define rb_utf8_str_new(str,len) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str) && __builtin_constant_p(len)) ? rb_utf8_str_new_static((str), (len)) : rb_utf8_str_new((str), (len)) )
#define rb_tainted_str_new_cstr(str) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str)) ? rb_tainted_str_new((str), (long)strlen(str)) : rb_tainted_str_new_cstr(str) )
#define rb_usascii_str_new_cstr(str) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str)) ? rb_usascii_str_new_static((str), (long)strlen(str)) : rb_usascii_str_new_cstr(str) )
#define rb_utf8_str_new_cstr(str) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str)) ? rb_utf8_str_new_static((str), (long)strlen(str)) : rb_utf8_str_new_cstr(str) )
#define rb_external_str_new_cstr(str) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str)) ? rb_external_str_new((str), (long)strlen(str)) : rb_external_str_new_cstr(str) )
#define rb_locale_str_new_cstr(str) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str)) ? rb_locale_str_new((str), (long)strlen(str)) : rb_locale_str_new_cstr(str) )
#define rb_str_buf_new_cstr(str) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str)) ? rb_str_buf_cat(rb_str_buf_new((long)strlen(str)), (str), (long)strlen(str)) : rb_str_buf_new_cstr(str) )
#define rb_str_cat_cstr(str,ptr) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(ptr)) ? rb_str_cat((str), (ptr), (long)strlen(ptr)) : rb_str_cat_cstr((str), (ptr)) )
#define rb_exc_new_cstr(klass,ptr) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(ptr)) ? rb_exc_new((klass), (ptr), (long)strlen(ptr)) : rb_exc_new_cstr((klass), (ptr)) )
#define rb_str_new2 rb_str_new_cstr
#define rb_str_new3 rb_str_new_shared
#define rb_str_new4 rb_str_new_frozen
#define rb_str_new5 rb_str_new_with_class
#define rb_tainted_str_new2 rb_tainted_str_new_cstr
#define rb_str_buf_new2 rb_str_buf_new_cstr
#define rb_usascii_str_new2 rb_usascii_str_new_cstr
#define rb_str_buf_cat rb_str_cat
#define rb_str_buf_cat2 rb_str_cat_cstr
#define rb_str_cat2 rb_str_cat_cstr
#define rb_strlen_lit(str) (sizeof(str "") - 1)
#define rb_str_new_lit(str) rb_str_new_static((str), rb_strlen_lit(str))
#define rb_usascii_str_new_lit(str) rb_usascii_str_new_static((str), rb_strlen_lit(str))
#define rb_utf8_str_new_lit(str) rb_utf8_str_new_static((str), rb_strlen_lit(str))
#define rb_enc_str_new_lit(str,enc) rb_enc_str_new_static((str), rb_strlen_lit(str), (enc))
#define rb_str_new_literal(str) rb_str_new_lit(str)
#define rb_usascii_str_new_literal(str) rb_usascii_str_new_lit(str)
#define rb_utf8_str_new_literal(str) rb_utf8_str_new_lit(str)
#define rb_enc_str_new_literal(str,enc) rb_enc_str_new_lit(str, enc)
#define RUBY_UBF_IO ((rb_unblock_function_t *)-1)
#define RUBY_UBF_PROCESS ((rb_unblock_function_t *)-1)
#pragma GCC visibility pop
#define FIX_CONST_VALUE_PTR(x) (x)
#define RUBY_VM 1
#define HAVE_NATIVETHREAD 
#define RUBY_EVENT_NONE 0x0000
#define RUBY_EVENT_LINE 0x0001
#define RUBY_EVENT_CLASS 0x0002
#define RUBY_EVENT_END 0x0004
#define RUBY_EVENT_CALL 0x0008
#define RUBY_EVENT_RETURN 0x0010
#define RUBY_EVENT_C_CALL 0x0020
#define RUBY_EVENT_C_RETURN 0x0040
#define RUBY_EVENT_RAISE 0x0080
#define RUBY_EVENT_ALL 0x00ff
#define RUBY_EVENT_B_CALL 0x0100
#define RUBY_EVENT_B_RETURN 0x0200
#define RUBY_EVENT_THREAD_BEGIN 0x0400
#define RUBY_EVENT_THREAD_END 0x0800
#define RUBY_EVENT_FIBER_SWITCH 0x1000
#define RUBY_EVENT_SCRIPT_COMPILED 0x2000
#define RUBY_EVENT_TRACEPOINT_ALL 0xffff
#define RUBY_EVENT_RESERVED_FOR_INTERNAL_USE 0x030000
#define RUBY_INTERNAL_EVENT_SWITCH 0x040000
#define RUBY_EVENT_SWITCH 0x040000
#define RUBY_INTERNAL_EVENT_NEWOBJ 0x100000
#define RUBY_INTERNAL_EVENT_FREEOBJ 0x200000
#define RUBY_INTERNAL_EVENT_GC_START 0x400000
#define RUBY_INTERNAL_EVENT_GC_END_MARK 0x800000
#define RUBY_INTERNAL_EVENT_GC_END_SWEEP 0x1000000
#define RUBY_INTERNAL_EVENT_GC_ENTER 0x2000000
#define RUBY_INTERNAL_EVENT_GC_EXIT 0x4000000
#define RUBY_INTERNAL_EVENT_OBJSPACE_MASK 0x7f00000
#define RUBY_INTERNAL_EVENT_MASK 0xffff0000
#define RB_EVENT_HOOKS_HAVE_CALLBACK_DATA 1
#define ISASCII(c) rb_isascii(c)
#define ISPRINT(c) rb_isprint(c)
#define ISGRAPH(c) rb_isgraph(c)
#define ISSPACE(c) rb_isspace(c)
#define ISUPPER(c) rb_isupper(c)
#define ISLOWER(c) rb_islower(c)
#define ISALNUM(c) rb_isalnum(c)
#define ISALPHA(c) rb_isalpha(c)
#define ISDIGIT(c) rb_isdigit(c)
#define ISXDIGIT(c) rb_isxdigit(c)
#define TOUPPER(c) rb_toupper(c)
#define TOLOWER(c) rb_tolower(c)
#define STRCASECMP(s1,s2) (st_locale_insensitive_strcasecmp((s1), (s2)))
#define STRNCASECMP(s1,s2,n) (st_locale_insensitive_strncasecmp((s1), (s2), (n)))
#define STRTOUL(str,endptr,base) (ruby_strtoul((str), (endptr), (base)))
#define InitVM(ext) {void InitVM_ ##ext(void);InitVM_ ##ext();}
#define rb_scan_args(argc,argvp,fmt,...) __builtin_choose_expr(__builtin_constant_p(fmt), rb_scan_args0(argc,argvp,fmt, (sizeof((VALUE*[]){__VA_ARGS__})/sizeof(VALUE*)), ((VALUE*[]){__VA_ARGS__})), rb_scan_args(argc,argvp,fmt,__VA_ARGS__))
#define rb_scan_args_isdigit(c) ((unsigned char)((c)-'0')<10)
#define rb_scan_args_count_end(fmt,ofs,varc,vari) ((vari)/(!fmt[ofs] || rb_scan_args_bad_format(fmt)))
#define rb_scan_args_count_block(fmt,ofs,varc,vari) (fmt[ofs]!='&' ? rb_scan_args_count_end(fmt, ofs, varc, vari) : rb_scan_args_count_end(fmt, ofs+1, varc, vari+1))
#define rb_scan_args_count_hash(fmt,ofs,varc,vari) (fmt[ofs]!=':' ? rb_scan_args_count_block(fmt, ofs, varc, vari) : rb_scan_args_count_block(fmt, ofs+1, varc, vari+1))
#define rb_scan_args_count_trail(fmt,ofs,varc,vari) (!rb_scan_args_isdigit(fmt[ofs]) ? rb_scan_args_count_hash(fmt, ofs, varc, vari) : rb_scan_args_count_hash(fmt, ofs+1, varc, vari+(fmt[ofs]-'0')))
#define rb_scan_args_count_var(fmt,ofs,varc,vari) (fmt[ofs]!='*' ? rb_scan_args_count_trail(fmt, ofs, varc, vari) : rb_scan_args_count_trail(fmt, ofs+1, varc, vari+1))
#define rb_scan_args_count_opt(fmt,ofs,varc,vari) (!rb_scan_args_isdigit(fmt[1]) ? rb_scan_args_count_var(fmt, ofs, varc, vari) : rb_scan_args_count_var(fmt, ofs+1, varc, vari+fmt[ofs]-'0'))
#define rb_scan_args_count(fmt,varc) (!rb_scan_args_isdigit(fmt[0]) ? rb_scan_args_count_var(fmt, 0, varc, 0) : rb_scan_args_count_opt(fmt, 1, varc, fmt[0]-'0'))
#define rb_scan_args_verify_count(fmt,varc) ((varc)/(rb_scan_args_count(fmt, varc) == (varc) || rb_scan_args_length_mismatch(fmt, varc)))
#define rb_scan_args_verify(fmt,varc) (void)__extension__ ({ int verify; _Pragma("GCC diagnostic push"); _Pragma("GCC diagnostic ignored \"-Warray-bounds\""); verify = rb_scan_args_verify_count(fmt, varc); _Pragma("GCC diagnostic pop"); verify; })
#define rb_scan_args0(argc,argv,fmt,varc,vars) rb_scan_args_set(argc, argv, rb_scan_args_n_lead(fmt), rb_scan_args_n_opt(fmt), rb_scan_args_n_trail(fmt), rb_scan_args_f_var(fmt), rb_scan_args_f_hash(fmt), rb_scan_args_f_block(fmt), (rb_scan_args_verify(fmt, varc), vars), (char *)fmt, varc)
#define rb_yield_values(argc,...) __extension__({ const int rb_yield_values_argc = (argc); const VALUE rb_yield_values_args[] = {__VA_ARGS__}; const int rb_yield_values_nargs = (int)(sizeof(rb_yield_values_args) / sizeof(VALUE)); rb_yield_values2( rb_varargs_argc_check(rb_yield_values_argc, rb_yield_values_nargs), rb_yield_values_nargs ? rb_yield_values_args : NULL); })
#define rb_funcall(recv,mid,argc,...) __extension__({ const int rb_funcall_argc = (argc); const VALUE rb_funcall_args[] = {__VA_ARGS__}; const int rb_funcall_nargs = (int)(sizeof(rb_funcall_args) / sizeof(VALUE)); rb_funcallv(recv, mid, rb_varargs_argc_check(rb_funcall_argc, rb_funcall_nargs), rb_funcall_nargs ? rb_funcall_args : NULL); })
#define RUBY_SUBST_H 1
#undef snprintf
#undef vsnprintf
#define snprintf ruby_snprintf
#define vsnprintf ruby_vsnprintf
#define RUBY_INIT_STACK VALUE variable_in_this_stack_frame; ruby_init_stack(&variable_in_this_stack_frame);
#define Init_stack(addr) ruby_init_stack(addr)
#pragma GCC visibility pop
#define _STDBOOL_H 
#define bool _Bool
#define true 1
#define false 0
#define __bool_true_false_are_defined 1
#define HALF_LONG_MSB ((SIGNED_VALUE)1<<((SIZEOF_LONG*CHAR_BIT-1)/2))
#define LIKELY(x) RB_LIKELY(x)
#define UNLIKELY(x) RB_UNLIKELY(x)
#define ATTRIBUTE_NO_ADDRESS_SAFETY_ANALYSIS(x) NO_SANITIZE("address", NOINLINE(x))
#undef NO_SANITIZE
#define NO_SANITIZE(x,y) COMPILER_WARNING_PUSH; COMPILER_WARNING_IGNORED(-Wattributes); __attribute__((__no_sanitize__(x))) y; COMPILER_WARNING_POP
#define VALGRIND_MAKE_MEM_DEFINED(p,n) 0
#define VALGRIND_MAKE_MEM_UNDEFINED(p,n) 0
#define numberof(array) ((int)(sizeof(array) / sizeof((array)[0])))
#define __has_feature(x) 0
#define __has_extension __has_feature
#define ACCESS_ONCE(type,x) (*((volatile type *)&(x)))
#define STATIC_ASSERT(name,expr) RB_GNUC_EXTENSION _Static_assert(expr, #name ": " #expr)
#define SIGNED_INTEGER_TYPE_P(int_type) (0 > ((int_type)0)-1)
#define SIGNED_INTEGER_MAX(sint_type) (sint_type) ((((sint_type)1) << (sizeof(sint_type) * CHAR_BIT - 2)) | ((((sint_type)1) << (sizeof(sint_type) * CHAR_BIT - 2)) - 1))
#define SIGNED_INTEGER_MIN(sint_type) (-SIGNED_INTEGER_MAX(sint_type)-1)
#define UNSIGNED_INTEGER_MAX(uint_type) (~(uint_type)0)
#define TIMET_MAX SIGNED_INTEGER_MAX(time_t)
#define TIMET_MIN SIGNED_INTEGER_MIN(time_t)
#define TIMET_MAX_PLUS_ONE (2*(double)(TIMET_MAX/2+1))
#define MUL_OVERFLOW_P(a,b) __builtin_mul_overflow_p((a), (b), (__typeof__(a * b))0)
#define MUL_OVERFLOW_SIGNED_INTEGER_P(a,b,min,max) ( (a) == 0 ? 0 : (a) == -1 ? (b) < -(max) : (a) > 0 ? ((b) > 0 ? (max) / (a) < (b) : (min) / (a) > (b)) : ((b) > 0 ? (min) / (a) < (b) : (max) / (a) > (b)))
#define MUL_OVERFLOW_FIXNUM_P(a,b) RB_GNUC_EXTENSION_BLOCK( struct { long fixnum : SIZEOF_LONG * CHAR_BIT - 1; } c; __builtin_mul_overflow_p((a), (b), c.fixnum); )
#define MUL_OVERFLOW_LONG_LONG_P(a,b) MUL_OVERFLOW_P(a, b)
#define MUL_OVERFLOW_LONG_P(a,b) MUL_OVERFLOW_P(a, b)
#define MUL_OVERFLOW_INT_P(a,b) MUL_OVERFLOW_P(a, b)
#define swap16(x) __builtin_bswap16(x)
#define swap32(x) __builtin_bswap32(x)
#define swap64(x) __builtin_bswap64(x)
#define DLONG int128_t
#define DL2NUM(x) (RB_FIXABLE(x) ? LONG2FIX(x) : rb_int128t2big(x))
#define bit_length(x) (unsigned int) (sizeof(x) <= SIZEOF_INT ? SIZEOF_INT * CHAR_BIT - nlz_int((unsigned int)(x)) : sizeof(x) <= SIZEOF_LONG ? SIZEOF_LONG * CHAR_BIT - nlz_long((unsigned long)(x)) : sizeof(x) <= SIZEOF_LONG_LONG ? SIZEOF_LONG_LONG * CHAR_BIT - nlz_long_long((unsigned LONG_LONG)(x)) : SIZEOF_INT128_T * CHAR_BIT - nlz_int128((uint128_t)(x)))
#define BDIGIT unsigned int
#define SIZEOF_BDIGIT SIZEOF_INT
#define BDIGIT_DBL unsigned LONG_LONG
#define BDIGIT_DBL_SIGNED LONG_LONG
#define PRI_BDIGIT_PREFIX ""
#define PRI_BDIGIT_DBL_PREFIX PRI_LL_PREFIX
#define SIZEOF_ACTUAL_BDIGIT SIZEOF_BDIGIT
#define PRIdBDIGIT PRI_BDIGIT_PREFIX"d"
#define PRIiBDIGIT PRI_BDIGIT_PREFIX"i"
#define PRIoBDIGIT PRI_BDIGIT_PREFIX"o"
#define PRIuBDIGIT PRI_BDIGIT_PREFIX"u"
#define PRIxBDIGIT PRI_BDIGIT_PREFIX"x"
#define PRIXBDIGIT PRI_BDIGIT_PREFIX"X"
#define PRIdBDIGIT_DBL PRI_BDIGIT_DBL_PREFIX"d"
#define PRIiBDIGIT_DBL PRI_BDIGIT_DBL_PREFIX"i"
#define PRIoBDIGIT_DBL PRI_BDIGIT_DBL_PREFIX"o"
#define PRIuBDIGIT_DBL PRI_BDIGIT_DBL_PREFIX"u"
#define PRIxBDIGIT_DBL PRI_BDIGIT_DBL_PREFIX"x"
#define PRIXBDIGIT_DBL PRI_BDIGIT_DBL_PREFIX"X"
#define BIGNUM_EMBED_LEN_NUMBITS 3
#define BIGNUM_EMBED_LEN_MAX (SIZEOF_VALUE*3/SIZEOF_ACTUAL_BDIGIT)
#define BIGNUM_SIGN_BIT ((VALUE)FL_USER1)
#define BIGNUM_SIGN(b) ((RBASIC(b)->flags & BIGNUM_SIGN_BIT) != 0)
#define BIGNUM_SET_SIGN(b,sign) ((sign) ? (RBASIC(b)->flags |= BIGNUM_SIGN_BIT) : (RBASIC(b)->flags &= ~BIGNUM_SIGN_BIT))
#define BIGNUM_POSITIVE_P(b) BIGNUM_SIGN(b)
#define BIGNUM_NEGATIVE_P(b) (!BIGNUM_SIGN(b))
#define BIGNUM_NEGATE(b) (RBASIC(b)->flags ^= BIGNUM_SIGN_BIT)
#define BIGNUM_EMBED_FLAG ((VALUE)FL_USER2)
#define BIGNUM_EMBED_LEN_MASK (~(~(VALUE)0U << BIGNUM_EMBED_LEN_NUMBITS) << BIGNUM_EMBED_LEN_SHIFT)
#define BIGNUM_EMBED_LEN_SHIFT (FL_USHIFT+3)
#define BIGNUM_LEN(b) ((RBASIC(b)->flags & BIGNUM_EMBED_FLAG) ? (size_t)((RBASIC(b)->flags >> BIGNUM_EMBED_LEN_SHIFT) & (BIGNUM_EMBED_LEN_MASK >> BIGNUM_EMBED_LEN_SHIFT)) : RBIGNUM(b)->as.heap.len)
#define BIGNUM_DIGITS(b) ((RBASIC(b)->flags & BIGNUM_EMBED_FLAG) ? RBIGNUM(b)->as.ary : RBIGNUM(b)->as.heap.digits)
#define BIGNUM_LENINT(b) rb_long2int(BIGNUM_LEN(b))
#define RBIGNUM(obj) (R_CAST(RBignum)(obj))
#define RRATIONAL(obj) (R_CAST(RRational)(obj))
#define RRATIONAL_SET_NUM(rat,n) RB_OBJ_WRITE((rat), &((struct RRational *)(rat))->num,(n))
#define RRATIONAL_SET_DEN(rat,d) RB_OBJ_WRITE((rat), &((struct RRational *)(rat))->den,(d))
#define RFLOAT(obj) (R_CAST(RFloat)(obj))
#define RCOMPLEX(obj) (R_CAST(RComplex)(obj))
#define RCOMPLEX_SET_REAL(cmp,r) RB_OBJ_WRITE((cmp), &((struct RComplex *)(cmp))->real,(r))
#define RCOMPLEX_SET_IMAG(cmp,i) RB_OBJ_WRITE((cmp), &((struct RComplex *)(cmp))->imag,(i))
#define HASH_PROC_DEFAULT FL_USER2
#define RHASH_AR_TABLE_SIZE_RAW(h) ((unsigned int)((RBASIC(h)->flags & RHASH_AR_TABLE_SIZE_MASK) >> RHASH_AR_TABLE_SIZE_SHIFT))
#define RHASH_AR_TABLE_P(hash) (!FL_TEST_RAW((hash), RHASH_ST_TABLE_FLAG))
#define RHASH_AR_TABLE(hash) (RHASH(hash)->as.ar)
#define RHASH_ST_TABLE(hash) (RHASH(hash)->as.st)
#define RHASH(obj) (R_CAST(RHash)(obj))
#define RHASH_ST_SIZE(h) (RHASH_ST_TABLE(h)->num_entries)
#define RHASH_ST_TABLE_P(h) (!RHASH_AR_TABLE_P(h))
#define RHASH_ST_CLEAR(h) (FL_UNSET_RAW(h, RHASH_ST_TABLE_FLAG), RHASH(h)->as.ar = NULL)
#define RHASH_AR_TABLE_SIZE_MASK (VALUE)RHASH_AR_TABLE_SIZE_MASK
#define RHASH_AR_TABLE_SIZE_SHIFT RHASH_AR_TABLE_SIZE_SHIFT
#define RHASH_AR_TABLE_BOUND_MASK (VALUE)RHASH_AR_TABLE_BOUND_MASK
#define RHASH_AR_TABLE_BOUND_SHIFT RHASH_AR_TABLE_BOUND_SHIFT
#define RHASH_TRANSIENT_FLAG FL_USER14
#define RHASH_TRANSIENT_P(hash) FL_TEST_RAW((hash), RHASH_TRANSIENT_FLAG)
#define RHASH_SET_TRANSIENT_FLAG(h) FL_SET_RAW(h, RHASH_TRANSIENT_FLAG)
#define RHASH_UNSET_TRANSIENT_FLAG(h) FL_UNSET_RAW(h, RHASH_TRANSIENT_FLAG)
#define RHASH_AR_TABLE_MAX_SIZE 8
#define RHASH_AR_TABLE_MAX_BOUND RHASH_AR_TABLE_MAX_SIZE
#undef RHASH_ITER_LEV
#undef RHASH_IFNONE
#undef RHASH_SIZE
#define RHASH_ITER_LEV(h) (RHASH(h)->iter_lev)
#define RHASH_IFNONE(h) (RHASH(h)->ifnone)
#define RHASH_SIZE(h) (RHASH_AR_TABLE_P(h) ? RHASH_AR_TABLE_SIZE_RAW(h) : RHASH_ST_SIZE(h))
#define RSTRUCT_EMBED_LEN_MAX RSTRUCT_EMBED_LEN_MAX
#define RSTRUCT_EMBED_LEN_MASK RSTRUCT_EMBED_LEN_MASK
#define RSTRUCT_EMBED_LEN_SHIFT RSTRUCT_EMBED_LEN_SHIFT
#define RSTRUCT_TRANSIENT_P(st) FL_TEST_RAW((obj), RSTRUCT_TRANSIENT_FLAG)
#define RSTRUCT_TRANSIENT_SET(st) FL_SET_RAW((st), RSTRUCT_TRANSIENT_FLAG)
#define RSTRUCT_TRANSIENT_UNSET(st) FL_UNSET_RAW((st), RSTRUCT_TRANSIENT_FLAG)
#undef RSTRUCT_LEN
#undef RSTRUCT_PTR
#undef RSTRUCT_SET
#undef RSTRUCT_GET
#define RSTRUCT_EMBED_LEN(st) (long)((RBASIC(st)->flags >> RSTRUCT_EMBED_LEN_SHIFT) & (RSTRUCT_EMBED_LEN_MASK >> RSTRUCT_EMBED_LEN_SHIFT))
#define RSTRUCT_LEN(st) rb_struct_len(st)
#define RSTRUCT_LENINT(st) rb_long2int(RSTRUCT_LEN(st))
#define RSTRUCT_CONST_PTR(st) rb_struct_const_ptr(st)
#define RSTRUCT_PTR(st) ((VALUE *)RSTRUCT_CONST_PTR(RB_OBJ_WB_UNPROTECT_FOR(STRUCT, st)))
#define RSTRUCT_SET(st,idx,v) RB_OBJ_WRITE(st, &RSTRUCT_CONST_PTR(st)[idx], (v))
#define RSTRUCT_GET(st,idx) (RSTRUCT_CONST_PTR(st)[idx])
#define RSTRUCT(obj) (R_CAST(RStruct)(obj))
#define SERIALT2NUM ULL2NUM
#define PRI_SERIALT_PREFIX PRI_LL_PREFIX
#undef RClass
#define RCLASS_EXT(c) (RCLASS(c)->ptr)
#define RCLASS_IV_TBL(c) (RCLASS_EXT(c)->iv_tbl)
#define RCLASS_CONST_TBL(c) (RCLASS_EXT(c)->const_tbl)
#define RCLASS_M_TBL(c) (RCLASS(c)->m_tbl)
#define RCLASS_CALLABLE_M_TBL(c) (RCLASS_EXT(c)->callable_m_tbl)
#define RCLASS_IV_INDEX_TBL(c) (RCLASS_EXT(c)->iv_index_tbl)
#define RCLASS_ORIGIN(c) (RCLASS_EXT(c)->origin_)
#define RCLASS_REFINED_CLASS(c) (RCLASS_EXT(c)->refined_class)
#define RCLASS_SERIAL(c) (RCLASS_EXT(c)->class_serial)
#define RICLASS_IS_ORIGIN FL_USER5
#undef RCLASS_SUPER
#define IMEMO_DEBUG 0
#define IMEMO_MASK 0x0f
#define IMEMO_FL_USHIFT (FL_USHIFT + 4)
#define IMEMO_FL_USER0 FL_USER4
#define IMEMO_FL_USER1 FL_USER5
#define IMEMO_FL_USER2 FL_USER6
#define IMEMO_FL_USER3 FL_USER7
#define IMEMO_FL_USER4 FL_USER8
#define THROW_DATA_CONSUMED IMEMO_FL_USER0
#define THROW_DATA_P(err) RB_TYPE_P((VALUE)(err), T_IMEMO)
#define IFUNC_NEW(a,b,c) ((struct vm_ifunc *)rb_imemo_new(imemo_ifunc, (VALUE)(a), (VALUE)(b), (VALUE)(c), 0))
#define RB_IMEMO_TMPBUF_PTR(v) ((void *)(((const struct rb_imemo_tmpbuf_struct *)(v))->ptr))
#define MEMO_V1_SET(m,v) RB_OBJ_WRITE((m), &(m)->v1, (v))
#define MEMO_V2_SET(m,v) RB_OBJ_WRITE((m), &(m)->v2, (v))
#define MEMO_CAST(m) ((struct MEMO *)m)
#define MEMO_NEW(a,b,c) ((struct MEMO *)rb_imemo_new(imemo_memo, (VALUE)(a), (VALUE)(b), (VALUE)(c), 0))
#define roomof(x,y) (((x) + (y) - 1) / (y))
#define type_roomof(x,y) roomof(sizeof(x), sizeof(y))
#define MEMO_FOR(type,value) ((type *)RARRAY_PTR(value))
#define NEW_MEMO_FOR(type,value) ((value) = rb_ary_tmp_new_fill(type_roomof(type, VALUE)), MEMO_FOR(type, value))
#define NEW_PARTIAL_MEMO_FOR(type,value,member) ((value) = rb_ary_tmp_new_fill(type_roomof(type, VALUE)), rb_ary_set_len((value), offsetof(type, member) / sizeof(VALUE)), MEMO_FOR(type, value))
#define STRING_P(s) (RB_TYPE_P((s), T_STRING) && CLASS_OF(s) == rb_cString)
#define rb_cFixnum rb_cInteger
#define rb_cBignum rb_cInteger
#define NEW_CMP_OPT_MEMO(type,value) NEW_PARTIAL_MEMO_FOR(type, value, cmp_opt)
#define CMP_OPTIMIZABLE_BIT(type) (1U << TOKEN_PASTE(cmp_opt_,type))
#define CMP_OPTIMIZABLE(data,type) (((data).opt_inited & CMP_OPTIMIZABLE_BIT(type)) ? ((data).opt_methods & CMP_OPTIMIZABLE_BIT(type)) : (((data).opt_inited |= CMP_OPTIMIZABLE_BIT(type)), rb_method_basic_definition_p(TOKEN_PASTE(rb_c,type), id_cmp) && ((data).opt_methods |= CMP_OPTIMIZABLE_BIT(type))))
#define OPTIMIZED_CMP(a,b,data) ((FIXNUM_P(a) && FIXNUM_P(b) && CMP_OPTIMIZABLE(data, Fixnum)) ? (((long)a > (long)b) ? 1 : ((long)a < (long)b) ? -1 : 0) : (STRING_P(a) && STRING_P(b) && CMP_OPTIMIZABLE(data, String)) ? rb_str_cmp(a, b) : (RB_FLOAT_TYPE_P(a) && RB_FLOAT_TYPE_P(b) && CMP_OPTIMIZABLE(data, Float)) ? rb_float_cmp(a, b) : rb_cmpint(rb_funcallv(a, id_cmp, 1, &b), a, b))
#define ARRAY_DEBUG 0
#define RARRAY_PTR_IN_USE_FLAG FL_USER14
#define ARY_PTR_USING_P(ary) FL_TEST_RAW((ary), RARRAY_PTR_IN_USE_FLAG)
#define RARY_TRANSIENT_SET(ary) FL_SET_RAW((ary), RARRAY_TRANSIENT_FLAG);
#define RARY_TRANSIENT_UNSET(ary) FL_UNSET_RAW((ary), RARRAY_TRANSIENT_FLAG);
#define rb_ary_new_from_args(n,...) __extension__ ({ const VALUE args_to_new_ary[] = {__VA_ARGS__}; if (__builtin_constant_p(n)) { STATIC_ASSERT(rb_ary_new_from_args, numberof(args_to_new_ary) == (n)); } rb_ary_new_from_values(numberof(args_to_new_ary), args_to_new_ary); })
#define rb_raise_cstr(etype,mesg) rb_exc_raise(rb_exc_new_str(etype, rb_str_new_cstr(mesg)))
#define rb_raise_static(etype,mesg) rb_exc_raise(rb_exc_new_str(etype, rb_str_new_static(mesg, rb_strlen_lit(mesg))))
#define rb_name_err_raise_str(mesg,recv,name) rb_exc_raise(rb_name_err_new(mesg, recv, name))
#define rb_name_err_raise(mesg,recv,name) rb_name_err_raise_str(rb_fstring_cstr(mesg), (recv), (name))
#define rb_key_err_raise(mesg,recv,name) rb_exc_raise(rb_key_err_new(mesg, recv, name))
#define DEPRECATED_INTERNAL_FEATURE(func) (ruby_deprecated_internal_feature(func), UNREACHABLE)
#define id_signo ruby_static_id_signo
#define id_status ruby_static_id_status
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define rb_sys_fail_path(path) rb_sys_fail_path_in(RUBY_FUNCTION_NAME_STRING, path)
#define rb_syserr_fail_path(err,path) rb_syserr_fail_path_in(RUBY_FUNCTION_NAME_STRING, (err), (path))
#define ruby_sized_xrealloc(ptr,new_size,old_size) ruby_xrealloc(ptr, new_size)
#define ruby_sized_xrealloc2(ptr,new_count,element_size,old_count) ruby_xrealloc(ptr, new_count, element_size)
#define ruby_sized_xfree(ptr,size) ruby_xfree(ptr)
#define SIZED_REALLOC_N(var,type,n,old_n) REALLOC_N(var, type, n)
#undef NEWOBJF_OF
#undef RB_NEWOBJ_OF
#define RB_NEWOBJ_OF(obj,type,klass,flags) type *(obj) = (type*)(((flags) & FL_WB_PROTECTED) ? rb_wb_protected_newobj_of(klass, (flags) & ~FL_WB_PROTECTED) : rb_wb_unprotected_newobj_of(klass, flags))
#define NEWOBJ_OF(obj,type,klass,flags) RB_NEWOBJ_OF(obj,type,klass,flags)
#define RHASH_TBL_RAW(h) rb_hash_tbl_raw(h)
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define rb_io_fptr_finalize rb_io_fptr_finalize_internal
#define FIXNUM_POSITIVE_P(num) ((SIGNED_VALUE)(num) > (SIGNED_VALUE)INT2FIX(0))
#define FIXNUM_NEGATIVE_P(num) ((SIGNED_VALUE)(num) < 0)
#define FIXNUM_ZERO_P(num) ((num) == INT2FIX(0))
#define INT_NEGATIVE_P(x) (FIXNUM_P(x) ? FIXNUM_NEGATIVE_P(x) : BIGNUM_NEGATIVE_P(x))
#define ROUND_DEFAULT RUBY_NUM_ROUND_HALF_UP
#define ROUND_TO(mode,even,up,down) ((mode) == RUBY_NUM_ROUND_HALF_EVEN ? even : (mode) == RUBY_NUM_ROUND_HALF_UP ? up : down)
#define ROUND_FUNC(mode,name) ROUND_TO(mode, name ##_half_even, name ##_half_up, name ##_half_down)
#define ROUND_CALL(mode,name,args) ROUND_TO(mode, name ##_half_even args, name ##_half_up args, name ##_half_down args)
#define RUBY_BIT_ROTL(v,n) (((v) << (n)) | ((v) >> ((sizeof(v) * 8) - n)))
#define RUBY_BIT_ROTR(v,n) (((v) >> (n)) | ((v) << ((sizeof(v) * 8) - n)))
#define rb_float_value(v) rb_float_value_inline(v)
#define rb_float_new(d) rb_float_new_inline(d)
#define RBASIC_CLEAR_CLASS(obj) memset(&(((struct RBasicRaw *)((VALUE)(obj)))->klass), 0, sizeof(VALUE))
#define RBASIC_SET_CLASS_RAW(obj,cls) memcpy(&((struct RBasicRaw *)((VALUE)(obj)))->klass, &(cls), sizeof(VALUE))
#define RBASIC_SET_CLASS(obj,cls) do { VALUE _obj_ = (obj); RB_OBJ_WRITE(_obj_, &((struct RBasicRaw *)(_obj_))->klass, cls); } while (0)
#define USE_SYMBOL_GC 1
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define RB_MAX_GROUPS (65536)
#define ARGVSTR2ARGV(argv_str) ((char **)RB_IMEMO_TMPBUF_PTR(argv_str) + 1)
#define RANGE_BEG(r) (RSTRUCT(r)->as.ary[0])
#define RANGE_END(r) (RSTRUCT(r)->as.ary[1])
#define RANGE_EXCL(r) (RSTRUCT(r)->as.ary[2])
#define rb_fstring_lit(str) rb_fstring_new((str), rb_strlen_lit(str))
#define rb_fstring_literal(str) rb_fstring_lit(str)
#define rb_fstring_cstr(str) RB_GNUC_EXTENSION_BLOCK( (__builtin_constant_p(str)) ? rb_fstring_new((str), (long)strlen(str)) : rb_fstring_cstr(str) )
#define QUOTE(str) rb_str_quote_unprintable(str)
#define QUOTE_ID(id) rb_id_quote_unprintable(id)
#define STR_NOEMBED FL_USER1
#define STR_SHARED FL_USER2
#define STR_EMBED_P(str) (!FL_TEST_RAW((str), STR_NOEMBED))
#define STR_SHARED_P(s) FL_ALL_RAW((s), STR_NOEMBED|ELTS_SHARED)
#define is_ascii_string(str) (rb_enc_str_coderange(str) == ENC_CODERANGE_7BIT)
#define is_broken_string(str) (rb_enc_str_coderange(str) == ENC_CODERANGE_BROKEN)
#define rb_sym_intern_ascii_cstr(ptr) __extension__ ( { (__builtin_constant_p(ptr)) ? rb_sym_intern_ascii((ptr), (long)strlen(ptr)) : rb_sym_intern_ascii_cstr(ptr); })
#define COVERAGE_INDEX_LINES 0
#define COVERAGE_INDEX_BRANCHES 1
#define COVERAGE_TARGET_LINES 1
#define COVERAGE_TARGET_BRANCHES 2
#define COVERAGE_TARGET_METHODS 4
#define COVERAGE_TARGET_ONESHOT_LINES 8
#define ROBJECT_TRANSIENT_FLAG FL_USER13
#define ROBJ_TRANSIENT_P(obj) FL_TEST_RAW((obj), ROBJECT_TRANSIENT_FLAG)
#define ROBJ_TRANSIENT_SET(obj) FL_SET_RAW((obj), ROBJECT_TRANSIENT_FLAG)
#define ROBJ_TRANSIENT_UNSET(obj) FL_UNSET_RAW((obj), ROBJECT_TRANSIENT_FLAG)
#pragma GCC visibility push(default)
#undef Check_Type
#define Check_Type(v,t) (!RB_TYPE_P((VALUE)(v), (t)) || ((t) == RUBY_T_DATA && RTYPEDDATA_P(v)) ? rb_unexpected_type((VALUE)(v), (t)) : (void)0)
#define rb_typeddata_is_instance_of rb_typeddata_is_instance_of_inline
#define RB_OBJ_GC_FLAGS_MAX 5
#pragma GCC visibility pop
#define RUBY_DTRACE_CREATE_HOOK(name,arg) RUBY_DTRACE_HOOK(name ##_CREATE, arg)
#define RUBY_DTRACE_HOOK(name,arg) do { if (UNLIKELY(RUBY_DTRACE_ ##name ##_ENABLED())) { int dtrace_line; const char *dtrace_file = rb_source_location_cstr(&dtrace_line); if (!dtrace_file) dtrace_file = ""; RUBY_DTRACE_ ##name(arg, dtrace_file, dtrace_line); } } while (0)
#define RB_OBJ_BUILTIN_TYPE(obj) rb_obj_builtin_type(obj)
#define OBJ_BUILTIN_TYPE(obj) RB_OBJ_BUILTIN_TYPE(obj)
#define rb_obj_builtin_type(obj) __extension__({ VALUE arg_obj = (obj); RB_SPECIAL_CONST_P(arg_obj) ? -1 : RB_BUILTIN_TYPE(arg_obj); })
#define FLEX_ARY_LEN 
#define BITFIELD(type,name,size) type name : size
#define COMPILER_WARNING_PUSH _Pragma("GCC diagnostic push")
#define COMPILER_WARNING_POP _Pragma("GCC diagnostic pop")
#define COMPILER_WARNING_SPECIFIER(kind,msg) GCC diagnostic kind #msg
#define COMPILER_WARNING_ERROR(flag) COMPILER_WARNING_PRAGMA(COMPILER_WARNING_SPECIFIER(error, flag))
#define COMPILER_WARNING_IGNORED(flag) COMPILER_WARNING_PRAGMA(COMPILER_WARNING_SPECIFIER(ignored, flag))
#define COMPILER_WARNING_PRAGMA(str) COMPILER_WARNING_PRAGMA_(str)
#define COMPILER_WARNING_PRAGMA_(str) _Pragma(#str)
#define RUBY_VM_H 1
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define vm_exec rb_vm_exec
#define RUBY_GC_H 1
#define SET_MACHINE_STACK_END(p) __asm__ __volatile__ ("movq\t%%rsp, %0" : "=r" (*(p)))
#define RUBY_MARK_FREE_DEBUG 0
#define RUBY_MARK_ENTER(msg) 
#define RUBY_MARK_LEAVE(msg) 
#define RUBY_FREE_ENTER(msg) 
#define RUBY_FREE_LEAVE(msg) 
#define RUBY_GC_INFO if(0)printf
#define RUBY_MARK_UNLESS_NULL(ptr) do { VALUE markobj = (ptr); if (RTEST(markobj)) {rb_gc_mark(markobj);} } while (0)
#define RUBY_FREE_UNLESS_NULL(ptr) if(ptr){ruby_xfree(ptr);(ptr)=NULL;}
#define STACK_UPPER(x,a,b) (b)
#define STACK_GROW_DIR_DETECTION 
#define STACK_DIR_UPPER(a,b) STACK_UPPER(0, (a), (b))
#define IS_STACK_DIR_UPPER() STACK_DIR_UPPER(1,0)
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define RUBY_VM_CORE_H 
#define VM_CHECK_MODE 0
#define VMDEBUG 0
#define RUBY_ASSERT_H 
#define RUBY_ASSERT_FAIL(expr) rb_assert_failure(__FILE__, __LINE__, RUBY_FUNCTION_NAME_STRING, expr)
#define RUBY_ASSERT_MESG(expr,mesg) ((expr) ? (void)0 : RUBY_ASSERT_FAIL(mesg))
#define RUBY_ASSERT_MESG_WHEN(cond,expr,mesg) __builtin_choose_expr( __builtin_constant_p(cond), __builtin_choose_expr(cond, RUBY_ASSERT_MESG(expr, mesg), (void)0), RUBY_ASSERT_MESG(!(cond) || (expr), mesg))
#define RUBY_ASSERT(expr) RUBY_ASSERT_MESG_WHEN(!RUBY_NDEBUG+0, expr, #expr)
#define RUBY_ASSERT_WHEN(cond,expr) RUBY_ASSERT_MESG_WHEN(cond, expr, #expr)
#undef assert
#define assert RUBY_ASSERT
#define RUBY_NDEBUG 0
#define VM_ASSERT(expr) ((void)0)
#define VM_UNREACHABLE(func) UNREACHABLE
#define RUBY_VM_THREAD_MODEL 2
#define VM_INSN_INFO_TABLE_IMPL 2
#define RUBY_NODE_H 1
#define RNODE(obj) (R_CAST(RNode)(obj))
#define NODE_FL_NEWLINE (((VALUE)1)<<7)
#define NODE_TYPESHIFT 8
#define NODE_TYPEMASK (((VALUE)0x7f)<<NODE_TYPESHIFT)
#define nd_type(n) ((int) (((n)->flags & NODE_TYPEMASK)>>NODE_TYPESHIFT))
#define nd_set_type(n,t) (n)->flags=(((n)->flags&~NODE_TYPEMASK)|((((unsigned long)(t))<<NODE_TYPESHIFT)&NODE_TYPEMASK))
#define NODE_LSHIFT (NODE_TYPESHIFT+7)
#define NODE_LMASK (((SIGNED_VALUE)1<<(sizeof(VALUE)*CHAR_BIT-NODE_LSHIFT))-1)
#define nd_line(n) (int)(((SIGNED_VALUE)(n)->flags)>>NODE_LSHIFT)
#define nd_set_line(n,l) (n)->flags=(((n)->flags&~((VALUE)(-1)<<NODE_LSHIFT))|((VALUE)((l)&NODE_LMASK)<<NODE_LSHIFT))
#define nd_first_column(n) ((int)((n)->nd_loc.beg_pos.column))
#define nd_set_first_column(n,v) ((n)->nd_loc.beg_pos.column = (v))
#define nd_first_lineno(n) ((int)((n)->nd_loc.beg_pos.lineno))
#define nd_set_first_lineno(n,v) ((n)->nd_loc.beg_pos.lineno = (v))
#define nd_first_loc(n) ((n)->nd_loc.beg_pos)
#define nd_set_first_loc(n,v) (nd_first_loc(n) = (v))
#define nd_last_column(n) ((int)((n)->nd_loc.end_pos.column))
#define nd_set_last_column(n,v) ((n)->nd_loc.end_pos.column = (v))
#define nd_last_lineno(n) ((int)((n)->nd_loc.end_pos.lineno))
#define nd_set_last_lineno(n,v) ((n)->nd_loc.end_pos.lineno = (v))
#define nd_last_loc(n) ((n)->nd_loc.end_pos)
#define nd_set_last_loc(n,v) (nd_last_loc(n) = (v))
#define nd_node_id(n) ((n)->node_id)
#define nd_set_node_id(n,id) ((n)->node_id = (id))
#define nd_head u1.node
#define nd_alen u2.argc
#define nd_next u3.node
#define nd_cond u1.node
#define nd_body u2.node
#define nd_else u3.node
#define nd_resq u2.node
#define nd_ensr u3.node
#define nd_1st u1.node
#define nd_2nd u2.node
#define nd_stts u1.node
#define nd_entry u3.entry
#define nd_vid u1.id
#define nd_cflag u2.id
#define nd_cval u3.value
#define nd_oid u1.id
#define nd_tbl u1.tbl
#define nd_var u1.node
#define nd_iter u3.node
#define nd_value u2.node
#define nd_aid u3.id
#define nd_lit u1.value
#define nd_rest u1.id
#define nd_opt u1.node
#define nd_pid u1.id
#define nd_plen u2.argc
#define nd_recv u1.node
#define nd_mid u2.id
#define nd_args u3.node
#define nd_ainfo u3.args
#define nd_defn u3.node
#define nd_cpath u1.node
#define nd_super u3.node
#define nd_beg u1.node
#define nd_end u2.node
#define nd_state u3.state
#define nd_rval u2.value
#define nd_nth u2.argc
#define nd_tag u1.id
#define nd_alias u1.id
#define nd_orig u2.id
#define nd_undef u2.node
#define NEW_NODE(t,a0,a1,a2,loc) rb_node_newnode((t),(VALUE)(a0),(VALUE)(a1),(VALUE)(a2),loc)
#define NEW_DEFN(i,a,d,loc) NEW_NODE(NODE_DEFN,0,i,NEW_SCOPE(a,d,loc),loc)
#define NEW_DEFS(r,i,a,d,loc) NEW_NODE(NODE_DEFS,r,i,NEW_SCOPE(a,d,loc),loc)
#define NEW_SCOPE(a,b,loc) NEW_NODE(NODE_SCOPE,local_tbl(p),b,a,loc)
#define NEW_BLOCK(a,loc) NEW_NODE(NODE_BLOCK,a,0,0,loc)
#define NEW_IF(c,t,e,loc) NEW_NODE(NODE_IF,c,t,e,loc)
#define NEW_UNLESS(c,t,e,loc) NEW_NODE(NODE_UNLESS,c,t,e,loc)
#define NEW_CASE(h,b,loc) NEW_NODE(NODE_CASE,h,b,0,loc)
#define NEW_CASE2(b,loc) NEW_NODE(NODE_CASE2,0,b,0,loc)
#define NEW_WHEN(c,t,e,loc) NEW_NODE(NODE_WHEN,c,t,e,loc)
#define NEW_WHILE(c,b,n,loc) NEW_NODE(NODE_WHILE,c,b,n,loc)
#define NEW_UNTIL(c,b,n,loc) NEW_NODE(NODE_UNTIL,c,b,n,loc)
#define NEW_FOR(i,b,loc) NEW_NODE(NODE_FOR,0,b,i,loc)
#define NEW_FOR_MASGN(v,loc) NEW_NODE(NODE_FOR_MASGN,v,0,0,loc)
#define NEW_ITER(a,b,loc) NEW_NODE(NODE_ITER,0,NEW_SCOPE(a,b,loc),0,loc)
#define NEW_LAMBDA(a,b,loc) NEW_NODE(NODE_LAMBDA,0,NEW_SCOPE(a,b,loc),0,loc)
#define NEW_BREAK(s,loc) NEW_NODE(NODE_BREAK,s,0,0,loc)
#define NEW_NEXT(s,loc) NEW_NODE(NODE_NEXT,s,0,0,loc)
#define NEW_REDO(loc) NEW_NODE(NODE_REDO,0,0,0,loc)
#define NEW_RETRY(loc) NEW_NODE(NODE_RETRY,0,0,0,loc)
#define NEW_BEGIN(b,loc) NEW_NODE(NODE_BEGIN,0,b,0,loc)
#define NEW_RESCUE(b,res,e,loc) NEW_NODE(NODE_RESCUE,b,res,e,loc)
#define NEW_RESBODY(a,ex,n,loc) NEW_NODE(NODE_RESBODY,n,ex,a,loc)
#define NEW_ENSURE(b,en,loc) NEW_NODE(NODE_ENSURE,b,0,en,loc)
#define NEW_RETURN(s,loc) NEW_NODE(NODE_RETURN,s,0,0,loc)
#define NEW_YIELD(a,loc) NEW_NODE(NODE_YIELD,a,0,0,loc)
#define NEW_LIST(a,loc) NEW_ARRAY(a,loc)
#define NEW_ARRAY(a,loc) NEW_NODE(NODE_ARRAY,a,1,0,loc)
#define NEW_ZARRAY(loc) NEW_NODE(NODE_ZARRAY,0,0,0,loc)
#define NEW_HASH(a,loc) NEW_NODE(NODE_HASH,a,0,0,loc)
#define NEW_MASGN(l,r,loc) NEW_NODE(NODE_MASGN,l,0,r,loc)
#define NEW_GASGN(v,val,loc) NEW_NODE(NODE_GASGN,v,val,rb_global_entry(v),loc)
#define NEW_LASGN(v,val,loc) NEW_NODE(NODE_LASGN,v,val,0,loc)
#define NEW_DASGN(v,val,loc) NEW_NODE(NODE_DASGN,v,val,0,loc)
#define NEW_DASGN_CURR(v,val,loc) NEW_NODE(NODE_DASGN_CURR,v,val,0,loc)
#define NEW_IASGN(v,val,loc) NEW_NODE(NODE_IASGN,v,val,0,loc)
#define NEW_CDECL(v,val,path,loc) NEW_NODE(NODE_CDECL,v,val,path,loc)
#define NEW_CVASGN(v,val,loc) NEW_NODE(NODE_CVASGN,v,val,0,loc)
#define NEW_OP_ASGN1(p,id,a,loc) NEW_NODE(NODE_OP_ASGN1,p,id,a,loc)
#define NEW_OP_ASGN2(r,t,i,o,val,loc) NEW_NODE(NODE_OP_ASGN2,r,val,NEW_OP_ASGN22(i,o,t,loc),loc)
#define NEW_OP_ASGN22(i,o,t,loc) NEW_NODE(NODE_OP_ASGN2,i,o,t,loc)
#define NEW_OP_ASGN_OR(i,val,loc) NEW_NODE(NODE_OP_ASGN_OR,i,val,0,loc)
#define NEW_OP_ASGN_AND(i,val,loc) NEW_NODE(NODE_OP_ASGN_AND,i,val,0,loc)
#define NEW_OP_CDECL(v,op,val,loc) NEW_NODE(NODE_OP_CDECL,v,val,op,loc)
#define NEW_GVAR(v,loc) NEW_NODE(NODE_GVAR,v,0,rb_global_entry(v),loc)
#define NEW_LVAR(v,loc) NEW_NODE(NODE_LVAR,v,0,0,loc)
#define NEW_DVAR(v,loc) NEW_NODE(NODE_DVAR,v,0,0,loc)
#define NEW_IVAR(v,loc) NEW_NODE(NODE_IVAR,v,0,0,loc)
#define NEW_CONST(v,loc) NEW_NODE(NODE_CONST,v,0,0,loc)
#define NEW_CVAR(v,loc) NEW_NODE(NODE_CVAR,v,0,0,loc)
#define NEW_NTH_REF(n,loc) NEW_NODE(NODE_NTH_REF,0,n,0,loc)
#define NEW_BACK_REF(n,loc) NEW_NODE(NODE_BACK_REF,0,n,0,loc)
#define NEW_MATCH(c,loc) NEW_NODE(NODE_MATCH,c,0,0,loc)
#define NEW_MATCH2(n1,n2,loc) NEW_NODE(NODE_MATCH2,n1,n2,0,loc)
#define NEW_MATCH3(r,n2,loc) NEW_NODE(NODE_MATCH3,r,n2,0,loc)
#define NEW_LIT(l,loc) NEW_NODE(NODE_LIT,l,0,0,loc)
#define NEW_STR(s,loc) NEW_NODE(NODE_STR,s,0,0,loc)
#define NEW_DSTR(s,loc) NEW_NODE(NODE_DSTR,s,1,0,loc)
#define NEW_XSTR(s,loc) NEW_NODE(NODE_XSTR,s,0,0,loc)
#define NEW_DXSTR(s,loc) NEW_NODE(NODE_DXSTR,s,0,0,loc)
#define NEW_DSYM(s,loc) NEW_NODE(NODE_DSYM,s,0,0,loc)
#define NEW_EVSTR(n,loc) NEW_NODE(NODE_EVSTR,0,(n),0,loc)
#define NEW_CALL(r,m,a,loc) NEW_NODE(NODE_CALL,r,m,a,loc)
#define NEW_OPCALL(r,m,a,loc) NEW_NODE(NODE_OPCALL,r,m,a,loc)
#define NEW_FCALL(m,a,loc) NEW_NODE(NODE_FCALL,0,m,a,loc)
#define NEW_VCALL(m,loc) NEW_NODE(NODE_VCALL,0,m,0,loc)
#define NEW_SUPER(a,loc) NEW_NODE(NODE_SUPER,0,0,a,loc)
#define NEW_ZSUPER(loc) NEW_NODE(NODE_ZSUPER,0,0,0,loc)
#define NEW_ARGS_AUX(r,b,loc) NEW_NODE(NODE_ARGS_AUX,r,b,0,loc)
#define NEW_OPT_ARG(i,v,loc) NEW_NODE(NODE_OPT_ARG,i,v,0,loc)
#define NEW_KW_ARG(i,v,loc) NEW_NODE(NODE_KW_ARG,i,v,0,loc)
#define NEW_POSTARG(i,v,loc) NEW_NODE(NODE_POSTARG,i,v,0,loc)
#define NEW_ARGSCAT(a,b,loc) NEW_NODE(NODE_ARGSCAT,a,b,0,loc)
#define NEW_ARGSPUSH(a,b,loc) NEW_NODE(NODE_ARGSPUSH,a,b,0,loc)
#define NEW_SPLAT(a,loc) NEW_NODE(NODE_SPLAT,a,0,0,loc)
#define NEW_BLOCK_PASS(b,loc) NEW_NODE(NODE_BLOCK_PASS,0,b,0,loc)
#define NEW_ALIAS(n,o,loc) NEW_NODE(NODE_ALIAS,n,o,0,loc)
#define NEW_VALIAS(n,o,loc) NEW_NODE(NODE_VALIAS,n,o,0,loc)
#define NEW_UNDEF(i,loc) NEW_NODE(NODE_UNDEF,0,i,0,loc)
#define NEW_CLASS(n,b,s,loc) NEW_NODE(NODE_CLASS,n,NEW_SCOPE(0,b,loc),(s),loc)
#define NEW_SCLASS(r,b,loc) NEW_NODE(NODE_SCLASS,r,NEW_SCOPE(0,b,loc),0,loc)
#define NEW_MODULE(n,b,loc) NEW_NODE(NODE_MODULE,n,NEW_SCOPE(0,b,loc),0,loc)
#define NEW_COLON2(c,i,loc) NEW_NODE(NODE_COLON2,c,i,0,loc)
#define NEW_COLON3(i,loc) NEW_NODE(NODE_COLON3,0,i,0,loc)
#define NEW_DOT2(b,e,loc) NEW_NODE(NODE_DOT2,b,e,0,loc)
#define NEW_DOT3(b,e,loc) NEW_NODE(NODE_DOT3,b,e,0,loc)
#define NEW_SELF(loc) NEW_NODE(NODE_SELF,0,0,0,loc)
#define NEW_NIL(loc) NEW_NODE(NODE_NIL,0,0,0,loc)
#define NEW_TRUE(loc) NEW_NODE(NODE_TRUE,0,0,0,loc)
#define NEW_FALSE(loc) NEW_NODE(NODE_FALSE,0,0,0,loc)
#define NEW_ERRINFO(loc) NEW_NODE(NODE_ERRINFO,0,0,0,loc)
#define NEW_DEFINED(e,loc) NEW_NODE(NODE_DEFINED,e,0,0,loc)
#define NEW_PREEXE(b,loc) NEW_SCOPE(b,loc)
#define NEW_POSTEXE(b,loc) NEW_NODE(NODE_POSTEXE,0,b,0,loc)
#define NEW_ATTRASGN(r,m,a,loc) NEW_NODE(NODE_ATTRASGN,r,m,a,loc)
#define NODE_SPECIAL_REQUIRED_KEYWORD ((NODE *)-1)
#define NODE_REQUIRED_KEYWORD_P(node) ((node)->nd_value == NODE_SPECIAL_REQUIRED_KEYWORD)
#define NODE_SPECIAL_NO_NAME_REST ((NODE *)-1)
#define NODE_NAMED_REST_P(node) ((node) != NODE_SPECIAL_NO_NAME_REST)
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define RUBY_VM_OPTS_H 
#define OPT_TAILCALL_OPTIMIZATION 0
#define OPT_PEEPHOLE_OPTIMIZATION 1
#define OPT_SPECIALISED_INSTRUCTION 1
#define OPT_INLINE_CONST_CACHE 1
#define OPT_FROZEN_STRING_LITERAL 0
#define OPT_DEBUG_FROZEN_STRING_LITERAL 0
#define OPT_THREADED_CODE 0
#define OPT_DIRECT_THREADED_CODE (OPT_THREADED_CODE == 0)
#define OPT_TOKEN_THREADED_CODE (OPT_THREADED_CODE == 1)
#define OPT_CALL_THREADED_CODE (OPT_THREADED_CODE == 2)
#define OPT_CHECKED_RUN 1
#define OPT_INLINE_METHOD_CACHE 1
#define OPT_GLOBAL_METHOD_CACHE 1
#define OPT_BLOCKINLINING 0
#define OPT_IC_FOR_IVAR 1
#define OPT_OPERANDS_UNIFICATION 1
#define OPT_INSTRUCTIONS_UNIFICATION 0
#define OPT_UNIFY_ALL_COMBINATION 0
#define OPT_STACK_CACHING 0
#define SUPPORT_JOKE 0
#define VM_COLLECT_USAGE_DETAILS 0
#define RUBY_ID_H 
#define ID_STATIC_SYM RUBY_ID_STATIC_SYM
#define ID_SCOPE_SHIFT RUBY_ID_SCOPE_SHIFT
#define ID_SCOPE_MASK RUBY_ID_SCOPE_MASK
#define ID_LOCAL RUBY_ID_LOCAL
#define ID_INSTANCE RUBY_ID_INSTANCE
#define ID_GLOBAL RUBY_ID_GLOBAL
#define ID_ATTRSET RUBY_ID_ATTRSET
#define ID_CONST RUBY_ID_CONST
#define ID_CLASS RUBY_ID_CLASS
#define ID_JUNK RUBY_ID_JUNK
#define ID_INTERNAL RUBY_ID_INTERNAL
#define symIFUNC ID2SYM(idIFUNC)
#define symCFUNC ID2SYM(idCFUNC)
#define RUBY_TOKEN_DOT2 128
#define RUBY_TOKEN_DOT3 129
#define RUBY_TOKEN_UPLUS 130
#define RUBY_TOKEN_UMINUS 131
#define RUBY_TOKEN_POW 132
#define RUBY_TOKEN_CMP 133
#define RUBY_TOKEN_LSHFT 134
#define RUBY_TOKEN_RSHFT 135
#define RUBY_TOKEN_LEQ 136
#define RUBY_TOKEN_GEQ 137
#define RUBY_TOKEN_EQ 138
#define RUBY_TOKEN_EQQ 139
#define RUBY_TOKEN_NEQ 140
#define RUBY_TOKEN_MATCH 141
#define RUBY_TOKEN_NMATCH 142
#define RUBY_TOKEN_AREF 143
#define RUBY_TOKEN_ASET 144
#define RUBY_TOKEN_COLON2 145
#define RUBY_TOKEN_ANDOP 146
#define RUBY_TOKEN_OROP 147
#define RUBY_TOKEN_ANDDOT 148
#define RUBY_TOKEN(t) RUBY_TOKEN_ ##t
#define RUBY_TOKEN2ID_TYPE(tok,type) ((tok<<RUBY_ID_SCOPE_SHIFT)|type|RUBY_ID_STATIC_SYM)
#define TOKEN2LOCALID(tok) RUBY_TOKEN2ID_TYPE(tok, RUBY_ID_LOCAL)
#define TOKEN2INSTANCEID(tok) RUBY_TOKEN2ID_TYPE(tok, RUBY_ID_INSTANCE)
#define TOKEN2GLOBALID(tok) RUBY_TOKEN2ID_TYPE(tok, RUBY_ID_GLOBAL)
#define TOKEN2CONSTID(tok) RUBY_TOKEN2ID_TYPE(tok, RUBY_ID_CONST)
#define TOKEN2CLASSID(tok) RUBY_TOKEN2ID_TYPE(tok, RUBY_ID_CLASS)
#define TOKEN2ATTRSETID(tok) RUBY_TOKEN2ID_TYPE(tok, RUBY_ID_ATTRSET)
#define DEFINE_LOCALID_FROM_TOKEN(n) id ##n = TOKEN2LOCALID(t ##n)
#define DEFINE_INSTANCEID_FROM_TOKEN(n) id ##n = TOKEN2INSTANCEID(t ##n)
#define DEFINE_GLOBALID_FROM_TOKEN(n) id ##n = TOKEN2GLOBALID(t ##n)
#define DEFINE_CONSTID_FROM_TOKEN(n) id ##n = TOKEN2CONSTID(t ##n)
#define DEFINE_CLASSID_FROM_TOKEN(n) id ##n = TOKEN2CLASSID(t ##n)
#define DEFINE_ATTRSETID_FROM_TOKEN(n) id ##n = TOKEN2ATTRSETID(t ##n)
#define RUBY_METHOD_H 1
#define END_OF_ENUMERATION(key) 
#define METHOD_ENTRY_VISI(me) (rb_method_visibility_t)(((me)->flags & (IMEMO_FL_USER0 | IMEMO_FL_USER1)) >> (IMEMO_FL_USHIFT+0))
#define METHOD_ENTRY_BASIC(me) (int) (((me)->flags & (IMEMO_FL_USER2 )) >> (IMEMO_FL_USHIFT+2))
#define METHOD_ENTRY_COMPLEMENTED(me) ((me)->flags & IMEMO_FL_USER3)
#define METHOD_ENTRY_COMPLEMENTED_SET(me) ((me)->flags = (me)->flags | IMEMO_FL_USER3)
#define VM_METHOD_TYPE_MINIMUM_BITS 4
#define rb_iseq_t rb_iseq_t
#define UNDEFINED_METHOD_ENTRY_P(me) (!(me) || !(me)->def || (me)->def->type == VM_METHOD_TYPE_UNDEF)
#define UNDEFINED_REFINED_METHOD_P(def) ((def)->type == VM_METHOD_TYPE_REFINED && UNDEFINED_METHOD_ENTRY_P((def)->body.refined.orig_me))
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define RUBY_ATOMIC_H 
#define ATOMIC_SET(var,val) (void)__atomic_exchange_n(&(var), (val), __ATOMIC_SEQ_CST)
#define ATOMIC_INC(var) __atomic_fetch_add(&(var), 1, __ATOMIC_SEQ_CST)
#define ATOMIC_DEC(var) __atomic_fetch_sub(&(var), 1, __ATOMIC_SEQ_CST)
#define ATOMIC_OR(var,val) __atomic_fetch_or(&(var), (val), __ATOMIC_SEQ_CST)
#define ATOMIC_EXCHANGE(var,val) __atomic_exchange_n(&(var), (val), __ATOMIC_SEQ_CST)
#define ATOMIC_CAS(var,oldval,newval) RB_GNUC_EXTENSION_BLOCK( __typeof__(var) oldvaldup = (oldval); __atomic_compare_exchange_n(&(var), &oldvaldup, (newval), 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST); oldvaldup )
#define ATOMIC_SIZE_ADD(var,val) __atomic_fetch_add(&(var), (val), __ATOMIC_SEQ_CST)
#define ATOMIC_SIZE_SUB(var,val) __atomic_fetch_sub(&(var), (val), __ATOMIC_SEQ_CST)
#define RUBY_ATOMIC_GENERIC_MACRO 1
#define ATOMIC_SIZE_INC(var) ATOMIC_INC(var)
#define ATOMIC_SIZE_DEC(var) ATOMIC_DEC(var)
#define ATOMIC_SIZE_EXCHANGE(var,val) ATOMIC_EXCHANGE(var, val)
#define ATOMIC_SIZE_CAS(var,oldval,val) ATOMIC_CAS(var, oldval, val)
#define ATOMIC_PTR_EXCHANGE(var,val) ATOMIC_EXCHANGE(var, val)
#define ATOMIC_PTR_CAS(var,oldval,newval) ATOMIC_CAS(var, oldval, newval)
#define ATOMIC_VALUE_EXCHANGE(var,val) ATOMIC_EXCHANGE(var, val)
#define ATOMIC_VALUE_CAS(var,oldval,val) ATOMIC_CAS(var, oldval, val)
#define CCAN_LIST_H 
#define _ASSERT_H 1
#define __ASSERT_VOID_CAST (void)
#define _ASSERT_H_DECLS 
#define assert(expr) ((void) sizeof ((expr) ? 1 : 0), __extension__ ({ if (expr) ; else __assert_fail (#expr, __FILE__, __LINE__, __ASSERT_FUNCTION); }))
#define assert_perror(errnum) (!(errnum) ? __ASSERT_VOID_CAST (0) : __assert_perror_fail ((errnum), __FILE__, __LINE__, __ASSERT_FUNCTION))
#define __ASSERT_FUNCTION __extension__ __PRETTY_FUNCTION__
#undef static_assert
#define static_assert _Static_assert
#define CCAN_STR_H 
#define stringify(expr) stringify_1(expr)
#define stringify_1(expr) #expr
#define CCAN_CONTAINER_OF_H 
#define CCAN_CHECK_TYPE_H 
#define check_type(expr,type) ((typeof(expr) *)0 != (type *)0)
#define check_types_match(expr1,expr2) ((typeof(expr1) *)0 != (typeof(expr2) *)0)
#define container_of(member_ptr,containing_type,member) ((containing_type *) ((char *)(member_ptr) - container_off(containing_type, member)) + check_types_match(*(member_ptr), ((containing_type *)0)->member))
#define container_of_or_null(member_ptr,containing_type,member) ((containing_type *) container_of_or_null_(member_ptr, container_off(containing_type, member)) + check_types_match(*(member_ptr), ((containing_type *)0)->member))
#define container_off(containing_type,member) offsetof(containing_type, member)
#define container_of_var(member_ptr,container_var,member) container_of(member_ptr, typeof(*container_var), member)
#define container_off_var(var,member) container_off(typeof(*var), member)
#define LIST_LOC __FILE__ ":" stringify(__LINE__)
#define list_debug(h,loc) ((void)loc, h)
#define list_debug_node(n,loc) ((void)loc, n)
#define LIST_HEAD_INIT(name) { { &(name).n, &(name).n } }
#define LIST_HEAD(name) struct list_head name = LIST_HEAD_INIT(name)
#define list_add_after(h,p,n) list_add_after_(h, p, n, LIST_LOC)
#define list_add(h,n) list_add_(h, n, LIST_LOC)
#define list_add_before(h,p,n) list_add_before_(h, p, n, LIST_LOC)
#define list_add_tail(h,n) list_add_tail_(h, n, LIST_LOC)
#define list_empty(h) list_empty_(h, LIST_LOC)
#define list_empty_nodebug(h) list_empty(h)
#define list_del(n) list_del_(n, LIST_LOC)
#define list_del_init(n) list_del_init_(n, LIST_LOC)
#define list_swap(o,n) list_swap_(o, n, LIST_LOC)
#define list_entry(n,type,member) container_of(n, type, member)
#define list_top(h,type,member) ((type *)list_top_((h), list_off_(type, member)))
#define list_pop(h,type,member) ((type *)list_pop_((h), list_off_(type, member)))
#define list_tail(h,type,member) ((type *)list_tail_((h), list_off_(type, member)))
#define list_for_each(h,i,member) list_for_each_off(h, i, list_off_var_(i, member))
#define list_for_each_rev(h,i,member) list_for_each_rev_off(h, i, list_off_var_(i, member))
#define list_for_each_rev_safe(h,i,nxt,member) list_for_each_rev_safe_off(h, i, nxt, list_off_var_(i, member))
#define list_for_each_safe(h,i,nxt,member) list_for_each_safe_off(h, i, nxt, list_off_var_(i, member))
#define list_next(h,i,member) ((list_typeof(i))list_entry_or_null(list_debug(h, __FILE__ ":" stringify(__LINE__)), (i)->member.next, list_off_var_((i), member)))
#define list_prev(h,i,member) ((list_typeof(i))list_entry_or_null(list_debug(h, __FILE__ ":" stringify(__LINE__)), (i)->member.prev, list_off_var_((i), member)))
#define list_append_list(t,f) list_append_list_(t, f, __FILE__ ":" stringify(__LINE__))
#define list_prepend_list(t,f) list_prepend_list_(t, f, LIST_LOC)
#define list_for_each_off_dir_(h,i,off,dir) for (i = list_node_to_off_(list_debug(h, LIST_LOC)->n.dir, (off)); list_node_from_off_((void *)i, (off)) != &(h)->n; i = list_node_to_off_(list_node_from_off_((void *)i, (off))->dir, (off)))
#define list_for_each_safe_off_dir_(h,i,nxt,off,dir) for (i = list_node_to_off_(list_debug(h, LIST_LOC)->n.dir, (off)), nxt = list_node_to_off_(list_node_from_off_(i, (off))->dir, (off)); list_node_from_off_(i, (off)) != &(h)->n; i = nxt, nxt = list_node_to_off_(list_node_from_off_(i, (off))->dir, (off)))
#define list_for_each_off(h,i,off) list_for_each_off_dir_((h),(i),(off),next)
#define list_for_each_rev_off(h,i,off) list_for_each_off_dir_((h),(i),(off),prev)
#define list_for_each_safe_off(h,i,nxt,off) list_for_each_safe_off_dir_((h),(i),(nxt),(off),next)
#define list_for_each_rev_safe_off(h,i,nxt,off) list_for_each_safe_off_dir_((h),(i),(nxt),(off),prev)
#define list_entry_off(n,type,off) ((type *)list_node_from_off_((n), (off)))
#define list_head_off(h,type,off) ((type *)list_head_off((h), (off)))
#define list_tail_off(h,type,off) ((type *)list_tail_((h), (off)))
#define list_add_off(h,n,off) list_add((h), list_node_from_off_((n), (off)))
#define list_del_off(n,off) list_del(list_node_from_off_((n), (off)))
#define list_del_from_off(h,n,off) list_del_from(h, list_node_from_off_((n), (off)))
#define list_off_(type,member) (container_off(type, member) + check_type(((type *)0)->member, struct list_node))
#define list_off_var_(var,member) (container_off_var(var, member) + check_type(var->member, struct list_node))
#define list_typeof(var) typeof(var)
#define RUBY_THREAD_NATIVE_H 1
#define _PTHREAD_H 1
#define _SCHED_H 1
#define __need_size_t 
#define __need_NULL 
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define _BITS_SCHED_H 1
#define SCHED_OTHER 0
#define SCHED_FIFO 1
#define SCHED_RR 2
#define SCHED_BATCH 3
#define SCHED_ISO 4
#define SCHED_IDLE 5
#define SCHED_DEADLINE 6
#define SCHED_RESET_ON_FORK 0x40000000
#define CSIGNAL 0x000000ff
#define CLONE_VM 0x00000100
#define CLONE_FS 0x00000200
#define CLONE_FILES 0x00000400
#define CLONE_SIGHAND 0x00000800
#define CLONE_PIDFD 0x00001000
#define CLONE_PTRACE 0x00002000
#define CLONE_VFORK 0x00004000
#define CLONE_PARENT 0x00008000
#define CLONE_THREAD 0x00010000
#define CLONE_NEWNS 0x00020000
#define CLONE_SYSVSEM 0x00040000
#define CLONE_SETTLS 0x00080000
#define CLONE_PARENT_SETTID 0x00100000
#define CLONE_CHILD_CLEARTID 0x00200000
#define CLONE_DETACHED 0x00400000
#define CLONE_UNTRACED 0x00800000
#define CLONE_CHILD_SETTID 0x01000000
#define CLONE_NEWCGROUP 0x02000000
#define CLONE_NEWUTS 0x04000000
#define CLONE_NEWIPC 0x08000000
#define CLONE_NEWUSER 0x10000000
#define CLONE_NEWPID 0x20000000
#define CLONE_NEWNET 0x40000000
#define CLONE_IO 0x80000000
#define _BITS_TYPES_STRUCT_SCHED_PARAM 1
#define _BITS_CPU_SET_H 1
#define __CPU_SETSIZE 1024
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define sched_priority sched_priority
#define __sched_priority sched_priority
#define CPU_SETSIZE __CPU_SETSIZE
#define CPU_SET(cpu,cpusetp) __CPU_SET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define CPU_CLR(cpu,cpusetp) __CPU_CLR_S (cpu, sizeof (cpu_set_t), cpusetp)
#define CPU_ISSET(cpu,cpusetp) __CPU_ISSET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define CPU_ZERO(cpusetp) __CPU_ZERO_S (sizeof (cpu_set_t), cpusetp)
#define CPU_COUNT(cpusetp) __CPU_COUNT_S (sizeof (cpu_set_t), cpusetp)
#define CPU_SET_S(cpu,setsize,cpusetp) __CPU_SET_S (cpu, setsize, cpusetp)
#define CPU_CLR_S(cpu,setsize,cpusetp) __CPU_CLR_S (cpu, setsize, cpusetp)
#define CPU_ISSET_S(cpu,setsize,cpusetp) __CPU_ISSET_S (cpu, setsize, cpusetp)
#define CPU_ZERO_S(setsize,cpusetp) __CPU_ZERO_S (setsize, cpusetp)
#define CPU_COUNT_S(setsize,cpusetp) __CPU_COUNT_S (setsize, cpusetp)
#define CPU_EQUAL(cpusetp1,cpusetp2) __CPU_EQUAL_S (sizeof (cpu_set_t), cpusetp1, cpusetp2)
#define CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) __CPU_EQUAL_S (setsize, cpusetp1, cpusetp2)
#define CPU_AND(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, &)
#define CPU_OR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, |)
#define CPU_XOR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, ^)
#define CPU_AND_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, &)
#define CPU_OR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, |)
#define CPU_XOR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, ^)
#define CPU_ALLOC_SIZE(count) __CPU_ALLOC_SIZE (count)
#define CPU_ALLOC(count) __CPU_ALLOC (count)
#define CPU_FREE(cpuset) __CPU_FREE (cpuset)
#define _TIME_H 1
#define __need_size_t 
#define __need_NULL 
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define _BITS_TIME_H 1
#define CLOCKS_PER_SEC ((__clock_t) 1000000)
#define CLOCK_REALTIME 0
#define CLOCK_MONOTONIC 1
#define CLOCK_PROCESS_CPUTIME_ID 2
#define CLOCK_THREAD_CPUTIME_ID 3
#define CLOCK_MONOTONIC_RAW 4
#define CLOCK_REALTIME_COARSE 5
#define CLOCK_MONOTONIC_COARSE 6
#define CLOCK_BOOTTIME 7
#define CLOCK_REALTIME_ALARM 8
#define CLOCK_BOOTTIME_ALARM 9
#define CLOCK_TAI 11
#define TIMER_ABSTIME 1
#define _BITS_TIMEX_H 1
#define ADJ_OFFSET 0x0001
#define ADJ_FREQUENCY 0x0002
#define ADJ_MAXERROR 0x0004
#define ADJ_ESTERROR 0x0008
#define ADJ_STATUS 0x0010
#define ADJ_TIMECONST 0x0020
#define ADJ_TAI 0x0080
#define ADJ_SETOFFSET 0x0100
#define ADJ_MICRO 0x1000
#define ADJ_NANO 0x2000
#define ADJ_TICK 0x4000
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define ADJ_OFFSET_SS_READ 0xa001
#define MOD_OFFSET ADJ_OFFSET
#define MOD_FREQUENCY ADJ_FREQUENCY
#define MOD_MAXERROR ADJ_MAXERROR
#define MOD_ESTERROR ADJ_ESTERROR
#define MOD_STATUS ADJ_STATUS
#define MOD_TIMECONST ADJ_TIMECONST
#define MOD_CLKB ADJ_TICK
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define MOD_TAI ADJ_TAI
#define MOD_MICRO ADJ_MICRO
#define MOD_NANO ADJ_NANO
#define STA_PLL 0x0001
#define STA_PPSFREQ 0x0002
#define STA_PPSTIME 0x0004
#define STA_FLL 0x0008
#define STA_INS 0x0010
#define STA_DEL 0x0020
#define STA_UNSYNC 0x0040
#define STA_FREQHOLD 0x0080
#define STA_PPSSIGNAL 0x0100
#define STA_PPSJITTER 0x0200
#define STA_PPSWANDER 0x0400
#define STA_PPSERROR 0x0800
#define STA_CLOCKERR 0x1000
#define STA_NANO 0x2000
#define STA_MODE 0x4000
#define STA_CLK 0x8000
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define __struct_tm_defined 1
#define __itimerspec_defined 1
#define TIME_UTC 1
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define _BITS_SETJMP_H 1
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define __jmp_buf_tag_defined 1
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define PTHREAD_MUTEX_INITIALIZER { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_TIMED_NP) } }
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_RECURSIVE_NP) } }
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ERRORCHECK_NP) } }
#define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP { { __PTHREAD_MUTEX_INITIALIZER (PTHREAD_MUTEX_ADAPTIVE_NP) } }
#define PTHREAD_RWLOCK_INITIALIZER { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_DEFAULT_NP) } }
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { __PTHREAD_RWLOCK_INITIALIZER (PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP) } }
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define PTHREAD_COND_INITIALIZER { { {0}, {0}, {0, 0}, {0, 0}, 0, 0, {0, 0} } }
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define PTHREAD_CANCELED ((void *) -1)
#define PTHREAD_ONCE_INIT 0
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define PTHREAD_ATTR_NO_SIGMASK_NP (-1)
#define __cleanup_fct_attribute 
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define pthread_cleanup_push_defer_np(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp_cancel (__cancel_buf.__cancel_jmp_buf, 0); if (__glibc_unlikely (__not_first_call)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel_defer (&__cancel_buf); do {
#define pthread_cleanup_pop_restore_np(execute) do { } while (0); } while (0); __pthread_unregister_cancel_restore (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define RUBY_THREAD_PTHREAD_H 
#define RB_NATIVETHREAD_LOCK_INIT PTHREAD_MUTEX_INITIALIZER
#define RB_NATIVETHREAD_COND_INIT PTHREAD_COND_INITIALIZER
#undef except
#undef try
#undef leave
#undef finally
#define _SETJMP_H 1
#define setjmp(env) _setjmp (env)
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define _SIGNAL_H 
#define _BITS_SIGNUM_GENERIC_H 1
#define SIG_ERR ((__sighandler_t) -1)
#define SIG_DFL ((__sighandler_t) 0)
#define SIG_IGN ((__sighandler_t) 1)
#define SIG_HOLD ((__sighandler_t) 2)
#define SIGINT 2
#define SIGILL 4
#define SIGABRT 6
#define SIGFPE 8
#define SIGSEGV 11
#define SIGTERM 15
#define SIGHUP 1
#define SIGQUIT 3
#define SIGTRAP 5
#define SIGKILL 9
#define SIGPIPE 13
#define SIGALRM 14
#define SIGIO SIGPOLL
#define SIGIOT SIGABRT
#define SIGCLD SIGCHLD
#define _BITS_SIGNUM_ARCH_H 1
#define SIGSTKFLT 16
#define SIGPWR 30
#define SIGBUS 7
#define SIGSYS 31
#define SIGURG 23
#define SIGSTOP 19
#define SIGTSTP 20
#define SIGCONT 18
#define SIGCHLD 17
#define SIGTTIN 21
#define SIGTTOU 22
#define SIGPOLL 29
#define SIGXFSZ 25
#define SIGXCPU 24
#define SIGVTALRM 26
#define SIGPROF 27
#define SIGUSR1 10
#define SIGUSR2 12
#define SIGWINCH 28
#define SIGIO SIGPOLL
#define SIGIOT SIGABRT
#define SIGCLD SIGCHLD
#define __SIGRTMIN 32
#define __SIGRTMAX 64
#define _NSIG (__SIGRTMAX + 1)
#define __sig_atomic_t_defined 1
#define __siginfo_t_defined 1
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define ____sigval_t_defined 
#define __SI_MAX_SIZE 128
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define _BITS_SIGINFO_ARCH_H 1
#define __SI_ALIGNMENT 
#define __SI_BAND_TYPE long int
#define __SI_CLOCK_T __clock_t
#define __SI_ERRNO_THEN_CODE 1
#define __SI_HAVE_SIGSYS 1
#define __SI_SIGFAULT_ADDL 
#define si_pid _sifields._kill.si_pid
#define si_uid _sifields._kill.si_uid
#define si_timerid _sifields._timer.si_tid
#define si_overrun _sifields._timer.si_overrun
#define si_status _sifields._sigchld.si_status
#define si_utime _sifields._sigchld.si_utime
#define si_stime _sifields._sigchld.si_stime
#define si_value _sifields._rt.si_sigval
#define si_int _sifields._rt.si_sigval.sival_int
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define si_addr _sifields._sigfault.si_addr
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define si_pkey _sifields._sigfault._bounds._pkey
#define si_band _sifields._sigpoll.si_band
#define si_fd _sifields._sigpoll.si_fd
#define si_call_addr _sifields._sigsys._call_addr
#define si_syscall _sifields._sigsys._syscall
#define si_arch _sifields._sigsys._arch
#define _BITS_SIGINFO_CONSTS_H 1
#define __SI_ASYNCIO_AFTER_SIGIO 1
#define SI_ASYNCNL SI_ASYNCNL
#define SI_DETHREAD SI_DETHREAD
#define SI_TKILL SI_TKILL
#define SI_SIGIO SI_SIGIO
#define SI_ASYNCIO SI_ASYNCIO
#define SI_MESGQ SI_MESGQ
#define SI_TIMER SI_TIMER
#define SI_ASYNCIO SI_ASYNCIO
#define SI_QUEUE SI_QUEUE
#define SI_USER SI_USER
#define SI_KERNEL SI_KERNEL
#define ILL_ILLOPC ILL_ILLOPC
#define ILL_ILLOPN ILL_ILLOPN
#define ILL_ILLADR ILL_ILLADR
#define ILL_ILLTRP ILL_ILLTRP
#define ILL_PRVOPC ILL_PRVOPC
#define ILL_PRVREG ILL_PRVREG
#define ILL_COPROC ILL_COPROC
#define ILL_BADSTK ILL_BADSTK
#define ILL_BADIADDR ILL_BADIADDR
#define FPE_INTDIV FPE_INTDIV
#define FPE_INTOVF FPE_INTOVF
#define FPE_FLTDIV FPE_FLTDIV
#define FPE_FLTOVF FPE_FLTOVF
#define FPE_FLTUND FPE_FLTUND
#define FPE_FLTRES FPE_FLTRES
#define FPE_FLTINV FPE_FLTINV
#define FPE_FLTSUB FPE_FLTSUB
#define FPE_FLTUNK FPE_FLTUNK
#define FPE_CONDTRAP FPE_CONDTRAP
#define SEGV_MAPERR SEGV_MAPERR
#define SEGV_ACCERR SEGV_ACCERR
#define SEGV_BNDERR SEGV_BNDERR
#define SEGV_PKUERR SEGV_PKUERR
#define SEGV_ACCADI SEGV_ACCADI
#define SEGV_ADIDERR SEGV_ADIDERR
#define SEGV_ADIPERR SEGV_ADIPERR
#define SEGV_MTEAERR SEGV_MTEAERR
#define SEGV_MTESERR SEGV_MTESERR
#define BUS_ADRALN BUS_ADRALN
#define BUS_ADRERR BUS_ADRERR
#define BUS_OBJERR BUS_OBJERR
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define TRAP_BRKPT TRAP_BRKPT
#define TRAP_TRACE TRAP_TRACE
#define TRAP_BRANCH TRAP_BRANCH
#define TRAP_HWBKPT TRAP_HWBKPT
#define TRAP_UNK TRAP_UNK
#define CLD_EXITED CLD_EXITED
#define CLD_KILLED CLD_KILLED
#define CLD_DUMPED CLD_DUMPED
#define CLD_TRAPPED CLD_TRAPPED
#define CLD_STOPPED CLD_STOPPED
#define CLD_CONTINUED CLD_CONTINUED
#define POLL_IN POLL_IN
#define POLL_OUT POLL_OUT
#define POLL_MSG POLL_MSG
#define POLL_ERR POLL_ERR
#define POLL_PRI POLL_PRI
#define POLL_HUP POLL_HUP
#define _BITS_SIGINFO_CONSTS_ARCH_H 1
#define __sigval_t_defined 
#define __sigevent_t_defined 1
#define __WORDSIZE 64
#define __WORDSIZE_TIME64_COMPAT32 1
#define __SYSCALL_WORDSIZE 64
#define __SIGEV_MAX_SIZE 64
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define sigev_notify_function _sigev_un._sigev_thread._function
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define _BITS_SIGEVENT_CONSTS_H 1
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define SIGEV_NONE SIGEV_NONE
#define SIGEV_THREAD SIGEV_THREAD
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define sigmask(sig) __glibc_macro_warning ("sigmask is deprecated") ((int)(1u << ((sig) - 1)))
#define NSIG _NSIG
#define _BITS_SIGACTION_H 1
#define sa_handler __sigaction_handler.sa_handler
#define sa_sigaction __sigaction_handler.sa_sigaction
#define SA_NOCLDSTOP 1
#define SA_NOCLDWAIT 2
#define SA_SIGINFO 4
#define SA_ONSTACK 0x08000000
#define SA_RESTART 0x10000000
#define SA_NODEFER 0x40000000
#define SA_RESETHAND 0x80000000
#define SA_INTERRUPT 0x20000000
#define SA_NOMASK SA_NODEFER
#define SA_ONESHOT SA_RESETHAND
#define SA_STACK SA_ONSTACK
#define SIG_BLOCK 0
#define SIG_UNBLOCK 1
#define SIG_SETMASK 2
#define _BITS_SIGCONTEXT_H 1
#define FP_XSTATE_MAGIC1 0x46505853U
#define FP_XSTATE_MAGIC2 0x46505845U
#define FP_XSTATE_MAGIC2_SIZE sizeof (FP_XSTATE_MAGIC2)
#define __need_size_t 
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define __stack_t_defined 1
#define __need_size_t 
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define _SYS_UCONTEXT_H 1
#define __ctx(fld) fld
#define __NGREG 23
#define NGREG __NGREG
#define REG_R8 REG_R8
#define REG_R9 REG_R9
#define REG_R10 REG_R10
#define REG_R11 REG_R11
#define REG_R12 REG_R12
#define REG_R13 REG_R13
#define REG_R14 REG_R14
#define REG_R15 REG_R15
#define REG_RDI REG_RDI
#define REG_RSI REG_RSI
#define REG_RBP REG_RBP
#define REG_RBX REG_RBX
#define REG_RDX REG_RDX
#define REG_RAX REG_RAX
#define REG_RCX REG_RCX
#define REG_RSP REG_RSP
#define REG_RIP REG_RIP
#define REG_EFL REG_EFL
#define REG_CSGSFS REG_CSGSFS
#define REG_ERR REG_ERR
#define REG_TRAPNO REG_TRAPNO
#define REG_OLDMASK REG_OLDMASK
#define REG_CR2 REG_CR2
#undef __ctx
#define _BITS_SIGSTACK_H 1
#define MINSIGSTKSZ 2048
#define SIGSTKSZ 8192
#undef SIGSTKSZ
#define SIGSTKSZ sysconf (_SC_SIGSTKSZ)
#undef MINSIGSTKSZ
#define MINSIGSTKSZ SIGSTKSZ
#define _BITS_SS_FLAGS_H 1
#define SS_ONSTACK SS_ONSTACK
#define SS_DISABLE SS_DISABLE
#define __sigstack_defined 1
#define _BITS_SIGTHREAD_H 1
#define SIGRTMIN (__libc_current_sigrtmin ())
#define SIGRTMAX (__libc_current_sigrtmax ())
#define RUBY_NSIG NSIG
#define RUBY_SIGCHLD (SIGCLD)
#define SIGCHLD_LOSSY (0)
#define WAITPID_USE_SIGCHLD (RUBY_SIGCHLD || SIGCHLD_LOSSY)
#define va_init_list(a,b) va_start((a),(b))
#define USE_SIGALTSTACK 
#define RB_ALTSTACK_INIT(var) var = rb_register_sigaltstack()
#define RB_ALTSTACK_FREE(var) xfree(var)
#define RB_ALTSTACK(var) var
#define TAG_NONE RUBY_TAG_NONE
#define TAG_RETURN RUBY_TAG_RETURN
#define TAG_BREAK RUBY_TAG_BREAK
#define TAG_NEXT RUBY_TAG_NEXT
#define TAG_RETRY RUBY_TAG_RETRY
#define TAG_REDO RUBY_TAG_REDO
#define TAG_RAISE RUBY_TAG_RAISE
#define TAG_THROW RUBY_TAG_THROW
#define TAG_FATAL RUBY_TAG_FATAL
#define TAG_MASK RUBY_TAG_MASK
#define CoreDataFromValue(obj,type) (type*)DATA_PTR(obj)
#define GetCoreDataFromValue(obj,type,ptr) ((ptr) = CoreDataFromValue((obj), type))
#define PATHOBJ_PATH 0
#define PATHOBJ_REALPATH 1
#define USE_LAZY_LOAD 0
#define GetVMPtr(obj,ptr) GetCoreDataFromValue((obj), rb_vm_t, (ptr))
#define RUBY_VM_SIZE_ALIGN 4096
#define RUBY_VM_THREAD_VM_STACK_SIZE ( 128 * 1024 * sizeof(VALUE))
#define RUBY_VM_THREAD_VM_STACK_SIZE_MIN ( 2 * 1024 * sizeof(VALUE))
#define RUBY_VM_THREAD_MACHINE_STACK_SIZE ( 128 * 1024 * sizeof(VALUE))
#define RUBY_VM_THREAD_MACHINE_STACK_SIZE_MIN ( 16 * 1024 * sizeof(VALUE))
#define RUBY_VM_FIBER_VM_STACK_SIZE ( 16 * 1024 * sizeof(VALUE))
#define RUBY_VM_FIBER_VM_STACK_SIZE_MIN ( 2 * 1024 * sizeof(VALUE))
#define RUBY_VM_FIBER_MACHINE_STACK_SIZE ( 64 * 1024 * sizeof(VALUE))
#define RUBY_VM_FIBER_MACHINE_STACK_SIZE_MIN ( 16 * 1024 * sizeof(VALUE))
#define INTEGER_REDEFINED_OP_FLAG (1 << 0)
#define FLOAT_REDEFINED_OP_FLAG (1 << 1)
#define STRING_REDEFINED_OP_FLAG (1 << 2)
#define ARRAY_REDEFINED_OP_FLAG (1 << 3)
#define HASH_REDEFINED_OP_FLAG (1 << 4)
#define SYMBOL_REDEFINED_OP_FLAG (1 << 6)
#define TIME_REDEFINED_OP_FLAG (1 << 7)
#define REGEXP_REDEFINED_OP_FLAG (1 << 8)
#define NIL_REDEFINED_OP_FLAG (1 << 9)
#define TRUE_REDEFINED_OP_FLAG (1 << 10)
#define FALSE_REDEFINED_OP_FLAG (1 << 11)
#define PROC_REDEFINED_OP_FLAG (1 << 12)
#define BASIC_OP_UNREDEFINED_P(op,klass) (LIKELY((GET_VM()->redefined_flag[(op)]&(klass)) == 0))
#define VM_DEBUG_BP_CHECK 0
#define VM_DEBUG_VERIFY_METHOD_CACHE (VM_DEBUG_MODE != 0)
#define VM_DEFINECLASS_TYPE(x) ((rb_vm_defineclass_type_t)(x) & VM_DEFINECLASS_TYPE_MASK)
#define VM_DEFINECLASS_FLAG_SCOPED 0x08
#define VM_DEFINECLASS_FLAG_HAS_SUPERCLASS 0x10
#define VM_DEFINECLASS_SCOPED_P(x) ((x) & VM_DEFINECLASS_FLAG_SCOPED)
#define VM_DEFINECLASS_HAS_SUPERCLASS_P(x) ((x) & VM_DEFINECLASS_FLAG_HAS_SUPERCLASS)
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define GetProcPtr(obj,ptr) GetCoreDataFromValue((obj), rb_proc_t, (ptr))
#define GetBindingPtr(obj,ptr) GetCoreDataFromValue((obj), rb_binding_t, (ptr))
#define VM_CHECKMATCH_TYPE_MASK 0x03
#define VM_CHECKMATCH_ARRAY 0x04
#define VM_CALL_ARGS_SPLAT (0x01 << VM_CALL_ARGS_SPLAT_bit)
#define VM_CALL_ARGS_BLOCKARG (0x01 << VM_CALL_ARGS_BLOCKARG_bit)
#define VM_CALL_FCALL (0x01 << VM_CALL_FCALL_bit)
#define VM_CALL_VCALL (0x01 << VM_CALL_VCALL_bit)
#define VM_CALL_ARGS_SIMPLE (0x01 << VM_CALL_ARGS_SIMPLE_bit)
#define VM_CALL_BLOCKISEQ (0x01 << VM_CALL_BLOCKISEQ_bit)
#define VM_CALL_KWARG (0x01 << VM_CALL_KWARG_bit)
#define VM_CALL_KW_SPLAT (0x01 << VM_CALL_KW_SPLAT_bit)
#define VM_CALL_TAILCALL (0x01 << VM_CALL_TAILCALL_bit)
#define VM_CALL_SUPER (0x01 << VM_CALL_SUPER_bit)
#define VM_CALL_ZSUPER (0x01 << VM_CALL_ZSUPER_bit)
#define VM_CALL_OPT_SEND (0x01 << VM_CALL_OPT_SEND_bit)
#define FUNC_FASTCALL(x) x
#define VM_TAGGED_PTR_SET(p,tag) ((VALUE)(p) | (tag))
#define VM_TAGGED_PTR_REF(v,mask) ((void *)((v) & ~mask))
#define GC_GUARDED_PTR(p) VM_TAGGED_PTR_SET((p), 0x01)
#define GC_GUARDED_PTR_REF(p) VM_TAGGED_PTR_REF((p), 0x03)
#define GC_GUARDED_PTR_P(p) (((VALUE)(p)) & 0x01)
#define VM_ENV_DATA_SIZE ( 3)
#define VM_ENV_DATA_INDEX_ME_CREF (-2)
#define VM_ENV_DATA_INDEX_SPECVAL (-1)
#define VM_ENV_DATA_INDEX_FLAGS ( 0)
#define VM_ENV_DATA_INDEX_ENV ( 1)
#define VM_ENV_INDEX_LAST_LVAR (-VM_ENV_DATA_SIZE)
#define RUBYVM_CFUNC_FRAME_P(cfp) (VM_FRAME_TYPE(cfp) == VM_FRAME_MAGIC_CFUNC)
#define VM_GUARDED_PREV_EP(ep) GC_GUARDED_PTR(ep)
#define VM_BLOCK_HANDLER_NONE 0
#define RUBY_VM_PREVIOUS_CONTROL_FRAME(cfp) ((cfp)+1)
#define RUBY_VM_NEXT_CONTROL_FRAME(cfp) ((cfp)-1)
#define RUBY_VM_VALID_CONTROL_FRAME_P(cfp,ecfp) ((void *)(ecfp) > (void *)(cfp))
#define SDR() rb_vmdebug_stack_dump_raw(GET_EC(), GET_EC()->cfp)
#define SDR2(cfp) rb_vmdebug_stack_dump_raw(GET_EC(), (cfp))
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define rb_vm_register_special_exception(sp,e,m) rb_vm_register_special_exception_str(sp, e, rb_usascii_str_new_static((m), (long)rb_strlen_lit(m)))
#define sysstack_error GET_VM()->special_exceptions[ruby_error_sysstack]
#define RUBY_CONST_ASSERT(expr) (1/!!(expr))
#define VM_STACK_OVERFLOWED_P(cfp,sp,margin) (!RUBY_CONST_ASSERT(sizeof(*(sp)) == sizeof(VALUE)) || !RUBY_CONST_ASSERT(sizeof(*(cfp)) == sizeof(rb_control_frame_t)) || ((rb_control_frame_t *)((sp) + (margin)) + 1) >= (cfp))
#define WHEN_VM_STACK_OVERFLOWED(cfp,sp,margin) if (LIKELY(!VM_STACK_OVERFLOWED_P(cfp, sp, margin))) {(void)0;} else
#define CHECK_VM_STACK_OVERFLOW0(cfp,sp,margin) WHEN_VM_STACK_OVERFLOWED(cfp, sp, margin) vm_stackoverflow()
#define CHECK_VM_STACK_OVERFLOW(cfp,margin) WHEN_VM_STACK_OVERFLOWED(cfp, (cfp)->sp, margin) vm_stackoverflow()
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define GET_VM() rb_current_vm()
#define GET_THREAD() rb_current_thread()
#define GET_EC() rb_current_execution_context()
#define RUBY_VM_SET_TIMER_INTERRUPT(ec) ATOMIC_OR((ec)->interrupt_flag, TIMER_INTERRUPT_MASK)
#define RUBY_VM_SET_INTERRUPT(ec) ATOMIC_OR((ec)->interrupt_flag, PENDING_INTERRUPT_MASK)
#define RUBY_VM_SET_POSTPONED_JOB_INTERRUPT(ec) ATOMIC_OR((ec)->interrupt_flag, POSTPONED_JOB_INTERRUPT_MASK)
#define RUBY_VM_SET_TRAP_INTERRUPT(ec) ATOMIC_OR((ec)->interrupt_flag, TRAP_INTERRUPT_MASK)
#define RUBY_VM_INTERRUPTED(ec) ((ec)->interrupt_flag & ~(ec)->interrupt_mask & (PENDING_INTERRUPT_MASK|TRAP_INTERRUPT_MASK))
#define RUBY_VM_INTERRUPTED_ANY(ec) ((ec)->interrupt_flag & ~(ec)->interrupt_mask)
#define RUBY_VM_CHECK_INTS(ec) rb_vm_check_ints(ec)
#define EXEC_EVENT_HOOK_ORIG(ec_,hooks_,flag_,self_,id_,called_id_,klass_,data_,pop_p_) do { const rb_event_flag_t flag_arg_ = (flag_); rb_hook_list_t *hooks_arg_ = (hooks_); if (UNLIKELY((hooks_arg_)->events & (flag_arg_))) { rb_exec_event_hook_orig(ec_, hooks_arg_, flag_arg_, self_, id_, called_id_, klass_, data_, pop_p_); } } while (0)
#define EXEC_EVENT_HOOK(ec_,flag_,self_,id_,called_id_,klass_,data_) EXEC_EVENT_HOOK_ORIG(ec_, rb_vm_global_hooks(ec_), flag_, self_, id_, called_id_, klass_, data_, 0)
#define EXEC_EVENT_HOOK_AND_POP_FRAME(ec_,flag_,self_,id_,called_id_,klass_,data_) EXEC_EVENT_HOOK_ORIG(ec_, rb_vm_global_hooks(ec_), flag_, self_, id_, called_id_, klass_, data_, 1)
#pragma GCC visibility push(default)
#define RUBY_EVENT_COVERAGE_LINE 0x010000
#define RUBY_EVENT_COVERAGE_BRANCH 0x020000
#pragma GCC visibility pop
#define RUBY_DEBUG_H 
#pragma GCC visibility push(default)
#define dpv(h,v) ruby_debug_print_value(-1, 0, (h), (v))
#define dp(v) ruby_debug_print_value(-1, 0, "", (v))
#define dpi(i) ruby_debug_print_id(-1, 0, "", (i))
#define dpn(n) ruby_debug_print_node(-1, 0, "", (n))
#define bp() ruby_debug_breakpoint()
#pragma GCC visibility pop
#define RUBY_ISEQ_H 1
#define ISEQ_MAJOR_VERSION ((unsigned int)ruby_api_version[0])
#define ISEQ_MINOR_VERSION ((unsigned int)ruby_api_version[1])
#define ISEQ_COVERAGE(iseq) iseq->body->variable.coverage
#define ISEQ_COVERAGE_SET(iseq,cov) RB_OBJ_WRITE(iseq, &iseq->body->variable.coverage, cov)
#define ISEQ_LINE_COVERAGE(iseq) RARRAY_AREF(ISEQ_COVERAGE(iseq), COVERAGE_INDEX_LINES)
#define ISEQ_BRANCH_COVERAGE(iseq) RARRAY_AREF(ISEQ_COVERAGE(iseq), COVERAGE_INDEX_BRANCHES)
#define ISEQ_PC2BRANCHINDEX(iseq) iseq->body->variable.pc2branchindex
#define ISEQ_PC2BRANCHINDEX_SET(iseq,h) RB_OBJ_WRITE(iseq, &iseq->body->variable.pc2branchindex, h)
#define ISEQ_FLIP_CNT(iseq) (iseq)->body->variable.flip_count
#define ISEQ_TRACE_EVENTS (RUBY_EVENT_LINE | RUBY_EVENT_CLASS | RUBY_EVENT_END | RUBY_EVENT_CALL | RUBY_EVENT_RETURN| RUBY_EVENT_B_CALL| RUBY_EVENT_B_RETURN| RUBY_EVENT_COVERAGE_LINE| RUBY_EVENT_COVERAGE_BRANCH)
#define ISEQ_NOT_LOADED_YET IMEMO_FL_USER1
#define ISEQ_USE_COMPILE_DATA IMEMO_FL_USER2
#define ISEQ_TRANSLATED IMEMO_FL_USER3
#define ISEQ_MARKABLE_ISEQ IMEMO_FL_USER4
#define ISEQ_EXECUTABLE_P(iseq) (FL_TEST_RAW((iseq), ISEQ_NOT_LOADED_YET | ISEQ_USE_COMPILE_DATA) == 0)
#pragma GCC visibility push(default)
#define INITIAL_ISEQ_COMPILE_DATA_STORAGE_BUFF_SIZE (512)
#pragma GCC visibility pop
#define RUBY_EVAL_INTERN_H 
#define PASS_PASSED_BLOCK_HANDLER_EC(ec) pass_passed_block_handler(ec)
#define PASS_PASSED_BLOCK_HANDLER() pass_passed_block_handler(GET_EC())
#define ruby_setjmp(env) RUBY_SETJMP(env)
#define ruby_longjmp(env,val) RUBY_LONGJMP((env),(val))
#define _ERRNO_H 1
#define _BITS_ERRNO_H 1
#define _ASM_GENERIC_ERRNO_H 
#define _ASM_GENERIC_ERRNO_BASE_H 
#define EPERM 1
#define ENOENT 2
#define ESRCH 3
#define EINTR 4
#define EIO 5
#define ENXIO 6
#define E2BIG 7
#define ENOEXEC 8
#define EBADF 9
#define ECHILD 10
#define EAGAIN 11
#define ENOMEM 12
#define EACCES 13
#define EFAULT 14
#define ENOTBLK 15
#define EBUSY 16
#define EEXIST 17
#define EXDEV 18
#define ENODEV 19
#define ENOTDIR 20
#define EISDIR 21
#define EINVAL 22
#define ENFILE 23
#define EMFILE 24
#define ENOTTY 25
#define ETXTBSY 26
#define EFBIG 27
#define ENOSPC 28
#define ESPIPE 29
#define EROFS 30
#define EMLINK 31
#define EPIPE 32
#define EDOM 33
#define ERANGE 34
#define EDEADLK 35
#define ENAMETOOLONG 36
#define ENOLCK 37
#define ENOSYS 38
#define ENOTEMPTY 39
#define ELOOP 40
#define EWOULDBLOCK EAGAIN
#define ENOMSG 42
#define EIDRM 43
#define ECHRNG 44
#define EL2NSYNC 45
#define EL3HLT 46
#define EL3RST 47
#define ELNRNG 48
#define EUNATCH 49
#define ENOCSI 50
#define EL2HLT 51
#define EBADE 52
#define EBADR 53
#define EXFULL 54
#define ENOANO 55
#define EBADRQC 56
#define EBADSLT 57
#define EDEADLOCK EDEADLK
#define EBFONT 59
#define ENOSTR 60
#define ENODATA 61
#define ETIME 62
#define ENOSR 63
#define ENONET 64
#define ENOPKG 65
#define EREMOTE 66
#define ENOLINK 67
#define EADV 68
#define ESRMNT 69
#define ECOMM 70
#define EPROTO 71
#define EMULTIHOP 72
#define EDOTDOT 73
#define EBADMSG 74
#define EOVERFLOW 75
#define ENOTUNIQ 76
#define EBADFD 77
#define EREMCHG 78
#define ELIBACC 79
#define ELIBBAD 80
#define ELIBSCN 81
#define ELIBMAX 82
#define ELIBEXEC 83
#define EILSEQ 84
#define ERESTART 85
#define ESTRPIPE 86
#define EUSERS 87
#define ENOTSOCK 88
#define EDESTADDRREQ 89
#define EMSGSIZE 90
#define EPROTOTYPE 91
#define ENOPROTOOPT 92
#define EPROTONOSUPPORT 93
#define ESOCKTNOSUPPORT 94
#define EOPNOTSUPP 95
#define EPFNOSUPPORT 96
#define EAFNOSUPPORT 97
#define EADDRINUSE 98
#define EADDRNOTAVAIL 99
#define ENETDOWN 100
#define ENETUNREACH 101
#define ENETRESET 102
#define ECONNABORTED 103
#define ECONNRESET 104
#define ENOBUFS 105
#define EISCONN 106
#define ENOTCONN 107
#define ESHUTDOWN 108
#define ETOOMANYREFS 109
#define ETIMEDOUT 110
#define ECONNREFUSED 111
#define EHOSTDOWN 112
#define EHOSTUNREACH 113
#define EALREADY 114
#define EINPROGRESS 115
#define ESTALE 116
#define EUCLEAN 117
#define ENOTNAM 118
#define ENAVAIL 119
#define EISNAM 120
#define EREMOTEIO 121
#define EDQUOT 122
#define ENOMEDIUM 123
#define EMEDIUMTYPE 124
#define ECANCELED 125
#define ENOKEY 126
#define EKEYEXPIRED 127
#define EKEYREVOKED 128
#define EKEYREJECTED 129
#define EOWNERDEAD 130
#define ENOTRECOVERABLE 131
#define ERFKILL 132
#define EHWPOISON 133
#define ENOTSUP EOPNOTSUPP
#define errno (*__errno_location ())
#define __error_t_defined 1
#define _SYS_PARAM_H 1
#define __need_NULL 
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_wchar_t
#undef NULL
#define NULL ((void *)0)
#undef __need_NULL
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define __undef_ARG_MAX 
#define _LINUX_PARAM_H 
#define __ASM_GENERIC_PARAM_H 
#define HZ 100
#define EXEC_PAGESIZE 4096
#define NOGROUP (-1)
#define MAXHOSTNAMELEN 64
#undef ARG_MAX
#undef __undef_ARG_MAX
#define MAXSYMLINKS 20
#define NOFILE 256
#define NCARGS 131072
#define NBBY CHAR_BIT
#define NGROUPS NGROUPS_MAX
#define CANBSIZ MAX_CANON
#define MAXPATHLEN PATH_MAX
#define NODEV ((dev_t) -1)
#define DEV_BSIZE 512
#define setbit(a,i) ((a)[(i)/NBBY] |= 1<<((i)%NBBY))
#define clrbit(a,i) ((a)[(i)/NBBY] &= ~(1<<((i)%NBBY)))
#define isset(a,i) ((a)[(i)/NBBY] & (1<<((i)%NBBY)))
#define isclr(a,i) (((a)[(i)/NBBY] & (1<<((i)%NBBY))) == 0)
#define howmany(x,y) (((x) + ((y) - 1)) / (y))
#define roundup(x,y) (__builtin_constant_p (y) && powerof2 (y) ? (((x) + (y) - 1) & ~((y) - 1)) : ((((x) + ((y) - 1)) / (y)) * (y)))
#define powerof2(x) ((((x) - 1) & (x)) == 0)
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define SAVE_ROOT_JMPBUF_BEFORE_STMT 
#define SAVE_ROOT_JMPBUF_AFTER_STMT 
#define SAVE_ROOT_JMPBUF(th,stmt) do if (ruby_setjmp((th)->root_jmpbuf) == 0) { SAVE_ROOT_JMPBUF_BEFORE_STMT stmt; SAVE_ROOT_JMPBUF_AFTER_STMT } else { rb_fiber_start(); } while (0)
#define EC_PUSH_TAG(ec) do { rb_execution_context_t * const _ec = (ec); struct rb_vm_tag _tag; _tag.state = TAG_NONE; _tag.tag = Qundef; _tag.prev = _ec->tag;
#define EC_POP_TAG() _ec->tag = _tag.prev; } while (0)
#define EC_TMPPOP_TAG() _ec->tag = _tag.prev
#define EC_REPUSH_TAG() (void)(_ec->tag = &_tag)
#define VAR_FROM_MEMORY(var) (var)
#define VAR_INITIALIZED(var) ((void)&(var))
#define VAR_NOCLOBBERED(var) var
#define UNALIGNED_MEMBER_ACCESS(expr) expr
#define UNALIGNED_MEMBER_PTR(ptr,mem) UNALIGNED_MEMBER_ACCESS(&(ptr)->mem)
#undef RB_OBJ_WRITE
#define RB_OBJ_WRITE(a,slot,b) UNALIGNED_MEMBER_ACCESS(rb_obj_write((VALUE)(a), (VALUE *)(slot), (VALUE)(b), __FILE__, __LINE__))
#define EC_EXEC_TAG() (ruby_setjmp(_tag.buf) ? rb_ec_tag_state(VAR_FROM_MEMORY(_ec)) : (EC_REPUSH_TAG(), 0))
#define EC_JUMP_TAG(ec,st) rb_ec_tag_jump(ec, st)
#define INTERNAL_EXCEPTION_P(exc) FIXNUM_P(exc)
#define CREF_FL_PUSHED_BY_EVAL IMEMO_FL_USER1
#define CREF_FL_OMOD_SHARED IMEMO_FL_USER2
#define rb_ec_raised_set(ec,f) ((ec)->raised_flag |= (f))
#define rb_ec_raised_reset(ec,f) ((ec)->raised_flag &= ~(f))
#define rb_ec_raised_p(ec,f) (((ec)->raised_flag & (f)) != 0)
#define rb_ec_raised_clear(ec) ((ec)->raised_flag = 0)
#define CharNext(p) ((p) + mblen((p), RUBY_MBCHAR_MAXSIZE))
#define _PROBES_H 
#define DTRACE_PROBES_DISABLED 1
#define RUBY_DTRACE_METHOD_ENTRY_ENABLED() 0
#define RUBY_DTRACE_METHOD_ENTRY(classname,methodname,filename,lineno) do {} while (0)
#define RUBY_DTRACE_METHOD_RETURN_ENABLED() 0
#define RUBY_DTRACE_METHOD_RETURN(classname,methodname,filename,lineno) do {} while (0)
#define RUBY_DTRACE_CMETHOD_ENTRY_ENABLED() 0
#define RUBY_DTRACE_CMETHOD_ENTRY(classname,methodname,filename,lineno) do {} while (0)
#define RUBY_DTRACE_CMETHOD_RETURN_ENABLED() 0
#define RUBY_DTRACE_CMETHOD_RETURN(classname,methodname,filename,lineno) do {} while (0)
#define RUBY_DTRACE_REQUIRE_ENTRY_ENABLED() 0
#define RUBY_DTRACE_REQUIRE_ENTRY(rquiredfile,filename,lineno) do {} while (0)
#define RUBY_DTRACE_REQUIRE_RETURN_ENABLED() 0
#define RUBY_DTRACE_REQUIRE_RETURN(requiredfile,filename,lineno) do {} while (0)
#define RUBY_DTRACE_FIND_REQUIRE_ENTRY_ENABLED() 0
#define RUBY_DTRACE_FIND_REQUIRE_ENTRY(requiredfile,filename,lineno) do {} while (0)
#define RUBY_DTRACE_FIND_REQUIRE_RETURN_ENABLED() 0
#define RUBY_DTRACE_FIND_REQUIRE_RETURN(requiredfile,filename,lineno) do {} while (0)
#define RUBY_DTRACE_LOAD_ENTRY_ENABLED() 0
#define RUBY_DTRACE_LOAD_ENTRY(loadedfile,filename,lineno) do {} while (0)
#define RUBY_DTRACE_LOAD_RETURN_ENABLED() 0
#define RUBY_DTRACE_LOAD_RETURN(loadedfile,filename,lineno) do {} while (0)
#define RUBY_DTRACE_RAISE_ENABLED() 0
#define RUBY_DTRACE_RAISE(classname,filename,lineno) do {} while (0)
#define RUBY_DTRACE_OBJECT_CREATE_ENABLED() 0
#define RUBY_DTRACE_OBJECT_CREATE(classname,filename,lineno) do {} while (0)
#define RUBY_DTRACE_ARRAY_CREATE_ENABLED() 0
#define RUBY_DTRACE_ARRAY_CREATE(length,filename,lineno) do {} while (0)
#define RUBY_DTRACE_HASH_CREATE_ENABLED() 0
#define RUBY_DTRACE_HASH_CREATE(length,filename,lineno) do {} while (0)
#define RUBY_DTRACE_STRING_CREATE_ENABLED() 0
#define RUBY_DTRACE_STRING_CREATE(length,filename,lineno) do {} while (0)
#define RUBY_DTRACE_SYMBOL_CREATE_ENABLED() 0
#define RUBY_DTRACE_SYMBOL_CREATE(str,filename,lineno) do {} while (0)
#define RUBY_DTRACE_PARSE_BEGIN_ENABLED() 0
#define RUBY_DTRACE_PARSE_BEGIN(sourcefile,lineno) do {} while (0)
#define RUBY_DTRACE_PARSE_END_ENABLED() 0
#define RUBY_DTRACE_PARSE_END(sourcefile,lineno) do {} while (0)
#define RUBY_DTRACE_INSN_ENABLED() 0
#define RUBY_DTRACE_INSN(insns_name) do {} while (0)
#define RUBY_DTRACE_INSN_OPERAND_ENABLED() 0
#define RUBY_DTRACE_INSN_OPERAND(val,insns_name) do {} while (0)
#define RUBY_DTRACE_GC_MARK_BEGIN_ENABLED() 0
#define RUBY_DTRACE_GC_MARK_BEGIN() do {} while (0)
#define RUBY_DTRACE_GC_MARK_END_ENABLED() 0
#define RUBY_DTRACE_GC_MARK_END() do {} while (0)
#define RUBY_DTRACE_GC_SWEEP_BEGIN_ENABLED() 0
#define RUBY_DTRACE_GC_SWEEP_BEGIN() do {} while (0)
#define RUBY_DTRACE_GC_SWEEP_END_ENABLED() 0
#define RUBY_DTRACE_GC_SWEEP_END() do {} while (0)
#define RUBY_DTRACE_METHOD_CACHE_CLEAR_ENABLED() 0
#define RUBY_DTRACE_METHOD_CACHE_CLEAR(class,filename,lineno) do {} while (0)
#define RUBY_PROBES_HELPER_H 
#define RUBY_DTRACE_METHOD_HOOK(name,ec,klazz,id) do { if (UNLIKELY(RUBY_DTRACE_ ##name ##_ENABLED())) { struct ruby_dtrace_method_hook_args args; if (rb_dtrace_setup(ec, klazz, id, &args)) { RUBY_DTRACE_ ##name(args.classname, args.methodname, args.filename, args.line_no); } } } while (0)
#define RUBY_DTRACE_METHOD_ENTRY_HOOK(ec,klass,id) RUBY_DTRACE_METHOD_HOOK(METHOD_ENTRY, ec, klass, id)
#define RUBY_DTRACE_METHOD_RETURN_HOOK(ec,klass,id) RUBY_DTRACE_METHOD_HOOK(METHOD_RETURN, ec, klass, id)
#define RUBY_DTRACE_CMETHOD_ENTRY_HOOK(ec,klass,id) RUBY_DTRACE_METHOD_HOOK(CMETHOD_ENTRY, ec, klass, id)
#define RUBY_DTRACE_CMETHOD_RETURN_HOOK(ec,klass,id) RUBY_DTRACE_METHOD_HOOK(CMETHOD_RETURN, ec, klass, id)
#define RUBY_MJIT_H 1
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define JIT_ISEQ_SIZE_THRESHOLD 1000
#define RUBY_INSNHELPER_H 
#pragma GCC visibility push(default)
#pragma GCC visibility pop
#define COLLECT_USAGE_INSN(insn) 
#define COLLECT_USAGE_OPERAND(insn,n,op) 
#define COLLECT_USAGE_REGISTER(reg,s) 
#define PUSH(x) (SET_SV(x), INC_SP(1))
#define TOPN(n) (*(GET_SP()-(n)-1))
#define POPN(n) (DEC_SP(n))
#define POP() (DEC_SP(1))
#define STACK_ADDR_FROM_TOP(n) (GET_SP()-(n))
#define GET_TOS() (tos)
#define VM_REG_CFP (reg_cfp)
#define VM_REG_PC (VM_REG_CFP->pc)
#define VM_REG_SP (VM_REG_CFP->sp)
#define VM_REG_EP (VM_REG_CFP->ep)
#define RESTORE_REGS() do { VM_REG_CFP = ec->cfp; } while (0)
#define REG_A reg_a
#define REG_B reg_b
#define COLLECT_USAGE_REGISTER_HELPER(a,b,v) (v)
#define GET_PC() (COLLECT_USAGE_REGISTER_HELPER(PC, GET, VM_REG_PC))
#define SET_PC(x) (VM_REG_PC = (COLLECT_USAGE_REGISTER_HELPER(PC, SET, (x))))
#define GET_CURRENT_INSN() (*GET_PC())
#define GET_OPERAND(n) (GET_PC()[(n)])
#define ADD_PC(n) (SET_PC(VM_REG_PC + (n)))
#define JUMP(dst) (SET_PC(VM_REG_PC + (dst)))
#define GET_CFP() (COLLECT_USAGE_REGISTER_HELPER(CFP, GET, VM_REG_CFP))
#define GET_EP() (COLLECT_USAGE_REGISTER_HELPER(EP, GET, VM_REG_EP))
#define SET_EP(x) (VM_REG_EP = (COLLECT_USAGE_REGISTER_HELPER(EP, SET, (x))))
#define GET_LEP() (VM_EP_LEP(GET_EP()))
#define GET_SP() (COLLECT_USAGE_REGISTER_HELPER(SP, GET, VM_REG_SP))
#define SET_SP(x) (VM_REG_SP = (COLLECT_USAGE_REGISTER_HELPER(SP, SET, (x))))
#define INC_SP(x) (VM_REG_SP += (COLLECT_USAGE_REGISTER_HELPER(SP, SET, (x))))
#define DEC_SP(x) (VM_REG_SP -= (COLLECT_USAGE_REGISTER_HELPER(SP, SET, (x))))
#define SET_SV(x) (*GET_SP() = (x))
#define GET_ISEQ() (GET_CFP()->iseq)
#define GET_PREV_EP(ep) ((VALUE *)((ep)[VM_ENV_DATA_INDEX_SPECVAL] & ~0x03))
#define GET_GLOBAL(entry) rb_gvar_get((struct rb_global_entry*)(entry))
#define SET_GLOBAL(entry,val) rb_gvar_set((struct rb_global_entry*)(entry), (val))
#define GET_CONST_INLINE_CACHE(dst) ((IC) * (GET_PC() + (dst) + 2))
#define GET_SELF() (COLLECT_USAGE_REGISTER_HELPER(SELF, GET, GET_CFP()->self))
#define EXEC_EC_CFP(val) do { if (ec->cfp->iseq->body->catch_except_p) { VM_ENV_FLAGS_SET(ec->cfp->ep, VM_FRAME_FLAG_FINISH); val = vm_exec(ec, TRUE); } else if ((val = mjit_exec(ec)) == Qundef) { VM_ENV_FLAGS_SET(ec->cfp->ep, VM_FRAME_FLAG_FINISH); val = vm_exec(ec, FALSE); } } while (0)
#define CALL_METHOD(calling,ci,cc) do { VALUE v = (*(cc)->call)(ec, GET_CFP(), (calling), (ci), (cc)); if (v == Qundef) { EXEC_EC_CFP(val); } else { val = v; } } while (0)
#define CC_SET_FASTPATH(cc,func,enabled) do { if (LIKELY(enabled)) ((cc)->call = (func)); } while (0)
#define GET_BLOCK_HANDLER() (GET_LEP()[VM_ENV_DATA_INDEX_SPECVAL])
#define SETUP_CANARY() 
#define CHECK_CANARY() 
#define FIXNUM_2_P(a,b) ((a) & (b) & 1)
#define FLONUM_2_P(a,b) (((((a)^2) | ((b)^2)) & 3) == 0)
#define FLOAT_HEAP_P(x) (!SPECIAL_CONST_P(x) && RBASIC_CLASS(x) == rb_cFloat)
#define FLOAT_INSTANCE_P(x) (FLONUM_P(x) || FLOAT_HEAP_P(x))
#define USE_IC_FOR_SPECIALIZED_METHOD 1
#define NEXT_CLASS_SERIAL() (++ruby_vm_class_serial)
#define GET_GLOBAL_METHOD_STATE() (ruby_vm_global_method_state)
#define INC_GLOBAL_METHOD_STATE() (++ruby_vm_global_method_state)
#define GET_GLOBAL_CONSTANT_STATE() (ruby_vm_global_constant_state)
#define INC_GLOBAL_CONSTANT_STATE() (++ruby_vm_global_constant_state)
#define IS_ARGS_SPLAT(ci) ((ci)->flag & VM_CALL_ARGS_SPLAT)
#define IS_ARGS_KEYWORD(ci) ((ci)->flag & VM_CALL_KWARG)
#define CALLER_SETUP_ARG(cfp,calling,ci) do { if (UNLIKELY(IS_ARGS_SPLAT(ci))) vm_caller_setup_arg_splat((cfp), (calling)); if (UNLIKELY(IS_ARGS_KEYWORD(ci))) vm_caller_setup_arg_kw((cfp), (calling), (ci)); } while (0)
#define RUBY_VM_EXEC_H 
#define PREFETCH(pc) 
#define debugs 
#define DEBUG_ENTER_INSN(insn) 
#define DEBUG_END_INSN() 
#define throwdebug if(0)printf
#define LABEL(x) INSN_LABEL_ ##x
#define ELABEL(x) INSN_ELABEL_ ##x
#define LABEL_PTR(x) RB_GNUC_EXTENSION(&&LABEL(x))
#define INSN_ENTRY_SIG(insn) if (0) fprintf(stderr, "exec: %s@(%d, %d)@%s:%d\n", #insn, (int)(reg_pc - reg_cfp->iseq->body->iseq_encoded), (int)(reg_cfp->pc - reg_cfp->iseq->body->iseq_encoded), RSTRING_PTR(rb_iseq_path(reg_cfp->iseq)), (int)(rb_iseq_line_no(reg_cfp->iseq, reg_pc - reg_cfp->iseq->body->iseq_encoded)));
#define INSN_DISPATCH_SIG(insn) 
#define INSN_ENTRY(insn) LABEL(insn): INSN_ENTRY_SIG(insn);
#define DISPATCH_ARCH_DEPEND_WAY(addr) 
#define TC_DISPATCH(insn) INSN_DISPATCH_SIG(insn); RB_GNUC_EXTENSION_BLOCK(goto *(void const *)GET_CURRENT_INSN()); ;
#define END_INSN(insn) DEBUG_END_INSN(); TC_DISPATCH(insn);
#define INSN_DISPATCH() TC_DISPATCH(__START__) {
#define END_INSNS_DISPATCH() rb_bug("unknown insn: %"PRIdVALUE, GET_CURRENT_INSN()); }
#define NEXT_INSN() TC_DISPATCH(__NEXT_INSN__)
#define START_OF_ORIGINAL_INSN(x) start_of_ ##x:
#define DISPATCH_ORIGINAL_INSN(x) goto start_of_ ##x;
#define VM_SP_CNT(ec,sp) ((sp) - (ec)->vm_stack)
#define THROW_EXCEPTION(exc) do { ec->errinfo = (VALUE)(exc); EC_JUMP_TAG(ec, ec->tag->state); } while (0)
#define SCREG(r) (reg_ ##r)
#define VM_DEBUG_STACKOVERFLOW 0
#define CHECK_VM_STACK_OVERFLOW_FOR_INSN(cfp,margin) 
#define INSN_LABEL2(insn,name) INSN_LABEL_ ## insn ## _ ## name
#define INSN_LABEL(x) INSN_LABEL2(NAME_OF_CURRENT_INSN, x)
#define BIN(n) YARVINSN_ ##n
#define ASSERT_VM_INSTRUCTION_SIZE(array) STATIC_ASSERT(numberof_ ##array, numberof(array) == VM_INSTRUCTION_SIZE)
#define CONSTANT_H 
#define RB_CONST_PRIVATE_P(ce) (((ce)->flag & CONST_VISIBILITY_MASK) == CONST_PRIVATE)
#define RB_CONST_PUBLIC_P(ce) (((ce)->flag & CONST_VISIBILITY_MASK) == CONST_PUBLIC)
#define RB_CONST_DEPRECATED_P(ce) ((ce)->flag & CONST_DEPRECATED)
#define USE_DEBUG_COUNTER 0
#define RUBY_DEBUG_COUNTER_H 1
#define RB_DEBUG_COUNTER(name) RB_DEBUG_COUNTER_ ##name,
#undef RB_DEBUG_COUNTER
#define RB_DEBUG_COUNTER_INC(type) ((void)0)
#define RB_DEBUG_COUNTER_INC_UNLESS(type,cond) (cond)
#define RB_DEBUG_COUNTER_INC_IF(type,cond) (cond)
#define vm_check_frame(a,b,c,d) 
#define BUILTIN_CLASS_P(x,k) (!SPECIAL_CONST_P(x) && RBASIC_CLASS(x) == k)
#define EQ_UNREDEFINED_P(t) BASIC_OP_UNREDEFINED_P(BOP_EQ, t ##_REDEFINED_OP_FLAG)
#undef BUILTIN_CLASS_P
#undef EQ_UNREDEFINED_P
#define CHECK_CMP_NAN(a,b) 
#define KW_SPECIFIED_BITS_MAX (32-1)
#define CHECK_CFP_CONSISTENCY(func) (LIKELY(vm_cfp_consistent_p(ec, reg_cfp)) ? (void)0 : rb_bug(func ": cfp consistency error (%p, %p)", (void *)reg_cfp, (void *)(ec->cfp+1)))
#define id_cmp idCmp
#undef id_cmp
#define VM_TRACE_HOOK(target_event,val) do { if ((pc_events & (target_event)) & enabled_flags) { vm_trace_hook(ec, reg_cfp, pc, pc_events, (target_event), global_hooks, local_hooks, (val)); } } while (0)
#define id_mesg idMesg
