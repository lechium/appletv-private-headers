/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKLayerModule.h"

@class NSDictionary, SKButton, NSMutableArray, NSMutableString, DPTextLayer;

@interface SKKeyboardModule : SKLayerModule {
	NSMutableString *_text;	// 16 = 0x10
	DPTextLayer *_textField;	// 20 = 0x14
	SKButton *_clear;	// 24 = 0x18
	DPTextLayer *_prompt;	// 28 = 0x1c
	SKButton *_done;	// 32 = 0x20
	SKButton *_shift;	// 36 = 0x24
	SKButton *_space;	// 40 = 0x28
	SKButton *_delete;	// 44 = 0x2c
	NSMutableArray *_keys;	// 48 = 0x30
	NSDictionary *_shiftMap;	// 52 = 0x34
	id _target;	// 56 = 0x38
	SEL _doneAction;	// 60 = 0x3c
	SEL _keyAction;	// 64 = 0x40
}
@property(readonly, retain) NSMutableArray *keys;	// G=0x3281db41; converted property
@property(retain) NSMutableString *text;	// G=0x3281db91; S=0x3281dbe1; converted property
+ (id)showKeyboard;	// 0x3281ce59
- (id)init;	// 0x3281cd7d
- (void)addContentToLayer:(id)layer;	// 0x3281d015
- (void)addLetter:(id)letter;	// 0x3281dd0d
- (id)buttonWithText:(id)text atX:(int)x Y:(int)y withContext:(id)context;	// 0x3281cf65
- (void)clearKey:(id)key;	// 0x3281e4e5
- (void)clearText;	// 0x3281dcc9
- (void)dealloc;	// 0x3281cde1
- (void)deleteKey:(id)key;	// 0x3281e47d
- (void)deleteLetter;	// 0x3281dd49
- (void)doneKey:(id)key;	// 0x3281e4f5
- (void)keyPressed:(id)pressed;	// 0x3281e325
// converted property getter: - (id)keys;	// 0x3281db41
- (void)orderIn;	// 0x3281db0d
- (void)setDoneAction:(SEL)action;	// 0x3281e2e5
- (void)setKeyAction:(SEL)action;	// 0x3281e2f5
- (void)setPrompt:(id)prompt;	// 0x3281e305
- (void)setTarget:(id)target;	// 0x3281e2d5
// converted property setter: - (void)setText:(id)text;	// 0x3281dbe1
- (void)shiftKey:(id)key;	// 0x3281e3a1
- (id)shiftMappingDict;	// 0x3281ddb1
// converted property getter: - (id)text;	// 0x3281db91
- (id)textForKey:(id)key;	// 0x3281e20d
- (void)updateTextField;	// 0x3281dc61
@end

