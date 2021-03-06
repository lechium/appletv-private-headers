/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

#import "GAIA-Structs.h"
#import <NSObject.h> // Unknown library

@protocol iGaia_Woodpecker, iGaia_GrapeCalUiControl, iGaia_GrapeHost;

@interface Gaia_ProjectBase : NSObject {
	int stationId;	// 4 = 0x4
	BOOL serialNum[64];	// 8 = 0x8
	BOOL csvFileName[1024];	// 72 = 0x48
	iGaia_LogManager *lm;	// 1096 = 0x448
	iGaia_MultitouchDevice *mt;	// 1100 = 0x44c
	iGaia_SpecManager *sp;	// 1104 = 0x450
	id<iGaia_Woodpecker> wp;	// 1108 = 0x454
	id<iGaia_GrapeCalUiControl> sc;	// 1112 = 0x458
	id<iGaia_GrapeHost> grapehost;	// 1116 = 0x45c
	tGaia_SystemInfo *sysInfo;	// 1120 = 0x460
}
- (id)initWithSpecManager:(iGaia_SpecManager *)specManager;	// 0x3517b7fd
- (int)GetCbInfo:(unsigned char)info status:(char *)status failCnt:(char *)cnt;	// 0x3517cf05
- (const char *)GetCsvFileName;	// 0x3517bc11
- (id)GetGrapeHost;	// 0x3517d709
- (const iGaia_LogManager *)GetLogManager;	// 0x3517d599
- (const iGaia_MultitouchDevice *)GetMultitouchDevice;	// 0x3517d641
- (id)GetScreenControl;	// 0x3517d6ed
- (const char *)GetSerialNumber;	// 0x3517bb6d
- (const iGaia_SpecManager *)GetSpecManager;	// 0x3517d6b5
- (int)GetStationId;	// 0x3517baa9
- (const tGaia_SystemInfo *)GetSystemInfo;	// 0x3517bf61
- (id)GetWoodpecker;	// 0x3517d6d1
- (int)OpenLogFile:(const char *)file;	// 0x3517bd1d
- (int)PrintSystemInfo:(char *)info;	// 0x3517ca41
- (int)PrintTestStart:(char *)start;	// 0x3517d2bd
- (void)ResetMutitouchDevice;	// 0x3517d5b5
- (int)SetCb:(unsigned char)cb status:(unsigned char)status;	// 0x3517d1a5
- (int)SetCsvFileName:(const char *)name;	// 0x3517bb89
- (int)SetGrapeHost:(id)host;	// 0x3517bcdd
- (int)SetLogRelay:(unsigned long)relay logSink:(id)sink;	// 0x3517bc2d
- (int)SetScreenColor:(char *)color;	// 0x3517e469
- (int)SetScreenControl:(id)control;	// 0x3517bc9d
- (int)SetScreenImage:(char *)image;	// 0x3517e10d
- (int)SetScreenMessage:(char *)message;	// 0x3517ed49
- (int)SetScreenUnitName:(char *)name;	// 0x3517e9ed
- (int)SetSerialNumber:(const char *)number;	// 0x3517bac5
- (int)SetStationId:(int)anId;	// 0x3517ba6d
- (int)SetVerboseLevel:(char *)level;	// 0x3517be61
- (int)SetWoodpecker:(id)woodpecker;	// 0x3517bc5d
- (int)SpecGeneratePlist:(char *)plist;	// 0x3517d9ed
- (int)SpecInit:(char *)init;	// 0x3517d725
- (int)SpecList:(char *)list;	// 0x3517d87d
- (void)dealloc;	// 0x3517b9a1
- (int)reboot:(char *)reboot;	// 0x3517f3f1
- (int)shutdown:(char *)shutdown;	// 0x3517f455
@end

