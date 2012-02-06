#ifndef __UNITY_MONO_UTILS_H
#define __UNITY_MONO_UTILS_H

#include <stdio.h>
#include <mono/metadata/object.h>

/**
 *	Custom exit function, called instead of system exit()
 */
void unity_mono_exit( int code );

/**
 *	Redirects mono output where we want it.
 */
void unity_mono_redirect_output( const char *fout, const char *ferr );

/**
 *	Closes redirected output files.
 */
void unity_mono_close_output(void);

extern MonoString* mono_unity_get_embeddinghostname(void);

void mono_unity_write_to_unity_log(MonoString* str);

#ifdef WIN32
FILE* unity_fopen( const char *name, const char *mode );
#endif

extern gboolean mono_unity_socket_security_enabled_get (void);
extern void mono_unity_socket_security_enabled_set (gboolean enabled);
void mono_unity_g_free (void *ptr);
void mono_unity_set_vprintf_func(vprintf_func func);
#endif
