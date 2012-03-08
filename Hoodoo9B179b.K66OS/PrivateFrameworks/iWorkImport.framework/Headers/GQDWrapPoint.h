/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQDDrawable;

__attribute__((visibility("hidden")))
@interface GQDWrapPoint : NSObject {
@private
	CGPoint mPoint;	// 4 = 0x4
	float mDistance;	// 12 = 0xc
	GQDDrawable *mDrawable;	// 16 = 0x10
	int mFlowType;	// 20 = 0x14
	int mZIndex;	// 24 = 0x18
}
- (id)initWithX:(float)x y:(float)y flowType:(int)type drawable:(id)drawable;	// 0x359734f9
- (int)comparePoint:(id)point;	// 0x35972d49
- (int)zIndex;	// 0x35972dd1
@end

