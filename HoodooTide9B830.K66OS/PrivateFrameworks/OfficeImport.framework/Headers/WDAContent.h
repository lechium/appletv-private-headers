/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextClient.h"
#import "OADClient.h"
#import "OfficeImport-Structs.h"
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
@property(readonly, assign, nonatomic) WDAAnchor *anchor;	// G=0x3121ccf5; @synthesize=mAnchor
@property(assign) CGRect bounds;	// G=0x31178ffd; S=0x3136aa75; converted property
@property(retain) id drawable;	// G=0x3121d4d5; S=0x3121cac9; converted property
@property(retain) id textBox;	// G=0x31229155; S=0x3121d449; converted property
@property(assign) int textType;	// G=0x31225e01; S=0x3121cae9; converted property
+ (Class)classForType:(unsigned short)type;	// 0x3136ab81
- (id)init;	// 0x3121ca89
// declared property getter: - (id)anchor;	// 0x3121ccf5
// converted property getter: - (CGRect)bounds;	// 0x31178ffd
- (void)clearAnchor;	// 0x312a1955
- (id)createAnchor;	// 0x3121cb75
- (id)createTextBoxWithDocument:(id)document textType:(int)type;	// 0x3136aaa1
- (void)dealloc;	// 0x31186d79
// converted property getter: - (id)drawable;	// 0x3121d4d5
- (BOOL)floating;	// 0x3127a761
- (BOOL)hasBounds;	// 0x3136a9a1
- (BOOL)hasText;	// 0x3136a9b9
- (bool)isLine;	// 0x3136aa31
- (bool)isShape;	// 0x31228ac1
- (bool)isTopLevelObject;	// 0x3136aa01
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3136aa75
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x3121cac9
// converted property setter: - (void)setTextBox:(id)box;	// 0x3121d449
// converted property setter: - (void)setTextType:(int)type;	// 0x3121cae9
// converted property getter: - (id)textBox;	// 0x31229155
// converted property getter: - (int)textType;	// 0x31225e01
@end

