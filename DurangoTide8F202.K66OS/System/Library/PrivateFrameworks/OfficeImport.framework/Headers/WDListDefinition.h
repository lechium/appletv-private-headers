/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDStyle, NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDListDefinition : NSObject {
@private
	int mType;	// 4 = 0x4
	NSMutableArray *mLevels;	// 8 = 0x8
	int mListId;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDStyle *mListStyle;	// 20 = 0x14
	WDStyle *mListStyleLink;	// 24 = 0x18
}
@property(assign) int listId;	// G=0x31b004c1; S=0x319b1a2d; converted property
@property(retain) id listStyle;	// G=0x31b004a1; S=0x319b2109; converted property
@property(retain) id listStyleLink;	// G=0x31b004b1; S=0x31a37a3d; converted property
@property(assign) int type;	// G=0x31b00491; S=0x319b20f9; converted property
- (id)initWithDocument:(id)document;	// 0x319b1989
- (id)addLevel;	// 0x319b1b15
- (void)dealloc;	// 0x319951f5
- (id)document;	// 0x31a37a2d
- (id)levelAt:(int)at;	// 0x3198e7f1
- (int)levelCount;	// 0x3198e769
// converted property getter: - (int)listId;	// 0x31b004c1
// converted property getter: - (id)listStyle;	// 0x31b004a1
// converted property getter: - (id)listStyleLink;	// 0x31b004b1
// converted property setter: - (void)setListId:(int)anId;	// 0x319b1a2d
// converted property setter: - (void)setListStyle:(id)style;	// 0x319b2109
// converted property setter: - (void)setListStyleLink:(id)link;	// 0x31a37a3d
// converted property setter: - (void)setType:(int)type;	// 0x319b20f9
// converted property getter: - (int)type;	// 0x31b00491
@end

