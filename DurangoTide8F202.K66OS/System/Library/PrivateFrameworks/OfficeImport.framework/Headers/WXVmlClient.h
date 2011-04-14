/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OAVClient.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WXVmlClient : NSObject <OAVClient> {
}
+ (bool)behindText:(id)text;	// 0x31a44c91
+ (void)copyFromDrawable:(id)drawable toContent:(id)content;	// 0x31afa585
+ (BOOL)floating:(id)floating;	// 0x31a44c71
+ (int)horizontalPosition:(id)position;	// 0x31a44ca9
+ (void)initialize;	// 0x31a2eb35
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x31a8e64d
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x31a44491
+ (void)readFromDrawable:(xmlNode *)drawable toContent:(id)content;	// 0x31a44919
+ (void)readTextWrappingFromParent:(xmlNode *)parent toAnchor:(id)anchor;	// 0x31a45079
+ (int)relativeHorizontalPosition:(id)position;	// 0x31a44d59
+ (int)relativeVerticalPosition:(id)position;	// 0x31a44eed
+ (int)verticalPosition:(id)position;	// 0x31a44e3d
+ (int)vmlSupportLevel;	// 0x31a43075
+ (double)wrapDistanceBottom:(id)bottom;	// 0x31a45039
+ (double)wrapDistanceLeft:(id)left;	// 0x31a44fd1
+ (double)wrapDistanceRight:(id)right;	// 0x31a45019
+ (double)wrapDistanceTop:(id)top;	// 0x31a44ff1
+ (int)zIndex:(id)index;	// 0x31a45061
@end

