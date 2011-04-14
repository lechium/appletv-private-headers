/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADTextClient.h"
#import "OADClient.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, EDTextBox, EDAnchor, EDSheet, EDComment;

__attribute__((visibility("hidden")))
@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
@private
	EDSheet *mSheet;	// 4 = 0x4
	id mClientState;	// 8 = 0x8
	EDAnchor *mAnchor;	// 12 = 0xc
	EDTextBox *mTextBox;	// 16 = 0x10
	EDComment *mComment;	// 20 = 0x14
	NSMutableDictionary *mTableModels;	// 24 = 0x18
	CGRect mBounds;	// 28 = 0x1c
	bool mIsBoundsSet;	// 44 = 0x2c
}
@property(retain) id anchor;	// G=0x319e83cd; S=0x319e7da5; converted property
@property(assign) CGRect bounds;	// G=0x31a27e05; S=0x31a0753d; converted property
@property(retain) id clientState;	// G=0x31ad1839; S=0x31ad1939; converted property
@property(retain) id comment;	// G=0x319e8e41; S=0x31a28bfd; converted property
@property(retain) id sheet;	// G=0x31ad1859; S=0x31a16255; converted property
@property(retain) id tableModels;	// G=0x31ad1869; S=0x31ad1901; converted property
@property(retain) id textBox;	// G=0x31a054c9; S=0x31a0538d; converted property
// converted property getter: - (id)anchor;	// 0x319e83cd
- (bool)areBoundsSet;	// 0x31ad1849
// converted property getter: - (CGRect)bounds;	// 0x31a27e05
// converted property getter: - (id)clientState;	// 0x31ad1839
// converted property getter: - (id)comment;	// 0x319e8e41
- (void)dealloc;	// 0x318f17fd
- (BOOL)hasBounds;	// 0x319e83bd
- (BOOL)hasText;	// 0x319e95c9
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x319e7da5
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x31a0753d
// converted property setter: - (void)setClientState:(id)state;	// 0x31ad1939
// converted property setter: - (void)setComment:(id)comment;	// 0x31a28bfd
// converted property setter: - (void)setSheet:(id)sheet;	// 0x31a16255
// converted property setter: - (void)setTableModels:(id)models;	// 0x31ad1901
// converted property setter: - (void)setTextBox:(id)box;	// 0x31a0538d
// converted property getter: - (id)sheet;	// 0x31ad1859
// converted property getter: - (id)tableModels;	// 0x31ad1869
// converted property getter: - (id)textBox;	// 0x31a054c9
@end

