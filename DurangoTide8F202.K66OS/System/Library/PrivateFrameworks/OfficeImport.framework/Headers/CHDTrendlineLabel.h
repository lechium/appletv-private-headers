/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, CHDFormula, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTrendlineLabel : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	CHDFormula *mName;	// 8 = 0x8
	unsigned mLastCachedNameStringIndex;	// 12 = 0xc
	unsigned mContentFormatId;	// 16 = 0x10
	bool mGeneratedText;	// 20 = 0x14
	bool mAutomaticLabelDeleted;	// 21 = 0x15
	OADGraphicProperties *mGraphicProperties;	// 24 = 0x18
}
@property(assign, getter=isAutomaticLabelDeleted) bool automaticLabelDeleted;	// G=0x31aec47d; S=0x31a8efc9; converted property
@property(retain) id contentFormat;	// G=0x31aec559; S=0x31aec4cd; converted property
@property(assign) unsigned contentFormatId;	// G=0x31aec4bd; S=0x31a8efa9; converted property
@property(assign, getter=isGeneratedText) bool generatedText;	// G=0x31aec46d; S=0x31a8efb9; converted property
@property(retain) id graphicProperties;	// G=0x31aec48d; S=0x31a8f019; converted property
@property(retain) id lastCachedName;	// G=0x31aec595; S=0x31a8efd9; converted property
@property(assign) unsigned stringIndex;	// G=0x31aec49d; S=0x31aec4ad; converted property
+ (id)trendlineLabelWithResources:(id)resources;	// 0x31a8ae75
- (id)initWithResources:(id)resources;	// 0x31a8aeb9
// converted property getter: - (id)contentFormat;	// 0x31aec559
// converted property getter: - (unsigned)contentFormatId;	// 0x31aec4bd
- (void)dealloc;	// 0x31a8b1ed
// converted property getter: - (id)graphicProperties;	// 0x31aec48d
// converted property getter: - (bool)isAutomaticLabelDeleted;	// 0x31aec47d
// converted property getter: - (bool)isGeneratedText;	// 0x31aec46d
// converted property getter: - (id)lastCachedName;	// 0x31aec595
- (id)name;	// 0x31aec45d
// converted property setter: - (void)setAutomaticLabelDeleted:(bool)deleted;	// 0x31a8efc9
// converted property setter: - (void)setContentFormat:(id)format;	// 0x31aec4cd
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x31a8efa9
// converted property setter: - (void)setGeneratedText:(bool)text;	// 0x31a8efb9
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x31a8f019
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x31a8efd9
- (void)setName:(id)name chart:(id)chart;	// 0x31a8ef21
// converted property setter: - (void)setStringIndex:(unsigned)index;	// 0x31aec4ad
// converted property getter: - (unsigned)stringIndex;	// 0x31aec49d
@end

