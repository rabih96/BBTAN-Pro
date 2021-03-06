//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FIRAEventAggregates : NSObject
{
    int _lifetimeCount;
    int _currentBundleCount;
    NSString *_name;
    double _lastFireTimestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int currentBundleCount; // @synthesize currentBundleCount=_currentBundleCount;
- (void)incrementCurrentBundleCount;
- (void)incrementLifetimeCount;
- (id)initWithName:(id)arg1 lifetimeCount:(int)arg2 currentBundleCount:(int)arg3 lastFireTimestamp:(double)arg4;
@property(nonatomic) double lastFireTimestamp; // @synthesize lastFireTimestamp=_lastFireTimestamp;
@property(readonly, nonatomic) int lifetimeCount; // @synthesize lifetimeCount=_lifetimeCount;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

@end

