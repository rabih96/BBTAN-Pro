//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UADSNativeCallback : NSObject
{
    NSString *_callback;
    NSString *_callbackId;
    NSString *_receiverClass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
- (id)initWithCallback:(id)arg1 receiverClass:(id)arg2;
- (void)invokeWithStatus:(id)arg1 params:(id)arg2;
@property(retain, nonatomic) NSString *receiverClass; // @synthesize receiverClass=_receiverClass;

@end
