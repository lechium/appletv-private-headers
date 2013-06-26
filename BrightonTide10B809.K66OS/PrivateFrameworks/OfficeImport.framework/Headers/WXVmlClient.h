/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVClient.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WXVmlClient : NSObject <OAVClient> {
}
+ (bool)behindText:(id)text;	// 0x348f8e15
+ (void)copyFromDrawable:(id)drawable toContent:(id)content;	// 0x34ac1da1
+ (BOOL)floating:(id)floating;	// 0x348f8df1
+ (int)horizontalPosition:(id)position;	// 0x348f8e31
+ (void)initialize;	// 0x348dc1c9
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x349ac249
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x348f85c9
+ (void)readFromDrawable:(xmlNode *)drawable toContent:(id)content;	// 0x348f8a81
+ (void)readTextWrappingFromParent:(xmlNode *)parent toAnchor:(id)anchor;	// 0x348f92d9
+ (int)relativeHorizontalPosition:(id)position;	// 0x348f8f05
+ (int)relativeVerticalPosition:(id)position;	// 0x348f90d9
+ (int)verticalPosition:(id)position;	// 0x348f9005
+ (int)vmlSupportLevel;	// 0x348f6e8d
+ (double)wrapDistanceBottom:(id)bottom;	// 0x348f9289
+ (double)wrapDistanceLeft:(id)left;	// 0x348f91d9
+ (double)wrapDistanceRight:(id)right;	// 0x348f9251
+ (double)wrapDistanceTop:(id)top;	// 0x348f9211
+ (int)zIndex:(id)index;	// 0x348f92c5
@end
