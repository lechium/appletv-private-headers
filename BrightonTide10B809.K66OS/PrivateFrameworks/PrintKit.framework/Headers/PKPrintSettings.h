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
@property(retain, nonatomic) NSMutableDictionary *dict;	// G=0x3531ea81; S=0x3531ea91; @synthesize=_dict
@property(retain, nonatomic) PKPaper *paper;	// G=0x3531eaa1; S=0x3531eab1; @synthesize
+ (id)default;	// 0x3531e829
+ (id)photo;	// 0x3531e8d1
+ (id)printSettingsForPrinter:(id)printer;	// 0x3531e9a9
- (id)init;	// 0x3531e74d
- (void)dealloc;	// 0x3531e6f5
// declared property getter: - (id)dict;	// 0x3531ea81
- (id)objectForKey:(id)key;	// 0x3531e809
// declared property getter: - (id)paper;	// 0x3531eaa1
- (void)removeObjectForKey:(id)key;	// 0x3531e7e9
// declared property setter: - (void)setDict:(id)dict;	// 0x3531ea91
- (void)setObject:(id)object forKey:(id)key;	// 0x3531e7c9
// declared property setter: - (void)setPaper:(id)paper;	// 0x3531eab1
- (id)settingsDict;	// 0x3531e7b9
@end

