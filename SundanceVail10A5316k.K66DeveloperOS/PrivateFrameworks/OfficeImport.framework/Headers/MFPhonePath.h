/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPath.h"


__attribute__((visibility("hidden")))
@interface MFPhonePath : MFPath {
@private
	CGPathRef m_path;	// 4 = 0x4
	int m_state;	// 8 = 0x8
}
@property(readonly, assign) int state;	// G=0x312f8705; converted property
- (id)init;	// 0x310cdb11
- (id)initWithPath:(CGPathRef)path state:(int)state;	// 0x311571fd
- (int)abort;	// 0x312f8719
- (void)appendBezierPath:(CGPathRef)path dc:(id)dc;	// 0x311a8451
- (int)begin;	// 0x311a81b5
- (int)closeFigure;	// 0x311a8c8d
- (id)copyWithZone:(NSZone *)zone;	// 0x31157195
- (CGPoint)currentPoint;	// 0x311a8cc5
- (void)dealloc;	// 0x310d1f0d
- (int)end;	// 0x311a8d55
- (int)fill:(id)fill;	// 0x311a923d
- (int)flatten;	// 0x312f8751
- (CGPathRef)getBezierPath;	// 0x311a8f45
- (BOOL)isOpen;	// 0x310d044d
// converted property getter: - (int)state;	// 0x312f8705
- (int)stroke:(id)stroke;	// 0x311a96b5
- (int)widen:(id)widen;	// 0x312f8769
@end

