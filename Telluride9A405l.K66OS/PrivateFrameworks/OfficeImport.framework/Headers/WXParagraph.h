/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXParagraph : NSObject {
}
+ (void)readAnnotationFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x30e67725
+ (void)readFrom:(xmlNode *)from baseStyle:(id)style to:(id)to state:(id)state;	// 0x30d73d8d
+ (void)readFromString:(id)string to:(id)to;	// 0x30d7a0f9
+ (void)readHyperlinkFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x30d7b7cd
+ (void)readRunsFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x30d7420d
+ (void)readRunsTo:(id)to state:(id)state;	// 0x30d74075
+ (void)readSimpleFieldFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x30d7a139
+ (void)readTrackingFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x30e677dd
@end
