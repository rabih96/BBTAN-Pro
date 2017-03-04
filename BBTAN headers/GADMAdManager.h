//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADMConnectorDelegate.h"
#import "GADMSlotDelegate.h"

@class GADAdType, GADMAdNetworkConnector, GADMConfig, GADSlot, NSMutableArray, NSString, NSTimer;

@interface GADMAdManager : NSObject <GADMSlotDelegate, GADMConnectorDelegate>
{
    NSMutableArray *_adNetworkConfigQueue;
    GADMAdNetworkConnector *_lastConnectorNotifiedForAClick;
    id _lastMediatedInterstitial;
    long long _pendingActionGroup;
    NSMutableArray *_failedAdapterNamesAndDurations;
    _Bool _requestInProgress;
    GADMConfig *_config;
    GADAdType *_adType;
    GADMAdNetworkConnector *_requestingConnector;
    GADMAdNetworkConnector *_receivedConnector;
    GADSlot *_slot;
    NSTimer *_adNetworkTimeoutTimer;
}

- (void).cxx_destruct;
- (void)adNetworkTimeoutHandler:(id)arg1;
@property(retain, nonatomic) NSTimer *adNetworkTimeoutTimer; // @synthesize adNetworkTimeoutTimer=_adNetworkTimeoutTimer;
- (void)adRequestFailedFromConnector:(id)arg1 withError:(id)arg2;
- (void)adRequestReturnsFromConnector:(id)arg1 withInterstitial:(id)arg2;
- (void)adRequestReturnsFromConnector:(id)arg1 withMediatedAd:(id)arg2;
- (void)adRequestReturnsFromConnector:(id)arg1 withView:(id)arg2;
@property(retain, nonatomic) GADAdType *adType; // @synthesize adType=_adType;
- (void)cancel;
- (void)cancelPendingActions;
- (_Bool)changeAdTypeTo:(id)arg1;
@property(retain, nonatomic) GADMConfig *config; // @synthesize config=_config;
- (_Bool)connectorShouldReturnMediatedAd:(id)arg1;
- (void)dealloc;
- (id)dequeueAdNetworkConfig;
- (void)endCSITimingWithFailedAdapter:(id)arg1;
- (void)endCSITimingWithSucceededAdapter:(id)arg1;
- (id)init;
- (void)makeAdRequest;
- (void)mediateForAdType:(id)arg1 config:(id)arg2;
- (id)mediationTimeRecorder;
- (void)notifyDelegateOfFailureToReceiveWithError:(id)arg1;
- (void)presentInterstitialFromRootViewController:(id)arg1;
@property(retain, nonatomic) GADMAdNetworkConnector *receivedConnector; // @synthesize receivedConnector=_receivedConnector;
- (void)reportNoFill;
@property(nonatomic) _Bool requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(retain, nonatomic) GADMAdNetworkConnector *requestingConnector; // @synthesize requestingConnector=_requestingConnector;
- (void)resetRequestingState;
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
- (_Bool)shouldProcessResponseFromConnector:(id)arg1;
- (void)startCSITiming;
- (void)updateAdapterTimingsForConnector:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
