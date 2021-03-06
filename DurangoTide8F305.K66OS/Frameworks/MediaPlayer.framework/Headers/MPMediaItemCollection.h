/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"
#import "MediaPlayer-Structs.h"

@class NSArray, MPMediaItem;

@interface MPMediaItemCollection : MPMediaEntity {
	MPMediaItemCollectionInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemCollectionInternal _internal;	// G=0x3377aea1; S=0x3377aebd; @synthesize
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3377ae91; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x3377ae71; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x3377b375; 
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x3377ae81; 
+ (id)collectionWithItems:(id)items;	// 0x3377b299
+ (id)representativePersistentIDPropertyForGroupingType:(int)groupingType;	// 0x3377b5a5
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x3377b5dd
- (id)init;	// 0x3377b269
- (id)initWithCoder:(id)coder;	// 0x3377b06d
- (id)initWithItems:(id)items;	// 0x3377b1a9
- (id)_init;	// 0x3377b335
// declared property getter: - (MPMediaItemCollectionInternal)_internal;	// 0x3377aea1
// declared property getter: - (unsigned)count;	// 0x3377ae91
- (void)dealloc;	// 0x3377b2d9
- (void)encodeWithCoder:(id)coder;	// 0x3377af65
// declared property getter: - (id)items;	// 0x3377ae71
- (id)itemsQuery;	// 0x3377aee9
// declared property getter: - (int)mediaTypes;	// 0x3377b375
// declared property getter: - (id)representativeItem;	// 0x3377ae81
// declared property setter: - (void)set_internal:(MPMediaItemCollectionInternal)internal;	// 0x3377aebd
@end

