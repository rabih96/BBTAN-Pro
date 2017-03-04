//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@interface TAGFunctionCallImplementation : NSObject
{
    NSString *_instanceFunctionId;
    NSSet *_requiredKeys;
}

+ (id)functionKey;
+ (id)instanceNameKey;
+ (id)notDefaultMacroKey;
- (void).cxx_destruct;
- (id)evaluate:(id)arg1;
- (_Bool)hasRequiredKeys:(id)arg1;
- (id)init;
- (id)initWithFunctionId:(id)arg1 requiredKeys:(id)arg2;
@property(readonly, copy, nonatomic) NSString *instanceFunctionId; // @synthesize instanceFunctionId=_instanceFunctionId;
- (_Bool)isCacheable;
@property(readonly, retain, nonatomic) NSSet *requiredKeys; // @synthesize requiredKeys=_requiredKeys;

@end

