//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UADSConfiguration, UIWebView;

@interface UADSWebViewApp : NSObject
{
    _Bool _webAppLoaded;
    _Bool _webAppInitialized;
    UIWebView *_webView;
    UADSConfiguration *_configuration;
    NSMutableDictionary *_nativeCallbacks;
}

+ (void)create:(id)arg1;
+ (id)getCurrentApp;
+ (void)setCurrentApp:(id)arg1;
+ (id)urlEncode:(id)arg1;
- (void).cxx_destruct;
- (void)addCallback:(id)arg1;
@property(retain, nonatomic) UADSConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)getCallbackWithId:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)invokeCallback:(id)arg1;
- (void)invokeJavascriptMethod:(id)arg1 className:(id)arg2 params:(id)arg3;
- (_Bool)invokeMethod:(id)arg1 className:(id)arg2 receiverClass:(id)arg3 callback:(id)arg4 params:(id)arg5;
@property(retain, nonatomic) NSMutableDictionary *nativeCallbacks; // @synthesize nativeCallbacks=_nativeCallbacks;
- (void)removeCallback:(id)arg1;
- (_Bool)sendEvent:(id)arg1 category:(id)arg2 param1:(id)arg3;
- (_Bool)sendEvent:(id)arg1 category:(id)arg2 params:(id)arg3;
@property(nonatomic) _Bool webAppInitialized; // @synthesize webAppInitialized=_webAppInitialized;
@property(nonatomic) _Bool webAppLoaded; // @synthesize webAppLoaded=_webAppLoaded;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;

@end
