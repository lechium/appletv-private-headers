/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


@interface BRBaseMenuItemLayerPopulator : NSObject {
@private
	id _object;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	unsigned _matchOrder;	// 12 = 0xc
}
@property(readonly, assign) unsigned matchOrder;	// G=0x32a317e1; converted property
+ (BOOL)canHandleObject:(id)object;	// 0x32a28f71
- (id)init;	// 0x32a28f75
- (void)dealloc;	// 0x32a29021
- (id)dividerLayer;	// 0x32a2918d
- (id)lowerCenteredString;	// 0x32a2920d
- (id)lowerLeftString;	// 0x32a29209
- (id)lowerRightImage;	// 0x32a29219
// converted property getter: - (unsigned)matchOrder;	// 0x32a317e1
- (id)menuItem;	// 0x32a29171
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x32a2906d
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x32a290cd
- (id)rightJustifiedText;	// 0x32a29201
- (void)setObject:(id)object;	// 0x32a29131
- (BOOL)shouldUseMultilineItem:(id)item;	// 0x32a2921d
- (id)subtitle;	// 0x32a29205
- (id)thumbnailImage;	// 0x32a29211
- (id)title;	// 0x32a291fd
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x32a290d1
- (id)upperRightImage;	// 0x32a29215
@end

