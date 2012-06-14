/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXOfficeArt : NSObject {
}
+ (void)initialize;	// 0x310ec915
+ (void)readClientData:(xmlNode *)data state:(id)state to:(id)to;	// 0x310ef615
+ (void)readFrom:(xmlNode *)from parentRElement:(xmlNode *)element parentParagraph:(id)paragraph state:(id)state to:(id)to;	// 0x310ec9e1
+ (void)readOAX:(xmlNode *)oax parentRElement:(xmlNode *)element parentParagraph:(id)paragraph state:(id)state to:(id)to;	// 0x310ece05
+ (void)readPosition:(xmlNode *)position state:(id)state to:(id)to isHorizontal:(bool)horizontal;	// 0x310efd09
+ (void)readVml:(xmlNode *)vml parentRElement:(xmlNode *)element parentParagraph:(id)paragraph state:(id)state to:(id)to;	// 0x310f4f79
+ (void)readWrap:(xmlNode *)wrap state:(id)state to:(id)to;	// 0x310f00d1
+ (void)readWrapDistance:(xmlNode *)distance parentElement:(xmlNode *)element state:(id)state to:(id)to;	// 0x311a71f9
@end

