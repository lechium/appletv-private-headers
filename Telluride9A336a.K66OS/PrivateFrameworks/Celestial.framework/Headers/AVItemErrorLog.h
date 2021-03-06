/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"

@class NSArray, AVItemErrorLogInternal;

@interface AVItemErrorLog : NSObject <NSCopying> {
@private
	AVItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x36c68255; 
- (id)init;	// 0x36c681b1
- (id)initWithLogArray:(id)logArray;	// 0x36c68075
- (id)copyWithZone:(NSZone *)zone;	// 0x36c680d5
- (void)dealloc;	// 0x36c68475
- (id)description;	// 0x36c68529
// declared property getter: - (id)events;	// 0x36c68255
- (id)extendedLogData;	// 0x36c683e9
- (unsigned)extendedLogDataStringEncoding;	// 0x36c68071
- (void)finalize;	// 0x36c684e5
@end

