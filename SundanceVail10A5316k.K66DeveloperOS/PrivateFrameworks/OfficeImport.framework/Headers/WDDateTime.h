/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties, NSDate;

__attribute__((visibility("hidden")))
@interface WDDateTime : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	NSDate *mDate;	// 12 = 0xc
}
@property(retain) id properties;	// G=0x312b0909; S=0x312b0919; converted property
- (id)initWithParagraph:(id)paragraph date:(id)date;	// 0x312b0855
- (void)clearProperties;	// 0x312b0959
- (id)date;	// 0x312b0985
- (void)dealloc;	// 0x312b07f1
// converted property getter: - (id)properties;	// 0x312b0909
- (int)runType;	// 0x312b0995
// converted property setter: - (void)setProperties:(id)properties;	// 0x312b0919
@end

