//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface GADDynamicHeightSearchBannerView : UIView <UIWebViewDelegate, UIGestureRecognizerDelegate>
{
    UIWebView *_adWebView;
    long long _adState;
    NSString *_adUnitID;
    id <GADDynamicHeightSearchBannerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long adState; // @synthesize adState=_adState;
@property(copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void)configureBannerView;
- (struct CGSize)currentAdSize;
- (void)dealloc;
@property(nonatomic) __weak id <GADDynamicHeightSearchBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleBannerViewDidReceiveAd;
- (void)handleUserDidTapAdDestinationURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadRequest:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateInternalAdViewHeightAndNotifyDelegateWithHeight:(double)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

