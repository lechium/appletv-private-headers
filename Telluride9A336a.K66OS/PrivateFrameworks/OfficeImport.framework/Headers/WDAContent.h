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

@class OADDrawable, WDAAnchor, WDATextBox;

__attribute__((visibility("hidden")))
@interface WDAContent : NSObject <OADClient, OADTextClient> {
@private
	WDAAnchor *mAnchor;	// 4 = 0x4
	WDATextBox *mTextBox;	// 8 = 0x8
	OADDrawable *mDrawable;	// 12 = 0xc
	int mTextType;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) WDAAnchor *anchor;	// G=0x34cb6cf5; @synthesize=mAnchor
@property(assign) CGRect bounds;	// G=0x34c12ffd; S=0x34e04a75; converted property
@property(retain) id drawable;	// G=0x34cb74d5; S=0x34cb6ac9; converted property
@property(retain) id textBox;	// G=0x34cc3155; S=0x34cb7449; converted property
@property(assign) int textType;	// G=0x34cbfe01; S=0x34cb6ae9; converted property
+ (Class)classForType:(unsigned short)type;	// 0x34e04b81
- (id)init;	// 0x34cb6a89
// declared property getter: - (id)anchor;	// 0x34cb6cf5
// converted property getter: - (CGRect)bounds;	// 0x34c12ffd
- (void)clearAnchor;	// 0x34d3b955
- (id)createAnchor;	// 0x34cb6b75
- (id)createTextBoxWithDocument:(id)document textType:(int)type;	// 0x34e04aa1
- (void)dealloc;	// 0x34c20d79
// converted property getter: - (id)drawable;	// 0x34cb74d5
- (BOOL)floating;	// 0x34d14761
- (BOOL)hasBounds;	// 0x34e049a1
- (BOOL)hasText;	// 0x34e049b9
- (bool)isLine;	// 0x34e04a31
- (bool)isShape;	// 0x34cc2ac1
- (bool)isTopLevelObject;	// 0x34e04a01
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x34e04a75
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x34cb6ac9
// converted property setter: - (void)setTextBox:(id)box;	// 0x34cb7449
// converted property setter: - (void)setTextType:(int)type;	// 0x34cb6ae9
// converted property getter: - (id)textBox;	// 0x34cc3155
// converted property getter: - (int)textType;	// 0x34cbfe01
@end
