/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHBulletState : NSObject {
@private
	CFArrayRef mLevels;	// 4 = 0x4
	int mCurrentLevel;	// 8 = 0x8
}
@property(assign) int currentLevel;	// G=0x32bed9e1; S=0x32bedbb1; converted property
+ (CFStringRef)createLabelStr:(int)str number:(int)number;	// 0x32bedb19
- (id)init;	// 0x32bee0c5
- (CFStringRef)bulletChar:(int)aChar;	// 0x32beded1
- (int)bulletIndentForLevel:(int)level;	// 0x32bede75
- (CFStringRef)createTieredNumberStringForLevel:(int)level;	// 0x32bedc4d
// converted property getter: - (int)currentLevel;	// 0x32bed9e1
- (void)dealloc;	// 0x32bee085
- (BOOL)hasNumberAtLevel:(int)level;	// 0x32bedfb5
- (int)labelTypeAtLevel:(int)level;	// 0x32bedf2d
- (id)listStyleAtLevel:(int)level;	// 0x32bedd8d
- (int)numberAtLevel:(int)level;	// 0x32bedf89
- (void)setBulletChar:(CFStringRef)aChar level:(int)level;	// 0x32bedefd
- (void)setBulletIndent:(int)indent level:(int)level;	// 0x32bedea1
// converted property setter: - (void)setCurrentLevel:(int)level;	// 0x32bedbb1
- (void)setLabelType:(int)type level:(int)level;	// 0x32bedf59
- (void)setListStyle:(id)style atLevel:(int)level;	// 0x32beddcd
- (void)setNumber:(int)number level:(int)level;	// 0x32bedfe1
- (void)setTextIndent:(int)indent level:(int)level;	// 0x32bede45
- (void)setType:(int)type level:(int)level;	// 0x32bee055
- (int)textIndentForLevel:(int)level;	// 0x32bede19
- (int)typeAtlevel:(int)atlevel;	// 0x32bee029
@end
