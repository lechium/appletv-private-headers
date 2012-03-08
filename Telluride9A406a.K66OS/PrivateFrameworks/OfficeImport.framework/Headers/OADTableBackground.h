/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffectsParent.h"
#import <NSObject.h> // Unknown library

@class OADFill, NSArray;

__attribute__((visibility("hidden")))
@interface OADTableBackground : NSObject <OADEffectsParent> {
@private
	OADFill *mFill;	// 4 = 0x4
	NSArray *mEffects;	// 8 = 0x8
}
@property(retain) id effects;	// G=0x32ac41c5; S=0x32a0bd81; converted property
@property(retain) id fill;	// G=0x32a0bed1; S=0x32a0bbf9; converted property
- (void)dealloc;	// 0x32a0bee1
// converted property getter: - (id)effects;	// 0x32ac41c5
// converted property getter: - (id)fill;	// 0x32a0bed1
- (BOOL)hasEffects;	// 0x32ac41d5
// converted property setter: - (void)setEffects:(id)effects;	// 0x32a0bd81
// converted property setter: - (void)setFill:(id)fill;	// 0x32a0bbf9
@end

