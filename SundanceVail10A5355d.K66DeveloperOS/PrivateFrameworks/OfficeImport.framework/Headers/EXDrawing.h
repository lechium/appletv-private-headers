/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXDrawing : NSObject {
}
+ (void)readAbsoluteAnchorNode:(xmlNode *)node state:(id)state;	// 0x31d44e09
+ (EDCellAnchorMarker)readAnchorMarkerFromNode:(xmlNode *)node;	// 0x31d29b45
+ (void)readClientDataFromParentNode:(xmlNode *)parentNode state:(id)state;	// 0x31d2a069
+ (void)readDrawableNode:(xmlNode *)node anchor:(id)anchor state:(id)state;	// 0x31d29c21
+ (void)readFromPart:(id)part state:(id)state;	// 0x31d29805
+ (void)readOneCellAnchorNode:(xmlNode *)node state:(id)state;	// 0x31d47395
+ (void)readTwoCellAnchorNode:(xmlNode *)node state:(id)state;	// 0x31d29965
@end

