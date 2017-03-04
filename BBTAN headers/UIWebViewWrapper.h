//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface UIWebViewWrapper : NSObject <UIWebViewDelegate>
{
    UIWebView *_uiWebView;
    NSString *_jsScheme;
    function_10b5811e _shouldStartLoading;
    function_ef19a04c _didFinishLoading;
    function_ef19a04c _didFailLoading;
    function_ef19a04c _onJsCallback;
}

+ (id)webViewWrapper;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
- (void)dealloc;
@property(nonatomic) function_ef19a04c didFailLoading; // @synthesize didFailLoading=_didFailLoading;
@property(nonatomic) function_ef19a04c didFinishLoading; // @synthesize didFinishLoading=_didFinishLoading;
- (void)evaluateJS:(const basic_string_a490aa4c *)arg1;
- (void)goBack;
- (void)goForward;
- (id)init;
@property(copy, nonatomic) NSString *jsScheme; // @synthesize jsScheme=_jsScheme;
- (void)loadData:(const basic_string_a490aa4c *)arg1 MIMEType:(const basic_string_a490aa4c *)arg2 textEncodingName:(const basic_string_a490aa4c *)arg3 baseURL:(const basic_string_a490aa4c *)arg4;
- (void)loadFile:(const basic_string_a490aa4c *)arg1;
- (void)loadHTMLString:(const basic_string_a490aa4c *)arg1 baseURL:(const basic_string_a490aa4c *)arg2;
- (void)loadUrl:(const basic_string_a490aa4c *)arg1;
@property(nonatomic) function_ef19a04c onJsCallback; // @synthesize onJsCallback=_onJsCallback;
- (void)reload;
- (void)setBounces:(_Bool)arg1;
- (void)setFrameWithX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (void)setJavascriptInterfaceScheme:(const basic_string_a490aa4c *)arg1;
- (void)setScalesPageToFit:(_Bool)arg1;
@property(nonatomic) function_10b5811e shouldStartLoading; // @synthesize shouldStartLoading=_shouldStartLoading;
@property(retain, nonatomic) UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
- (void)setVisible:(_Bool)arg1;
- (void)setupWebView;
- (void)stopLoading;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
