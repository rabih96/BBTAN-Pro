//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADRequest, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface GADInterstitialPool : NSObject
{
    NSMutableArray *_entries;
    GADRequest *_request;
    id <GADInterstitialPoolDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSString *_adUnitID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void)addCacheEntryWithTimeout:(double)arg1 maxCount:(long long)arg2;
@property __weak id <GADInterstitialPoolDelegate> delegate;
- (void)fill;
- (id)init;
- (id)initWithRequest:(id)arg1 adUnitID:(id)arg2;
- (id)nextEntry;
- (void)removeObject:(id)arg1;
@property(copy) GADRequest *request;
- (void)scheduleTimeout:(double)arg1 cacheEntry:(id)arg2;

@end

