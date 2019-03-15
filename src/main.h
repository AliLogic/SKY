#ifndef __YSF_MAINH
#define __YSF_MAINH

class CNetGame;
class RakServer;

extern CNetGame *pNetGame;
extern void *pConsole;
extern RakServer *pRakServer;
extern int serverVersion;

typedef void(*logprintf_t)(char *, ...);
extern logprintf_t logprintf;

// Defines
#define CON_VARFLAG_DEBUG		1
#define CON_VARFLAG_READONLY	2
#define CON_VARFLAG_RULE		4

#ifdef _WIN32
#define OS_NAME			"Windows"
#else
#define OS_NAME			"Linux"
#endif

#define PROJECT_NAME		"SKY"
#define PROJECT_VERSION		"0.1"

//#define NEW_PICKUP_SYSTEM

#define SAFE_DELETE(p)	{ if (p) { delete (p); (p) = NULL; } }

#endif
