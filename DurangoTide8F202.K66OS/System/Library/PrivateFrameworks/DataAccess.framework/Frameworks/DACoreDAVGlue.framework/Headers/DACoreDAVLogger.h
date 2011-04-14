/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
 */

#import <NSObject.h> // Unknown library
#import "CoreDAVLogDelegate.h"


@interface DACoreDAVLogger : NSObject <CoreDAVLogDelegate> {
}
+ (id)registerDefaultLoggerWithCoreDAV;	// 0x32be5a95
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x32be5a5d
- (int)coreDAVLogLevel;	// 0x32be5a45
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x32be5969
- (int)coreDAVOutputLevel;	// 0x32be5a51
- (void)coreDAVTransmittedDataFinished;	// 0x32be596d
- (BOOL)shouldLogTransmittedData;	// 0x32be5965
@end

