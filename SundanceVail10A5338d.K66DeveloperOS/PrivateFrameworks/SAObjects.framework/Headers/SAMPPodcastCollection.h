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
@property(copy, nonatomic) NSString *artist;	// G=0x37985ddd; S=0x37985df9; 
@property(copy, nonatomic) NSString *sortArtist;	// G=0x37985e49; S=0x37985e65; 
+ (id)podcastCollection;	// 0x37985d4d
+ (id)podcastCollectionWithDictionary:(id)dictionary context:(id)context;	// 0x37985d91
// declared property getter: - (id)artist;	// 0x37985ddd
- (id)encodedClassName;	// 0x37985d41
- (id)groupIdentifier;	// 0x37985d31
// declared property setter: - (void)setArtist:(id)artist;	// 0x37985df9
// declared property setter: - (void)setSortArtist:(id)artist;	// 0x37985e65
// declared property getter: - (id)sortArtist;	// 0x37985e49
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x37985eb5
@end

