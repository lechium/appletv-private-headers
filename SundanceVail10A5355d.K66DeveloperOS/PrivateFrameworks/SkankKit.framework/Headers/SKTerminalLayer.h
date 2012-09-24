/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKScrollLayer.h"
#import "SkankKit-Structs.h"

@class NSMutableString, NSString, NSTimer, DPTextLayer, NSFileHandle;

@interface SKTerminalLayer : SKScrollLayer {
	DPTextLayer *_textField;	// 104 = 0x68
	NSFileHandle *_fileHandle;	// 108 = 0x6c
	NSMutableString *_text;	// 112 = 0x70
	NSTimer *_updateTimer;	// 116 = 0x74
	NSString *_logFile;	// 120 = 0x78
}
- (id)init;	// 0x34f31c49
- (void)clear;	// 0x34f321bd
- (void)dealloc;	// 0x34f31e1d
- (void)reload;	// 0x34f321d9
- (void)setBounds:(CGRect)bounds;	// 0x34f31ea1
- (void)setLogFile:(id)file;	// 0x34f31f65
- (void)setTextFieldText:(id)text;	// 0x34f31fbd
- (void)timerUpdate:(id)update;	// 0x34f321ad
- (void)update;	// 0x34f32061
@end
