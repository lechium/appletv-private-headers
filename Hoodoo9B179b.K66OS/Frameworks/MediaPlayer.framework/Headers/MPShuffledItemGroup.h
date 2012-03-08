/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSMutableArray;

@interface MPShuffledItemGroup : NSObject <NSCoding> {
	long long _groupPersistentID;	// 4 = 0x4
	NSMutableArray *_mutableItems;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x309cf40d
- (id)initWithGroupPersistentID:(long long)groupPersistentID;	// 0x309cf2bd
- (void)dealloc;	// 0x309cf341
- (id)description;	// 0x309cf38d
- (void)encodeWithCoder:(id)coder;	// 0x309cf4c5
@end

