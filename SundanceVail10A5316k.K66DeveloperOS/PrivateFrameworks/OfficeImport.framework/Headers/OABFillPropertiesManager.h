/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "OABColorPropertiesManager.h"
#import "OABFillPropertiesManager.h"

@protocol OABPropertiesManager;

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
- (long)fillAngle;
- (long)fillBgAlpha;
- (unsigned long)fillBlipID;
- (id)fillBlipName;
- (long)fillFgAlpha;
- (long)fillFocus;
- (long)fillFocusBottom;
- (long)fillFocusLeft;
- (long)fillFocusRight;
- (long)fillFocusTop;
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillType;
@end

__attribute__((visibility("hidden")))
@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {
@private
	const EshFill *mFill;	// 4 = 0x4
	int mShapeType;	// 8 = 0x8
	id<OABPropertiesManager> mMasterManager;	// 12 = 0xc
}
- (id)initWithFill:(const EshFill *)fill shapeType:(int)type masterShape:(EshShape *)shape;	// 0x3101dc11
- (void)dealloc;	// 0x310200ad
- (long)fillAngle;	// 0x31087021
- (long)fillBgAlpha;	// 0x31087571
- (EshColor)fillBgColor;	// 0x310870f9
- (EshBlip *)fillBlipDataReference;	// 0x310817f1
- (unsigned long)fillBlipID;	// 0x310816ad
- (id)fillBlipName;	// 0x3108173d
- (long)fillFgAlpha;	// 0x310734dd
- (EshColor)fillFgColor;	// 0x31073465
- (long)fillFocus;	// 0x3108708d
- (long)fillFocusBottom;	// 0x31198b01
- (long)fillFocusLeft;	// 0x311989bd
- (long)fillFocusRight;	// 0x31198a95
- (long)fillFocusTop;	// 0x31198a29
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;	// 0x31087329
- (int)fillType;	// 0x3101e641
- (BOOL)isFilled;	// 0x3101e6c1
- (BOOL)isStroked;	// 0x3123e8b1
- (EshColor)shadowColor;	// 0x3123e915
- (EshColor)strokeBgColor;	// 0x3123e8e5
- (EshColor)strokeFgColor;	// 0x3123e8b5
@end

