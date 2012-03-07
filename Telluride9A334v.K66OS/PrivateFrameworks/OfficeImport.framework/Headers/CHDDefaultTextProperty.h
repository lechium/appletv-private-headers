/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDRunsCollection;

__attribute__((visibility("hidden")))
@interface CHDDefaultTextProperty : NSObject <EDKeyedObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	int mDefaultTextType;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	EDRunsCollection *mRuns;	// 16 = 0x10
	int mLabelPosition;	// 20 = 0x14
	bool mShowCategoryLabel;	// 24 = 0x18
	bool mShowValueLabel;	// 25 = 0x19
	bool mShowPercentageLabel;	// 26 = 0x1a
	bool mShowSeriesLabel;	// 27 = 0x1b
}
@property(retain) id contentFormat;	// G=0x357466b1; S=0x3574661d; converted property
@property(assign) unsigned contentFormatId;	// G=0x3574660d; S=0x35648531; converted property
@property(assign) int defaultTextType;	// G=0x357465ad; S=0x35648541; converted property
@property(assign) bool isShowCategoryLabel;	// G=0x357465cd; S=0x35648561; converted property
@property(assign) bool isShowPercentageLabel;	// G=0x357465ed; S=0x35648581; converted property
@property(assign) bool isShowSeriesLabel;	// G=0x357465fd; S=0x35648591; converted property
@property(assign) bool isShowValueLabel;	// G=0x357465dd; S=0x35648571; converted property
@property(assign) int labelPosition;	// G=0x357465bd; S=0x35648551; converted property
@property(retain) id runs;	// G=0x356b4d81; S=0x356484e9; converted property
+ (id)defaultTextPropertyWithResources:(id)resources;	// 0x3564821d
- (id)initWithResources:(id)resources;	// 0x35648269
// converted property getter: - (id)contentFormat;	// 0x357466b1
// converted property getter: - (unsigned)contentFormatId;	// 0x3574660d
- (void)dealloc;	// 0x3565bcc9
// converted property getter: - (int)defaultTextType;	// 0x357465ad
// converted property getter: - (bool)isShowCategoryLabel;	// 0x357465cd
// converted property getter: - (bool)isShowPercentageLabel;	// 0x357465ed
// converted property getter: - (bool)isShowSeriesLabel;	// 0x357465fd
// converted property getter: - (bool)isShowValueLabel;	// 0x357465dd
- (unsigned)key;	// 0x356485a1
// converted property getter: - (int)labelPosition;	// 0x357465bd
// converted property getter: - (id)runs;	// 0x356b4d81
// converted property setter: - (void)setContentFormat:(id)format;	// 0x3574661d
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x35648531
// converted property setter: - (void)setDefaultTextType:(int)type;	// 0x35648541
// converted property setter: - (void)setIsShowCategoryLabel:(bool)label;	// 0x35648561
// converted property setter: - (void)setIsShowPercentageLabel:(bool)label;	// 0x35648581
// converted property setter: - (void)setIsShowSeriesLabel:(bool)label;	// 0x35648591
// converted property setter: - (void)setIsShowValueLabel:(bool)label;	// 0x35648571
// converted property setter: - (void)setLabelPosition:(int)position;	// 0x35648551
// converted property setter: - (void)setRuns:(id)runs;	// 0x356484e9
@end
