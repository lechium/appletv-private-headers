/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "NSCopying.h"
#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class AVItemAccessLogInternal, NSArray;

@interface AVItemAccessLog : NSObject <NSCopying> {
@private
	AVItemAccessLogInternal *_playerItemAccessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x30fa0c65; 
- (id)init;	// 0x30fa0911
- (id)initWithLogArray:(id)logArray;	// 0x30fa0819
- (id)copyWithZone:(NSZone *)zone;	// 0x30fa0805
- (void)dealloc;	// 0x30fa0b39
- (id)description;	// 0x30fa09b5
// declared property getter: - (id)events;	// 0x30fa0c65
- (id)extendedLogData;	// 0x30fa0be5
- (unsigned)extendedLogDataStringEncoding;	// 0x30fa0471
- (void)finalize;	// 0x30fa0ba5
@end

