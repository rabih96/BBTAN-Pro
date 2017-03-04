//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRInstanceIDCheckinPreferences, NSURLSession;

@interface FIRInstanceIDCheckinService : NSObject
{
    FIRInstanceIDCheckinPreferences *_checkinPreferences;
    id <FIRInstanceIDCheckinCache> _checkinCache;
    NSURLSession *_session;
}

+ (void)setCheckinTestBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <FIRInstanceIDCheckinCache> checkinCache; // @synthesize checkinCache=_checkinCache;
- (id)checkinParameters;
@property(retain, nonatomic) FIRInstanceIDCheckinPreferences *checkinPreferences; // @synthesize checkinPreferences=_checkinPreferences;
- (void)checkinWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (_Bool)hasCachedDeviceID:(id)arg1 secret:(id)arg2;
- (id)init;
- (id)initWithCheckinCache:(id)arg1;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)stopFetching;

@end
