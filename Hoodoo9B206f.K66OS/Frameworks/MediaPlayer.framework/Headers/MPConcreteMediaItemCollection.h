/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItemCollection.h"
#import "MediaPlayer-Structs.h"

@class MPMediaItem, MPMediaQuery;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection {
@private
	long long _identifier;	// 20 = 0x14
	MPMediaQuery *_itemsQuery;	// 28 = 0x1c
	int _grouping;	// 32 = 0x20
	MPMediaItem *_representativeItem;	// 36 = 0x24
}
@property(readonly, retain) MPMediaQuery *itemsQuery;	// G=0x303bd8dd; converted property
@property(readonly, retain) MPMediaItem *representativeItem;	// G=0x303bd935; converted property
- (id)initWithCoder:(id)coder;	// 0x303bd37d
- (id)initWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQuery:(id)query grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;	// 0x303bd185
- (id)copyWithZone:(NSZone *)zone;	// 0x303bd36d
- (unsigned)count;	// 0x303bdb3d
- (void)dealloc;	// 0x303bd30d
- (void)encodeWithCoder:(id)coder;	// 0x303bd43d
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x303bd4ed
- (unsigned)hash;	// 0x303bd2fd
- (BOOL)isEqual:(id)equal;	// 0x303bd279
- (id)items;	// 0x303bd915
// converted property getter: - (id)itemsQuery;	// 0x303bd8dd
- (id)mediaLibrary;	// 0x303bd68d
- (int)mediaTypes;	// 0x303bdb65
- (unsigned long long)persistentID;	// 0x303bd6ad
// converted property getter: - (id)representativeItem;	// 0x303bd935
- (id)valueForProperty:(id)property;	// 0x303bd6c5
@end

