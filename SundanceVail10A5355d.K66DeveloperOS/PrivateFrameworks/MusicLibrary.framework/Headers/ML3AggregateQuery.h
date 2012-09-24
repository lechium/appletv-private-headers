/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class NSString;

@interface ML3AggregateQuery : ML3Query {
	Class _aggregateEntityClass;	// 32 = 0x20
	NSString *_foreignPersistentIDProperty;	// 36 = 0x24
}
@property(readonly, assign) Class aggregateEntityClass;	// G=0x35480f91; @synthesize=_aggregateEntityClass
@property(readonly, assign) NSString *foreignPersistentIDProperty;	// G=0x35480fa5; @synthesize=_foreignPersistentIDProperty
- (id)initWithCoder:(id)coder;	// 0x35480d1d
- (id)initWithUnitQuery:(id)unitQuery aggregateEntityClass:(Class)aClass foreignPersistentIDProperty:(id)property;	// 0x35450cb1
- (void).cxx_destruct;	// 0x35480fb9
// declared property getter: - (Class)aggregateEntityClass;	// 0x35480f91
- (unsigned)countOfEntities;	// 0x35480f29
- (void)dealloc;	// 0x35451141
- (BOOL)distinctPersistentIDProperty;	// 0x35450e19
- (void)encodeWithCoder:(id)coder;	// 0x35480dfd
- (Class)entityClass;	// 0x35450e31
// declared property getter: - (id)foreignPersistentIDProperty;	// 0x35480fa5
- (BOOL)hasEntities;	// 0x35480ec1
- (id)persistentIDProperty;	// 0x35450e1d
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x35450e45
@end
