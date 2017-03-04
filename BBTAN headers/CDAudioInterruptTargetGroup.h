//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDAudioInterruptProtocol.h"

@class NSMutableArray, NSString;

@interface CDAudioInterruptTargetGroup : NSObject <CDAudioInterruptProtocol>
{
    _Bool mute_;
    _Bool enabled_;
    NSMutableArray *children_;
}

- (void)addAudioInterruptTarget:(id)arg1;
- (_Bool)enabled;
- (id)init;
- (_Bool)mute;
- (void)removeAudioInterruptTarget:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

