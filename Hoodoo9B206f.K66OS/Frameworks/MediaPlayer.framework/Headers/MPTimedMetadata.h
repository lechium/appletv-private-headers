/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface MPTimedMetadata : NSObject {
@private
	void *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *allMetadata;	// G=0x3033b86d; 
@property(readonly, assign, nonatomic) NSString *key;	// G=0x3033b6ed; 
@property(readonly, assign, nonatomic) NSString *keyspace;	// G=0x3033b719; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x3033b819; 
@property(readonly, assign, nonatomic) id value;	// G=0x3033b745; 
- (id)init;	// 0x3033b5ad
- (id)_initWithMetadataItem:(id)metadataItem;	// 0x3033b5f9
// declared property getter: - (id)allMetadata;	// 0x3033b86d
- (void)dealloc;	// 0x3033b681
// declared property getter: - (id)key;	// 0x3033b6ed
// declared property getter: - (id)keyspace;	// 0x3033b719
// declared property getter: - (double)timestamp;	// 0x3033b819
// declared property getter: - (id)value;	// 0x3033b745
@end

