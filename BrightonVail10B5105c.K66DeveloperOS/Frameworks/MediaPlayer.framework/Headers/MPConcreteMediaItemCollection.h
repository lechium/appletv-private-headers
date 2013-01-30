/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItemCollection.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MPMediaItem, MPMediaQuery;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCoding, NSCopying> {
	long long _identifier;	// 28 = 0x1c
	MPMediaQuery *_itemsQuery;	// 36 = 0x24
	int _grouping;	// 40 = 0x28
	MPMediaItem *_representativeItem;	// 44 = 0x2c
}
@property(readonly, retain) MPMediaQuery *itemsQuery;	// G=0x35008049; converted property
@property(readonly, retain) MPMediaItem *representativeItem;	// G=0x350080a1; converted property
- (id)initWithCoder:(id)coder;	// 0x35007815
- (id)initWithIdentifier:(long long)identifier itemsQuery:(id)query grouping:(int)grouping;	// 0x350076d1
- (id)initWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQuery:(id)query grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;	// 0x350075e5
- (id)copyWithZone:(NSZone *)zone;	// 0x35007805
- (unsigned)count;	// 0x350083c9
- (void)dealloc;	// 0x350077a1
- (void)encodeWithCoder:(id)coder;	// 0x350078cd
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x35007985
- (unsigned)hash;	// 0x35007791
- (BOOL)isEqual:(id)equal;	// 0x3500770d
- (id)items;	// 0x35008081
// converted property getter: - (id)itemsQuery;	// 0x35008049
- (id)mediaLibrary;	// 0x35007b55
- (int)mediaTypes;	// 0x350083f1
- (unsigned long long)persistentID;	// 0x35007b75
// converted property getter: - (id)representativeItem;	// 0x350080a1
- (void)setValue:(id)value forProperty:(id)property;	// 0x35007fa5
- (id)valueForProperty:(id)property;	// 0x35007b8d
- (id)valuesForProperties:(id)properties;	// 0x35007dcd
@end
