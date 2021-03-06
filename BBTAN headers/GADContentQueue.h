//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface GADContentQueue : NSObject
{
    NSMutableDictionary *_contents;
    NSMutableArray *_sequenceNumbers;
    unsigned long long _size;
}

- (void).cxx_destruct;
- (id)contentWithHighestScore;
- (id)contentWithSequenceNumber:(unsigned long long)arg1;
- (void)deduplicate:(id)arg1;
- (void)enqueueContent:(id)arg1;
- (id)init;
- (id)initWithQueueSize:(unsigned long long)arg1;

@end

