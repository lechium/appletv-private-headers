/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionGroup.h"

@class AVAsset, NSArray;

@interface AVMediaSelectionTrackGroup : AVMediaSelectionGroup {
	AVAsset *_asset;	// 8 = 0x8
	NSArray *_trackIDs;	// 12 = 0xc
	NSArray *_options;	// 16 = 0x10
	BOOL _allowsEmptySelection;	// 20 = 0x14
}
@property(readonly, assign) BOOL allowsEmptySelection;	// G=0x30eea2cd; converted property
@property(readonly, retain) AVAsset *asset;	// G=0x30eea2bd; converted property
@property(readonly, retain) NSArray *options;	// G=0x30eea29d; converted property
@property(readonly, retain) NSArray *trackIDs;	// G=0x30eea2ad; converted property
- (id)initWithAsset:(id)asset alternateTrackIDs:(id)ids;	// 0x30eea83d
- (BOOL)_isAlternateTrackGroup;	// 0x30eea2dd
- (id)_optionForTrackID:(int)trackID displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x30eea5dd
// converted property getter: - (BOOL)allowsEmptySelection;	// 0x30eea2cd
// converted property getter: - (id)asset;	// 0x30eea2bd
- (void)dealloc;	// 0x30eea7c9
- (unsigned)hash;	// 0x30eea6c1
- (BOOL)isEqual:(id)equal;	// 0x30eea701
- (id)mediaSelectionOptionWithPropertyList:(id)propertyList;	// 0x30eea415
// converted property getter: - (id)options;	// 0x30eea29d
// converted property getter: - (id)trackIDs;	// 0x30eea2ad
@end

