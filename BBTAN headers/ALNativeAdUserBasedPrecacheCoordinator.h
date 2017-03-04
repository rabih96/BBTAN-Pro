//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALNativeAdPrecacheDelegate.h"

@class ALLogManager, ALNativeAdService, NSString;

@interface ALNativeAdUserBasedPrecacheCoordinator : NSObject <ALNativeAdPrecacheDelegate>
{
    NSString *_tag;
    ALNativeAdService *_nativeAdService;
    ALLogManager *_logger;
    id <ALNativeAdPrecacheDelegate> _precacheDelegate;
}

- (void).cxx_destruct;
- (void)executePrecacheForNativeAd:(id)arg1;
- (void)handleImagePreloadingSucceededForNativeAd:(id)arg1;
- (void)handleVideoPreloadingSucceededForNativeAd:(id)arg1;
- (id)initWithNativeAdService:(id)arg1;
@property(nonatomic) __weak ALLogManager *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak ALNativeAdService *nativeAdService; // @synthesize nativeAdService=_nativeAdService;
- (void)nativeAdService:(id)arg1 didFailToPrecacheImagesForAd:(id)arg2 withError:(long long)arg3;
- (void)nativeAdService:(id)arg1 didFailToPrecacheVideoForAd:(id)arg2 withError:(long long)arg3;
- (void)nativeAdService:(id)arg1 didPrecacheImagesForAd:(id)arg2;
- (void)nativeAdService:(id)arg1 didPrecacheVideoForAd:(id)arg2;
@property(retain, nonatomic) id <ALNativeAdPrecacheDelegate> precacheDelegate; // @synthesize precacheDelegate=_precacheDelegate;
- (void)precacheVideoIfNeededForNativeAd:(id)arg1;
- (void)removeFromPendingPrecaches:(id)arg1;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
