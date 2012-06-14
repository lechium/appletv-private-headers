/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import "TUAppender.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface TUInMemoryAppender : NSObject <TUAppender> {
	unsigned long long _currentCapacity;	// 4 = 0x4
	unsigned long long _maxCapacity;	// 12 = 0xc
	NSMutableArray *_buffer;	// 20 = 0x14
	BOOL _shouldLogDyldInfo;	// 24 = 0x18
	BOOL _shouldLogSystemInfo;	// 25 = 0x19
	NSMutableDictionary *_dyldInfo;	// 28 = 0x1c
}
@property(assign) BOOL shouldLogDyldInfo;	// G=0x344b1be9; S=0x344b1c01; @synthesize=_shouldLogDyldInfo
@property(assign) BOOL shouldLogSystemInfo;	// G=0x344b1c19; S=0x344b1c31; @synthesize=_shouldLogSystemInfo
- (id)initWithMaxCapacity:(unsigned long long)maxCapacity;	// 0x344b15b5
- (void)dealloc;	// 0x344b1695
- (void)dumpLogsToFilePath:(id)filePath;	// 0x344b16f9
- (void)flush;	// 0x344b180d
- (void)logWithIdentifier:(id)identifier pid:(int)pid date:(id)date level:(int)level topic:(id)topic text:(id)text backtrace:(id)backtrace;	// 0x344b1811
- (void)reset;	// 0x344b1b39
// declared property setter: - (void)setShouldLogDyldInfo:(BOOL)logDyldInfo;	// 0x344b1c01
// declared property setter: - (void)setShouldLogSystemInfo:(BOOL)logSystemInfo;	// 0x344b1c31
// declared property getter: - (BOOL)shouldLogDyldInfo;	// 0x344b1be9
// declared property getter: - (BOOL)shouldLogSystemInfo;	// 0x344b1c19
@end

