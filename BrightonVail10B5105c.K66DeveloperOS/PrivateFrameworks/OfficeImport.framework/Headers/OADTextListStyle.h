/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface OADTextListStyle : NSObject {
	NSMutableArray *mParagraphProperties;	// 4 = 0x4
}
- (id)init;	// 0x378bf111
- (id)initWithDefaults;	// 0x378a89a5
- (void)dealloc;	// 0x378c2825
- (id)defaultProperties;	// 0x379db5e5
- (void)flatten;	// 0x37af9521
- (void)overrideWithTextStyle:(id)textStyle;	// 0x37917755
- (id)propertiesForListLevel:(unsigned)listLevel;	// 0x378b8e2d
- (void)removeUnnecessaryOverrides;	// 0x37af9561
- (void)setParentTextListStyle:(id)style;	// 0x379de73d
- (void)setPropertiesForListLevel:(unsigned)listLevel properties:(id)properties;	// 0x37af9501
@end
