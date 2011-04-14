/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADAngleArcPathElement : OADPathElement {
@private
	OADAdjustPoint mCenter;	// 4 = 0x4
	OADAdjustPoint mSemiaxes;	// 20 = 0x14
	OADAdjustCoord mStartAngle;	// 36 = 0x24
	OADAdjustCoord mAngleLength;	// 44 = 0x2c
	BOOL mConnectedToPrevious;	// 52 = 0x34
}
- (id)initWithCenter:(OADAdjustPoint)center semiaxes:(OADAdjustPoint)semiaxes startAngle:(OADAdjustCoord)angle angleLength:(OADAdjustCoord)length connectedToPrevious:(BOOL)previous;	// 0x31ab5cc5
- (OADAdjustCoord)angleLength;	// 0x31ab5be5
- (OADAdjustPoint)center;	// 0x31ab5b95
- (BOOL)connectedToPrevious;	// 0x31ab5bfd
- (OADAdjustPoint)semiaxes;	// 0x31ab5bb1
- (OADAdjustCoord)startAngle;	// 0x31ab5bcd
@end

