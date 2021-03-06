/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


@interface NSLocalizableString : NSString {
	NSString *_stringsFileKey;	// 4 = 0x4
	NSString *_developmentLanguageString;	// 8 = 0x8
}
@property(readonly, assign) NSString *developmentLanguageString;	// G=0x31a16b65; 
@property(readonly, assign) NSString *stringsFileKey;	// G=0x31a16b11; 
+ (id)localizableStringWithStringsFileKey:(id)stringsFileKey developmentLanguageString:(id)string;	// 0x31a16a5d
- (id)initWithCoder:(id)coder;	// 0x31a16885
- (id)initWithStringsFileKey:(id)stringsFileKey developmentLanguageString:(id)string;	// 0x31a169e5
- (id)awakeAfterUsingCoder:(id)coder;	// 0x31a1677d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x31a16861
- (Class)classForCoder;	// 0x31a16959
- (id)copyWithZone:(NSZone *)zone;	// 0x31a16a9d
- (void)dealloc;	// 0x31a16aad
// declared property getter: - (id)developmentLanguageString;	// 0x31a16b65
- (void)encodeWithCoder:(id)coder;	// 0x31a16969
- (unsigned)length;	// 0x31a16841
- (void)setDevelopmentLanguageString:(id)string;	// 0x31a16b75
- (void)setStringsFileKey:(id)key;	// 0x31a16b21
// declared property getter: - (id)stringsFileKey;	// 0x31a16b11
@end

