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
- (id)initWithShapeBase:(EshShapeBase *)shapeBase shapeType:(int)type masterShape:(EshShape *)shape;	// 0x3273eda1
- (void)dealloc;	// 0x327b7585
- (BOOL)isShadowed;	// 0x327b148d
- (BOOL)isStroked;	// 0x327b07ad
- (long)shadowAlpha;	// 0x32881bb5
- (EshColor)shadowColor;	// 0x32881b41
- (long)shadowOffsetX;	// 0x32881cd9
- (long)shadowOffsetY;	// 0x32881d49
- (long)shadowSoftness;	// 0x32881c5d
- (int)shadowType;	// 0x32881dd9
- (EshColor)strokeBgColor;	// 0x32933dfd
- (int)strokeCapStyle;	// 0x327b0f75
- (int)strokeCompoundType;	// 0x327b1011
- (const EshTablePropVal<long int> *)strokeCustomDash;	// 0x327b090d
- (int)strokeEndArrowLength;	// 0x327b0e85
- (int)strokeEndArrowType;	// 0x327b0dbd
- (int)strokeEndArrowWidth;	// 0x327b0e21
- (long)strokeFgAlpha;	// 0x327b01a9
- (EshColor)strokeFgColor;	// 0x327b00d5
- (unsigned long)strokeFillBlipID;	// 0x32933c95
- (id)strokeFillBlipName;	// 0x32933d05
- (int)strokeFillType;	// 0x327b0855
- (int)strokeJoinStyle;	// 0x327b0ad5
- (long)strokeMiterLimit;	// 0x32882fa1
- (int)strokePresetDash;	// 0x327b0971
- (int)strokeStartArrowLength;	// 0x327b0c9d
- (int)strokeStartArrowType;	// 0x327b0bd5
- (int)strokeStartArrowWidth;	// 0x327b0c39
- (long)strokeWidth;	// 0x327b0ee9
@end

