#ifndef _JNIDEFS_H_
#define _JNIDEFS_H_

enum JNIERR_CODE
{
	JNIERR_SUCCESS,
	JNIERR_INVPARAM,
	JNIERR_INVSTEP,
	JNIERR_TIMEOUT,
	JNIERR_NOMEM,
};

enum JNIIMG_FORMAT
{
	JNIIMG_GRAY8,
	JNIIMG_RGB888,
};

#endif //_JNIDEFS_H_
