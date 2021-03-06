/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataBaseItem.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataClient, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVDataCollection : XXUnknownSuperclass <ATVDataBaseItem> {
	NSMutableDictionary *_metadataDict;	// 4 = 0x4
	ATVDataClient *_dataClient;	// 8 = 0x8
}
@property(assign) __weak ATVDataClient *dataClient;	// G=0xd0331; S=0xd0351; @synthesize=_dataClient
@property(retain) NSMutableDictionary *metadataDict;	// G=0xd030d; S=0xd0321; @synthesize=_metadataDict
- (id)initWithDataClient:(id)dataClient;	// 0xcffe1
- (void).cxx_destruct;	// 0xd0365
- (id)concreteValueForProperty:(id)property;	// 0xd0309
// declared property getter: - (id)dataClient;	// 0xd0331
- (id)description;	// 0xd0175
- (unsigned)hash;	// 0xd00fd
- (BOOL)isDataItem;	// 0xd0305
- (BOOL)isEqual:(id)equal;	// 0xd0041
// declared property getter: - (id)metadataDict;	// 0xd030d
- (id)objectForKey:(id)key;	// 0xd02e5
- (id)objectForKeyedSubscript:(id)keyedSubscript;	// 0xd0209
// declared property setter: - (void)setDataClient:(id)client;	// 0xd0351
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0xd0321
- (void)setObject:(id)object forKey:(id)key;	// 0xd0219
- (id)valueForProperty:(id)property;	// 0xd01a5
@end

