//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALTask;

@interface ALScheduledOperation : NSObject
{
    ALTask *task;
    unsigned long long queue;
    double delay;
}

- (void).cxx_destruct;
@property(nonatomic) double delay; // @synthesize delay;
@property(nonatomic) unsigned long long queue; // @synthesize queue;
@property(retain, nonatomic) ALTask *task; // @synthesize task;

@end

