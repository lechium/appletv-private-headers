/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRPreferences : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x32962ed1; converted property
+ (id)sharedFrontRowPreferences;	// 0x3296342d
- (id)initWithDomain:(id)domain;	// 0x329633dd
- (BOOL)boolForKey:(id)key;	// 0x3296316d
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x32963121
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x32963061
- (void)dealloc;	// 0x32963395
- (id)descriptionForKey:(id)key;	// 0x329630a1
// converted property getter: - (id)domain;	// 0x32962ed1
- (double)doubleForKey:(id)key;	// 0x329631b9
- (float)floatForKey:(id)key;	// 0x32963241
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x329631f9
- (int)integerForKey:(id)key;	// 0x329632d1
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x32963289
- (id)objectForKey:(id)key;	// 0x32963319
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x32962f2d
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x32962f79
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x32962fc9
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x32963015
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x32962ee1
- (id)stringForKey:(id)key;	// 0x329630e1
- (void)syncNow;	// 0x32963359
@end

