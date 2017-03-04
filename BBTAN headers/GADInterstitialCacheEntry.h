//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdMediationDelegate.h"
#import "GADSlotAdLoadDelegate.h"
#import "GADSlotAdResponseDelegate.h"
#import "GADSlotDelegate.h"

@class GADCSITimeRecorder, GADRequestError, GADSlot, NSString;

@interface GADInterstitialCacheEntry : NSObject <GADSlotDelegate, GADAdMediationDelegate, GADSlotAdLoadDelegate, GADSlotAdResponseDelegate>
{
    GADCSITimeRecorder *_timeRecorder;
    _Bool _loaded;
    GADSlot *_slot;
    GADRequestError *_error;
}

+ (void)sendCSIPingForTimeRecorder:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) GADRequestError *error; // @synthesize error=_error;
- (id)initWithRequest:(id)arg1 adUnitID:(id)arg2;
@property(readonly, nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
- (id)mediationConnectorForConfiguration:(id)arg1 networkConfiguration:(id)arg2;
@property(readonly, nonatomic) GADSlot *slot; // @synthesize slot=_slot;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (_Bool)slot:(id)arg1 shouldLoadRequest:(id)arg2 error:(id *)arg3;
- (_Bool)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id *)arg3;
- (void)slot:(id)arg1 willProcessMediatedAdResponse:(id)arg2;
- (void)slotDidMoveToPlacement;
- (void)slotFinishedLoadingAdContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

