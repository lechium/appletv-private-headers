/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"

@class AVItemAccessLogInternal, NSArray;

@interface AVItemAccessLog : NSObject <NSCopying> {
@private
	AVItemAccessLogInternal *_playerItemAccessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x36c67999; 
- (id)init;	// 0x36c678f5
- (id)initWithLogArray:(id)logArray;	// 0x36c67455
- (id)copyWithZone:(NSZone *)zone;	// 0x36c674b5
- (void)dealloc;	// 0x36c67bb9
- (id)description;	// 0x36c67c71
// declared property getter: - (id)events;	// 0x36c67999
- (id)extendedLogData;	// 0x36c67b2d
- (unsigned)extendedLogDataStringEncoding;	// 0x36c67451
- (void)finalize;	// 0x36c67c2d
@end

