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
@property(readonly, retain) id signalHandler;	// G=0x35b4d9d9; converted property
+ (id)sharedPhoneLogger;	// 0x35b4d5cd
- (id)init;	// 0x35b4d7e1
- (id)_appender;	// 0x35b4dcc5
- (void)_handleSignal:(int)signal;	// 0x35b4d639
- (void)_loggingChanged;	// 0x35b4da55
- (int)_loggingConfiguration;	// 0x35b4da9d
- (BOOL)_shouldLogWithLevel:(int)level topic:(id)topic;	// 0x35b4dca9
- (void)dealloc;	// 0x35b4d941
- (id)identifier;	// 0x35b4d9e9
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format;	// 0x35b4dd0d
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace format:(id)format args:(void *)args;	// 0x35b4e1b9
- (void)logWithLevel:(int)level topic:(id)topic backtrace:(BOOL)backtrace text:(id)text;	// 0x35b4df79
- (BOOL)shouldLog;	// 0x35b4e421
- (BOOL)shouldLogWithLevel:(int)level topic:(id)topic;	// 0x35b4e461
// converted property getter: - (id)signalHandler;	// 0x35b4d9d9
@end
