/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPCollection.h"

@class NSString;

@interface SAMPPodcastCollection : SAMPCollection {
}
@property(copy, nonatomic) NSString *artist;	// G=0x355d7345; S=0x355d7361; 
@property(copy, nonatomic) NSString *sortArtist;	// G=0x355d73b1; S=0x355d73cd; 
+ (id)podcastCollection;	// 0x355d72b5
+ (id)podcastCollectionWithDictionary:(id)dictionary context:(id)context;	// 0x355d72f9
// declared property getter: - (id)artist;	// 0x355d7345
- (id)encodedClassName;	// 0x355d72a9
- (id)groupIdentifier;	// 0x355d7299
// declared property setter: - (void)setArtist:(id)artist;	// 0x355d7361
// declared property setter: - (void)setSortArtist:(id)artist;	// 0x355d73cd
// declared property getter: - (id)sortArtist;	// 0x355d73b1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x355d741d
@end
