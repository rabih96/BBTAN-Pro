//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GADAdViewDelegate.h"

@class GADAdView, GADAdViewDelegate, NSDictionary, NSString;

@interface GADOverlayView : UIView <GADAdViewDelegate>
{
    GADAdView *_overlayView;
    NSDictionary *_loadOverlayUserInfo;
    GADAdViewDelegate *_adViewDelegate;
    NSString *_overlayIdentifier;
    GADAdView *_adView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GADAdView *adView; // @synthesize adView=_adView;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adViewDidStartLoad:(id)arg1;
- (void)addOverlaySubview;
- (void)dealloc;
- (void)handleHideOverlayNotification:(id)arg1;
- (void)handleHideOverlayView:(id)arg1;
- (void)handleLoadOverlayView:(id)arg1;
- (void)handleSendMessageToAdViewNotification:(id)arg1;
- (void)handleSendMessageToOverlayView:(id)arg1;
- (void)handleShowOverlayView:(id)arg1;
- (void)loadOverlayWithUserInfo:(id)arg1;
- (void)removeOverlaySubview;
- (void)sendMessageToOverlayWithUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
