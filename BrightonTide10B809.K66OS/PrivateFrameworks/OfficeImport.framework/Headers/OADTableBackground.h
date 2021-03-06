/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffectsParent.h"
#import <NSObject.h> // Unknown library

@class NSArray, OADFill;

@interface OADTableBackground : NSObject <OADEffectsParent> {
	OADFill *mFill;	// 4 = 0x4
	NSArray *mEffects;	// 8 = 0x8
}
@property(retain) id effects;	// G=0x34a54511; S=0x349b2371; converted property
@property(retain) id fill;	// G=0x349b24ad; S=0x349b2201; converted property
- (void)dealloc;	// 0x349b25e9
// converted property getter: - (id)effects;	// 0x34a54511
// converted property getter: - (id)fill;	// 0x349b24ad
- (BOOL)hasEffects;	// 0x34a54521
// converted property setter: - (void)setEffects:(id)effects;	// 0x349b2371
// converted property setter: - (void)setFill:(id)fill;	// 0x349b2201
@end

