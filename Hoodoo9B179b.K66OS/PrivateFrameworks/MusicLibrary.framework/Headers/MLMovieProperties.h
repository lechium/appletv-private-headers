/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSMutableDictionary, NSString, NSArray;

@interface MLMovieProperties : NSObject <NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSArray *castMembers;	// G=0x30040f65; S=0x300410f5; 
@property(copy, nonatomic) NSString *copyrightWarning;	// G=0x30040fb5; S=0x30041111; 
@property(copy, nonatomic) NSArray *directors;	// G=0x30041005; S=0x3004112d; 
@property(copy, nonatomic) NSArray *producers;	// G=0x30041055; S=0x30041149; 
@property(copy, nonatomic) NSArray *screenwriters;	// G=0x300410a5; S=0x30041165; 
@property(copy, nonatomic) NSString *studioName;	// G=0x3004119d; S=0x30041181; 
- (id)init;	// 0x30040e35
- (id)initWithMoviePropertiesDictionary:(id)moviePropertiesDictionary;	// 0x30040e49
- (void)_setValue:(id)value forKey:(id)key;	// 0x3004120d
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x30041249
// declared property getter: - (id)castMembers;	// 0x30040f65
- (id)copyMoviePropertiesDictionary;	// 0x300411ed
- (id)copyWithZone:(NSZone *)zone;	// 0x30040f19
// declared property getter: - (id)copyrightWarning;	// 0x30040fb5
- (void)dealloc;	// 0x30040ecd
// declared property getter: - (id)directors;	// 0x30041005
// declared property getter: - (id)producers;	// 0x30041055
// declared property getter: - (id)screenwriters;	// 0x300410a5
// declared property setter: - (void)setCastMembers:(id)members;	// 0x300410f5
// declared property setter: - (void)setCopyrightWarning:(id)warning;	// 0x30041111
// declared property setter: - (void)setDirectors:(id)directors;	// 0x3004112d
// declared property setter: - (void)setProducers:(id)producers;	// 0x30041149
// declared property setter: - (void)setScreenwriters:(id)screenwriters;	// 0x30041165
// declared property setter: - (void)setStudioName:(id)name;	// 0x30041181
// declared property getter: - (id)studioName;	// 0x3004119d
@end

