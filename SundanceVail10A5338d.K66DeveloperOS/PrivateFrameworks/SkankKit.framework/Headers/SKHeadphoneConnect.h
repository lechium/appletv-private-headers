/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"


@interface SKHeadphoneConnect : SKLayer {
	bool _inserted;	// 53 = 0x35
}
- (id)init;	// 0x3312925d
- (void)drawFemaleConnector:(CGContextRef)connector :(float)arg2 :(float)arg3;	// 0x331294f5
- (void)drawInContext:(CGContextRef)context;	// 0x3312935d
- (void)drawMaleConnector:(CGContextRef)connector :(float)arg2 :(float)arg3;	// 0x331293fd
- (void)headphoneChange:(id)change;	// 0x33129591
@end
