/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABShapeBaseManager.h"
#import "OABPropertiesManager.h"


__attribute__((visibility("hidden")))
@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
@private
	EshShape *mShape;	// 20 = 0x14
}
- (id)initWithShape:(EshShape *)shape;	// 0x32a2e825
- (id)initWithShape:(EshShape *)shape masterShape:(EshShape *)shape2;	// 0x32827d51
- (BOOL)hidden;	// 0x328a0505
- (BOOL)isFillOK;	// 0x328e4179
- (BOOL)isFilled;	// 0x328288c9
- (BOOL)isShadowOK;	// 0x3296a9a1
- (BOOL)isShadowed;	// 0x3289a435
- (BOOL)isStrokeOK;	// 0x328e3d8d
- (BOOL)isStroked;	// 0x32899755
- (BOOL)isTextPath;	// 0x32897ab5
- (BOOL)textPathBold;	// 0x3299cb15
- (id)textPathFontFamily;	// 0x3299c9e9
- (long)textPathFontSize;	// 0x3299caa1
- (BOOL)textPathItalic;	// 0x3299cb89
- (BOOL)textPathSmallcaps;	// 0x3299cbfd
- (BOOL)textPathStrikethrough;	// 0x32b19c21
- (int)textPathTextAlignment;	// 0x3299c499
- (BOOL)textPathUnderline;	// 0x32b19c71
- (id)textPathUnicodeString;	// 0x3299c521
@end

