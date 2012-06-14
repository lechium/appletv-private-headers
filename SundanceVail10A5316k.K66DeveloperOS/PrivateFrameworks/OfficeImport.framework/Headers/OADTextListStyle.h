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
- (id)init;	// 0x3101d7a9
- (id)initWithDefaults;	// 0x3100703d
- (void)dealloc;	// 0x31020ebd
- (id)defaultProperties;	// 0x31139c7d
- (void)flatten;	// 0x31257b51
- (void)overrideWithTextStyle:(id)textStyle;	// 0x31075ded
- (id)propertiesForListLevel:(unsigned)listLevel;	// 0x310174c5
- (void)removeUnnecessaryOverrides;	// 0x31257b91
- (void)setParentTextListStyle:(id)style;	// 0x3113cdd5
- (void)setPropertiesForListLevel:(unsigned)listLevel properties:(id)properties;	// 0x31257b31
@end

