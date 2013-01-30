/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQHParagraph : NSObject {
}
+ (id)getBulletStyle:(id)style level:(int)level;	// 0x35d1c90d
+ (int)handleBookmark:(id)bookmark state:(id)state;	// 0x35d1bcf9
+ (int)handleInlineList:(id)list state:(id)state;	// 0x35d1b5f9
+ (int)handleLink:(id)link state:(id)state;	// 0x35d1bb09
+ (int)handleParagraph:(id)paragraph state:(id)state bulletStates:(CFDictionaryRef)states isMultiColumn:(BOOL)column;	// 0x35d1b44d
+ (void)mapBullet:(CFDictionaryRef)bullet state:(id)state;	// 0x35d1c829
+ (int)mapParagraphStyle:(id)style paragraph:(id)paragraph state:(id)state bulletStates:(CFDictionaryRef)states isMultiColumn:(BOOL)column;	// 0x35d1ca39
+ (CFDictionaryRef)prepareBullet:(id)bullet paragraph:(id)paragraph style:(id)style state:(id)state bulletStates:(CFDictionaryRef)states showBullet:(BOOL)bullet6;	// 0x35d1c105
+ (BOOL)retrieveFontSizeForFirstCharacter:(id)firstCharacter fontSize:(float *)size;	// 0x35d1c939
+ (BOOL)setupBulletStatesForParagraphStyle:(id)paragraphStyle paragraph:(id)paragraph state:(id)state bulletStates:(CFDictionaryRef)states;	// 0x35d1bda5
@end
