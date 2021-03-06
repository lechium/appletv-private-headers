/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmoji : NSObject {
@private
	NSString *name;	// 4 = 0x4
	NSString *imageName;	// 8 = 0x8
	unsigned short unicodeCharacter;	// 12 = 0xc
	NSString *codePoint;	// 16 = 0x10
	NSString *privateCodePoint;	// 20 = 0x14
	NSString *publicCodePoint;	// 24 = 0x18
}
@property(retain) NSString *codePoint;	// G=0x3590468d; S=0x359046a1; @synthesize
@property(retain) NSString *imageName;	// G=0x35904635; S=0x35904649; @synthesize
@property(readonly, assign) NSString *key;	// G=0x359045ed; 
@property(retain) NSString *name;	// G=0x359045fd; S=0x35904611; @synthesize
@property(retain) NSString *privateCodePoint;	// G=0x359046c5; S=0x359046d9; @synthesize
@property(retain) NSString *publicCodePoint;	// G=0x359046fd; S=0x35904711; @synthesize
@property(assign) unsigned short unicodeCharacter;	// G=0x3590466d; S=0x3590467d; @synthesize
+ (BOOL)shouldUsePublicCodePoints;	// 0x359045e9
- (id)initWithName:(id)name imageName:(id)name2 codePoint:(unsigned short)point;	// 0x359043c5
// declared property getter: - (id)codePoint;	// 0x3590468d
- (void)dealloc;	// 0x35904555
- (id)image;	// 0x3590451d
// declared property getter: - (id)imageName;	// 0x35904635
// declared property getter: - (id)key;	// 0x359045ed
// declared property getter: - (id)name;	// 0x359045fd
// declared property getter: - (id)privateCodePoint;	// 0x359046c5
// declared property getter: - (id)publicCodePoint;	// 0x359046fd
// declared property setter: - (void)setCodePoint:(id)point;	// 0x359046a1
// declared property setter: - (void)setImageName:(id)name;	// 0x35904649
// declared property setter: - (void)setName:(id)name;	// 0x35904611
// declared property setter: - (void)setPrivateCodePoint:(id)point;	// 0x359046d9
// declared property setter: - (void)setPublicCodePoint:(id)point;	// 0x35904711
// declared property setter: - (void)setUnicodeCharacter:(unsigned short)character;	// 0x3590467d
// declared property getter: - (unsigned short)unicodeCharacter;	// 0x3590466d
@end

