//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@interface GADDelayPageLoadGMSGHandler : GADGMSGHandler
{
    long long _delayCount;
    id <GADDelayLoadDelegate> _delegate;
}

+ (id)actionBlockDictionary;
- (void).cxx_destruct;
- (void)adView:(id)arg1 delayPageLoadWithArguments:(id)arg2;
- (void)handleDelayLoadWithParameters:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

