/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"


__attribute__((visibility("hidden")))
@interface WKQuadObject : NSObject {
@private
	WKQuad _quad;	// 4 = 0x4
}
@property(readonly, assign) WKQuad quad;	// G=0x315bd231; converted property
- (id)initWithQuad:(WKQuad)quad;	// 0x315bd1bd
- (CGRect)boundingBox;	// 0x31662429
// converted property getter: - (WKQuad)quad;	// 0x315bd231
@end
