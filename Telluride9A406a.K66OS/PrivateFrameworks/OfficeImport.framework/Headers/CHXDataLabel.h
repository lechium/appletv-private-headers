/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHXDataLabel : NSObject {
}
+ (id)chdDataLabelFromXmlDataLabelElement:(xmlNode *)xmlDataLabelElement state:(id)state;	// 0x32a20885
+ (int)chdDataLabelPositionFromXmlDataLabelElement:(xmlNode *)xmlDataLabelElement;	// 0x32a20e05
+ (Class)chdDataValuePropertiesClassWithState:(id)state;	// 0x32a84355
+ (void)readFrom:(xmlNode *)from dataValuePropertiesCollection:(id)collection state:(id)state;	// 0x32a206ad
@end

