/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface PDBuild : NSObject {
@private
	BOOL mIsAnimateBackground;	// 4 = 0x4
	OADDrawable *mDrawable;	// 8 = 0x8
}
@property(retain) id drawable;	// G=0x31286971; S=0x31286981; converted property
@property(assign) BOOL isAnimateBackground;	// G=0x31286961; S=0x3118d5b5; converted property
- (id)init;	// 0x3118d561
- (void)dealloc;	// 0x3118e081
// converted property getter: - (id)drawable;	// 0x31286971
// converted property getter: - (BOOL)isAnimateBackground;	// 0x31286961
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x31286981
// converted property setter: - (void)setIsAnimateBackground:(BOOL)background;	// 0x3118d5b5
@end

