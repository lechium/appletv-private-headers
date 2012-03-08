/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSMutableDictionary, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface MLMovieArtist : NSObject <NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x30041411; S=0x3004147d; 
@property(copy, nonatomic) NSString *artistName;	// G=0x300413c1; S=0x30041461; 
- (id)init;	// 0x30041291
- (id)initWithMovieArtistDictionary:(id)movieArtistDictionary;	// 0x300412a5
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x30041411
- (void)_setValue:(id)value forKey:(id)key;	// 0x300414b9
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x300414f5
// declared property getter: - (id)artistName;	// 0x300413c1
- (id)copyMovieArtistDictionary;	// 0x30041499
- (id)copyWithZone:(NSZone *)zone;	// 0x30041375
- (void)dealloc;	// 0x30041329
// declared property setter: - (void)setArtistName:(id)name;	// 0x30041461
// declared property setter: - (void)setITunesStoreIdentifier:(id)identifier;	// 0x3004147d
@end

