/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import "TelephonyUtilities-Structs.h"
#import "TULogger.h"
#import <NSObject.h> // Unknown library

@class TURemoteAppender, TUInMemoryAppender;

@interface TUPhoneLogger : NSObject <TULogger> {
	int _lock;	// 4 = 0x4
	id _signalHandler;	// 8 = 0x8
	TUInMemoryAppender *_inMemoryAppender;	// 12 = 0xc
	TURemoteAppender *_remoteAppender;	// 16 = 0x10
	int _loggingConfiguration;	// 20 = 0x14
	BOOL _loggingConfigurationCached;	// 24 = 0x18
	dispatch_queue_s *_appenderQueue;	// 28 = 0x1c
}
@property(readonly, retain) id signalHandler;	// G=0x344b2055; converted property
+ (id)sharedPhoneLogger;	// 0x344b1c49
- (id)init;	// 0x344b1e5d
- (id)_appender;	// 0x344b2341
- (void)_handleSignal:(int)signal;	// 0x344b1cb5
- (void)_loggingChanged;	// 0x344b20d1
- (int)_loggingConfiguration;	// 0x344b2119
- (BOOL)_shouldLogWithLevel:(int)level topic:(id)topic;	// 0x344b2325
- (void)dealloc;	// 0x344b1fbd
- (id)identifier;	// 0x344b2065
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format;	// 0x344b2389
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format args:(void *)args;	// 0x344b2835
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace text:(id)text;	// 0x344b25f5
- (BOOL)shouldLog;	// 0x344b2a9d
- (BOOL)shouldLogWithLevel:(int)level topic:(id)topic;	// 0x344b2add
// converted property getter: - (id)signalHandler;	// 0x344b2055
@end

