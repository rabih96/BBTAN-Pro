//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GADTime : NSObject
{
    double _serverTimeIntervalSince1970;
    double _timeIntervalSinceBootAtSetServerTime;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)cumulativeAwakeTimeInterval;
- (_Bool)getServerTimeIntervalSince1970:(double *)arg1;
- (id)init;
- (void)setServerTimeFromResponseHeaders:(id)arg1;
- (void)setServerTimeIntervalSince1970:(double)arg1;
- (double)timeIntervalSinceBoot;

@end
