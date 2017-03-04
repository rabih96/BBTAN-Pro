//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JavascriptToNativeHandler.h"
#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class NSString, NSURL, UIWebView, VungleAdViewController;

@interface VungleWebView : UIView <JavascriptToNativeHandler, UIWebViewDelegate, WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler>
{
    VungleAdViewController *_adViewController;
    UIWebView *_webViewWrapper;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(nonatomic) VungleAdViewController *adViewController; // @synthesize adViewController=_adViewController;
- (void)dealloc;
- (id)initWithAdPart:(id)arg1;
- (void)injectJavascriptString:(id)arg1 inWebView:(id)arg2;
- (id)javascriptInjectionStringUIWebView;
- (id)javascriptInjectionStringWKWebView;
- (_Bool)javascriptMessageHandler:(id)arg1;
- (_Bool)javascriptToObjectiveCMapping:(id)arg1;
- (void)load;
- (void)prepareView;
- (id)scriptTagWrapperFromJavascript:(id)arg1;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) UIWebView *webViewWrapper; // @synthesize webViewWrapper=_webViewWrapper;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
