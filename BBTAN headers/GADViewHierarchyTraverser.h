//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GADViewHierarchyTraverser : NSObject
{
    _Bool _traversing;
    long long _sequenceNumber;
    NSObject<OS_dispatch_queue> *_SDKLowPrioritySerialQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)setTraversing:(_Bool)arg1;
- (void)traverseView:(id)arg1 traversalBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

