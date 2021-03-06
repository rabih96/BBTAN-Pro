//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class ALAd, ALIncentivizedInterstitialAd, ALSdk, NSString, UIWindow;

@interface ALIncentivizedPromptManager : NSObject <UIAlertViewDelegate>
{
    ALIncentivizedInterstitialAd *parentIncentInter;
    ALSdk *sdk;
    UIWindow *parentWindow;
    id <ALAdRewardDelegate> parentRewardDelegate;
    ALAd *parentAd;
    NSString *_placement;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithSdk:(id)arg1 ad:(id)arg2 placement:(id)arg3 window:(id)arg4 incentivizedInterstitial:(id)arg5 rewardDelegate:(id)arg6;
@property(nonatomic) __weak ALAd *parentAd; // @synthesize parentAd;
@property(nonatomic) __weak ALIncentivizedInterstitialAd *parentIncentInter; // @synthesize parentIncentInter;
@property(nonatomic) __weak id <ALAdRewardDelegate> parentRewardDelegate; // @synthesize parentRewardDelegate;
@property(nonatomic) __weak UIWindow *parentWindow; // @synthesize parentWindow;
@property(retain, nonatomic) NSString *placement; // @synthesize placement=_placement;
- (void)promptUserToShowAd;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

