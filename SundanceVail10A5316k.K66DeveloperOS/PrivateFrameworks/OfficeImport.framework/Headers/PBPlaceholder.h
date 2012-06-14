/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PBPlaceholder : NSObject {
}
+ (BOOL)isBodyPlaceholder:(int)placeholder;	// 0x312792ed
+ (BOOL)isTitlePlaceholder:(int)placeholder;	// 0x31279309
+ (int)placeholderTypeFromTextType:(int)textType;	// 0x3106da01
+ (int)readPlaceholderOrientation:(int)orientation;	// 0x3106e005
+ (int)readPlaceholderSize:(int)size;	// 0x3106dfe9
+ (int)readPlaceholderType:(int)type;	// 0x3106df69
+ (void)writePlaceholder:(id)placeholder toPlaceholderAtom:(PptOEPlaceholderAtom *)placeholderAtom isMaster:(BOOL)master isNotes:(BOOL)notes;	// 0x3127931d
@end

