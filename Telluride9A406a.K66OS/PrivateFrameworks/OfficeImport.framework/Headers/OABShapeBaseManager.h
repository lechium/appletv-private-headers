/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABFillPropertiesManager.h"
#import "OfficeImport-Structs.h"
#import "OABBasePropertiesManager.h"


__attribute__((visibility("hidden")))
@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager> {
@private
	EshShapeBase *mShapeBase;	// 16 = 0x10
}
- (id)initWithShapeBase:(EshShapeBase *)shapeBase shapeType:(int)type masterShape:(EshShape *)shape;	// 0x32827da1
- (void)dealloc;	// 0x328a0585
- (BOOL)isShadowed;	// 0x3289a48d
- (BOOL)isStroked;	// 0x328997ad
- (long)shadowAlpha;	// 0x3296abb5
- (EshColor)shadowColor;	// 0x3296ab41
- (long)shadowOffsetX;	// 0x3296acd9
- (long)shadowOffsetY;	// 0x3296ad49
- (long)shadowSoftness;	// 0x3296ac5d
- (int)shadowType;	// 0x3296add9
- (EshColor)strokeBgColor;	// 0x32a1cdfd
- (int)strokeCapStyle;	// 0x32899f75
- (int)strokeCompoundType;	// 0x3289a011
- (const EshTablePropVal<long int> *)strokeCustomDash;	// 0x3289990d
- (int)strokeEndArrowLength;	// 0x32899e85
- (int)strokeEndArrowType;	// 0x32899dbd
- (int)strokeEndArrowWidth;	// 0x32899e21
- (long)strokeFgAlpha;	// 0x328991a9
- (EshColor)strokeFgColor;	// 0x328990d5
- (unsigned long)strokeFillBlipID;	// 0x32a1cc95
- (id)strokeFillBlipName;	// 0x32a1cd05
- (int)strokeFillType;	// 0x32899855
- (int)strokeJoinStyle;	// 0x32899ad5
- (long)strokeMiterLimit;	// 0x3296bfa1
- (int)strokePresetDash;	// 0x32899971
- (int)strokeStartArrowLength;	// 0x32899c9d
- (int)strokeStartArrowType;	// 0x32899bd5
- (int)strokeStartArrowWidth;	// 0x32899c39
- (long)strokeWidth;	// 0x32899ee9
@end

