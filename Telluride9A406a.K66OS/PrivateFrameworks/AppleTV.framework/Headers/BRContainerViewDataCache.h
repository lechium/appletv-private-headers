/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRContainerViewDataCache : NSObject {
@private
	NSArray *_sectionInfos;	// 4 = 0x4
	long _numberOfItems;	// 8 = 0x8
	long _numberOfColumns;	// 12 = 0xc
}
@property(assign) long numberOfColumns;	// G=0x330fb001; S=0x330fb011; @synthesize=_numberOfColumns
@property(assign) long numberOfItems;	// G=0x330fafe1; S=0x330faff1; @synthesize=_numberOfItems
@property(retain) NSArray *sectionInfos;	// G=0x330fafa9; S=0x330fafbd; @synthesize=_sectionInfos
- (void)dealloc;	// 0x330faf5d
// declared property getter: - (long)numberOfColumns;	// 0x330fb001
// declared property getter: - (long)numberOfItems;	// 0x330fafe1
// declared property getter: - (id)sectionInfos;	// 0x330fafa9
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0x330fb011
// declared property setter: - (void)setNumberOfItems:(long)items;	// 0x330faff1
// declared property setter: - (void)setSectionInfos:(id)infos;	// 0x330fafbd
@end

