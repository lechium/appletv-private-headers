/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "AYLogger.h"
#import "DAVKit-Structs.h"

@class NSURL;

@interface _AYFileLogger : AYLogger {
	FILE *_logFile;	// 4 = 0x4
	NSURL *_urlToFile;	// 8 = 0x8
}
@property(readonly, retain) NSURL *urlToFile;	// G=0x314d9f49; converted property
- (id)init;	// 0x314da585
- (void)dealloc;	// 0x314da911
- (void)dumpLogInFile:(char *)file function:(const char *)function line:(unsigned)line withType:(id)type level:(int)level message:(id)message;	// 0x314da969
- (void)finalize;	// 0x314da8c5
// converted property getter: - (id)urlToFile;	// 0x314d9f49
@end

