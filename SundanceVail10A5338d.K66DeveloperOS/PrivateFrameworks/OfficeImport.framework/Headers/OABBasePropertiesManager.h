/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABFillPropertiesManager.h"


@protocol OABBasePropertiesManager <OABFillPropertiesManager>
- (BOOL)isShadowed;
- (long)shadowAlpha;
- (EshColor)shadowColor;
- (long)shadowOffsetX;
- (long)shadowOffsetY;
- (long)shadowSoftness;
- (int)shadowType;
- (int)strokeCapStyle;
- (int)strokeCompoundType;
- (const EshTablePropVal<long> *)strokeCustomDash;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (long)strokeFgAlpha;
- (unsigned long)strokeFillBlipID;
- (id)strokeFillBlipName;
- (int)strokeFillType;
- (int)strokeJoinStyle;
- (long)strokeMiterLimit;
- (int)strokePresetDash;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (long)strokeWidth;
@end

