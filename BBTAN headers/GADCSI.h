//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADCSIConfiguration, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GADCSI : NSObject
{
    GADCSIConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_lockQueue;
    long long _requestCount;
    NSMutableDictionary *_timeRecorders;
    NSMutableDictionary *_timestamps;
    NSString *_GWSQueryID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) NSString *GWSQueryID; // @synthesize GWSQueryID=_GWSQueryID;
- (id)init;
- (void)recordTimestampForLabel:(id)arg1;
- (void)sendReport;
- (void)setTimestamp:(long long)arg1 forLabel:(id)arg2;
- (id)timeRecorderForAction:(id)arg1;
- (long long)timestampForLabel:(id)arg1;

@end

