//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADMAdNetworkAdapter.h"
#import "GADMWebViewRenderedCheckerDelegate.h"
#import "UIWebViewDelegate.h"

@class GADMWebViewRenderedChecker, NSString, NSTimer, NSURL, UIWebView;

@interface GADMAdapterHTML : NSObject <GADMAdNetworkAdapter, GADMWebViewRenderedCheckerDelegate, UIWebViewDelegate>
{
    unsigned long long _checkRenderingCount;
    NSTimer *_checkRenderingTimer;
    GADMWebViewRenderedChecker *_webViewRenderedChecker;
    UIWebView *_webView;
    NSURL *_passbackURL;
    id <GADMAdNetworkConnector> _connector;
}

+ (id)adapterVersion;
+ (Class)networkExtrasClass;
- (void).cxx_destruct;
- (void)clearWebView;
@property(nonatomic) id <GADMAdNetworkConnector> connector; // @synthesize connector=_connector;
- (void)createWebViewWithSize:(struct GADAdSize)arg1;
- (void)dealloc;
- (id)errorWithCode:(long long)arg1 text:(id)arg2;
- (void)failInterstitialRequest;
- (void)getBannerWithSize:(struct GADAdSize)arg1;
- (void)getInterstitial;
- (id)init;
- (id)initWithGADMAdNetworkConnector:(id)arg1;
- (_Bool)isBannerAnimationOK:(long long)arg1;
- (_Bool)isPassbackRequest:(id)arg1;
- (_Bool)isPath:(id)arg1 equivalentToPath:(id)arg2;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (void)startRenderingTimer;
- (void)stopBeingDelegate;
- (void)stopRenderingTimer;
- (id)stripTrailingSlashFromPath:(id)arg1;
- (void)webView:(id)arg1 isRendered:(_Bool)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

