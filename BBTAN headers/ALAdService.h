//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALStoreKitProductViewControllerDelegate.h"

@class ALLogManager, ALPreloadedAdManager, ALSdk, ALStoreKitProductViewController, NSDictionary;

@interface ALAdService : NSObject <ALStoreKitProductViewControllerDelegate>
{
    ALSdk *sdk;
    ALLogManager *logger;
    NSDictionary *adLoadStates;
    ALStoreKitProductViewController *_storeKitViewController;
}

+ (id)accepts;
- (void).cxx_destruct;
@property(retain) NSDictionary *adLoadStates; // @synthesize adLoadStates;
- (void)addAdUpdateObserver:(id)arg1 ofSize:(id)arg2;
- (_Bool)autoRefreshEnabledForSize:(id)arg1;
- (long long)autoRefreshSecondsForSize:(id)arg1;
- (void)dispatchPersistentPostbackForAd:(id)arg1 withPlacement:(id)arg2;
- (void)dispatchPostbackForAd:(id)arg1 withPlacement:(id)arg2 andNotify:(id)arg3;
- (void)dispatchVideoPostbackForAd:(id)arg1 placement:(id)arg2 videoView:(id)arg3 inViewController:(id)arg4;
- (void)doLoadAdForSize:(id)arg1 adType:(id)arg2 delegateProxy:(id)arg3;
- (void)expireLoadStateForAd:(id)arg1;
- (void)expireStoreKit;
- (void)handleClickForStoreKit:(id)arg1 ad:(id)arg2 productsController:(id)arg3;
- (_Bool)hasPreloadedAdOfSize:(id)arg1;
- (_Bool)hasUserEnabledPreloadTypeForAdSize:(id)arg1 adType:(id)arg2;
- (id)initWithSdk:(id)arg1;
- (void)launchURL:(id)arg1 forAd:(id)arg2 fromViewController:(id)arg3;
- (void)launchURL:(id)arg1 forAd:(id)arg2 inAdView:(id)arg3;
- (void)loadNextAd:(id)arg1 adType:(id)arg2 andNotify:(id)arg3;
- (void)loadNextAd:(id)arg1 andNotify:(id)arg2;
@property(retain, nonatomic) ALLogManager *logger; // @synthesize logger;
- (void)preloadAdOfSize:(id)arg1;
@property(readonly, nonatomic) ALPreloadedAdManager *preloadManager; // @dynamic preloadManager;
- (void)preloadStoreKitForAd:(id)arg1 adView:(id)arg2 interstitialViewController:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)removeAdUpdateObserver:(id)arg1 ofSize:(id)arg2;
- (void)scheduleAdPreload;
- (void)scheduleAdUpdateFor:(id)arg1;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk;
@property(retain, nonatomic) ALStoreKitProductViewController *storeKitViewController; // @synthesize storeKitViewController=_storeKitViewController;
- (_Bool)shouldMergeInitialPreloadsForSize:(id)arg1 type:(id)arg2;
- (void)showStoreKitControllerForAd:(id)arg1 fromViewController:(id)arg2;
- (void)showStoreKitControllerForAd:(id)arg1 inAdView:(id)arg2;
- (void)trackClickOn:(id)arg1 withPlacement:(id)arg2 inAdView:(id)arg3 andLaunchURL:(id)arg4;
- (void)trackForegroundClickOn:(id)arg1 withPlacement:(id)arg2 inAdView:(id)arg3 andLaunchURL:(id)arg4;
- (void)trackVideoClickOn:(id)arg1 withPlacement:(id)arg2 videoView:(id)arg3 andLaunchURL:(id)arg4 fromViewController:(id)arg5;
- (void)updateAdIfNecessary:(id)arg1;

@end

