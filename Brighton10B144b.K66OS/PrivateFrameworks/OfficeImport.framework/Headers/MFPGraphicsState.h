/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface MFPGraphicsState : NSObject {
	CGAffineTransform mPageTransform;	// 4 = 0x4
	CGAffineTransform mWorldTransform;	// 28 = 0x1c
}
@property(assign) CGAffineTransform pageTransform;	// G=0x34afe101; S=0x34afe135; converted property
@property(assign) CGAffineTransform worldTransform;	// G=0x34afe225; S=0x34afe259; converted property
- (id)initWithDefaults;	// 0x348cab45
- (id)initWithGraphicsState:(id)graphicsState;	// 0x34afe029
- (id).cxx_construct;	// 0x348cab41
- (void)dealloc;	// 0x348ce309
- (void)multiplyWorldTransformBy:(CGAffineTransform)by order:(int)order;	// 0x34afe2e9
// converted property getter: - (CGAffineTransform)pageTransform;	// 0x34afe101
- (void)removeTransform:(CGAffineTransform)transform;	// 0x34afe0c1
// converted property setter: - (void)setPageTransform:(CGAffineTransform)transform;	// 0x34afe135
// converted property setter: - (void)setWorldTransform:(CGAffineTransform)transform;	// 0x34afe259
// converted property getter: - (CGAffineTransform)worldTransform;	// 0x34afe225
@end
