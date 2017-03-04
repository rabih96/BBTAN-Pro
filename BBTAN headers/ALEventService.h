//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALSdk, NSArray;

@interface ALEventService : NSObject
{
    ALSdk *_sdk;
    NSArray *_topLevelEventTypes;
}

- (void).cxx_destruct;
- (id)initWithSdk:(id)arg1;
- (id)postbackURLForEvent:(id)arg1;
- (id)sanitizeEventParameters:(id)arg1;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
@property(retain, nonatomic) NSArray *topLevelEventTypes; // @synthesize topLevelEventTypes=_topLevelEventTypes;
- (void)track:(id)arg1;
- (void)trackCheckoutWithTransactionIdentifier:(id)arg1 parameters:(id)arg2;
- (void)trackEvent:(id)arg1;
- (void)trackEvent:(id)arg1 parameters:(id)arg2;
- (void)trackInAppPurchaseWithTransactionIdentifier:(id)arg1 parameters:(id)arg2;

@end

