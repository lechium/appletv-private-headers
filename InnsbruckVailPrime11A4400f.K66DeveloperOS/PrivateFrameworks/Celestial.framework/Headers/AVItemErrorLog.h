/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class NSArray, AVItemErrorLogInternal;

@interface AVItemErrorLog : NSObject <NSCopying> {
	AVItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x303649cd; 
- (id)init;	// 0x303646ad
- (id)initWithLogArray:(id)logArray;	// 0x30364745
- (id)copyWithZone:(NSZone *)zone;	// 0x3036487d
- (void)dealloc;	// 0x303648d1
- (id)description;	// 0x30364799
// declared property getter: - (id)events;	// 0x303649cd
- (id)extendedLogData;	// 0x3036493d
- (unsigned)extendedLogDataStringEncoding;	// 0x303649c9
- (void)finalize;	// 0x3036488d
@end

