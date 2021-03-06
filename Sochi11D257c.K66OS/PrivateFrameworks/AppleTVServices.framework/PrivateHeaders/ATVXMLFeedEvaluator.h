/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSDateFormatter, NSMutableDictionary, NSNumberFormatter;
@protocol ATVXMLFeedReadWriteFeedResource;

@interface ATVXMLFeedEvaluator : NSObject {
	NSDateFormatter *_zuluDateFormatter;	// 4 = 0x4
	NSNumberFormatter *_numberFormatter;	// 8 = 0x8
	NSMutableDictionary *_dateFormatterCache;	// 12 = 0xc
	id<ATVXMLFeedReadWriteFeedResource> _feedResource;	// 16 = 0x10
}
+ (id)evaluatePlist:(id)plist withFeedResource:(id)feedResource;	// 0x3042db99
- (id)initWithFeedResource:(id)feedResource;	// 0x3042dafd
- (void).cxx_destruct;	// 0x3042f819
- (id)_evaluateArguments:(id)arguments commandForErrorLogging:(id)errorLogging;	// 0x3042ea41
- (id)_evaluateFunctionString:(id)string;	// 0x3042e459
- (id)_evaluateObject:(id)object withRecursionLevel:(int)recursionLevel;	// 0x3042dc29
- (id)_evaluateStoreCoverArts:(id)arts;	// 0x3042e70d
- (id)_ifElse:(id)anElse;	// 0x3042ef35
- (id)_localtime:(id)localtime;	// 0x3042f151
- (id)_lookup:(id)lookup;	// 0x3042f0c1
- (id)_removePreferences:(id)preferences;	// 0x3042f56d
- (id)_setPreference:(id)preference;	// 0x3042f401
@end

