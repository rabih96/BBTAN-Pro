//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALAdLoadDelegate.h"

@class ALInterstitialAd, NSString, UIWindow;

@interface ALInterstitialAdLoadDelegateProxy : NSObject <ALAdLoadDelegate>
{
    ALInterstitialAd *_parentAdObject;
    UIWindow *_window;
    NSString *_placement;
}

- (void).cxx_destruct;
- (void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(id)arg1 didLoadAd:(id)arg2;
@property(retain, nonatomic) ALInterstitialAd *parentAdObject; // @synthesize parentAdObject=_parentAdObject;
@property(retain, nonatomic) NSString *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
