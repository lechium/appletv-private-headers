/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSString, BRProgressBarWidget;

@interface BRSyncProgressControl : BRControl {
@private
	BRProgressBarWidget *_progressBar;	// 44 = 0x2c
	BRTextControl *_sourceText;	// 48 = 0x30
	BRTextControl *_currentAssetText;	// 52 = 0x34
	NSString *_currentAssetTextFormat;	// 56 = 0x38
	unsigned _numAssets;	// 60 = 0x3c
}
- (id)initWithSourceName:(id)sourceName notification:(id)notification;	// 0x3290834d
- (void)_updateProgress:(id)progress;	// 0x3290804d
- (void)dealloc;	// 0x329082a5
- (void)layoutSubcontrols;	// 0x32908659
- (void)setCurrentAssetName:(id)name num:(unsigned)num;	// 0x329081c1
- (void)setPercentage:(float)percentage;	// 0x329081a1
@end

