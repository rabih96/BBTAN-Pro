//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALTask.h"

#import "ALConnectionManagerDelegate.h"

@class NSDictionary, NSString, NSURL;

@interface ALTaskDispatchPostback : ALTask <ALConnectionManagerDelegate>
{
    NSURL *_targetURL;
    id <ALPostbackDelegate> _postbackDelegate;
    NSDictionary *_postBody;
    long long _retryCount;
    double _retryDelayMs;
    double _timeoutMs;
}

- (void).cxx_destruct;
- (void)connectionVia:(id)arg1 didFailWith:(long long)arg2;
- (void)connectionVia:(id)arg1 didSucceedWith:(long long)arg2 responseBody:(id)arg3;
- (_Bool)connectionVia:(id)arg1 requiresResponseForRequest:(id)arg2;
- (id)initWithSdk:(id)arg1 targetURL:(id)arg2;
@property(retain, nonatomic) NSDictionary *postBody; // @synthesize postBody=_postBody;
@property(retain, nonatomic) id <ALPostbackDelegate> postbackDelegate; // @synthesize postbackDelegate=_postbackDelegate;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) double retryDelayMs; // @synthesize retryDelayMs=_retryDelayMs;
- (void)run;
@property(retain, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
@property(nonatomic) double timeoutMs; // @synthesize timeoutMs=_timeoutMs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

