/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject {
	NSMutableDictionary *_dict;	// 4 = 0x4
	PKPaper *paper;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableDictionary *dict;	// G=0x32d0aa89; S=0x32d0aa99; @synthesize=_dict
@property(retain, nonatomic) PKPaper *paper;	// G=0x32d0aaa9; S=0x32d0aab9; @synthesize
+ (id)default;	// 0x32d0a831
+ (id)photo;	// 0x32d0a8d9
+ (id)printSettingsForPrinter:(id)printer;	// 0x32d0a9b1
- (id)init;	// 0x32d0a755
- (void)dealloc;	// 0x32d0a6fd
// declared property getter: - (id)dict;	// 0x32d0aa89
- (id)objectForKey:(id)key;	// 0x32d0a811
// declared property getter: - (id)paper;	// 0x32d0aaa9
- (void)removeObjectForKey:(id)key;	// 0x32d0a7f1
// declared property setter: - (void)setDict:(id)dict;	// 0x32d0aa99
- (void)setObject:(id)object forKey:(id)key;	// 0x32d0a7d1
// declared property setter: - (void)setPaper:(id)paper;	// 0x32d0aab9
- (id)settingsDict;	// 0x32d0a7c1
@end
