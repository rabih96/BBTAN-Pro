//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADInterstitialCache : NSObject
{
    NSMutableDictionary *_interstitialPoolsByRequestKey;
    NSMutableArray *_recentlyAccessedRequestKeys;
    NSMutableDictionary *_observedRequestsByRequestKey;
    id <GADInterstitialPoolRefilling> _poolRefillPolicy;
    id _SDKCoreConstantsObserver;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)cacheEntryForRequest:(id)arg1 adUnitID:(id)arg2;
- (void)dealloc;
- (void)didAccessKey:(id)arg1 request:(id)arg2;
- (id)init;
- (void)loadInterstitialsForSavedRequests;
- (void)loadRequest:(id)arg1 adUnitID:(id)arg2;
- (void)updateRefillPolicy;

@end

