/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTextListStyle : NSObject {
@private
	NSMutableArray *mParagraphProperties;	// 4 = 0x4
}
- (id)init;	// 0x328db961
- (id)initWithDefaults;	// 0x328c7c9d
- (void)dealloc;	// 0x328aa1d5
- (id)defaultProperties;	// 0x329c94c1
- (void)flatten;	// 0x32ac64b1
- (void)overrideWithTextStyle:(id)textStyle;	// 0x328e19cd
- (id)propertiesForListLevel:(unsigned)listLevel;	// 0x328a1a35
- (void)removeUnnecessaryOverrides;	// 0x32ac6471
- (void)setParentTextListStyle:(id)style;	// 0x329cc395
- (void)setPropertiesForListLevel:(unsigned)listLevel properties:(id)properties;	// 0x32ac64f1
@end
