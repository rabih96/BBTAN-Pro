//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRAEvent;

@interface FIRARawEventData : NSObject
{
    FIRAEvent *_rawEvent;
    long long _rowID;
    long long _metadataFingerprint;
}

- (void).cxx_destruct;
- (id)initWithRawEvent:(id)arg1 rowID:(long long)arg2 metadataFingerprint:(long long)arg3;
@property(readonly, nonatomic) long long metadataFingerprint; // @synthesize metadataFingerprint=_metadataFingerprint;
@property(readonly, nonatomic) FIRAEvent *rawEvent; // @synthesize rawEvent=_rawEvent;
@property(readonly, nonatomic) long long rowID; // @synthesize rowID=_rowID;

@end

