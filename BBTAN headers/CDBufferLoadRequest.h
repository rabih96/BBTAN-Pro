//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CDBufferLoadRequest : NSObject
{
    NSString *filePath;
    int soundId;
}

- (void)dealloc;
@property(readonly) NSString *filePath; // @synthesize filePath;
- (id)init:(int)arg1 filePath:(id)arg2;
@property(readonly) int soundId; // @synthesize soundId;

@end
