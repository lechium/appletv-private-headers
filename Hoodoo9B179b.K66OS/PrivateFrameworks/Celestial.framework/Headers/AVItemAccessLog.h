/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, AVItemAccessLogInternal;

@interface AVItemAccessLog : NSObject <NSCopying> {
@private
	AVItemAccessLogInternal *_playerItemAccessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x30f3138d; 
- (id)init;	// 0x30f31065
- (id)initWithLogArray:(id)logArray;	// 0x30f310fd
- (id)copyWithZone:(NSZone *)zone;	// 0x30f31235
- (void)dealloc;	// 0x30f31289
- (id)description;	// 0x30f31151
// declared property getter: - (id)events;	// 0x30f3138d
- (id)extendedLogData;	// 0x30f312fd
- (unsigned)extendedLogDataStringEncoding;	// 0x30f31389
- (void)finalize;	// 0x30f31245
@end

