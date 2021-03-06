/***************
 * PROGRAM:       Modeler
 * NAME:          errors.h
 * DESCRIPTION:   error definitions
 *	AUTHORS:			Andreas Heumann
 * HISTORY:
 *		DATE		NAME	COMMENT
 *		10.12.95 ah		initial release
 *		25.06.97	ah		added ERR_WRONGOBJHANDLER
 ***************/

#ifndef ERRORS_H
#define ERRORS_H

/* Global error definitions. */

enum errs
{
	ERR_NONE,ERR_MEM,ERR_OPENOBJ,ERR_READOBJ,ERR_OPENOBJTYPEFILE,
	ERR_READOBJTYPEFILE,ERR_OBJHANDLER,ERR_UNKNOWNOBJ,
	ERR_OPEN,ERR_IFFPARSE,ERR_WRITE,ERR_NORMATFILE,
	ERR_CORRUPT,ERR_NORSCNFILE,ERR_RSCNFILE,ERR_WRONGVERS,ERR_NOCAMERA,
	ERR_SAVEOBJNOSEL,

#ifdef __AMIGA__
	ERR_INTUITIONLIB, ERR_GRAPHICSLIB, ERR_MUIMASTERLIB, ERR_UTILITYLIB,
	ERR_IFFPARSELIB, ERR_ASLLIB, ERR_MUICLASS, ERR_RAYSTORMLIB,
	ERR_OPENWINDOW, ERR_NO020, ERR_NO881, ERR_NO040, ERR_INFOLIB,
	ERR_WRONGOBJHANDLER
#endif
};

extern char *errors[];

#endif
