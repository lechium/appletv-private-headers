/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "SafeVMUProcInfoProtocol.h"

@class NSString, NSArray;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol> {
	unsigned _task;	// 4 = 0x4
	BOOL _needTaskPortDealloc;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	int _cpuType;	// 16 = 0x10
	NSArray *_arguments;	// 20 = 0x14
	NSArray *_envVars;	// 24 = 0x18
	NSString *_procTableName;	// 28 = 0x1c
	NSString *_realAppName;	// 32 = 0x20
	NSString *_requestedAppName;	// 36 = 0x24
	NSString *_firstArg;	// 40 = 0x28
	int _pid;	// 44 = 0x2c
	int _ppid;	// 48 = 0x30
	timeval _startTime;	// 52 = 0x34
}
@property(readonly, retain) NSArray *arguments;	// G=0x355a2add; converted property
@property(readonly, assign) int cpuType;	// G=0x355a2f09; converted property
@property(readonly, retain) NSArray *envVars;	// G=0x355a2b25; converted property
@property(readonly, retain) NSString *name;	// G=0x355a2bc9; converted property
@property(readonly, assign) int pid;	// G=0x355a2ccd; converted property
@property(readonly, assign) int ppid;	// G=0x355a2cdd; converted property
@property(readonly, retain) NSString *procTableName;	// G=0x355a25c1; converted property
@property(readonly, retain) NSString *realAppName;	// G=0x355a299d; converted property
@property(readonly, retain) NSString *requestedAppName;	// G=0x355a2a11; converted property
@property(readonly, assign) timeval startTime;	// G=0x355a24a5; converted property
@property(readonly, assign) unsigned task;	// G=0x355a2ced; converted property
+ (id)getProcessIds;	// 0x355a22c5
+ (BOOL)isProcessRunning:(int)running;	// 0x355a23ed
+ (int)processParentId:(int)anId;	// 0x355a2449
- (id)init;	// 0x355a20c9
- (id)initWithPid:(int)pid;	// 0x355a20f5
- (id)initWithTask:(unsigned)task;	// 0x355a2121
- (id)_infoFromCommandLine:(int)commandLine;	// 0x355a26ed
// converted property getter: - (id)arguments;	// 0x355a2add
- (int)compare:(id)compare;	// 0x355a30bd
- (int)compareByName:(id)name;	// 0x355a3111
- (int)compareByUserAppName:(id)name;	// 0x355a314d
// converted property getter: - (int)cpuType;	// 0x355a2f09
- (void)dealloc;	// 0x355a216d
- (id)description;	// 0x355a2c79
// converted property getter: - (id)envVars;	// 0x355a2b25
- (void)finalize;	// 0x355a2265
- (id)firstArgument;	// 0x355a2a85
- (unsigned)hash;	// 0x355a3189
- (BOOL)isApp;	// 0x355a2e8d
- (BOOL)isCFM;	// 0x355a2eb5
- (BOOL)isEqual:(id)equal;	// 0x355a304d
- (BOOL)isMachO;	// 0x355a2e91
- (BOOL)isNative;	// 0x355a2fb9
- (BOOL)isRunning;	// 0x355a2fbd
// converted property getter: - (id)name;	// 0x355a2bc9
// converted property getter: - (int)pid;	// 0x355a2ccd
// converted property getter: - (int)ppid;	// 0x355a2cdd
// converted property getter: - (id)procTableName;	// 0x355a25c1
// converted property getter: - (id)realAppName;	// 0x355a299d
// converted property getter: - (id)requestedAppName;	// 0x355a2a11
- (BOOL)signal:(int)signal;	// 0x355a3029
// converted property getter: - (timeval)startTime;	// 0x355a24a5
// converted property getter: - (unsigned)task;	// 0x355a2ced
- (BOOL)terminate;	// 0x355a2ff1
- (void)update;	// 0x355a2d6d
- (id)userAppName;	// 0x355a2b6d
@end

