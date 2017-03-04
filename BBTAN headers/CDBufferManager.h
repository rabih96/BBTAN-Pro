//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDSoundEngine, NSMutableArray, NSMutableDictionary;

@interface CDBufferManager : NSObject
{
    NSMutableDictionary *loadedBuffers;
    NSMutableArray *freedBuffers;
    CDSoundEngine *soundEngine;
    int nextBufferId;
}

- (int)bufferForFile:(id)arg1 create:(_Bool)arg2;
- (void)dealloc;
- (id)initWithEngine:(id)arg1;
- (void)releaseBufferForFile:(id)arg1;

@end
