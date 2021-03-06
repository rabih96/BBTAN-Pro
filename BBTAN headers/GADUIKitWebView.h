//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADWebView.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface GADUIKitWebView : GADWebView <UIWebViewDelegate>
{
}

- (id)URL;
- (_Bool)contentSizeUpdatesSynchronously;
- (void)dealloc;
- (void)evaluateJavaScriptFromString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

